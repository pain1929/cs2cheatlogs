#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/fogparams_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5d8
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "fogparams_t m_fog"
        #pragma pack(push, 1)
        class C_FogController : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::fogparams_t m_fog; // 0x568            
            bool m_bUseAngles; // 0x5d0            
            uint8_t _pad05d1[0x3]; // 0x5d1
            std::int32_t m_iChangedVariables; // 0x5d4            
            
            // Datamap fields:
            // float InputSetStartDist; // 0x0
            // float InputSetEndDist; // 0x0
            // float InputSetMaxDensity; // 0x0
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
            // Color InputSetColor; // 0x0
            // Color InputSetColorSecondary; // 0x0
            // int32_t InputSetFarZ; // 0x0
            // CUtlSymbolLarge InputSetAngles; // 0x0
            // float InputSet2DSkyboxFogFactor; // 0x0
            // Color InputSetColorLerpTo; // 0x0
            // Color InputSetColorSecondaryLerpTo; // 0x0
            // float InputSetStartDistLerpTo; // 0x0
            // float InputSetEndDistLerpTo; // 0x0
            // float InputSetMaxDensityLerpTo; // 0x0
            // float InputSet2DSkyboxFogFactorLerpTo; // 0x0
            // void InputStartFogTransition; // 0x0
            // void C_FogControllerSetLerpValues; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_FogController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_FogController) == 0x5d8);
    };
};
