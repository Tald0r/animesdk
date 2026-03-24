#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_12F6163CF7119BC1.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGALGAMEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xF1ED5B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageContext_TypeDefinitionIndex = 57952;

	class UIGalgamePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* ExitSoundActionList; // 0x28
		::System::String* FadeInParam; // 0x30
		::System::String* TitleKey; // 0x38
		::System::String* UIPlayMode; // 0x40
		::System::String* FadeOutParam; // 0x48
		::System::Action* executeWhenFadeOutStartAction; // 0x50
		::System::Action* startOutsideFadeOutAction; // 0x58
		::System::String* IntroKey; // 0x60
		::System::Int32 PerformId; // 0x68
		::Enum_3_12F6163CF7119BC1 SwitchSceneOnStart; // 0x6C
		::System::Boolean overrideFadeOutByOuside; // 0x70
		::System::Boolean useProtectTime; // 0x71

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
