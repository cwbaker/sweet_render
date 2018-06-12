#ifndef SWEET_FX_INSTRUCTION_HPP_INCLUDED
#define SWEET_FX_INSTRUCTION_HPP_INCLUDED

namespace sweet
{

namespace fx
{

/**
// Instructions interpreted by the virtual machine.
*/
enum Instruction
{
    INSTRUCTION_NULL,
    INSTRUCTION_HALT,
    INSTRUCTION_RESET,
    INSTRUCTION_CLEAR_MASK,
    INSTRUCTION_GENERATE_MASK,
    INSTRUCTION_INVERT_MASK,
    INSTRUCTION_JUMP_EMPTY,
    INSTRUCTION_JUMP_NOT_EMPTY,
    INSTRUCTION_JUMP,
    INSTRUCTION_TRANSFORM,
    INSTRUCTION_MULTIPLY,
    INSTRUCTION_DIVIDE,
    INSTRUCTION_ADD,
    INSTRUCTION_SUBTRACT,
    INSTRUCTION_GREATER,
    INSTRUCTION_GREATER_EQUAL,
    INSTRUCTION_LESS,
    INSTRUCTION_LESS_EQUAL,
    INSTRUCTION_AND,
    INSTRUCTION_OR,
    INSTRUCTION_EQUAL,
    INSTRUCTION_NOT_EQUAL,
    INSTRUCTION_NEGATE,
    INSTRUCTION_ASSIGN,
    INSTRUCTION_ADD_ASSIGN,
    INSTRUCTION_SUBTRACT_ASSIGN,
    INSTRUCTION_MULTIPLY_ASSIGN,
    INSTRUCTION_DIVIDE_ASSIGN,
    INSTRUCTION_CALL,
    INSTRUCTION_EVALUATE,
    INSTRUCTION_PROMOTE,
    INSTRUCTION_CONVERT,
    INSTRUCTION_COUNT,
    INSTRUCTION_ARGUMENT0_SHIFT = 8,
    INSTRUCTION_ARGUMENT1_SHIFT = 16,
    INSTRUCTION_INSTRUCTION_MASK = 0x00ff,
    INSTRUCTION_DISPATCH_MASK = 0xff,
    INSTRUCTION_ELEMENTS_MASK = 0x0f,
    INSTRUCTION_UNIFORM = 0x10,
    INSTRUCTION_VARYING = 0x20,

    INSTRUCTION_U1 = INSTRUCTION_UNIFORM | 1,
    INSTRUCTION_U2 = INSTRUCTION_UNIFORM | 2,
    INSTRUCTION_U3 = INSTRUCTION_UNIFORM | 3,
    INSTRUCTION_U4 = INSTRUCTION_UNIFORM | 4,
    INSTRUCTION_V1 = INSTRUCTION_VARYING | 1,
    INSTRUCTION_V2 = INSTRUCTION_VARYING | 2,
    INSTRUCTION_V3 = INSTRUCTION_VARYING | 3,
    INSTRUCTION_V4 = INSTRUCTION_VARYING | 4,

    INSTRUCTION_U1U1 = (INSTRUCTION_U1 << 8) | INSTRUCTION_U1,
    INSTRUCTION_U1U3 = (INSTRUCTION_U1 << 8) | INSTRUCTION_U3,
    INSTRUCTION_U1U4 = (INSTRUCTION_U1 << 8) | INSTRUCTION_U4,
    INSTRUCTION_U2U1 = (INSTRUCTION_U2 << 8) | INSTRUCTION_U1,
    INSTRUCTION_U3U1 = (INSTRUCTION_U3 << 8) | INSTRUCTION_U1,
    INSTRUCTION_U4U1 = (INSTRUCTION_U4 << 8) | INSTRUCTION_U1,
    INSTRUCTION_U2U2 = (INSTRUCTION_U2 << 8) | INSTRUCTION_U2,
    INSTRUCTION_U3U3 = (INSTRUCTION_U3 << 8) | INSTRUCTION_U3,
    INSTRUCTION_U4U4 = (INSTRUCTION_U4 << 8) | INSTRUCTION_U4,

    INSTRUCTION_U1V1 = (INSTRUCTION_U1 << 8) | INSTRUCTION_V1,
    INSTRUCTION_U2V1 = (INSTRUCTION_U2 << 8) | INSTRUCTION_V1,
    INSTRUCTION_U3V1 = (INSTRUCTION_U3 << 8) | INSTRUCTION_V1,
    INSTRUCTION_U4V1 = (INSTRUCTION_U4 << 8) | INSTRUCTION_V1,
    INSTRUCTION_U2V2 = (INSTRUCTION_U2 << 8) | INSTRUCTION_V2,
    INSTRUCTION_U3V3 = (INSTRUCTION_U3 << 8) | INSTRUCTION_V3,
    INSTRUCTION_U4V4 = (INSTRUCTION_U4 << 8) | INSTRUCTION_V4,

    INSTRUCTION_V1U1 = (INSTRUCTION_V1 << 8) | INSTRUCTION_U1,
    INSTRUCTION_V2U1 = (INSTRUCTION_V2 << 8) | INSTRUCTION_U1,
    INSTRUCTION_V3U1 = (INSTRUCTION_V3 << 8) | INSTRUCTION_U1,
    INSTRUCTION_V4U1 = (INSTRUCTION_V4 << 8) | INSTRUCTION_U1,
    INSTRUCTION_V2U2 = (INSTRUCTION_V2 << 8) | INSTRUCTION_U2,
    INSTRUCTION_V3U3 = (INSTRUCTION_V3 << 8) | INSTRUCTION_U3,
    INSTRUCTION_V4U4 = (INSTRUCTION_V4 << 8) | INSTRUCTION_U4,

    INSTRUCTION_V1V1 = (INSTRUCTION_V1 << 8) | INSTRUCTION_V1,
    INSTRUCTION_V2V1 = (INSTRUCTION_V2 << 8) | INSTRUCTION_V1,
    INSTRUCTION_V3V1 = (INSTRUCTION_V3 << 8) | INSTRUCTION_V1,
    INSTRUCTION_V4V1 = (INSTRUCTION_V4 << 8) | INSTRUCTION_V1,
    INSTRUCTION_V2V2 = (INSTRUCTION_V2 << 8) | INSTRUCTION_V2,
    INSTRUCTION_V3V3 = (INSTRUCTION_V3 << 8) | INSTRUCTION_V3,
    INSTRUCTION_V4V4 = (INSTRUCTION_V4 << 8) | INSTRUCTION_V4
};

}

}

#endif
