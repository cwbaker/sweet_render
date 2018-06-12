//
// or.cpp
// Copyright (c) Charles Baker.  All rights reserved.
//

#include "or.hpp"
#include "Instruction.hpp"
#include <sweet/assert/assert.hpp>

namespace sweet
{

namespace fx
{

void or_u1u1( float* result, const float* lhs, const float* rhs, unsigned int /*length*/ )
{
    result[0] = lhs[0] || rhs[0];
}

void or_u1v1( float* result, const float* lhs, const float* rhs, unsigned int length )
{
    for ( unsigned int i = 0; i < length; ++i )
    {
        result[i] = lhs[0] || rhs[i];
    }
}

void or_v1u1( float* result, const float* lhs, const float* rhs, unsigned int length )
{
    for ( unsigned int i = 0; i < length; ++i )
    {
        result[i] = lhs[i] || rhs[0];
    }
}

void or_v1v1( float* result, const float* lhs, const float* rhs, unsigned int length )
{
    for ( unsigned int i = 0; i < length; ++i )
    {
        result[i] = lhs[i] || rhs[i];
    }
}

void or_( int dispatch, float* result, const float* lhs, const float* rhs, unsigned int length )
{
    switch ( dispatch )
    {
        case INSTRUCTION_U1U1:
            or_u1u1( result, lhs, rhs, length );
            break;

        case INSTRUCTION_U1V1:
            or_u1v1( result, lhs, rhs, length );
            break;

        case INSTRUCTION_V1U1:
            or_v1u1( result, lhs, rhs, length );
            break;

        case INSTRUCTION_V1V1:
            or_v1v1( result, lhs, rhs, length );
            break;

        default:
            SWEET_ASSERT( false );
            break;
    }
}

}

}
