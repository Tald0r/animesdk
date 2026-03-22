#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsRowMultiWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS140_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAF50120)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS140_0__PLAYMISSIONWIDGETUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0xAF50130)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS140_0__PLAYMISSIONWIDGETUPDATE_B__1_OFFSET UNITYSDK_OFFSET(0xAF501C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass140_0_TypeDefinitionIndex = 75690;

	class UIMissionTipsContainerWidgetController___c__DisplayClass140_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::MoleMole::UIMissionTipsRowMultiWidgetController* widget; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS140_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayMissionWidgetUpdate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS140_0__PLAYMISSIONWIDGETUPDATE_B__0_OFFSET))(this);
		}

		::System::Void _PlayMissionWidgetUpdate_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS140_0__PLAYMISSIONWIDGETUPDATE_B__1_OFFSET))(this);
		}
	};
}
