#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        // Enumerator count: 75
        // Alignment: 2
        // Size: 0x2
        enum class PulseInstructionCode_t : std::uint16_t
        {
            INVALID = 0x0,
            IMMEDIATE_HALT = 0x1,
            RETURN_VOID = 0x2,
            RETURN_VALUE = 0x3,
            NOP = 0x4,
            JUMP = 0x5,
            JUMP_COND = 0x6,
            CHUNK_LEAP = 0x7,
            CHUNK_LEAP_COND = 0x8,
            PULSE_CALL_SYNC = 0x9,
            PULSE_CALL_ASYNC_FIRE = 0xa,
            CELL_INVOKE = 0xb,
            LIBRARY_INVOKE = 0xc,
            SET_VAR = 0xd,
            GET_VAR = 0xe,
            GET_CONST = 0xf,
            GET_DOMAIN_VALUE = 0x10,
            COPY = 0x11,
            NOT = 0x12,
            NEGATE = 0x13,
            ADD = 0x14,
            SUB = 0x15,
            MUL = 0x16,
            DIV = 0x17,
            MOD = 0x18,
            LT = 0x19,
            LTE = 0x1a,
            EQ = 0x1b,
            NE = 0x1c,
            AND = 0x1d,
            OR = 0x1e,
            CONVERT_VALUE = 0x1f,
            REINTERPRET_INSTANCE = 0x20,
            GET_BLACKBOARD_REFERENCE = 0x21,
            SET_BLACKBOARD_REFERENCE = 0x22,
            REQUIREMENT_RESULT = 0x23,
            LAST_SERIALIZED_CODE = 0x24,
            NEGATE_INT = 0x25,
            NEGATE_FLOAT = 0x26,
            ADD_INT = 0x27,
            ADD_FLOAT = 0x28,
            ADD_STRING = 0x29,
            SUB_INT = 0x2a,
            SUB_FLOAT = 0x2b,
            MUL_INT = 0x2c,
            MUL_FLOAT = 0x2d,
            DIV_INT = 0x2e,
            DIV_FLOAT = 0x2f,
            MOD_INT = 0x30,
            MOD_FLOAT = 0x31,
            LT_INT = 0x32,
            LT_FLOAT = 0x33,
            LTE_INT = 0x34,
            LTE_FLOAT = 0x35,
            EQ_BOOL = 0x36,
            EQ_INT = 0x37,
            EQ_FLOAT = 0x38,
            EQ_STRING = 0x39,
            EQ_ENTITY_NAME = 0x3a,
            EQ_SCHEMA_ENUM = 0x3b,
            EQ_EHANDLE = 0x3c,
            EQ_PANEL_HANDLE = 0x3d,
            EQ_OPAQUE_HANDLE = 0x3e,
            EQ_TEST_HANDLE = 0x3f,
            NE_BOOL = 0x40,
            NE_INT = 0x41,
            NE_FLOAT = 0x42,
            NE_STRING = 0x43,
            NE_ENTITY_NAME = 0x44,
            NE_SCHEMA_ENUM = 0x45,
            NE_EHANDLE = 0x46,
            NE_PANEL_HANDLE = 0x47,
            NE_OPAQUE_HANDLE = 0x48,
            NE_TEST_HANDLE = 0x49,
            GET_CONST_INLINE_STORAGE = 0x4a,
        };
    };
};
