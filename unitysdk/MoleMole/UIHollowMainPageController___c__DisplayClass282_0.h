#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowMainPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS282_0__CHANGEGRID_B__0_OFFSET UNITYSDK_OFFSET(0x80AF970)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS282_0__CTOR_OFFSET UNITYSDK_OFFSET(0x80AF960)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass282_0_TypeDefinitionIndex = 52585;

	class UIHollowMainPageController___c__DisplayClass282_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowMainPageController* __4__this; // 0x10
		::System::Action* onChangeGridFinish; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS282_0__CTOR_OFFSET))(this);
		}

		::System::Void _ChangeGrid_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS282_0__CHANGEGRID_B__0_OFFSET))(this);
		}
	};
}
