/*  Copyright (C) 2013-2014  Povilas Kanapickas <povilas@radix.lt>

    Distributed under the Boost Software License, Version 1.0.
        (See accompanying file LICENSE_1_0.txt or copy at
            http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef LIBSIMDPP_SIMDPP_CORE_CMP_EQ_H
#define LIBSIMDPP_SIMDPP_CORE_CMP_EQ_H

#ifndef LIBSIMDPP_SIMD_H
    #error "This file must be included through simd.h"
#endif

#include <simdpp/types.h>
#include <simdpp/detail/insn/cmp_eq.h>

namespace simdpp {
#ifndef SIMDPP_DOXYGEN
namespace SIMDPP_ARCH_NAMESPACE {
#endif


/** Compares 8-bit values for equality.

    @code
    r0 = (a0 == b0) ? 0xff : 0x0
    ...
    rN = (aN == bN) ? 0xff : 0x0
    @endcode

    @par 256-bit version:
    @icost{SSE2-AVX, NEON, ALTIVEC, 2}
*/
#if SIMDPP_DOXYGEN
template<unsigned N, class V1, class V2>
mask_int8<N, _DETAIL_> cmp_eq(const any_int8<N,V1>& a,
                              const any_int8<N,V2>& b);
#else
template<unsigned N, class V1, class V2>
mask_int8<N, mask_int8<N>> cmp_eq(const any_int8<N,V1>& a,
                                  const any_int8<N,V2>& b)
{
    typename detail::get_expr2_nosign<V1, V2, void>::type ra, rb;
    ra = a.vec().eval();
    rb = b.vec().eval();
    return detail::insn::i_cmp_eq(ra, rb);
}
#endif

/** Compares 16-bit values for equality.

    @code
    r0 = (a0 == b0) ? 0xffff : 0x0
    ...
    rN = (aN == bN) ? 0xffff : 0x0
    @endcode

    @par 256-bit version:
    @icost{SSE2-AVX, NEON, ALTIVEC, 2}
*/
#if SIMDPP_DOXYGEN
template<unsigned N, class V1, class V2>
mask_int16<N, _DETAIL_> cmp_eq(const any_int16<N,V1>& a,
                               const any_int16<N,V2>& b);
#else
template<unsigned N, class V1, class V2>
mask_int16<N, mask_int16<N>> cmp_eq(const any_int16<N,V1>& a,
                                    const any_int16<N,V2>& b)
{
    typename detail::get_expr2_nosign<V1, V2, void>::type ra, rb;
    ra = a.vec().eval();
    rb = b.vec().eval();
    return detail::insn::i_cmp_eq(ra, rb);
}
#endif

/** Compares the values of two int32x4 vectors for equality

    @code
    r0 = (a0 == b0) ? 0xffffffff : 0x0
    ...
    rN = (aN == bN) ? 0xffffffff : 0x0
    @endcode

    @par 256-bit version:
    @icost{SSE2-AVX, NEON, ALTIVEC, 2}
*/
#if SIMDPP_DOXYGEN
template<unsigned N, class V1, class V2>
mask_int32<N, _DETAIL_> cmp_eq(const any_int32<N,V1>& a,
                               const any_int32<N,V2>& b);
#else
template<unsigned N, class V1, class V2>
mask_int32<N, mask_int32<N>> cmp_eq(const any_int32<N,V1>& a,
                                    const any_int32<N,V2>& b)
{
    typename detail::get_expr2_nosign<V1, V2, void>::type ra, rb;
    ra = a.vec().eval();
    rb = b.vec().eval();
    return detail::insn::i_cmp_eq(ra, rb);
}
#endif

/** Compares the values of two int64x2 vectors for equality

    @code
    r0 = (a0 == b0) ? 0xffffffffffffffff : 0x0
    ...
    rN = (aN == bN) ? 0xffffffffffffffff : 0x0
    @endcode

    @par 128-bit version:
    @icost{SSE2-SSSE3, 5}
    @icost{XOP, 1}
    @icost{NEON, 3}
    @icost{ALTIVEC, 3-4}

    @par 256-bit version:
    @icost{SSE2-SSSE3, AVX, 10}
    @icost{XOP, SSE4.1, 2}
    @icost{NEON, 6}
    @icost{ALTIVEC, 6-7}
*/
#if SIMDPP_DOXYGEN
template<unsigned N, class V1, class V2>
mask_int64<N, _DETAIL_> cmp_eq(const any_int64<N,V1>& a,
                               const any_int64<N,V2>& b);
#else
template<unsigned N, class V1, class V2>
mask_int64<N, mask_int64<N>> cmp_eq(const any_int64<N,V1>& a,
                                    const any_int64<N,V2>& b)
{
    typename detail::get_expr2_nosign<V1, V2, void>::type ra, rb;
    ra = a.vec().eval();
    rb = b.vec().eval();
    return detail::insn::i_cmp_eq(ra, rb);
}
#endif

/** Compares the values of two float32x4 vectors for equality

    @code
    r0 = (a0 == b0) ? 0xffffffff : 0x0
    ...
    rN = (aN == bN) ? 0xffffffff : 0x0
    @endcode

    @par 256-bit version:
    @icost{SSE2-SSE4.1, NEON, ALTIVEC, 2}
*/
#if SIMDPP_DOXYGEN
template<unsigned N, class V1, class V2>
mask_float32<N, _DETAIL_> cmp_eq(const any_float32<N,V1>& a,
                                 const any_float32<N,V2>& b);
#else
template<unsigned N, class V1, class V2>
mask_float32<N, mask_float32<N>> cmp_eq(const any_float32<N,V1>& a,
                                        const any_float32<N,V2>& b)
{
    return detail::insn::i_cmp_eq(a.vec().eval(), b.vec().eval());
}
#endif

/** Compares the values of two float64x2 vectors for equality

    @code
    r0 = (a0 == b0) ? 0xffffffffffffffff : 0x0
    ...
    rN = (aN == bN) ? 0xffffffffffffffff : 0x0
    @endcode

    @par 128-bit version:
    @novec{NEON, ALTIVEC}

    @par 256-bit version:
    @novec{NEON, ALTIVEC}
    @icost{SSE2-SSE4.1, 2}
*/
#if SIMDPP_DOXYGEN
template<unsigned N, class V1, class V2>
mask_float64<N, _DETAIL_> cmp_eq(const any_float64<N,V1>& a,
                                 const any_float64<N,V2>& b);
#else
template<unsigned N, class V1, class V2>
mask_float64<N, mask_float64<N>> cmp_eq(const any_float64<N,V1>& a,
                                        const any_float64<N,V2>& b)
{
    return detail::insn::i_cmp_eq(a.vec().eval(), b.vec().eval());
}
#endif

#ifndef SIMDPP_DOXYGEN
} // namespace SIMDPP_ARCH_NAMESPACE
#endif
} // namespace simdpp

#endif

