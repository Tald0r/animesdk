#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UILOGINPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7468C30)
#define MOLEMOLE_UILOGINPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7468C70)
#define MOLEMOLE_UILOGINPAGECONTROLLER___C__ISDISPATCHFREQUENTATTEMPTS_B__80_0_OFFSET UNITYSDK_OFFSET(0x7468D40)
#define MOLEMOLE_UILOGINPAGECONTROLLER___C__ONSETLANGUAGEVOICE_B__51_0_OFFSET UNITYSDK_OFFSET(0x7468C80)

namespace MoleMole
{
	inline static constexpr unsigned int UILoginPageController___c_TypeDefinitionIndex = 52009;

	class UILoginPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__80_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UILoginPageController___c_TypeDefinitionIndex)->GetStaticField(0x3F210);
		}
		static ::MoleMole::UILoginPageController___c** StaticGet___9()
		{
			return (::MoleMole::UILoginPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UILoginPageController___c_TypeDefinitionIndex)->GetStaticField(0x3F218);
		}
		static ::System::Action** StaticGet___9__51_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UILoginPageController___c_TypeDefinitionIndex)->GetStaticField(0x3F220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnSetLanguageVoice_b__51_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___C__ONSETLANGUAGEVOICE_B__51_0_OFFSET))(this);
		}

		::System::Void _IsDispatchFrequentAttempts_b__80_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___C__ISDISPATCHFREQUENTATTEMPTS_B__80_0_OFFSET))(this);
		}
	};
}
