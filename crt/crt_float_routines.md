| Done   | Name          | a    | b    | Out  | Comment                        |
| ------ | ------------- | ---- | ---- | ---- | ------------------------------ |
|   |                    |      |      |      | **Float Conversion**           |
| ✓ | __extendhfdf2      | f16  | ∅    | f32  | ..                             |
| ✓ | __extendsfdf2      | f32  | ∅    | f64  | ..                             |
| ✓ | __aeabi_f2d        | f32  | ∅    | f64  | ..                             |
| ✓ | __extendsftf2      | f32  | ∅    | f128 | ..                             |
| ✓ | __extendsfkf2      | f32  | ∅    | f128 | .. PPC                         |
| ✓ | __extendsfxf2      | f32  | ∅    | f80  | ..                             |
| ✓ | __extenddftf2      | f64  | ∅    | f128 | ..                             |
| ✓ | __extenddfkf2      | f64  | ∅    | f128 | .. PPC                         |
| ✓ | __extenddfxf2      | f64  | ∅    | f80  | ..                             |
| ✗ | __extendkftf2      | f128 | ∅    | f128 | .. PPC: not implemented obsolete IBM_TYPE |
| ✓ | __aeabi_h2f        | f16  | ∅    | f32  | .. ARM                         |
| ✗ | __aeabi_h2f_alt    | f16  | ∅    | f32  | .. ARM alternate [^VFPv3alt]   |
| ✓ | __gnu_h2f_ieee     | f16  | ∅    | f32  | .. GNU naming convention       |
| ✓ | __truncsfhf2       | f32  | ∅    | f16  | rounding towards zero          |
| ✓ | __truncdfhf2       | f64  | ∅    | f16  | ..                             |
| ✓ | __truncdfsf2       | f64  | ∅    | f32  | ..                             |
| ✓ | __trunctfhf2       | f128 | ∅    | f16  | ..                             |
| ✓ | __trunctfsf2       | f128 | ∅    | f32  | ..                             |
| ✓ | __trunctfdf2       | f128 | ∅    | f64  | ..                             |
| ✓ | __trunctfxf2       | f128 | ∅    | f80  | ..                             |
| ✗ | __trunctfkf2       | f128 | ∅    | f128 | .. PPC: not implemented obsolete IBM_TYPE |
| ✓ | __truncxfhf2       | f80  | ∅    | f16  | ..                             |
| ✓ | __truncxfsf2       | f80  | ∅    | f32  | ..                             |
| ✓ | __truncxfdf2       | f80  | ∅    | f64  | ..                             |
| ✓ | __aeabi_f2h        | f32  | ∅    | f16  | .. ARM                         |
| ✗ | __aeabi_f2h_alt    | f32  | ∅    | f16  | .. ARM alternate [^VFPv3alt]   |
| ✓ | __gnu_f2h_ieee     | f32  | ∅    | f16  | .. GNU naming convention       |
| ✓ | __aeabi_d2h        | f64  | ∅    | f16  | .. ARM                         |
| ✗ | __aeabi_d2h_alt    | f64  | ∅    | f16  | .. ARM alternate [^VFPv3alt]   |
| ✓ | __aeabi_d2f        | f64  | ∅    | f32  | .. ARM                         |
| ✓ | __trunckfsf2       | f128 | ∅    | f32  | .. PPC                         |
| ✓ | _Qp_qtos           |*f128 | ∅    | f32  | .. SPARC                       |
| ✓ | __trunckfdf2       | f128 | ∅    | f64  | .. PPC                         |
| ✓ | _Qp_qtod           |*f128 | ∅    | f64  | .. SPARC                       |
| ✓ | __fixhfsi          | f16  | ∅    | i32  | float to int, rounding towards zero |
| ✓ | __fixsfsi          | f32  | ∅    | i32  | ..                             |
| ✓ | __aeabi_f2iz       | f32  | ∅    | i32  | .. ARM                         |
| ✓ | __fixdfsi          | f64  | ∅    | i32  | ..                             |
| ✓ | __aeabi_d2iz       | f64  | ∅    | i32  | .. ARM                         |
| ✓ | __fixtfsi          | f128 | ∅    | i32  | ..                             |
| ✓ | __fixkfsi          | f128 | ∅    | i32  | .. PPC                         |
| ✓ | __fixxfsi          | f80  | ∅    | i32  | ..                             |
| ✓ | __fixhfdi          | f16  | ∅    | i64  | ..                             |
| ✓ | __fixsfdi          | f32  | ∅    | i64  | ..                             |
| ✓ | __aeabi_f2lz       | f32  | ∅    | i64  | .. ARM                         |
| ✓ | __fixdfdi          | f64  | ∅    | i64  | ..                             |
| ✓ | __aeabi_d2lz       | f64  | ∅    | i64  | .. ARM                         |
| ✓ | __fixtfdi          | f128 | ∅    | i64  | ..                             |
| ✓ | __fixkfdi          | f128 | ∅    | i64  | .. PPC                         |
| ✓ | __fixxfdi          | f80  | ∅    | i64  | ..                             |
| ✓ | __fixhfti          | f16  | ∅    | i128 | ..                             |
| ✓ | __fixsfti          | f32  | ∅    | i128 | ..                             |
| ✓ | __fixdfti          | f64  | ∅    | i128 | ..                             |
| ✓ | __fixtfti          | f128 | ∅    | i128 | ..                             |
| ✓ | __fixkfti          | f128 | ∅    | i128 | .. PPC                         |
| ✓ | __fixxfti          | f80  | ∅    | i128 | ..                             |
| ✓ | __fixunshfsi       | f16  | ∅    | u32  | float to uint, rounding towards zero. negative values become 0. |
| ✓ | __fixunssfsi       | f32  | ∅    | u32  | ..                             |
| ✓ | __aeabi_f2uiz      | f32  | ∅    | u32  | .. ARM                         |
| ✓ | __fixunsdfsi       | f64  | ∅    | u32  | ..                             |
| ✓ | __aeabi_d2uiz      | f64  | ∅    | u32  | .. ARM                         |
| ✓ | __fixunstfsi       | f128 | ∅    | u32  | ..                             |
| ✓ | __fixunskfsi       | f128 | ∅    | u32  | .. PPC                         |
| ✓ | __fixunsxfsi       | f80  | ∅    | u32  | ..                             |
| ✓ | __fixunshfdi       | f16  | ∅    | u64  | ..                             |
| ✓ | __fixunssfdi       | f32  | ∅    | u64  | ..                             |
| ✓ | __aeabi_f2ulz      | f32  | ∅    | u64  | .. ARM                         |
| ✓ | __fixunsdfdi       | f64  | ∅    | u64  | ..                             |
| ✓ | __aeabi_d2ulz      | f64  | ∅    | u64  | .. ARM                         |
| ✓ | __fixunstfdi       | f128 | ∅    | u64  | ..                             |
| ✓ | __fixunskfdi       | f128 | ∅    | u64  | .. PPC                         |
| ✓ | __fixunsxfdi       | f80  | ∅    | u64  | ..                             |
| ✓ | __fixunshfti       | f16  | ∅    | u128 | ..                             |
| ✓ | __fixunssfti       | f32  | ∅    | u128 | ..                             |
| ✓ | __fixunsdfti       | f64  | ∅    | u128 | ..                             |
| ✓ | __fixunstfti       | f128 | ∅    | u128 | ..                             |
| ✓ | __fixunskfti       | f128 | ∅    | u128 | .. PPC                         |
| ✓ | __fixunsxfti       | f80  | ∅    | u128 | ..                             |
| ✓ | __floatsihf        | i32  | ∅    | f16  | int to float                   |
| ✓ | __floatsisf        | i32  | ∅    | f32  | ..                             |
| ✓ | __aeabi_i2f        | i32  | ∅    | f32  | .. ARM                         |
| ✓ | __floatsidf        | i32  | ∅    | f64  | ..                             |
| ✓ | __aeabi_i2d        | i32  | ∅    | f64  | .. ARM                         |
| ✓ | __floatsitf        | i32  | ∅    | f128 | ..                             |
| ✓ | __floatsikf        | i32  | ∅    | f128 | .. PPC                         |
| ✓ | __floatsixf        | i32  | ∅    | f80  | ..                             |
| ✓ | __floatdisf        | i64  | ∅    | f32  | ..                             |
| ✓ | __aeabi_l2f        | i64  | ∅    | f32  | .. ARM                         |
| ✓ | __floatdidf        | i64  | ∅    | f64  | ..                             |
| ✓ | __aeabi_l2d        | i64  | ∅    | f64  | .. ARM                         |
| ✓ | __floatditf        | i64  | ∅    | f128 | ..                             |
| ✓ | __floatdikf        | i64  | ∅    | f128 | .. PPC                         |
| ✓ | __floatdixf        | i64  | ∅    | f80  | ..                             |
| ✓ | __floattihf        | i128 | ∅    | f16  | ..                             |
| ✓ | __floattisf        | i128 | ∅    | f32  | ..                             |
| ✓ | __floattidf        | i128 | ∅    | f64  | ..                             |
| ✓ | __floattitf        | i128 | ∅    | f128 | ..                             |
| ✓ | __floattikf        | i128 | ∅    | f128 | .. PPC                         |
| ✓ | __floattixf        | i128 | ∅    | f80  | ..                             |
| ✓ | __floatunsihf      | u32  | ∅    | f16  | uint to float                  |
| ✓ | __floatunsisf      | u32  | ∅    | f32  | ..                             |
| ✓ | __aeabi_ui2f       | u32  | ∅    | f32  | .. ARM                         |
| ✓ | __floatunsidf      | u32  | ∅    | f64  | ..                             |
| ✓ | __aeabi_ui2d       | u32  | ∅    | f64  | .. ARM                         |
| ✓ | __floatunsitf      | u32  | ∅    | f128 | ..                             |
| ✓ | __floatunsikf      | u32  | ∅    | f128 | .. PPC                         |
| ✓ | __floatunsixf      | u32  | ∅    | f80  | ..                             |
| ✓ | __floatundihf      | u64  | ∅    | f16  | ..                             |
| ✓ | __floatundisf      | u64  | ∅    | f32  | ..                             |
| ✓ | __aeabi_ul2f       | u64  | ∅    | f32  | .. ARM                         |
| ✓ | __floatundidf      | u64  | ∅    | f64  | ..                             |
| ✓ | __aeabi_ul2d       | u64  | ∅    | f64  | .. ARM                         |
| ✓ | __floatunditf      | u64  | ∅    | f128 | ..                             |
| ✓ | __floatundikf      | u64  | ∅    | f128 | .. PPC                         |
| ✓ | __floatundixf      | u64  | ∅    | f80  | ..                             |
| ✓ | __floatuntihf      | u128 | ∅    | f16  | ..                             |
| ✓ | __floatuntisf      | u128 | ∅    | f32  | ..                             |
| ✓ | __floatuntidf      | u128 | ∅    | f64  | ..                             |
| ✓ | __floatuntitf      | u128 | ∅    | f128 | ..                             |
| ✓ | __floatuntikf      | u128 | ∅    | f128 | .. PPC                         |
| ✓ | __floatuntixf      | u128 | ∅    | f80  | ..                             |
|   |                    |      |      |      | **Float Comparison**           |
| ✓ | __cmphf2           | f16  | f16  | i32  | `(a<b)->-1, (a==b)->0, (a>b)->1, Nan->1` |
| ✓ | __cmpsf2           | f32  | f32  | i32  | exported from __lesf2, __ledf2, __letf2 (below) |
| ✓ | __cmpdf2           | f64  | f64  | i32  | But: if NaN is a possibility, use another routine. |
| ✓ | __cmptf2           | f128 | f128 | i32  | ..                             |
| ✓ | __cmpxf2           | f80  | f80  | i32  | ..                             |
| ✓ | _Qp_cmp            |*f128 |*f128 | i32  | .. SPARC                       |
| ✓ | __unordhf2         | f16  | f16  | i32  | `(a==+-NaN or b==+-NaN) -> !=0, else -> 0` |
| ✓ | __unordsf2         | f32  | f32  | i32  | ..                             |
| ✓ | __unorddf2         | f64  | f64  | i32  | Note: only reliable for (input!=NaN) |
| ✓ | __unordtf2         | f128 | f128 | i32  | ..                             |
| ✓ | __unordxf2         | f80  | f80  | i32  | ..                             |
| ✓ | __aeabi_fcmpun     | f32  | f32  | i32  | .. ARM                         |
| ✓ | __aeabi_dcmpun     | f32  | f32  | i32  | .. ARM                         |
| ✓ | __unordkf2         | f128 | f128 | i32  | .. PPC                         |
| ✓ | __eqhf2            | f16  | f16  | i32  | `(a!=NaN) and (b!=Nan) and (a==b) -> output=0` |
| ✓ | __eqsf2            | f32  | f32  | i32  | ..                                             |
| ✓ | __eqdf2            | f64  | f64  | i32  | ..                             |
| ✓ | __eqtf2            | f128 | f128 | i32  | ..                             |
| ✓ | __eqxf2            | f80  | f80  | i32  | ..                             |
| ✓ | __aeabi_fcmpeq     | f32  | f32  | i32  | .. ARM                         |
| ✓ | __aeabi_dcmpeq     | f32  | f32  | i32  | .. ARM                         |
| ✓ | __eqkf2            | f128 | f128 | i32  | .. PPC                         |
| ✓ | _Qp_feq            |*f128 |*f128 | bool | .. SPARC                       |
| ✓ | __nehf2            | f16  | f16  | i32  | `(a==NaN) or (b==Nan) or (a!=b) -> output!=0` |
| ✓ | __nesf2            | f32  | f32  | i32  | Note: __eqXf2 and __neXf2 have same return value |
| ✓ | __nedf2            | f64  | f64  | i32  | ..                             |
| ✓ | __netf2            | f128 | f128 | i32  | ..                             |
| ✓ | __nexf2            | f80  | f80  | i32  | ..                             |
| ✓ | __nekf2            | f128 | f128 | i32  | .. PPC                         |
| ✓ | _Qp_fne            |*f128 |*f128 | bool | .. SPARC                       |
| ✓ | __gehf2            | f16  | f16  | i32  | `(a!=Nan) and (b!=Nan) and (a>=b) -> output>=0` |
| ✓ | __gesf2            | f32  | f32  | i32  | ..                             |
| ✓ | __gedf2            | f64  | f64  | i32  | ..                             |
| ✓ | __getf2            | f128 | f128 | i32  | ..                             |
| ✓ | __gexf2            | f80  | f80  | i32  | ..                             |
| ✓ | __aeabi_fcmpge     | f32  | f32  | i32  | .. ARM                         |
| ✓ | __aeabi_dcmpge     | f64  | f64  | i32  | .. ARM                         |
| ✓ | __gekf2            | f128 | f128 | i32  | .. PPC                         |
| ✓ | _Qp_fge            |*f128 |*f128 | bool | .. SPARC                       |
| ✓ | __lthf2            | f16  | f16  | i32  | `(a!=Nan) and (b!=Nan) and (a<b) -> output<0` |
| ✓ | __ltsf2            | f32  | f32  | i32  | ..                             |
| ✓ | __ltdf2            | f64  | f64  | i32  | ..                             |
| ✓ | __lttf2            | f128 | f128 | i32  | ..                             |
| ✓ | __ltxf2            | f80  | f80  | i32  | ..                             |
| ✓ | __ltkf2            | f128 | f128 | i32  | .. PPC                         |
| ✓ | __aeabi_fcmplt     | f32  | f32  | i32  | .. ARM                         |
| ✓ | __aeabi_dcmplt     | f32  | f32  | i32  | .. ARM                         |
| ✓ | _Qp_flt            |*f128 |*f128 | bool | .. SPARC                       |
| ✓ | __lehf2            | f16  | f16  | i32  | `(a!=Nan) and (b!=Nan) and (a<=b) -> output<=0` |
| ✓ | __lesf2            | f32  | f32  | i32  | ..                             |
| ✓ | __ledf2            | f64  | f64  | i32  | ..                             |
| ✓ | __letf2            | f128 | f128 | i32  | ..                             |
| ✓ | __lexf2            | f80  | f80  | i32  | ..                             |
| ✓ | __aeabi_fcmple     | f32  | f32  | i32  | .. ARM                         |
| ✓ | __aeabi_dcmple     | f32  | f32  | i32  | .. ARM                         |
| ✓ | __lekf2            | f128 | f128 | i32  | .. PPC                         |
| ✓ | _Qp_fle            |*f128 |*f128 | bool | .. SPARC                       |
| ✓ | __gthf2            | f16  | f16  | i32  | `(a!=Nan) and (b!=Nan) and (a>b) -> output>0` |
| ✓ | __gtsf2            | f32  | f32  | i32  | ..                             |
| ✓ | __gtdf2            | f64  | f64  | i32  | ..                             |
| ✓ | __gttf2            | f128 | f128 | i32  | ..                             |
| ✓ | __gtxf2            | f80  | f80  | i32  | ..                             |
| ✓ | __aeabi_fcmpgt     | f32  | f32  | i32  | .. ARM                         |
| ✓ | __aeabi_dcmpgt     | f64  | f64  | i32  | .. ARM                         |
| ✓ | __gtkf2            | f128 | f128 | i32  | .. PPC                         |
| ✓ | _Qp_fgt            |*f128 |*f128 | bool | .. SPARC                       |
|   |                    |      |      |      | **Float Arithmetic**           |
| ✓ | __addhf3           | f32  | f32  | f32  | `a + b`                        |
| ✓ | __addsf3           | f32  | f32  | f32  | ..                             |
| ✓ | __adddf3           | f64  | f64  | f64  | ..                             |
| ✓ | __addtf3           | f128 | f128 | f128 | ..                             |
| ✓ | __addxf3           | f80  | f80  | f80  | ..                             |
| ✓ | __aeabi_fadd       | f32  | f32  | f32  | .. ARM                         |
| ✓ | __aeabi_dadd       | f64  | f64  | f64  | .. ARM                         |
| ✓ | __addkf3           | f128 | f128 | f128 | .. PPC                         |
| ✓ | _Qp_add            |*f128 |*f128 | void | .. SPARC args *c,*a,*b c=a+b   |
| ✓ | __subhf3           | f32  | f32  | f32  | `a - b`                        |
| ✓ | __subsf3           | f32  | f32  | f32  | ..                             |
| ✓ | __subdf3           | f64  | f64  | f64  | ..                             |
| ✓ | __subtf3           | f128 | f128 | f128 | ..                             |
| ✓ | __subxf3           | f80  | f80  | f80  | ..                             |
| ✓ | __aeabi_fsub       | f32  | f32  | f32  | .. ARM                         |
| ✓ | __aeabi_dsub       | f64  | f64  | f64  | .. ARM                         |
| ✓ | __subkf3           | f128 | f128 | f128 | .. PPC                         |
| ✓ | _Qp_sub            |*f128 |*f128 | void | .. SPARC args *c,*a,*b c=a-b   |
| ✓ | __mulhf3           | f32  | f32  | f32  | `a * b`                        |
| ✓ | __mulsf3           | f32  | f32  | f32  | ..                             |
| ✓ | __muldf3           | f64  | f64  | f64  | ..                             |
| ✓ | __multf3           | f128 | f128 | f128 | ..                             |
| ✓ | __mulxf3           | f80  | f80  | f80  | ..                             |
| ✓ | __aeabi_fmul       | f32  | f32  | f32  | .. ARM                         |
| ✓ | __aeabi_dmul       | f64  | f64  | f64  | .. ARM                         |
| ✓ | __mulkf3           | f128 | f128 | f128 | .. PPC                         |
| ✓ | _Qp_mul            |*f128 |*f128 | void | .. SPARC args *c,*a,*b c=a*b   |
| ✓ | __divsf3           | f32  | f32  | f32  | `a / b`                        |
| ✓ | __divdf3           | f64  | f64  | f64  | ..                             |
| ✓ | __divtf3           | f128 | f128 | f128 | ..                             |
| ✓ | __divxf3           | f80  | f80  | f80  | ..                             |
| ✓ | __aeabi_fdiv       | f32  | f32  | f32  | .. ARM                         |
| ✓ | __aeabi_ddiv       | f64  | f64  | f64  | .. ARM                         |
| ✓ | __divkf3           | f128 | f128 | f128 | .. PPC                         |
| ✓ | _Qp_div            |*f128 |*f128 | void | .. SPARC args *c,*a,*b c=a*b   |
| ✓ | __negsf2           | f32  | ∅    | f32[^unused_rl78] | -a (can be lowered directly to a xor) |
| ✓ | __negdf2           | f64  | ∅    | f64  | ..                             |
| ✓ | __negtf2           | f128 | ∅    | f128 | ..                             |
| ✓ | __negkf2           | f128 | ∅    | f128 | .. PPC                         |
| ✓ | __negxf2           | f80  | ∅    | f80  | ..                             |
|   |                    |      |      |      | **Other** |
| ✓ | __powihf2          | f16  | i32  | f16  | `a ^ b`                        |
| ✓ | __powisf2          | f32  | i32  | f32  | ..                             |
| ✓ | __powidf2          | f64  | i32  | f64  | ..                             |
| ✓ | __powitf2          | f128 | i32  | f128 | ..                             |
| ✓ | __powikf2          | f128 | i32  | f128 | .. PPC                         |
| ✓ | __powixf2          | f80  | i32  | f80  | ..                             |
| ✓ | __mulhc3           | all4 | f16  | f16  | `(a+ib) * (c+id)`              |
| ✓ | __mulsc3           | all4 | f32  | f32  | ..                             |
| ✓ | __muldc3           | all4 | f64  | f64  | ..                             |
| ✓ | __multc3           | all4 | f128 | f128 | ..                             |
| ✓ | __mulkc3           | all4 | f128 | f128 | .. PPC                         |
| ✓ | __mulxc3           | all4 | f80  | f80  | ..                             |
| ✓ | __divhc3           | all4 | f16  | f16  | `(a+ib) / (c+id)`              |
| ✓ | __divsc3           | all4 | f32  | f32  | ..                             |
| ✓ | __divdc3           | all4 | f64  | f64  | ..                             |
| ✓ | __divtc3           | all4 | f128 | f128 | ..                             |
| ✓ | __divkc3           | all4 | f128 | f128 | .. PPC                         |
| ✓ | __divxc3           | all4 | f80  | f80  | ..                             |
