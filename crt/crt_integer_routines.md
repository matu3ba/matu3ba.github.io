| Done   | Name          | a    | b    | Out  | Comment                        |
| ------ | ------------- | ---- | ---- | ---- | ------------------------------ |
|   |                    |      |      |      | **Integer Bit Operations**     |
| ✓ | __clzsi2           | u32  | ∅    | i32  | count leading zeros            |
| ✓ | __clzdi2           | u64  | ∅    | i32  | count leading zeros            |
| ✓ | __clzti2           | u128 | ∅    | i32  | count leading zeros            |
| ✓ | __ctzsi2           | u32  | ∅    | i32  | count trailing zeros           |
| ✓ | __ctzdi2           | u64  | ∅    | i32  | count trailing zeros           |
| ✓ | __ctzti2           | u128 | ∅    | i32  | count trailing zeros           |
| ✓ | __ffssi2           | u32  | ∅    | i32  | find least significant 1 bit   |
| ✓ | __ffsdi2           | u64  | ∅    | i32  | find least significant 1 bit   |
| ✓ | __ffsti2           | u128 | ∅    | i32  | find least significant 1 bit   |
| ✓ | __paritysi2        | u32  | ∅    | i32  | bit parity                     |
| ✓ | __paritydi2        | u64  | ∅    | i32  | bit parity                     |
| ✓ | __parityti2        | u128 | ∅    | i32  | bit parity                     |
| ✓ | __popcountsi2      | u32  | ∅    | i32  | bit population                 |
| ✓ | __popcountdi2      | u64  | ∅    | i32  | bit population                 |
| ✓ | __popcountti2      | u128 | ∅    | i32  | bit population                 |
| ✓ | __bswapsi2         | u32  | ∅    | u32  | byte swap                      |
| ✓ | __bswapdi2         | u64  | ∅    | u64  | byte swap                      |
| ✓ | __bswapti2         | u128 | ∅    | u128 | byte swap                      |
|   |                    |      |      |      | **Integer Comparison**         |
| ✓ | __cmpsi2           | i32  | i32  | i32  | `(a<b) -> 0, (a==b) -> 1, (a>b) -> 2` |
| ✓ | __cmpdi2           | i64  | i64  | i32  | ..                             |
| ✗ | __aeabi_lcmp       | i64  | i64  | i32  | .. ARM                         |
| ✓ | __cmpti2           | i128 | i128 | i32  | ..                             |
| ✓ | __ucmpsi2          | u32  | u32  | i32  | `(a<b) -> 0, (a==b) -> 1, (a>b) -> 2` |
| ✓ | __ucmpdi2          | u64  | u64  | i32  | ..                             |
| ✗ | __aeabi_ulcmp      | u64  | u64  | i32  | .. ARM                         |
| ✓ | __ucmpti2          | u128 | u128 | i32  | ..                             |
|   |                    |      |      |      | **Integer Arithmetic**         |
| ✓ | __ashlsi3          | i32  | i32  | i32  | `a << b` [^unused_rl78]        |
| ✓ | __ashldi3          | i64  | i32  | i64  | ..                             |
| ✓ | __ashlti3          | i128 | i32  | i128 | ..                             |
| ✓ | __aeabi_llsl       | i32  | i32  | i32  | .. ARM                         |
| ✓ | __ashrsi3          | i32  | i32  | i32  | `a >> b` arithmetic (sign fill) [^unused_rl78] |
| ✓ | __ashrdi3          | i64  | i32  | i64  | ..                             |
| ✓ | __ashrti3          | i128 | i32  | i128 | ..                             |
| ✓ | __aeabi_lasr       | i64  | i32  | i64  | .. ARM                         |
| ✓ | __lshrsi3          | i32  | i32  | i32  | `a >> b` logical (zero fill) [^unused_rl78] |
| ✓ | __lshrdi3          | i64  | i32  | i64  | ..                             |
| ✓ | __lshrti3          | i128 | i32  | i128 | ..                             |
| ✓ | __aeabi_llsr       | i64  | i32  | i64  | .. ARM                         |
| ✓ | __negsi2           | i32  |  ∅   | i32  | `-a` [^libgcc_compat]          |
| ✓ | __negdi2           | i64  |  ∅   | i64  | ..                             |
| ✓ | __negti2           | i128 |  ∅   | i128 | ..                             |
| ✓ | __mulsi3           | i32  | i32  | i32  | `a * b`                        |
| ✓ | __muldi3           | i64  | i64  | i64  | ..                             |
| ✓ | __aeabi_lmul       | i64  | i64  | i64  | .. ARM                         |
| ✓ | __multi3           | i128 | i128 | i128 | ..                             |
| ✓ | __divsi3           | i32  | i32  | i32  | `a / b`                        |
| ✓ | __divdi3           | i64  | i64  | i64  | ..                             |
| ✓ | __divti3           | i128 | i128 | i128 | ..                             |
| ✓ | __aeabi_idiv       | i32  | i32  | i32  | .. ARM                         |
| ✓ | __udivsi3          | u32  | u32  | u32  | `a / b`                        |
| ✓ | __udivdi3          | u64  | u64  | u64  | ..                             |
| ✓ | __udivti3          | u128 | u128 | u128 | ..                             |
| ✓ | __aeabi_uidiv      | i32  | i32  | i32  | .. ARM                         |
| ✓ | __modsi3           | i32  | i32  | i32  | `a % b`                        |
| ✓ | __moddi3           | i64  | i64  | i64  | ..                             |
| ✓ | __modti3           | i128 | i128 | i128 | ..                             |
| ✓ | __umodsi3          | u32  | u32  | u32  | `a % b`                        |
| ✓ | __umoddi3          | u64  | u64  | u64  | ..                             |
| ✓ | __umodti3          | u128 | u128 | u128 | ..                             |
| ✓ | __udivmodsi4       | u32  | u32  | u32  | `a / b, rem.* = a % b`         |
| ✓ | __aeabi_uidivmod   | u32  | u32  | u32  | .. ARM                         |
| ✓ | __udivmoddi4       | u64  | u64  | u64  | ..                             |
| ✓ | __aeabi_uldivmod   | u64  | u64  | u64  | .. ARM                         |
| ✓ | __udivmodti4       | u128 | u128 | u128 | ..                             |
| ✓ | __divmodsi4        | i32  | i32  | i32  | `a / b, rem.* = a % b`         |
| ✓ | __aeabi_idivmod    | i32  | i32  | i32  | .. ARM                         |
| ✓ | __divmoddi4        | i64  | i64  | i64  | ..                             |
| ✓ | __aeabi_ldivmod    | i64  | i64  | i64  | .. ARM                         |
| ✓ | __divmodti4        | i128 | i128 | i128 | .. [^libgcc_compat]            |
|   |                    |      |      |      | **Integer Arithmetic with Trapping Overflow**|
| ✓ | __absvsi2          | i32  |  ∅   | i32  | abs(a)                         |
| ✓ | __absvdi2          | i64  |  ∅   | i64  | ..                             |
| ✓ | __absvti2          | i128 |  ∅   | i128 | ..                             |
| ✓ | __negvsi2          | i32  |  ∅   | i32  | `-a` [^libgcc_compat]          |
| ✓ | __negvdi2          | i64  |  ∅   | i64  | ..                             |
| ✓ | __negvti2          | i128 |  ∅   | i128 | ..                             |
| ✗ | __addvsi3          | i32  | i32  | i32  | `a + b`                        |
| ✗ | __addvdi3          | i64  | i64  | i64  | ..                             |
| ✗ | __addvti3          | i128 | i128 | i128 | ..                             |
| ✗ | __subvsi3          | i32  | i32  | i32  | `a - b`                        |
| ✗ | __subvdi3          | i64  | i64  | i64  | ..                             |
| ✗ | __subvti3          | i128 | i128 | i128 | ..                             |
| ✗ | __mulvsi3          | i32  | i32  | i32  | `a * b`                        |
| ✗ | __mulvdi3          | i64  | i64  | i64  | ..                             |
| ✗ | __mulvti3          | i128 | i128 | i128 | ..                             |
|   |                    |      |      |      | **Integer Arithmetic which Return on Overflow** [^noptr_faster] |
| ✓ | __addosi4          | i32  | i32  | i32  | `a + b`, overflow->ov.*=1 else 0 [^perf_addition] |
| ✓ | __addodi4          | i64  | i64  | i64  | ..                             |
| ✓ | __addoti4          | i128 | i128 | i128 | ..                             |
| ✓ | __subosi4          | i32  | i32  | i32  | `a - b`, overflow->ov.*=1 else 0 [^perf_addition] |
| ✓ | __subodi4          | i64  | i64  | i64  | ..                             |
| ✓ | __suboti4          | i128 | i128 | i128 | ..                             |
| ✓ | __mulosi4          | i32  | i32  | i32  | `a * b`, overflow->ov.*=1 else 0 |
| ✓ | __mulodi4          | i64  | i64  | i64  | ..                             |
| ✓ | __muloti4          | i128 | i128 | i128 | ..                             |
|   |                    |      |      |      | **Bit-precise Integer Arithmetic** |
TODO explanation of semantics
https://gcc.gnu.org/onlinedocs/gccint/Integer-library-routines.html

void __mulbitint3 (UBILtype *ret, int32_t retprec, const UBILtype *u, int32_t uprec, const UBILtype *v, int32_t vprec)
void __divmodbitint4 (UBILtype *q, int32_t qprec, UBILtype *r, int32_t rprec, const UBILtype *u, int32_t uprec, const UBILtype *v, int32_t vprec)

Missing piece:
- [ ] __addvsi3
- [ ] __addvdi3
- [ ] __addvti3
- [ ] __subvsi3
- [ ] __subvdi3
- [ ] __subvti3
- [ ] __mulvsi3
- [ ] __mulvdi3
- [ ] __mulvti3
- [ ] __aeabi_lcmp
- [ ] __aeabi_ulcmp

TODO:
- check PPC
- check SPARC
