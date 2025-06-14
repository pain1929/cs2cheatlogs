#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/animgraphlib/CParamSpanUpdater.hpp"
#include "source2sdk/animgraphlib/CSequenceUpdateNodeBase.hpp"
#include "source2sdk/animgraphlib/TagSpan_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xa8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSequenceUpdateNode : public source2sdk::animgraphlib::CSequenceUpdateNodeBase
        {
        public:
            source2sdk::animationsystem::HSequence m_hSequence; // 0x70            
            float m_duration; // 0x74            
            source2sdk::animgraphlib::CParamSpanUpdater m_paramSpans; // 0x78            
            // m_tags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::TagSpan_t> m_tags;
            char m_tags[0x18]; // 0x90            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSequenceUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CSequenceUpdateNode) == 0xa8);
    };
};
