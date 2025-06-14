#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"

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
        // Size: 0x978
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "CUtlString m_strStartTouchEventName"
        // static metadata: MNetworkVarNames "CUtlString m_strEndTouchEventName"
        // static metadata: MNetworkVarNames "CUtlString m_strTriggerID"
        #pragma pack(push, 1)
        class CTriggerGameEvent : public source2sdk::server::CBaseTrigger
        {
        public:
            // metadata: MNetworkEnable
            CUtlString m_strStartTouchEventName; // 0x960            
            // metadata: MNetworkEnable
            CUtlString m_strEndTouchEventName; // 0x968            
            // metadata: MNetworkEnable
            CUtlString m_strTriggerID; // 0x970            
            
            // Datamap fields:
            // CUtlSymbolLarge InputSetStartTouchEvent; // 0x0
            // CUtlSymbolLarge InputSetEndTouchEvent; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerGameEvent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerGameEvent) == 0x978);
    };
};
