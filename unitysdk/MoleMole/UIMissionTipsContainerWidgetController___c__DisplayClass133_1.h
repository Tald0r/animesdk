#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController___c__DisplayClass133_0; }
namespace MoleMole { class UIMissionTipsRowMultiWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS133_1__CTOR_OFFSET UNITYSDK_OFFSET(0x92B3E90)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS133_1__PLAYMISSIONSYNC_B__0_OFFSET UNITYSDK_OFFSET(0x92B3EF0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS133_1__PLAYMISSIONSYNC_B__2_OFFSET UNITYSDK_OFFSET(0x92B3EA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass133_1_TypeDefinitionIndex = 75681;

	class UIMissionTipsContainerWidgetController___c__DisplayClass133_1 : public ::System::Object
	{
	public:
		::MoleMole::UIMissionTipsContainerWidgetController___c__DisplayClass133_0* CS___8__locals1; // 0x10
		::MoleMole::UIMissionTipsRowMultiWidgetController* tmp; // 0x18
		::System::Action* __9__2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS133_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayMissionSync_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS133_1__PLAYMISSIONSYNC_B__2_OFFSET))(this);
		}

		::System::Void _PlayMissionSync_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS133_1__PLAYMISSIONSYNC_B__0_OFFSET))(this);
		}
	};
}
