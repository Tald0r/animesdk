#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_84CEDCEF739506C1_2;

#define MOLEMOLE_UIACTIVITYBATTLEYCLBOSSLISTROWWIDGETCONTROLLER_ROWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA50B320)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBattleYCLBossListRowWidgetController_RowData_TypeDefinitionIndex = 41390;

	class UIActivityBattleYCLBossListRowWidgetController_RowData : public ::System::Object
	{
	public:
		::Class_2_84CEDCEF739506C1_2* monsterConfig; // 0x10
		::System::Int32 monsterLevel; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLBOSSLISTROWWIDGETCONTROLLER_ROWDATA__CTOR_OFFSET))(this);
		}
	};
}
