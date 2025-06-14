#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x2
        // Alignment: 0x2
        // Standard-layout class: true
        // Size: 0x4
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CNmGraphDefinition_ChildGraphSlot_t
        {
        public:
            std::int16_t m_nNodeIdx; // 0x0            
            std::int16_t m_dataSlotIdx; // 0x2            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition_ChildGraphSlot_t, m_nNodeIdx) == 0x0);
        static_assert(offsetof(source2sdk::animlib::CNmGraphDefinition_ChildGraphSlot_t, m_dataSlotIdx) == 0x2);
        
        static_assert(sizeof(source2sdk::animlib::CNmGraphDefinition_ChildGraphSlot_t) == 0x4);
    };
};
