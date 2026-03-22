#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_44EFB945CAE441A3;
class Class_3_025FF4981524A424_375;
namespace MoleMole { class UIHadalZone_ImpactBattle_LineupWidgetController___c__DisplayClass12_0; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHADALZONE_IMPACTBATTLE_LINEUPWIDGETCONTROLLER___C__DISPLAYCLASS12_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9605960)
#define MOLEMOLE_UIHADALZONE_IMPACTBATTLE_LINEUPWIDGETCONTROLLER___C__DISPLAYCLASS12_1__OPENSELECTROLEPAGE_B__5_OFFSET UNITYSDK_OFFSET(0x9605BA0)
#define MOLEMOLE_UIHADALZONE_IMPACTBATTLE_LINEUPWIDGETCONTROLLER___C__DISPLAYCLASS12_1__OPENSELECTROLEPAGE_B__6_OFFSET UNITYSDK_OFFSET(0x9605E90)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_ImpactBattle_LineupWidgetController___c__DisplayClass12_1_TypeDefinitionIndex = 58622;

	class UIHadalZone_ImpactBattle_LineupWidgetController___c__DisplayClass12_1 : public ::System::Object
	{
	public:
		::Class_1_44EFB945CAE441A3* data; // 0x10
		::MoleMole::UIHadalZone_ImpactBattle_LineupWidgetController___c__DisplayClass12_0* CS___8__locals1; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* needResetSubLayers; // 0x20
		::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_375*>* __9__6; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_IMPACTBATTLE_LINEUPWIDGETCONTROLLER___C__DISPLAYCLASS12_1__CTOR_OFFSET))(this);
		}

		::System::Void _OpenSelectRolePage_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_IMPACTBATTLE_LINEUPWIDGETCONTROLLER___C__DISPLAYCLASS12_1__OPENSELECTROLEPAGE_B__5_OFFSET))(this);
		}

		::System::Void _OpenSelectRolePage_b__6(::System::Boolean b, ::Class_3_025FF4981524A424_375* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_375*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_IMPACTBATTLE_LINEUPWIDGETCONTROLLER___C__DISPLAYCLASS12_1__OPENSELECTROLEPAGE_B__6_OFFSET))(this, b, rsp);
		}
	};
}
