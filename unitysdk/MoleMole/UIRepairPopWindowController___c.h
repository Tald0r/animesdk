#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAC2A340)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAC2A380)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___C__SHOWREPAIRCONFIRM_B__18_0_OFFSET UNITYSDK_OFFSET(0xAC2A390)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___C__SHOWREPAIRFAILED_B__21_0_OFFSET UNITYSDK_OFFSET(0xAC2A650)

namespace MoleMole
{
	inline static constexpr unsigned int UIRepairPopWindowController___c_TypeDefinitionIndex = 72789;

	class UIRepairPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIRepairPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIRepairPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRepairPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3F0E0);
		}
		static ::System::Action** StaticGet___9__21_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRepairPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3F0E8);
		}
		static ::System::Action** StaticGet___9__18_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRepairPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3F0F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowRepairConfirm_b__18_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___C__SHOWREPAIRCONFIRM_B__18_0_OFFSET))(this);
		}

		::System::Void _ShowRepairFailed_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___C__SHOWREPAIRFAILED_B__21_0_OFFSET))(this);
		}
	};
}
