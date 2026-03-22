#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_D89CCC627A66D0AD;
class Class_3_48A3D3A34C52331D_14;
namespace MoleMole { class UILineupSelectContext_OnGetRoleSelectContextDel; }
namespace MoleMole { class UIRoleSelectPageContext; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBD7B620)
#define MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBD7B660)
#define MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__GOTOBEGINBATTLE_B__20_1_OFFSET UNITYSDK_OFFSET(0xBD7B670)
#define MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__GOTOBEGINBATTLE_B__20_3_OFFSET UNITYSDK_OFFSET(0xBD7B750)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssApreggioTeamWidgetController___c_TypeDefinitionIndex = 56517;

	class UIAbyssApreggioTeamWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIAbyssApreggioTeamWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssApreggioTeamWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssApreggioTeamWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2C990);
		}
		static ::System::Action_1<::Class_3_48A3D3A34C52331D_14*>** StaticGet___9__20_3()
		{
			return (::System::Action_1<::Class_3_48A3D3A34C52331D_14*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssApreggioTeamWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2C998);
		}
		static ::MoleMole::UILineupSelectContext_OnGetRoleSelectContextDel** StaticGet___9__20_1()
		{
			return (::MoleMole::UILineupSelectContext_OnGetRoleSelectContextDel**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssApreggioTeamWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2C9A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::MoleMole::UIRoleSelectPageContext* _GotoBeginBattle_b__20_1(::System::Int32 selectIndex, ::Il2CppArray<::Class_2_D89CCC627A66D0AD*>* currentSelected)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::Class_2_D89CCC627A66D0AD*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__GOTOBEGINBATTLE_B__20_1_OFFSET))(this, selectIndex, currentSelected);
		}

		::System::Void _GotoBeginBattle_b__20_3(::Class_3_48A3D3A34C52331D_14* beginHollowData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_48A3D3A34C52331D_14*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__GOTOBEGINBATTLE_B__20_3_OFFSET))(this, beginHollowData);
		}
	};
}
