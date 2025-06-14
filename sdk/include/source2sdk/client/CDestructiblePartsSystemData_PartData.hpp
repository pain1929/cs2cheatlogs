#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSkillInt.hpp"
#include "source2sdk/client/EDestructiblePartDamagePassThroughType.hpp"

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
        // Standard-layout class: true
        // Size: 0x50
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CDestructiblePartsSystemData_PartData
        {
        public:
            // metadata: MPropertyDescription "Name for this destructible part."
            CUtlString m_sName; // 0x0            
            // metadata: MPropertyStartGroup "+Model Setup"
            // metadata: MPropertyDescription "Name of the breakable part to trigger breaking on when health reaches zero."
            // metadata: MPropertyAttributeEditor "VDataModelBreakPiece( m_sModelName )"
            CGlobalSymbol m_sBreakablePieceName; // 0x8            
            // metadata: MPropertyStartGroup "+Model Setup/Body Group"
            // metadata: MPropertyDescription "Body group to set when this part is broken."
            // metadata: MPropertyAttributeEditor "VDataModelBodyGroup( m_sModelName )"
            CGlobalSymbol m_sBodyGroupName; // 0x10            
            // metadata: MPropertyDescription "Value to set for the body group when the part is broken."
            std::int32_t m_nBodyGroupValue; // 0x18            
            uint8_t _pad001c[0x4]; // 0x1c
            // metadata: MPropertyStartGroup "+Model Setup/Animgraph"
            // metadata: MPropertyDescription "Animgraph parameter (boolean) to set when this part is destroyed."
            // metadata: MPropertyAttributeEditor "VDataAnimGraphParamBool( m_sModelName )"
            CGlobalSymbol m_sAnimGraphParamName_PartDestroyed; // 0x20            
            // metadata: MPropertyDescription "Animgraph parameter (float) with the normalized (0-1) health of this part."
            // metadata: MPropertyAttributeEditor "VDataAnimGraphParamFloat( m_sModelName )"
            CGlobalSymbol m_sAnimGraphParamName_PartNormalizedHealth; // 0x28            
            // metadata: MPropertyStartGroup "+Runtime Data"
            // metadata: MPropertyDescription "Total health of this part. When it reaches 0, the part is 'broken' using the breakable prop system."
            source2sdk::client::CSkillInt m_nHealth; // 0x30            
            // metadata: MPropertyDescription "How damage to this part is handled."
            source2sdk::client::EDestructiblePartDamagePassThroughType m_nDamagePassthroughType; // 0x40            
            // metadata: MPropertyStartGroup "+Runtime Data/Death"
            // metadata: MPropertyDescription "Should the NPC die when this part is destroyed?"
            bool m_bKillNPCOnDestruction; // 0x44            
            uint8_t _pad0045[0x3]; // 0x45
            // metadata: MPropertyDescription "Custom death handshake to set when this part is destroyed."
            // metadata: MPropertySuppressExpr "m_bKillNPCOnDestruction == false"
            CGlobalSymbol m_sCustomDeathHandshake; // 0x48            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_PartData, m_sName) == 0x0);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_PartData, m_sBreakablePieceName) == 0x8);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_PartData, m_sBodyGroupName) == 0x10);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_PartData, m_nBodyGroupValue) == 0x18);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_PartData, m_sAnimGraphParamName_PartDestroyed) == 0x20);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_PartData, m_sAnimGraphParamName_PartNormalizedHealth) == 0x28);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_PartData, m_nHealth) == 0x30);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_PartData, m_nDamagePassthroughType) == 0x40);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_PartData, m_bKillNPCOnDestruction) == 0x44);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_PartData, m_sCustomDeathHandshake) == 0x48);
        
        static_assert(sizeof(source2sdk::client::CDestructiblePartsSystemData_PartData) == 0x50);
    };
};
