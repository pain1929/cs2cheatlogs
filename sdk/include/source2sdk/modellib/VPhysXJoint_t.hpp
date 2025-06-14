#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/VPhysXRange_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: true
        // Size: 0xc0
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct VPhysXJoint_t
        {
        public:
            std::uint16_t m_nType; // 0x0            
            std::uint16_t m_nBody1; // 0x2            
            std::uint16_t m_nBody2; // 0x4            
            std::uint16_t m_nFlags; // 0x6            
            uint8_t _pad0008[0x8]; // 0x8
            CTransform m_Frame1; // 0x10            
            CTransform m_Frame2; // 0x30            
            bool m_bEnableCollision; // 0x50            
            bool m_bEnableLinearLimit; // 0x51            
            uint8_t _pad0052[0x2]; // 0x52
            source2sdk::modellib::VPhysXRange_t m_LinearLimit; // 0x54            
            bool m_bEnableLinearMotor; // 0x5c            
            uint8_t _pad005d[0x3]; // 0x5d
            Vector m_vLinearTargetVelocity; // 0x60            
            float m_flMaxForce; // 0x6c            
            bool m_bEnableSwingLimit; // 0x70            
            uint8_t _pad0071[0x3]; // 0x71
            source2sdk::modellib::VPhysXRange_t m_SwingLimit; // 0x74            
            bool m_bEnableTwistLimit; // 0x7c            
            uint8_t _pad007d[0x3]; // 0x7d
            source2sdk::modellib::VPhysXRange_t m_TwistLimit; // 0x80            
            bool m_bEnableAngularMotor; // 0x88            
            uint8_t _pad0089[0x3]; // 0x89
            Vector m_vAngularTargetVelocity; // 0x8c            
            float m_flMaxTorque; // 0x98            
            float m_flLinearFrequency; // 0x9c            
            float m_flLinearDampingRatio; // 0xa0            
            float m_flAngularFrequency; // 0xa4            
            float m_flAngularDampingRatio; // 0xa8            
            float m_flFriction; // 0xac            
            float m_flElasticity; // 0xb0            
            float m_flElasticDamping; // 0xb4            
            float m_flPlasticity; // 0xb8            
            uint8_t _pad00bc[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_nType) == 0x0);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_nBody1) == 0x2);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_nBody2) == 0x4);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_nFlags) == 0x6);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_Frame1) == 0x10);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_Frame2) == 0x30);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_bEnableCollision) == 0x50);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_bEnableLinearLimit) == 0x51);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_LinearLimit) == 0x54);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_bEnableLinearMotor) == 0x5c);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_vLinearTargetVelocity) == 0x60);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_flMaxForce) == 0x6c);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_bEnableSwingLimit) == 0x70);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_SwingLimit) == 0x74);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_bEnableTwistLimit) == 0x7c);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_TwistLimit) == 0x80);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_bEnableAngularMotor) == 0x88);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_vAngularTargetVelocity) == 0x8c);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_flMaxTorque) == 0x98);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_flLinearFrequency) == 0x9c);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_flLinearDampingRatio) == 0xa0);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_flAngularFrequency) == 0xa4);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_flAngularDampingRatio) == 0xa8);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_flFriction) == 0xac);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_flElasticity) == 0xb0);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_flElasticDamping) == 0xb4);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_flPlasticity) == 0xb8);
        
        static_assert(sizeof(source2sdk::modellib::VPhysXJoint_t) == 0xc0);
    };
};
