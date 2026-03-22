#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC8A2840)
#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC8A2880)
#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER___C__ONSETLANGUAGEVOICE_B__17_0_OFFSET UNITYSDK_OFFSET(0xC8A2890)

namespace MoleMole
{
	inline static constexpr unsigned int UILoginSettingPopWindowController___c_TypeDefinitionIndex = 45782;

	class UILoginSettingPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UILoginSettingPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UILoginSettingPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UILoginSettingPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3D820);
		}
		static ::System::Action** StaticGet___9__17_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UILoginSettingPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3D828);
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
