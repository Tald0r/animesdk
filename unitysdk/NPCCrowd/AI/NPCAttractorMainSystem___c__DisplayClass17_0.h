#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_579;
namespace NPCCrowd::AI { class AttractorRuntime; }

#define NPCCROWD_AI_NPCATTRACTORMAINSYSTEM___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x174A7180)
#define NPCCROWD_AI_NPCATTRACTORMAINSYSTEM___C__DISPLAYCLASS17_0__POSTLATEUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x174A7190)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int NPCAttractorMainSystem___c__DisplayClass17_0_TypeDefinitionIndex = 57249;

	class NPCAttractorMainSystem___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::NPCCrowd::AI::AttractorRuntime* attractorRuntime; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCATTRACTORMAINSYSTEM___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _PostLateUpdate_b__0(::Class_3_025FF4981524A424_579* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_579*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCATTRACTORMAINSYSTEM___C__DISPLAYCLASS17_0__POSTLATEUPDATE_B__0_OFFSET))(this, rsp);
		}
	};
}
