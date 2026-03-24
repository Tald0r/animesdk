#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AEB18F409410ABC4_1.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_206;
class Class_1_7C0A11AE63A21AA0;

#define MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x6C684C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralRoleSelectListWidgetController_Context_TypeDefinitionIndex = 62751;

	class UIGeneralRoleSelectListWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_206* DataSource; // 0x28
		::Class_1_7C0A11AE63A21AA0* TeamRowContext; // 0x30
		::System::Boolean ShowPreset; // 0x38
		::System::Boolean ShowBuddy; // 0x39
		::System::Boolean EnableSpecial; // 0x3A
		::Enum_3_AEB18F409410ABC4_1 InitialMode; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
