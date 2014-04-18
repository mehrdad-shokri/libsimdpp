/*  Copyright (C) 2013-2014  Povilas Kanapickas <povilas@radix.lt>

    Distributed under the Boost Software License, Version 1.0.
        (See accompanying file LICENSE_1_0.txt or copy at
            http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef LIBSIMDPP_SIMDPP_CORE_I_MIN_H
#define LIBSIMDPP_SIMDPP_CORE_I_MIN_H

#ifndef LIBSIMDPP_SIMD_H
    #error "This file must be included through simd.h"
#endif

#include <simdpp/types.h>
#include <simdpp/detail/insn/i_min.h>

namespace simdpp {
#ifndef SIMDPP_DOXYGEN
namespace SIMDPP_ARCH_NAMESPACE {
#endif


/** Computes minimum of signed 8-bit values.

    @code
    r0 = min(a0, b0)
    ...
    rN = min(aN, bN)
    @endcode

    @par 128-bit version:
    @icost{SSE2-SSSE3, 4}

    @par 256-bit version:
    @icost{SSE2-SSSE3, 8}
    @icost{SSE4.1-AVX, NEON, ALTIVEC, 2}
*/
#if SIMDPP_DOXYGEN
template<unsigned N, class E1, class E2>
int8<N, _DETAIL_> min(int8<N,E1> a, int8<N,E2> b);
#else
template<unsigned N, class E1, class E2>
int8<N, int8<N>> min(int8<N,E1> a, int8<N,E2> b)
{
    return detail::insn::i_min(a.eval(), b.eval());
}
#endif

/** Computes minimum of the unsigned 8-bit values.

    @code
    r0 = min(a0, b0)
    ...
    rN = min(aN, bN)
    @endcode

    @par 256-bit version:
    @icost{SSE2-AVX, NEON, ALTIVEC, 2}
*/
#if SIMDPP_DOXYGEN
template<unsigned N, class E1, class E2>
uint8<N, _DETAIL_> min(uint8<N,E1> a, uint8<N,E2> b);
#else
template<unsigned N, class E1, class E2>
uint8<N, uint8<N>> min(uint8<N,E1> a, uint8<N,E2> b)
{
    return detail::insn::i_min(a.eval(), b.eval());
}
#endif

/** Computes minimum of the signed 16-bit values.

    @code
    r0 = min(a0, b0)
    ...
    rN = min(aN, bN)
    @endcode

    @par 256-bit version:
    @icost{SSE2-AVX, NEON, ALTIVEC, 2}
*/
#if SIMDPP_DOXYGEN
template<unsigned N, class E1, class E2>
int16<N, _DETAIL_> min(int16<N,E1> a, int16<N,E2> b);
#else
template<unsigned N, class E1, class E2>
int16<N, int16<N>> min(int16<N,E1> a, int16<N,E2> b)
{
    return detail::insn::i_min(a.eval(), b.eval());
}
#endif

/** Computes minimum of the unsigned 16-bit values.

    @code
    r0 = min(a0, b0)
    ...
    rN = min(aN, bN)
    @endcode

    @par 128-bit version:
    @icost{SSE2-SSSE3, 6-7}

    @par 256-bit version:
    @icost{SSE2-SSSE3, 12-13}
    @icost{SSE4.1-AVX, NEON, ALTIVEC, 2}
*/
#if SIMDPP_DOXYGEN
template<unsigned N, class E1, class E2>
uint16<N, _DETAIL_> min(uint16<N,E1> a, uint16<N,E2> b);
#else
template<unsigned N, class E1, class E2>
uint16<N, uint16<N>> min(uint16<N,E1> a, uint16<N,E2> b)
{
    return detail::insn::i_min(a.eval(), b.eval());
}
#endif
/** Computes minimum of the signed 32-bit values.

    @code
    r0 = min(a0, b0)
    ...
    rN = min(aN, bN)
    @endcode

    @par 128-bit version:
    @icost{SSE2-SSSE3, 4}

    @par 256-bit version:
    @icost{SSE2-SSSE3, 8}
    @icost{SSE4.1-AVX, NEON, ALTIVEC, 2}
*/
#if SIMDPP_DOXYGEN
template<unsigned N, class E1, class E2>
int32<N, _DETAIL_> min(int32<N,E1> a, int32<N,E2> b);
#else
template<unsigned N, class E1, class E2>
int32<N, int32<N>> min(int32<N,E1> a, int32<N,E2> b)
{
    return detail::insn::i_min(a.eval(), b.eval());
}
#endif

/** Computes minimum of the unsigned 32-bit values.

    @code
    r0 = min(a0, b0)
    ...
    rN = min(aN, bN)
    @endcode

    @par 128-bit version:
    @icost{SSE2-SSSE3, 6-7}

    @par 256-bit version:
    @icost{SSE2-SSSE3, 12-13}
    @icost{SSE4.1-AVX, NEON, ALTIVEC, 2}
*/
#if SIMDPP_DOXYGEN
template<unsigned N, class E1, class E2>
uint32<N, _DETAIL_> min(uint32<N,E1> a, uint32<N,E2> b);
#else
template<unsigned N, class E1, class E2>
uint32<N, uint32<N>> min(uint32<N,E1> a, uint32<N,E2> b)
{
    return detail::insn::i_min(a.eval(), b.eval());
}
#endif

#ifndef SIMDPP_DOXYGEN
} // namespace SIMDPP_ARCH_NAMESPACE
#endif
} // namespace simdpp

#endif

