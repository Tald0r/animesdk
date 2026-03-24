#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCF8CE20)
#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCF8CE60)
#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER___C__ONSETLANGUAGEVOICE_B__17_0_OFFSET UNITYSDK_OFFSET(0xCF8CE70)

namespace MoleMole
{
	inline static constexpr unsigned int UILoginSettingPopWindowController___c_TypeDefinitionIndex = 58973;

	class UILoginSettingPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__17_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UILoginSettingPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x40770);
		}
		static ::MoleMole::UILoginSettingPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UILoginSettingPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UILoginSettingPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x40778);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnSetLanguageVoice_b__17_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER___C__ONSETLANGUAGEVOICE_B__17_0_OFFSET))(this);
		}
	};
}
