#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_5;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C;
namespace MoleMole { class UIPartnerDatePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x748C7A0)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCONFIRMSELECT_B__0_OFFSET UNITYSDK_OFFSET(0x748CBE0)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCONFIRMSELECT_B__1_OFFSET UNITYSDK_OFFSET(0x748C7B0)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCONFIRMSELECT_B__2_OFFSET UNITYSDK_OFFSET(0x748CB50)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCONFIRMSELECT_B__3_OFFSET UNITYSDK_OFFSET(0x748CC80)

namespace MoleMole
{
	inline static constexpr unsigned int UIPartnerDatePageController___c__DisplayClass22_0_TypeDefinitionIndex = 46005;

	class UIPartnerDatePageController___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C* __9__2; // 0x10
		::MoleMole::UIPartnerDatePageController* __4__this; // 0x18
		::System::Action* __9__3; // 0x20
		::System::Int32 partnerID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnConfirmSelect_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCONFIRMSELECT_B__1_OFFSET))(this);
		}

		::System::Void _OnConfirmSelect_b__2(::Class_0_16E4307DCC419505_5* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCONFIRMSELECT_B__2_OFFSET))(this, rsp);
		}

		::System::Void _OnConfirmSelect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCONFIRMSELECT_B__0_OFFSET))(this);
		}

		::System::Void _OnConfirmSelect_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCONFIRMSELECT_B__3_OFFSET))(this);
		}
	};
}
