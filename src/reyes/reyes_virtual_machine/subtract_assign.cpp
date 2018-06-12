
#include "subtract_assign.hpp"
#include "Instruction.hpp"
#include <sweet/assert/assert.hpp>

namespace sweet
{

namespace fx
{

void subtract_assign_u1u1( float* result, const float* rhs, unsigned int /*length*/ )
{
    result[0] -= rhs[0];
}

void subtract_assign_u2u2( float* result, const float* rhs, unsigned int /*length*/ )
{
    result[0 + 0] -= rhs[0 + 0];
    result[0 + 1] -= rhs[0 + 1];
}

void subtract_assign_u3u3( float* result, const float* rhs, unsigned int /*length*/ )
{
    result[0 + 0] -= rhs[0 + 0];
    result[0 + 1] -= rhs[0 + 1];
    result[0 + 2] -= rhs[0 + 2];
}

void subtract_assign_u4u4( float* result, const float* rhs, unsigned int /*length*/ )
{
    result[0 + 0] -= rhs[0 + 0];
    result[0 + 1] -= rhs[0 + 1];
    result[0 + 2] -= rhs[0 + 2];
    result[0 + 3] -= rhs[0 + 3];
}

void subtract_assign_v1u1( float* result, const float* rhs, const unsigned char* mask, unsigned int length )
{
    if ( !mask )
    {
        for ( unsigned int i = 0; i < length; ++i )
        {
            result[i] -= rhs[0];
        }
    }
    else
    {
        for ( unsigned int i = 0; i < length; ++i )
        {
            if ( mask[i] )
            {
                result[i] -= rhs[0];
            }
        }
    }
}

void subtract_assign_v2u2( float* result, const float* rhs, const unsigned char* mask, unsigned int length )
{
    if ( !mask )
    {
        for ( unsigned int i = 0; i < length; ++i )
        {
            result[i * 2 + 0] -= rhs[0 + 0];
            result[i * 2 + 1] -= rhs[0 + 1];
        }
    }
    else
    {
        for ( unsigned int i = 0; i < length; ++i )
        {
            if ( mask[i] )
            {
                result[i * 2 + 0] -= rhs[0 + 0];
                result[i * 2 + 1] -= rhs[0 + 1];
            }
        }
    }
}

void subtract_assign_v3u3( float* result, const float* rhs, const unsigned char* mask, unsigned int length )
{
    if ( !mask )
    {
        for ( unsigned int i = 0; i < length; ++i )
        {
            result[i * 3 + 0] -= rhs[0 + 0];
            result[i * 3 + 1] -= rhs[0 + 1];
            result[i * 3 + 2] -= rhs[0 + 2];
        }
    }
    else
    {
        for ( unsigned int i = 0; i < length; ++i )
        {
            if ( mask[i] )
            {
                result[i * 3 + 0] -= rhs[0 + 0];
                result[i * 3 + 1] -= rhs[0 + 1];
                result[i * 3 + 2] -= rhs[0 + 2];
            }
        }
    }
}

void subtract_assign_v4u4( float* result, const float* rhs, const unsigned char* mask, unsigned int length )
{
    if ( !mask )
    {
        for ( unsigned int i = 0; i < length; ++i )
        {
            result[i * 4 + 0] -= rhs[0 + 0];
            result[i * 4 + 1] -= rhs[0 + 1];
            result[i * 4 + 2] -= rhs[0 + 2];
            result[i * 4 + 3] -= rhs[0 + 3];
        }
    }
    else
    {
        for ( unsigned int i = 0; i < length; ++i )
        {
            if ( mask[i] )
            {
                result[i * 4 + 0] -= rhs[0 + 0];
                result[i * 4 + 1] -= rhs[0 + 1];
                result[i * 4 + 2] -= rhs[0 + 2];
                result[i * 4 + 3] -= rhs[0 + 3];
            }
        }
    }
}

void subtract_assign_v1v1( float* result, const float* rhs, const unsigned char* mask, unsigned int length )
{
    if ( !mask )
    {
        for ( unsigned int i = 0; i < length; ++i )
        {
            result[i] -= rhs[i];
        }
    }
    else
    {
        for ( unsigned int i = 0; i < length; ++i )
        {
            if ( mask[i] )
            {
                result[i] -= rhs[i];
            }
        }
    }
}

void subtract_assign_v2v2( float* result, const float* rhs, const unsigned char* mask, unsigned int length )
{
    if ( !mask )
    {
        for ( unsigned int i = 0; i < length; ++i )
        {
            result[i * 2 + 0] -= rhs[i * 2 + 0];
            result[i * 2 + 1] -= rhs[i * 2 + 1];
        }
    }
    else
    {
        for ( unsigned int i = 0; i < length; ++i )
        {
            if ( mask[i] )
            {
                result[i * 2 + 0] -= rhs[i * 2 + 0];
                result[i * 2 + 1] -= rhs[i * 2 + 1];
            }
        }
    }
}

void subtract_assign_v3v3( float* result, const float* rhs, const unsigned char* mask, unsigned int length )
{
    if ( !mask )
    {
        for ( unsigned int i = 0; i < length; ++i )
        {
            result[i * 3 + 0] -= rhs[i * 3 + 0];
            result[i * 3 + 1] -= rhs[i * 3 + 1];
            result[i * 3 + 2] -= rhs[i * 3 + 2];
        }
    }
    else
    {
        for ( unsigned int i = 0; i < length; ++i )
        {
            if ( mask[i] )
            {
                result[i * 3 + 0] -= rhs[i * 3 + 0];
                result[i * 3 + 1] -= rhs[i * 3 + 1];
                result[i * 3 + 2] -= rhs[i * 3 + 2];
            }
        }
    }
}

void subtract_assign_v4v4( float* result, const float* rhs, const unsigned char* mask, unsigned int length )
{
    if ( !mask )
    {
        for ( unsigned int i = 0; i < length; ++i )
        {
            result[i * 4 + 0] -= rhs[i * 4 + 0];
            result[i * 4 + 1] -= rhs[i * 4 + 1];
            result[i * 4 + 2] -= rhs[i * 4 + 2];
            result[i * 4 + 3] -= rhs[i * 4 + 3];
        }
    }
    else
    {
        for ( unsigned int i = 0; i < length; ++i )
        {
            if ( mask[i] )
            {
                result[i * 4 + 0] -= rhs[i * 4 + 0];
                result[i * 4 + 1] -= rhs[i * 4 + 1];
                result[i * 4 + 2] -= rhs[i * 4 + 2];
                result[i * 4 + 3] -= rhs[i * 4 + 3];
            }
        }
    }
}

void subtract_assign( int dispatch, float* result, const float* rhs, const unsigned char* mask, unsigned int length )
{
    switch ( dispatch )
    {
        case INSTRUCTION_U1U1:
            subtract_assign_u1u1( result, rhs, length );
            break;

        case INSTRUCTION_U2U2:
            subtract_assign_u2u2( result, rhs, length );
            break;

        case INSTRUCTION_U3U3:
            subtract_assign_u3u3( result, rhs, length );
            break;

        case INSTRUCTION_U4U4:
            subtract_assign_u4u4( result, rhs, length );
            break;

        case INSTRUCTION_V1U1:
            subtract_assign_v1u1( result, rhs, mask, length );
            break;

        case INSTRUCTION_V2U2:
            subtract_assign_v2u2( result, rhs, mask, length );
            break;

        case INSTRUCTION_V3U3:
            subtract_assign_v3u3( result, rhs, mask, length );
            break;

        case INSTRUCTION_V4U4:
            subtract_assign_v4u4( result, rhs, mask, length );
            break;

        case INSTRUCTION_V1V1:
            subtract_assign_v1v1( result, rhs, mask, length );
            break;

        case INSTRUCTION_V2V2:
            subtract_assign_v2v2( result, rhs, mask, length );
            break;

        case INSTRUCTION_V3V3:
            subtract_assign_v3v3( result, rhs, mask, length );
            break;

        case INSTRUCTION_V4V4:
            subtract_assign_v4v4( result, rhs, mask, length );
            break;

        default:
            SWEET_ASSERT( false );
            break;
    }
}

}

}
