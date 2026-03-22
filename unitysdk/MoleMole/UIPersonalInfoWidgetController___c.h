#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIPERSONALINFOWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x739BEA0)
#define MOLEMOLE_UIPERSONALINFOWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x739BEE0)
#define MOLEMOLE_UIPERSONALINFOWIDGETCONTROLLER___C__ONCLICKEDITBIRTHDAY_G__REFRESHBIRTHDAYINFO_18_0_OFFSET UNITYSDK_OFFSET(0x739BEF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPersonalInfoWidgetController___c_TypeDefinitionIndex = 39566;

	class UIPersonalInfoWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIPersonalInfoWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIPersonalInfoWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIPersonalInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36CB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERSONALINFOWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERSONALINFOWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickEditBirthday_g__RefreshBirthdayInfo_18_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERSONALINFOWIDGETCONTROLLER___C__ONCLICKEDITBIRTHDAY_G__REFRESHBIRTHDAYINFO_18_0_OFFSET))(this);
		}
	};
}
