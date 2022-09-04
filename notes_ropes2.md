## High level observations of defaulting layout to a formatter

The previous article [link](TODO) introduced what a formatter is and why code
formatters are used (establishing a common code layout).
This article will discuss the tradeoffs of using a formatter and storing the
layout differences to the formatter output.

If the complete language elements are covered by the formatter, then we do not
need to store additional space or newline information.
Zig does not fully utilize this and allows some degree of freedom for optional
brackets, which leaves 3 layout choices: 1. newline, 2. space or 3. {}-brackets
after the condition.

Let us now look into how to store user-specified formatting efficiently.
Remind, that we mean everything between `zig fmt: off` and `zig fmt: on` blocks.

There are 3 overall choices, if we want to keep complexity low:
1. Do not differentiate between layout and content as fallback
  (like how git or vim undo files work).
2. store the complete layout with indentation and content without taking zig fmt
   into consideration.
3. Store the difference to what the formatter would output with the hopefully
  few language-specific tweaks (the degree of freedom exemplified above)
  "as layout between tokens".

To discuss tradeoffs, we will use the following complete Zig program:
```zig
const std = @import("std");
pub fn main() !void {
	// TODO code example
}
```

TODO
1. indentation level
2. space and perf implications

Summary
1. Undo files/Git has the lowest implementation complexity, if custom formatted code
is moved around.
2. Storing the complete layout TODO
3. Storing only the difference to what the formatter would output TODO

The next article will discuss possible data structures for storing the layout.
This is a prequisite to understand, if patching the layout of the AST
in-place or using a separate AST representation format is better for your use
cases.
