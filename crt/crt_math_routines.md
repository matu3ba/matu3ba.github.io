| Done | Name    | a         | b         | Out       | Comment                    |
| ---- | ------- | --------- | --------- | --------- | -------------------------- |
| ✓ | __ceilh    |     f16   |    ∅      |     f16   |smallest integer value not less than a|
| ✓ | ceilf      |     f32   |    ∅      |     f32   |If a is integer, +-0, +-NaN, or +-infinite, a itself is returned.|
| ✓ | ceil       |     f64   |    ∅      |     f64   | ..                         |
| ✓ | __ceilx    |     f80   |    ∅      |     f80   |                            |
| ✓ | ceilf128   |     f128  |    ∅      |     f128  | .. PPC                     |
| ✓ | ceilq      |     f128  |    ∅      |     f128  | ..                         |
| ✓ | ceill      |c_longdouble|   ∅      |c_longdouble| ..                        |
| ✓ | __cosh     |     f16   |    ∅      |     f16   | `cos(a)=(e^(ia)+e^(-ia))/2`|
| ✓ | cosf       |     f32   |    ∅      |     f32   | ..                         |
| ✓ | cos        |     f64   |    ∅      |     f64   | ..                         |
| ✓ | __cosx     |     f80   |    ∅      |     f80   | ..                         |
| ✓ | cosf128    |     f128  |    ∅      |     f128  | ..                         |
| ✓ | cosq       |     f128  |    ∅      |     f128  | .. PPC                     |
| ✓ | cosl       |c_longdouble|   ∅      |c_longdouble| ..                        |
| ✓ | __exph     |     f16   |    ∅      |     f16   | `e^a` with e base of natural logarithms|
| ✓ | expf       |     f32   |    ∅      |     f32   | ..                         |
| ✓ | exp        |     f64   |    ∅      |     f64   | ..                         |
| ✓ | __expx     |     f80   |    ∅      |     f80   | ..                         |
| ✓ | expf128    |     f128  |    ∅      |     f128  | ..                         |
| ✓ | expq       |     f128  |    ∅      |     f128  | .. PPC                     |
| ✓ | expl       |c_longdouble|   ∅      |c_longdouble| ..                        |
| ✓ | __exp2h    |     f16   |    ∅      |     f16   | `2^a`                      |
| ✓ | exp2f      |     f32   |    ∅      |     f32   | ..                         |
| ✓ | exp2       |     f64   |    ∅      |     f64   | ..                         |
| ✓ | __exp2x    |     f80   |    ∅      |     f80   | ..                         |
| ✓ | exp2f128   |     f128  |    ∅      |     f128  | ..                         |
| ✓ | exp2q      |     f128  |    ∅      |     f128  | .. PPC                     |
| ✓ | exp2l      |c_longdouble|   ∅      |c_longdouble| ..                        |
| ✓ | __fabsh    |     f16   |    ∅      |     f16   | absolute value of a        |
| ✓ | fabsf      |     f32   |    ∅      |     f32   | ..                         |
| ✓ | fabs       |     f64   |    ∅      |     f64   | ..                         |
| ✓ | __fabsx    |     f80   |    ∅      |     f80   | ..                         |
| ✓ | fabsf128   |     f128  |    ∅      |     f128  | ..                         |
| ✓ | fabsq      |     f128  |    ∅      |     f128  | .. PPC                     |
| ✓ | fabsl      |c_longdouble|   ∅      |c_longdouble| ..                        |
| ✓ | __floorh   |     f16   |    ∅      |     f16   |largest integer value not greater than a|
| ✓ | floorf     |     f32   |    ∅      |     f32   |If a is integer, +-0, +-NaN, or +-infinite, a itself is returned.|
| ✓ | floor      |     f64   |    ∅      |     f64   | ..                         |
| ✓ | __floorx   |     f80   |    ∅      |     f80   | ..                         |
| ✓ | floorf128  |     f128  |    ∅      |     f128  | ..                         |
| ✓ | floorq     |     f128  |    ∅      |     f128  | .. PPC                     |
| ✓ | floorl     |c_longdouble|   ∅      |c_longdouble| ..                        |
| ✓ | __fmah     |     f16   |   2xf16   |     f16   | args a,b,c result `(a*b)+c`|
| ✓ | fmaf       |     f32   |   2xf32   |     f32   |Fused multiply-add for hardware acceleration|
| ✓ | fma        |     f64   |   2xf64   |     f64   | ..                         |
| ✓ | __fmax     |     f80   |   2xf80   |     f80   | ..                         |
| ✓ | fmaf128    |     f128  |   2xf128  |     f128  | ..                         |
| ✓ | fmaq       |     f128  |   2xf128  |     f128  | .. PPC                     |
| ✓ | fmal       |c_longdouble|2xc_longdouble|c_longdouble| ..                    |
| ✓ | __fmaxh    |     f16   |     f16   |     f16   | larger value of a,b        |
| ✓ | fmaxf      |     f32   |     f32   |     f32   | ..                         |
| ✓ | fmax       |     f64   |     f64   |     f64   | ..                         |
| ✓ | __fmaxx    |     f80   |     f80   |     f80   | ..                         |
| ✓ | fmaxf128   |     f128  |     f128  |     f128  | ..                         |
| ✓ | fmaxq      |     f128  |     f128  |     f128  | .. PPC                     |
| ✓ | fmaxl      |c_longdouble|c_longdouble|c_longdouble| ..                      |
| ✓ | __fminh    |     f16   |     f16   |     f16   | smaller value of a,b       |
| ✓ | fminf      |     f32   |     f32   |     f32   | ..                         |
| ✓ | fmin       |     f64   |     f64   |     f64   | ..                         |
| ✓ | __fminx    |     f80   |     f80   |     f80   | ..                         |
| ✓ | fminf128   |     f128  |     f128  |     f128  | ..                         |
| ✓ | fminq      |     f128  |     f128  |     f128  | .. PPC                     |
| ✓ | fminl      |c_longdouble|c_longdouble|c_longdouble| ..                      |
| ✓ | __fmodh    |     f16   |     f16   |     f16   |floating-point remainder of division a/b|
| ✓ | fmodf      |     f32   |     f32   |     f32   | ..                         |
| ✓ | fmod       |     f64   |     f64   |     f64   | ..                         |
| ✓ | __fmodx    |     f80   |     f80   |     f80   | ..                         |
| ✓ | fmodf128   |     f128  |     f128  |     f128  | ..                         |
| ✓ | fmodq      |     f128  |     f128  |     f128  | .. PPC                     |
| ✓ | fmodl      |c_longdouble|c_longdouble|c_longdouble| ..                      |
| ✓ | __logh     |     f16   |    ∅      |     f16   |natural (base-e) logarithm of a|
| ✓ | logf       |     f32   |    ∅      |     f32   | ..                         |
| ✓ | log        |     f64   |    ∅      |     f64   | ..                         |
| ✓ | __logx     |     f80   |    ∅      |     f80   | ..                         |
| ✓ | logf128    |     f128  |    ∅      |     f128  | ..                         |
| ✓ | logq       |     f128  |    ∅      |     f128  | .. PPC                     |
| ✓ | logl       |c_longdouble|   ∅      |c_longdouble| ..                        |
| ✓ | __log10h   |     f16   |    ∅      |     f16   |common (base-10) logarithm of a|
| ✓ | log10f     |     f32   |    ∅      |     f32   | ..                         |
| ✓ | log10      |     f64   |    ∅      |     f64   | ..                         |
| ✓ | __log10x   |     f80   |    ∅      |     f80   | ..                         |
| ✓ | log10f128  |     f128  |    ∅      |     f128  | ..                         |
| ✓ | log10q     |     f128  |    ∅      |     f128  | .. PPC                     |
| ✓ | log10l     |c_longdouble|   ∅      |c_longdouble| ..                        |
| ✓ | __log2h    |     f16   |    ∅      |     f16   | base-2 logarithm of a      |
| ✓ | log2f      |     f32   |    ∅      |     f32   | ..                         |
| ✓ | log2       |     f64   |    ∅      |     f64   | ..                         |
| ✓ | __log2x    |     f80   |    ∅      |     f80   | ..                         |
| ✓ | log2f128   |     f128  |    ∅      |     f128  | ..                         |
| ✓ | log2q      |     f128  |    ∅      |     f128  | .. PPC                     |
| ✓ | log2l      |c_longdouble|   ∅      |c_longdouble| ..                        |
| ✓ | __roundh   |     f16   |    ∅      |     f16   | a rounded to next int away from zero|
| ✓ | roundf     |     f32   |    ∅      |     f32   | ..                         |
| ✓ | round      |     f64   |    ∅      |     f64   | ..                         |
| ✓ | __roundx   |     f80   |    ∅      |     f80   | ..                         |
| ✓ | roundf128  |     f128  |    ∅      |     f128  | ..                         |
| ✓ | roundq     |     f128  |    ∅      |     f128  | .. PPC                     |
| ✓ | roundl     |c_longdouble|   ∅      |c_longdouble| ..                        |
| ✓ | __sinh     |     f16   |    ∅      |     f16   | `sin(a)=(e^(ia)-e^(-ia))/2`|
| ✓ | sinf       |     f32   |    ∅      |     f32   | ..                         |
| ✓ | sin        |     f64   |    ∅      |     f64   | ..                         |
| ✓ | __sinx     |     f80   |    ∅      |     f80   | ..                         |
| ✓ | sinf128    |     f128  |    ∅      |     f128  | ..                         |
| ✓ | sinq       |     f128  |    ∅      |     f128  | .. PPC                     |
| ✓ | sinl       |c_longdouble|   ∅      |c_longdouble| ..                        |
| ✓ | __sincosh  |     f16   | 2x *f16   |     ∅     |sin and cos of the same angle a|
| ✓ | sincosf    |     f32   | 2x *f32   |     ∅     |args a,*b,*c, `b.*=sin(x),c.*=cos(x)`|
| ✓ | sincos     |     f64   | 2x *f64   |     ∅     | ..                         |
| ✓ | __sincosx  |     f80   | 2x *f80   |     ∅     | ..                         |
| ✓ | sincosf128 |     f128  | 2x *f128  |     ∅     | ..                         |
| ✓ | sincosq    |     f128  | 2x *f128  |     ∅     | .. PPC                     |
| ✓ | sincosl    |c_longdouble| 2x *c_longdouble|∅     | ..                       |
| ✓ | __sqrth    |     f16   |    ∅      |     f16   | square root of a (find `r st. a=r^2`)|
| ✓ | sqrtf      |     f32   |    ∅      |     f32   | ..                         |
| ✓ | sqrt       |     f64   |    ∅      |     f64   | ..                         |
| ✓ | __sqrtx    |     f80   |    ∅      |     f80   | ..                         |
| ✓ | sqrtf128   |     f128  |    ∅      |     f128  | ..                         |
| ✓ | sqrtq      |     f128  |    ∅      |     f128  | .. PPC                     |
| ✓ | sqrtl      |c_longdouble|   ∅      |c_longdouble| ..                        |
| ✓ | __tanh     |     f16   |    ∅      |     f16   | `tan(x)=sin(x)/cos(x)      |
| ✓ | tanf       |     f32   |    ∅      |     f32   | ..                         |
| ✓ | tan        |     f64   |    ∅      |     f64   | ..                         |
| ✓ | __tanx     |     f80   |    ∅      |     f80   | ..                         |
| ✓ | tanf128    |     f128  |    ∅      |     f128  | ..                         |
| ✓ | tanq       |     f128  |    ∅      |     f128  | .. PPC                     |
| ✓ | tanl       |c_longdouble|   ∅      |c_longdouble| ..                        |
| ✓ | __trunch   |     f16   |    ∅      |     f16   | a rounded to next int towards zero|
| ✓ | truncf     |     f32   |    ∅      |     f32   | ..                         |
| ✓ | trunc      |     f64   |    ∅      |     f64   | ..                         |
| ✓ | __truncx   |     f80   |    ∅      |     f80   | ..                         |
| ✓ | truncf128  |     f128  |    ∅      |     f128  | ..                         |
| ✓ | truncq     |     f128  |    ∅      |     f128  | .. PPC                     |
| ✓ | truncl     |c_longdouble|   ∅      |c_longdouble| ..                        |
