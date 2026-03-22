#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace NPCCrowd { class NPCMonoDelegate_EventDelegate; }

#define NPCCROWD_NPCMONODELEGATE_ADD_ONBECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x7585B70)
#define NPCCROWD_NPCMONODELEGATE_ONBECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x7585C70)
#define NPCCROWD_NPCMONODELEGATE_REMOVE_ONBECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x7585BF0)
#define NPCCROWD_NPCMONODELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x7585CE0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCMonoDelegate_TypeDefinitionIndex = 59289;

	class NPCMonoDelegate : public ::UnityEngine::MonoBehaviour
	{
	public:
		::NPCCrowd::NPCMonoDelegate_EventDelegate* onBecameVisible; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMONODELEGATE__CTOR_OFFSET))(this);
		}

		::System::Void add_onBecameVisible(::NPCCrowd::NPCMonoDelegate_EventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCMonoDelegate_EventDelegate*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMONODELEGATE_ADD_ONBECAMEVISIBLE_OFFSET))(this, value);
		}

		::System::Void remove_onBecameVisible(::NPCCrowd::NPCMonoDelegate_EventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCMonoDelegate_EventDelegate*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMONODELEGATE_REMOVE_ONBECAMEVISIBLE_OFFSET))(this, value);
		}

		::System::Void OnBecameVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMONODELEGATE_ONBECAMEVISIBLE_OFFSET))(this);
		}
	};
}
