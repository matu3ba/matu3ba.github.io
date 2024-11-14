const std = @import("std");
const zine = @import("zine");

pub fn build(b: *std.Build) !void {
    zine.website(b, .{
        .assets_dir_path = "assets",
        .content_dir_path = "content",
        .host_url = "https://matu3ba.github.io/",
        .layouts_dir_path = "layouts",
        .title = "matu3bas Website",
    });
}