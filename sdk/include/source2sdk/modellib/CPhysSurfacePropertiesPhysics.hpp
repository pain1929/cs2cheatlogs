#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x24
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPhysSurfacePropertiesPhysics
        {
        public:
            // metadata: MKV3TransferName "friction"
            float m_friction; // 0x0            
            // metadata: MKV3TransferName "elasticity"
            float m_elasticity; // 0x4            
            // metadata: MKV3TransferName "density"
            float m_density; // 0x8            
            // metadata: MKV3TransferName "thickness"
            float m_thickness; // 0xc            
            // metadata: MKV3TransferName "softcontactfrequency"
            float m_softContactFrequency; // 0x10            
            // metadata: MKV3TransferName "softcontactdampingratio"
            float m_softContactDampingRatio; // 0x14            
            // metadata: MKV3TransferName "wheeldrag"
            float m_wheelDrag; // 0x18            
            // metadata: MKV3TransferName "heatconductivity"
            float m_heatConductivity; // 0x1c            
            // metadata: MKV3TransferName "flashpoint"
            float m_flashpoint; // 0x20            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesPhysics, m_friction) == 0x0);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesPhysics, m_elasticity) == 0x4);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesPhysics, m_density) == 0x8);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesPhysics, m_thickness) == 0xc);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesPhysics, m_softContactFrequency) == 0x10);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesPhysics, m_softContactDampingRatio) == 0x14);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesPhysics, m_wheelDrag) == 0x18);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesPhysics, m_heatConductivity) == 0x1c);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesPhysics, m_flashpoint) == 0x20);
        
        static_assert(sizeof(source2sdk::modellib::CPhysSurfacePropertiesPhysics) == 0x24);
    };
};
