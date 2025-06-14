#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EntityDisolveType_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"

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
        // Size: 0x7c0
        // Has VTable
        // Construct allowed
        // MNetworkAssumeNotNetworkable
        // 
        // static metadata: MNetworkVarNames "float32 m_flFadeInStart"
        // static metadata: MNetworkVarNames "float32 m_flFadeInLength"
        // static metadata: MNetworkVarNames "float32 m_flFadeOutModelStart"
        // static metadata: MNetworkVarNames "float32 m_flFadeOutModelLength"
        // static metadata: MNetworkVarNames "float32 m_flFadeOutStart"
        // static metadata: MNetworkVarNames "float32 m_flFadeOutLength"
        // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
        // static metadata: MNetworkVarNames "EntityDisolveType_t m_nDissolveType"
        // static metadata: MNetworkVarNames "Vector m_vDissolverOrigin"
        // static metadata: MNetworkVarNames "uint32 m_nMagnitude"
        #pragma pack(push, 1)
        class CEntityDissolve : public source2sdk::server::CBaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            float m_flFadeInStart; // 0x790            
            // metadata: MNetworkEnable
            float m_flFadeInLength; // 0x794            
            // metadata: MNetworkEnable
            float m_flFadeOutModelStart; // 0x798            
            // metadata: MNetworkEnable
            float m_flFadeOutModelLength; // 0x79c            
            // metadata: MNetworkEnable
            float m_flFadeOutStart; // 0x7a0            
            // metadata: MNetworkEnable
            float m_flFadeOutLength; // 0x7a4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x7a8            
            // metadata: MNetworkEnable
            source2sdk::client::EntityDisolveType_t m_nDissolveType; // 0x7ac            
            // metadata: MNetworkEnable
            Vector m_vDissolverOrigin; // 0x7b0            
            // metadata: MNetworkEnable
            std::uint32_t m_nMagnitude; // 0x7bc            
            
            // Datamap fields:
            // void CEntityDissolveDissolveThink; // 0x0
            // void CEntityDissolveElectrocuteThink; // 0x0
            // CUtlSymbolLarge InputDissolve; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEntityDissolve because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEntityDissolve) == 0x7c0);
    };
};
