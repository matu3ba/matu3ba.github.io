const std = @import("std");
const process = std.process;
const fs = std.fs;
const stdout = std.io.getStdOut();
const stderr = std.io.getStdErr();
pub const Mode = enum {
    /// only check with status code
    CheckOnly,
    /// ascii only check with status code
    CheckOnlyAscii,
    /// check with limited output
    ShellOutput,
    /// ascii check with limited output
    ShellOutputAscii,
    /// check with output to file
    FileOutput,
    /// ascii check with output to file
    FileOutputAscii,
};
// never returns Mode, but an error to bubble up to main
fn cleanup(write_file: *?fs.File) !Mode {
    if (write_file.* != null) {
        write_file.*.?.close();
    }
    return error.TestUnexpectedResult;
}
pub fn main() !u8 {
    var write_file: ?fs.File = null;
    var mode: Mode = Mode.ShellOutput; // default execution mode
    // 1. read path names from cli args
    var arena_instance = std.heap.ArenaAllocator.init(std.heap.page_allocator);
    defer arena_instance.deinit();
    const arena = arena_instance.allocator();
    const args: [][:0]u8 = try process.argsAlloc(arena);
    defer process.argsFree(arena, args);

    if (args.len <= 1) {
        try stdout.writer().print("Usage: {s} (cropped) \n", .{args[0]});
        process.exit(1);
    }
    if (args.len >= 255) {
        try stdout.writer().writeAll("At maximum 255 arguments are supported\n");
        process.exit(1);
    }

    var i: u64 = 1; // skip program name
    while (i < args.len) : (i += 1) {
        if (std.mem.eql(u8, args[i], "-outfile")) {
            mode = switch (mode) {
                Mode.ShellOutput => Mode.FileOutput,
                Mode.ShellOutputAscii => Mode.FileOutputAscii,
                else => try cleanup(&write_file), // hack around stage1
            };
            if (i + 1 >= args.len) {
                return error.InvalidArgument;
            }
            i += 1;
            write_file = try fs.cwd().createFile(args[i], .{});
        }
        if (std.mem.eql(u8, args[i], "-c")) {
            mode = switch (mode) {
                Mode.ShellOutput => Mode.CheckOnly,
                Mode.ShellOutputAscii => Mode.CheckOnlyAscii,
                else => try cleanup(&write_file), // hack around stage1
            };
        }
        if (std.mem.eql(u8, args[i], "-a")) {
            mode = switch (mode) {
                Mode.ShellOutput => Mode.ShellOutputAscii,
                Mode.CheckOnly => Mode.CheckOnlyAscii,
                Mode.FileOutput => Mode.FileOutputAscii,
                else => try cleanup(&write_file), // hack around stage1
            };
        }
    }
    defer if (write_file != null)
        write_file.?.close();

    const ret = switch (mode) {
        // program logic cropped
        else => 0,
    };
    return ret;
}
