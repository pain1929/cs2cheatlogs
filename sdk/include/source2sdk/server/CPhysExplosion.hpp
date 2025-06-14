#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CPointEntity.hpp"

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
        // Size: 0x530
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CPhysExplosion : public source2sdk::server::CPointEntity
        {
        public:
            bool m_bExplodeOnSpawn; // 0x4e0            
            uint8_t _pad04e1[0x3]; // 0x4e1
            float m_flMagnitude; // 0x4e4            
            float m_flDamage; // 0x4e8            
            float m_radius; // 0x4ec            
            CUtlSymbolLarge m_targetEntityName; // 0x4f0            
            float m_flInnerRadius; // 0x4f8            
            float m_flPushScale; // 0x4fc            
            bool m_bConvertToDebrisWhenPossible; // 0x500            
            uint8_t _pad0501[0x7]; // 0x501
            source2sdk::entity2::CEntityIOOutput m_OnPushedPlayer; // 0x508            
            
            // Datamap fields:
            // void InputExplode; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysExplosion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysExplosion) == 0x530);
    };
};
