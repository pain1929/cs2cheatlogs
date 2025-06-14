#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x550
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CLogicBranch : public source2sdk::server::CLogicalEntity
        {
        public:
            bool m_bInValue; // 0x4e0            
            uint8_t _pad04e1[0x7]; // 0x4e1
            // m_Listeners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_Listeners;
            char m_Listeners[0x18]; // 0x4e8            
            source2sdk::entity2::CEntityIOOutput m_OnTrue; // 0x500            
            source2sdk::entity2::CEntityIOOutput m_OnFalse; // 0x528            
            
            // Datamap fields:
            // bool InputSetValue; // 0x0
            // bool InputSetValueTest; // 0x0
            // void InputToggle; // 0x0
            // void InputToggleTest; // 0x0
            // void InputTest; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicBranch because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicBranch) == 0x550);
    };
};
