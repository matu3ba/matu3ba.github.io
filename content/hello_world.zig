// file hello_world.zig
const std = @import("std");

threadlocal var x: i32 = 1234;
extern fn somextern() u8;

fn somefn(var1: []const u8, var2: u8, var3: ?u32) !void {
    _ = var1; // autofix
    _ = var2; // autofix
    _ = var3; // autofix
    @compileLog("horrible");
}
fn somefn2(var1: bool, var2: bool) !void {
    _ = var1; // autofix
    _ = var2; // autofix
}

test "perf array assignment" {
    const y: u8 = 100;
    const a: [1_000_000]u8 = .{y} ** 1_000_000;
    var b: [1_000_000]u8 = undefined;

    // a pile of code

    b = a; // spot the performance issue

    // a pile of code
}

pub fn main() !void {
    std.debug.print("Hello world!\n", .{});
    const var1_str = "bla1";
    const var2_num = 1_000;
    const var3_num: ?u32 = null;
    const var4_bool = true;
    const var5_bool = false;
    try somefn(var1_str, var2_num, var3_num);
    try somefn2(var4_bool, var5_bool);
    var var6_bool: bool = undefined;
    var6_bool = true;

    return;
}
