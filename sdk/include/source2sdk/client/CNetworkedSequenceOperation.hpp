#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x28
        // Has VTable
        // Has Trivial Destructor
        // 
        // static metadata: MNetworkVarNames "HSequence m_hSequence"
        // static metadata: MNetworkVarNames "float32 m_flPrevCycle"
        // static metadata: MNetworkVarNames "float32 m_flCycle"
        #pragma pack(push, 1)
        class CNetworkedSequenceOperation
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "minusone"
            // metadata: MNetworkChangeCallback "sequenceOpSequenceChanged"
            // metadata: MNetworkPriority "32"
            source2sdk::animationsystem::HSequence m_hSequence; // 0x8            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "15"
            // metadata: MNetworkMinValue "0.000000"
            // metadata: MNetworkMaxValue "1.000000"
            // metadata: MNetworkEncodeFlags "8"
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkSendProxyRecipientsFilter
            // metadata: MNetworkUserGroup "m_flCycle"
            float m_flPrevCycle; // 0xc            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "15"
            // metadata: MNetworkMinValue "0.000000"
            // metadata: MNetworkMaxValue "1.000000"
            // metadata: MNetworkEncodeFlags "8"
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkSendProxyRecipientsFilter
            // metadata: MNetworkUserGroup "m_flCycle"
            float m_flCycle; // 0x10            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0.000000"
            // metadata: MNetworkMaxValue "1.000000"
            // metadata: MNetworkEncodeFlags "0"
            CNetworkedQuantizedFloat m_flWeight; // 0x14            
            // metadata: MNetworkDisable
            bool m_bSequenceChangeNetworked; // 0x1c            
            // metadata: MNetworkDisable
            bool m_bDiscontinuity; // 0x1d            
            uint8_t _pad001e[0x2]; // 0x1e
            // metadata: MNetworkDisable
            float m_flPrevCycleFromDiscontinuity; // 0x20            
            // metadata: MNetworkDisable
            float m_flPrevCycleForAnimEventDetection; // 0x24            
            
            // Datamap fields:
            // CUtlString sequenceName; // 0x7fffffff
            // int32_t sequence; // 0x7fffffff
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CNetworkedSequenceOperation, m_hSequence) == 0x8);
        static_assert(offsetof(source2sdk::client::CNetworkedSequenceOperation, m_flPrevCycle) == 0xc);
        static_assert(offsetof(source2sdk::client::CNetworkedSequenceOperation, m_flCycle) == 0x10);
        static_assert(offsetof(source2sdk::client::CNetworkedSequenceOperation, m_flWeight) == 0x14);
        static_assert(offsetof(source2sdk::client::CNetworkedSequenceOperation, m_bSequenceChangeNetworked) == 0x1c);
        static_assert(offsetof(source2sdk::client::CNetworkedSequenceOperation, m_bDiscontinuity) == 0x1d);
        static_assert(offsetof(source2sdk::client::CNetworkedSequenceOperation, m_flPrevCycleFromDiscontinuity) == 0x20);
        static_assert(offsetof(source2sdk::client::CNetworkedSequenceOperation, m_flPrevCycleForAnimEventDetection) == 0x24);
        
        static_assert(sizeof(source2sdk::client::CNetworkedSequenceOperation) == 0x28);
    };
};
