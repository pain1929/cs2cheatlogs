#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CTriggerMultiple.hpp"

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
        // Size: 0x9c0
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        #pragma pack(push, 1)
        class CTriggerImpact : public source2sdk::server::CTriggerMultiple
        {
        public:
            float m_flMagnitude; // 0x988            
            float m_flNoise; // 0x98c            
            float m_flViewkick; // 0x990            
            uint8_t _pad0994[0x4]; // 0x994
            // m_pOutputForce has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<Vector> m_pOutputForce;
            char m_pOutputForce[0x28]; // 0x998            
            
            // Datamap fields:
            // void InputImpact; // 0x0
            // float InputSetMagnitude; // 0x0
            // void CTriggerImpactDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerImpact because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerImpact) == 0x9c0);
    };
};
