#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_44EFB945CAE441A3;
class Class_2_0A55B5A82A61DAFA_1;
class Class_2_D89CCC627A66D0AD;
namespace MoleMole { class UILineupSelectContext; }
namespace MoleMole { class UIRoleSelectPageContext; }
namespace MoleMole { class UIYorozuyaAbyssWidgetController; }

#define MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS70_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9393290)
#define MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS70_0__GOTOBEGINBATTLE_B__0_OFFSET UNITYSDK_OFFSET(0x9393C10)
#define MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS70_0__GOTOBEGINBATTLE_B__1_OFFSET UNITYSDK_OFFSET(0x93932A0)
#define MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS70_0__GOTOBEGINBATTLE_B__3_OFFSET UNITYSDK_OFFSET(0x93935D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaAbyssWidgetController___c__DisplayClass70_0_TypeDefinitionIndex = 76413;

	class UIYorozuyaAbyssWidgetController___c__DisplayClass70_0 : public ::System::Object
	{
	public:
		::Class_2_0A55B5A82A61DAFA_1* selectedConfig; // 0x10
		::MoleMole::UIYorozuyaAbyssWidgetController* __4__this; // 0x18
		::MoleMole::UILineupSelectContext* selectedPageData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS70_0__CTOR_OFFSET))(this);
		}

		::MoleMole::UIRoleSelectPageContext* _GotoBeginBattle_b__1(::System::Int32 selectIndex, ::Il2CppArray<::Class_2_D89CCC627A66D0AD*>* currentSelected)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::Class_2_D89CCC627A66D0AD*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS70_0__GOTOBEGINBATTLE_B__1_OFFSET))(this, selectIndex, currentSelected);
		}

		::System::Void _GotoBeginBattle_b__3(::Class_1_44EFB945CAE441A3* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_44EFB945CAE441A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS70_0__GOTOBEGINBATTLE_B__3_OFFSET))(this, data);
		}

		::System::Void _GotoBeginBattle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS70_0__GOTOBEGINBATTLE_B__0_OFFSET))(this);
		}
	};
}
