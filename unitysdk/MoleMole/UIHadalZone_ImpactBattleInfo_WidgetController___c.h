#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_375;
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIHADALZONE_IMPACTBATTLEINFO_WIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA928530)
#define MOLEMOLE_UIHADALZONE_IMPACTBATTLEINFO_WIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA928570)
#define MOLEMOLE_UIHADALZONE_IMPACTBATTLEINFO_WIDGETCONTROLLER___C__RESETALLSUBLAYERS_B__11_1_OFFSET UNITYSDK_OFFSET(0xA928580)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_ImpactBattleInfo_WidgetController___c_TypeDefinitionIndex = 50771;

	class UIHadalZone_ImpactBattleInfo_WidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_375*>** StaticGet___9__11_1()
		{
			return (::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_375*>**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_ImpactBattleInfo_WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34980);
		}
		static ::MoleMole::UIHadalZone_ImpactBattleInfo_WidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHadalZone_ImpactBattleInfo_WidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_ImpactBattleInfo_WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34988);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_IMPACTBATTLEINFO_WIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_IMPACTBATTLEINFO_WIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ResetAllSubLayers_b__11_1(::System::Boolean b, ::Class_3_025FF4981524A424_375* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_375*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_IMPACTBATTLEINFO_WIDGETCONTROLLER___C__RESETALLSUBLAYERS_B__11_1_OFFSET))(this, b, rsp);
		}
	};
}
