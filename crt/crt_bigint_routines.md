| Done | Name    | result| a     | b     | size| ret   | Comment               |
| ---- | ------- | ----- | ----- | ----- | --- | ----- |---------------------- |
| |              |       |       |       |     |       |**BigInt Bit Operation**|
| |              |       |       |       |     |       |**BigInt Comparison**   |
| |              |       |       |       |     |       |**BigInt Arithmetic**   |
|✓|__udivei4     |[*c]u32|[*c]u32|[*c]u32|usize|void   | `a / b`               |
|✓|__umodei4     |[*c]u32|[*c]u32|[*c]u32|usize|void   | `a % b`               |
|✗|__divei4      |[*c]u32|[*c]u32|[*c]u32|usize|void   | `a / b`               |
|✗|__modei4      |[*c]u32|[*c]u32|[*c]u32|usize|void   | `a % b`               |
| |              |       |       |       |     |       |**BigInt Arithmetic with Trapping Overflow**|
| |              |       |       |       |     |       |**BigInt Arithmetic which Return on Overflow**[^noptr_faster]|
