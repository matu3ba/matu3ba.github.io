| Done | Name      | a   | b   | Out  | Comment               |
| ---- | --------  | --- | --- | -----| ----------------------|
| |                |     |     |      | **Float Comparison**  |
|✗|__aeabi_cfcmpeq | f32 | f32 | void | `a == b` result in PSR ZC flags[^PSRZC] |
|✗|__aeabi_cfcmple | f32 | f32 | void | `a <= b` result ..    |
|✗|__aeabi_cfrcmple| f32 | f32 | void | `b <= a` ..           |
|✗|__aeabi_cdcmpeq | f64 | f64 | void | `a == b` ..           |
|✗|__aeabi_cdcmple | f64 | f64 | void | `a <= b` ..           |
|✗|__aeabi_cdrcmple| f64 | f64 | void | `b <= a` ..           |
| |                |     |     |      | **Float Arithmetic**  |
|✓|__aeabi_frsub   | f32 | f32 | f32  | `b - a`               |
|✓|__aeabi_drsub   | f64 | f64 | f64  | ..                    |
| |                |     |     |      | **Special**           |
|✓|__aeabi_read_tp |  ∅  |  ∅  | *u8  | ret tls pointer       |
|✗|__aeabi_idiv0   | i32 |  ∅  | i32  | div by 0 modifier     |
|✗|__aeabi_ldiv0   | i64 |  ∅  | i64  | div by 0 modifier     |
| |                |     |     |      | **Unaligned memory access** |
|✗|__aeabi_uread4  |[*]u8|  ∅  | i32  | ret value read        |
|✗|__aeabi_uwrite4 | i32 |[*]u8| i32  | ret value written     |
|✗|__aeabi_uread8  |[*]u8|  ∅  | i64  | ..                    |
|✗|__aeabi_uwrite8 | i64 |[*]u8| i64  | ..                    |

| Done | Name      | a   | b   | c  | Comment                 |
| ---- | --------  | --- | --- | -----| ----------------------|
| |                |     |     |      | **Memory copy, move and set** |
|✓|__aeabi_memcpy8 |[*]u8|[*]u8| usize| *dest, *src, size     |
|✓|__aeabi_memcpy4 |[*]u8|[*]u8| usize| ..                    |
|✓|__aeabi_memcpy  |[*]u8|[*]u8| usize| ..                    |
|✓|__aeabi_memmove8|[*]u8|[*]u8| usize| *dest, *src, size     |
|✓|__aeabi_memmove4|[*]u8|[*]u8| usize| ..                    |
|✓|__aeabi_memmove |[*]u8|[*]u8| usize| ..                    |
|✓|__aeabi_memset8 |[*]u8|usize| i32  | *dest, size, char     |
|✓|__aeabi_memset4 |[*]u8|usize| i32  | ..                    |
|✓|__aeabi_memset  |[*]u8|usize| i32  | ..                    |
|✓|__aeabi_memclr8 |[*]u8| u32 | usize| *dest, size           |
|✓|__aeabi_memclr4 |[*]u8| u32 | usize| ..                    |
|✓|__aeabi_memclr  |[*]u8| u32 | usize| ..                    |
|✓|__aeabi_uwrite8 | i64 |[*]u8| i64  | ..                    |
