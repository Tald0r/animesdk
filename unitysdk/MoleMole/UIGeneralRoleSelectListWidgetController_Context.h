#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AEB18F409410ABC4_1.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_403;
class Class_1_96623587C8430E5E;

#define MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x8C0F450)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralRoleSelectListWidgetController_Context_TypeDefinitionIndex = 52226;

	class UIGeneralRoleSelectListWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_96623587C8430E5E* TeamRowContext; // 0x28
		::Class_0_16E4307DCC419505_403* DataSource; // 0x30
		::System::Boolean EnableSpecial; // 0x38
		::System::Boolean ShowBuddy; // 0x39
		::System::Boolean ShowPreset; // 0x3A
		::Enum_3_AEB18F409410ABC4_1 InitialMode; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
