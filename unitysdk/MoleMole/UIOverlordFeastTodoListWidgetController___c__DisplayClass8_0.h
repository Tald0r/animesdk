#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2DCFFE2CB95FCCCE;
namespace MoleMole { class UIOverlordFeastTodoListWidgetController; }

#define MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCFC47B0)
#define MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__SETGENERALQUEST_B__0_OFFSET UNITYSDK_OFFSET(0xCFC47C0)
#define MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__SETGENERALQUEST_B__1_OFFSET UNITYSDK_OFFSET(0xCFC47E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastTodoListWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 65295;

	class UIOverlordFeastTodoListWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MoleMole::UIOverlordFeastTodoListWidgetController* __4__this; // 0x10
		::System::Int32 questID; // 0x18
		::System::Int32 tabIndex; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetGeneralQuest_b__0(::Class_1_2DCFFE2CB95FCCCE* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_2DCFFE2CB95FCCCE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__SETGENERALQUEST_B__0_OFFSET))(this, x);
		}

		::System::Void _SetGeneralQuest_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__SETGENERALQUEST_B__1_OFFSET))(this);
		}
	};
}
