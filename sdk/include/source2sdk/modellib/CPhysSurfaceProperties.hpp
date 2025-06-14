#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/CPhysSurfacePropertiesAudio.hpp"
#include "source2sdk/modellib/CPhysSurfacePropertiesPhysics.hpp"
#include "source2sdk/modellib/CPhysSurfacePropertiesSoundNames.hpp"

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0xc8
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPhysSurfaceProperties
        {
        public:
            // metadata: MKV3TransferName "surfacePropertyName"
            CUtlString m_name; // 0x0            
            std::uint32_t m_nameHash; // 0x8            
            std::uint32_t m_baseNameHash; // 0xc            
            uint8_t _pad0010[0x8]; // 0x10
            // metadata: MKV3TransferName "hidden"
            bool m_bHidden; // 0x18            
            uint8_t _pad0019[0x7]; // 0x19
            // metadata: MKV3TransferName "description"
            CUtlString m_description; // 0x20            
            // metadata: MKV3TransferName "physics"
            source2sdk::modellib::CPhysSurfacePropertiesPhysics m_physics; // 0x28            
            uint8_t _pad004c[0x4]; // 0x4c
            // metadata: MKV3TransferName "audiosounds"
            source2sdk::modellib::CPhysSurfacePropertiesSoundNames m_audioSounds; // 0x50            
            // metadata: MKV3TransferName "audioparams"
            source2sdk::modellib::CPhysSurfacePropertiesAudio m_audioParams; // 0xa8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CPhysSurfaceProperties, m_name) == 0x0);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfaceProperties, m_nameHash) == 0x8);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfaceProperties, m_baseNameHash) == 0xc);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfaceProperties, m_bHidden) == 0x18);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfaceProperties, m_description) == 0x20);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfaceProperties, m_physics) == 0x28);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfaceProperties, m_audioSounds) == 0x50);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfaceProperties, m_audioParams) == 0xa8);
        
        static_assert(sizeof(source2sdk::modellib::CPhysSurfaceProperties) == 0xc8);
    };
};
