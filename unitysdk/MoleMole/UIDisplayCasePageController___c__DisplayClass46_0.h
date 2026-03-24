#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIDisplayCasePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS46_0__CTOR_OFFSET UNITYSDK_OFFSET(0xADCB120)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS46_0__SAVEALL_B__1_OFFSET UNITYSDK_OFFSET(0xADCB130)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS46_0__SAVEALL_B__2_OFFSET UNITYSDK_OFFSET(0xADCB280)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCasePageController___c__DisplayClass46_0_TypeDefinitionIndex = 45015;

	class UIDisplayCasePageController___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::System::Action* successCb; // 0x10
		::MoleMole::UIDisplayCasePageController* __4__this; // 0x18
		::System::Action* errorCb; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS46_0__CTOR_OFFSET))(this);
		}

		::System::Void _SaveAll_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS46_0__SAVEALL_B__1_OFFSET))(this);
		}

		::System::Void _SaveAll_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS46_0__SAVEALL_B__2_OFFSET))(this);
		}
	};
}
