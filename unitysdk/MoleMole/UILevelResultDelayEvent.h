#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UILevelResultDelayEvent_DelayItem.h"
#include "unitysdk/MoleMole/UILevelResultV2_PageController_ResultState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define MOLEMOLE_UILEVELRESULTDELAYEVENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xBE23410)
#define MOLEMOLE_UILEVELRESULTDELAYEVENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBE23220)
#define MOLEMOLE_UILEVELRESULTDELAYEVENT_TRYFIREEVENT_OFFSET UNITYSDK_OFFSET(0xBE23280)
#define MOLEMOLE_UILEVELRESULTDELAYEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xBE23470)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultDelayEvent_TypeDefinitionIndex = 42728;

	class UILevelResultDelayEvent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* winFadeOutAnimation; // 0x18
		::System::String* failFadeOutAnimation; // 0x20
		::Il2CppArray<::MoleMole::UILevelResultDelayEvent_DelayItem>* DelayItems; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTDELAYEVENT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTDELAYEVENT_ONENABLE_OFFSET))(this);
		}

		::System::Void TryFireEvent(::MoleMole::UILevelResultV2_PageController_ResultState a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UILevelResultV2_PageController_ResultState))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTDELAYEVENT_TRYFIREEVENT_OFFSET))(this, a1);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTDELAYEVENT_ONDISABLE_OFFSET))(this);
		}
	};
}
