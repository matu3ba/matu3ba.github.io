test "perf array assignment" {
    const x: u8 = 100;
    const a: [1_000_000]u8 = .{x} ** 1_000_000;
    var b: [1_000_000]u8 = undefined;
    // pile of code

    b = a; // spot the performance issue

    // pile of code
}
