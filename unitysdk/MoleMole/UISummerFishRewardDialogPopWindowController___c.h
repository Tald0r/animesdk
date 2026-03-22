#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UISUMMERFISHREWARDDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAE44160)
#define MOLEMOLE_UISUMMERFISHREWARDDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAE441A0)
#define MOLEMOLE_UISUMMERFISHREWARDDIALOGPOPWINDOWCONTROLLER___C__ONUIINIT_B__3_1_OFFSET UNITYSDK_OFFSET(0xAE441B0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishRewardDialogPopWindowController___c_TypeDefinitionIndex = 49876;

	class UISummerFishRewardDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__3_1()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UISummerFishRewardDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x30290);
		}
		static ::MoleMole::UISummerFishRewardDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UISummerFishRewardDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UISummerFishRewardDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x30298);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHREWARDDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHREWARDDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHREWARDDIALOGPOPWINDOWCONTROLLER___C__ONUIINIT_B__3_1_OFFSET))(this);
		}
	};
}
