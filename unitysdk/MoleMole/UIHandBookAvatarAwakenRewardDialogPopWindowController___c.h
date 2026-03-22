#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCAE8B00)
#define MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCAE8B40)
#define MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDDIALOGPOPWINDOWCONTROLLER___C__ONUIINIT_B__5_1_OFFSET UNITYSDK_OFFSET(0xCAE8B50)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookAvatarAwakenRewardDialogPopWindowController___c_TypeDefinitionIndex = 54981;

	class UIHandBookAvatarAwakenRewardDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__5_1()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookAvatarAwakenRewardDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2FF10);
		}
		static ::MoleMole::UIHandBookAvatarAwakenRewardDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookAvatarAwakenRewardDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookAvatarAwakenRewardDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2FF18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__5_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDDIALOGPOPWINDOWCONTROLLER___C__ONUIINIT_B__5_1_OFFSET))(this);
		}
	};
}
