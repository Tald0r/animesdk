#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_208CC9941471731A_508;

#define MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x8B99830)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityAvatarAwakenItemWidgetControllerContext_TypeDefinitionIndex = 46648;

	class UIActivityAvatarAwakenItemWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_508* TutorialCfg; // 0x28
		::Class_2_208CC9941471731A_508* Cfg; // 0x30
		::UnityEngine::Color Color; // 0x38
		::System::Boolean IsFocused; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAVATARAWAKENITEMWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
