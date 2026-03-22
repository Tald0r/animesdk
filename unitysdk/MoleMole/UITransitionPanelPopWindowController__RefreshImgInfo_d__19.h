#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UITransitionPanelPopWindowController_TransitionState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class UITransitionPanelPopWindowController; }
namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__REFRESHIMGINFO_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x880B8B0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__REFRESHIMGINFO_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x880BBC0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__REFRESHIMGINFO_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x880BC20)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__REFRESHIMGINFO_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x880BBD0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__REFRESHIMGINFO_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x880B8A0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__REFRESHIMGINFO_D__19__CTOR_OFFSET UNITYSDK_OFFSET(0x880B890)

namespace MoleMole
{
	inline static constexpr unsigned int UITransitionPanelPopWindowController__RefreshImgInfo_d__19_TypeDefinitionIndex = 78475;

	class UITransitionPanelPopWindowController__RefreshImgInfo_d__19 : public ::System::Object
	{
	public:
		::MoleMole::UITransitionPanelPopWindowController* __4__this; // 0x10
		::UnityEngine::AnimationCurve* curve; // 0x18
		::System::Action* onFadeEndCallback; // 0x20
		::System::Int32 __1__state; // 0x28
		::UnityEngine::Color fromColor; // 0x2C
		::UnityEngine::Color targetColor; // 0x3C
		::System::Single _timeSpan_5__2; // 0x4C
		::System::Single duration; // 0x50
		::MoleMole::UITransitionPanelPopWindowController_TransitionState state; // 0x54
		::System::Single __2__current; // 0x58

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__REFRESHIMGINFO_D__19__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__REFRESHIMGINFO_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__REFRESHIMGINFO_D__19_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__REFRESHIMGINFO_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__REFRESHIMGINFO_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__REFRESHIMGINFO_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
