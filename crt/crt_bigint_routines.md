| Done | Name  | result| a     | b     | size| ret   | Comment                |
| ---- | ----- | ----- | ----- | ----- | --- | ----- |----------------------  |
| |            |       |       |       |     |       |**BigInt Bit Operation**|
|✗|__clzei4    |[*c]u32|[*c]u32|   ∅   |usize| i32   |count leading zeros     |
|✗|__ctzei4    |[*c]u32|[*c]u32|   ∅   |usize| i32   |count trailing zeros    |
|✗|__ffsei4    |[*c]u32|[*c]u32|   ∅   |usize| i32   |find least significant 1bit|
|✗|__parityei4 |[*c]u32|[*c]u32|   ∅   |usize| i32   |bit parity              |
|✗|__popcountei4|[*c]u32|[*c]u32|  ∅   |usize| i32   |bit population          |
|✗|__bswapei3  |[*c]u32|[*c]u32|   ∅   |usize|void   |byte swap    TODO: which bytes? |
|✗|__bitdepei4 |[*c]u32|[*c]u32|[*c]u32|usize|void   |a left-aligned into positions by b TODO: bitsizes?|
|✗|__bitextei4 |[*c]u32|[*c]u32|[*c]u32|usize|void   |a selected by b right-aligned into result TODO: bitsizes?|
| |            |       |       |       |     |       |**BigInt Comparison**   |
|✗|__cmpei3    |   ∅   |[*c]u32|[*c]u32|usize| i32   |`(a<b) -> 0, (a==b) -> 1, (a>b) -> 2` |
|✗|__ucmpei3   |   ∅   |[*c]u32|[*c]u32|usize| i32   |`(a<b) -> 0, (a==b) -> 1, (a>b) -> 2` |
| |            |       |       |       |     |       |**BigInt Arithmetic**   |
|✗|__ashlei4   |[*c]u32|[*c]u32|usize  |usize|void   | `res=a<<b`             |
|✗|__ashrei4   |[*c]u32|[*c]u32|usize  |usize|void   | `res=a>>b` arithmetic (sign fill)|
|✗|__lshrei4   |[*c]u32|[*c]u32|usize  |usize|void   | `res=a>>b` loigcal (zero fill)|
|✗|__negei3    |[*c]u32|[*c]u32|   ∅   |usize|void   | `-a`                   |
|✗|__mulei3    |[*c]u32|[*c]u32|[*c]u32|usize|void   | `a * b`                |
|✗|__divei4    |[*c]u32|[*c]u32|[*c]u32|usize|void   | `a / b`                |
|✓|__udivei4   |[*c]u32|[*c]u32|[*c]u32|usize|void   | `a / b`                |
|✗|__modei4    |[*c]u32|[*c]u32|[*c]u32|usize|void   | `a % b`                |
|✓|__umodei4   |[*c]u32|[*c]u32|[*c]u32|usize|void   | `a % b`                |
|✗|__divmodei5 |[*c]u32|[*c]u32|[*c]u32|usize|void   | `res1=a/b, res2=a%b` Alg D by Knuth |
|✗|__udivmodei5|[*c]u32|[*c]u32|[*c]u32|usize|void   | `res1=a/b, res2=a%b` Alg D by Knuth |
| |            |       |       |       |     |       |**BigInt Arithmetic with Trapping Overflow**|
|✗|__absvei3   |[*c]u32|[*c]u32|[*c]u32|usize|void   | `abs(a)                |
|✗|__negvei3   |[*c]u32|[*c]u32|[*c]u32|usize|void   | `-a`                   |
|✗|__addvei4   |[*c]u32|[*c]u32|[*c]u32|usize|void   | `a + b`                |
|✗|__subvei4   |[*c]u32|[*c]u32|[*c]u32|usize|void   | `a - b`                |
|✗|__mulvei4   |[*c]u32|[*c]u32|[*c]u32|usize|void   | `a * b`                |
| |            |       |       |       |     |       |**BigInt Arithmetic which Return on Overflow**[^noptr_faster]|
|✗|__addoei5   |[*c]u32|[*c]u32|[*c]u32|usize|i32    | `a + b`                |
|✗|__suboei5   |[*c]u32|[*c]u32|[*c]u32|usize|i32    | `a - b`                |
|✗|__muloei5   |[*c]u32|[*c]u32|[*c]u32|usize|i32    | `a * b`                |

Notes:
- 1. Unfinished and might break. Compatibility with libgcc is preferred.
- 2. Idea is to use integer routines and instead use `ei` for `extended integer`
and use sum of number of arguments and return argument, if not void.
