#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x739BD80)
#define MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x739BDC0)
#define MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__ONCLICKEDITBIRTHDAY_G__REFRESHBIRTHDAYINFO_15_0_OFFSET UNITYSDK_OFFSET(0x739BDD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPersonalInfoEditPopWindowController___c_TypeDefinitionIndex = 59017;

	class UIPersonalInfoEditPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIPersonalInfoEditPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIPersonalInfoEditPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIPersonalInfoEditPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x36CA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickEditBirthday_g__RefreshBirthdayInfo_15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__ONCLICKEDITBIRTHDAY_G__REFRESHBIRTHDAYINFO_15_0_OFFSET))(this);
		}
	};
}
