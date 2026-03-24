#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC804580)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC8045C0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__GOTOMAINCITY_B__60_0_OFFSET UNITYSDK_OFFSET(0xC804700)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__ONCLICKTALENTHANDLE_B__52_0_OFFSET UNITYSDK_OFFSET(0xC8045D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2EntrancePageController___c_TypeDefinitionIndex = 80158;

	class UIAbyssS2EntrancePageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__60_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2EntrancePageController___c_TypeDefinitionIndex)->GetStaticField(0x341B0);
		}
		static ::MoleMole::UIAbyssS2EntrancePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssS2EntrancePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2EntrancePageController___c_TypeDefinitionIndex)->GetStaticField(0x341B8);
		}
		static ::System::Action** StaticGet___9__52_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2EntrancePageController___c_TypeDefinitionIndex)->GetStaticField(0x341C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickTalentHandle_b__52_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__ONCLICKTALENTHANDLE_B__52_0_OFFSET))(this);
		}

		::System::Void _GoToMainCity_b__60_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__GOTOMAINCITY_B__60_0_OFFSET))(this);
		}
	};
}
