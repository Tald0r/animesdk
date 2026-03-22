#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_241;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIINLEVELABYSSS2MISSIONWIDGETCONTROLLER_VIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9629AF0)
#define MOLEMOLE_UIINLEVELABYSSS2MISSIONWIDGETCONTROLLER_VIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9629B30)
#define MOLEMOLE_UIINLEVELABYSSS2MISSIONWIDGETCONTROLLER_VIEWMODEL___C__ONCREATEPROPERTY_B__12_1_OFFSET UNITYSDK_OFFSET(0x9629B40)
#define MOLEMOLE_UIINLEVELABYSSS2MISSIONWIDGETCONTROLLER_VIEWMODEL___C__ONCREATEPROPERTY_B__12_2_OFFSET UNITYSDK_OFFSET(0x9629B90)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelAbyssS2MissionWidgetController_ViewModel___c_TypeDefinitionIndex = 76099;

	class UIInLevelAbyssS2MissionWidgetController_ViewModel___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIInLevelAbyssS2MissionWidgetController_ViewModel___c** StaticGet___9()
		{
			return (::MoleMole::UIInLevelAbyssS2MissionWidgetController_ViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelAbyssS2MissionWidgetController_ViewModel___c_TypeDefinitionIndex)->GetStaticField(0x36BF0);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_241*, ::System::Int32>** StaticGet___9__12_2()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_241*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelAbyssS2MissionWidgetController_ViewModel___c_TypeDefinitionIndex)->GetStaticField(0x36BF8);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_241*>** StaticGet___9__12_1()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_241*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelAbyssS2MissionWidgetController_ViewModel___c_TypeDefinitionIndex)->GetStaticField(0x36C00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELABYSSS2MISSIONWIDGETCONTROLLER_VIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELABYSSS2MISSIONWIDGETCONTROLLER_VIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnCreateProperty_b__12_1(::Class_2_208CC9941471731A_241* x, ::Class_2_208CC9941471731A_241* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_241*, ::Class_2_208CC9941471731A_241*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELABYSSS2MISSIONWIDGETCONTROLLER_VIEWMODEL___C__ONCREATEPROPERTY_B__12_1_OFFSET))(this, x, y);
		}

		::System::Int32 _OnCreateProperty_b__12_2(::Class_2_208CC9941471731A_241* x)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_241*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELABYSSS2MISSIONWIDGETCONTROLLER_VIEWMODEL___C__ONCREATEPROPERTY_B__12_2_OFFSET))(this, x);
		}
	};
}
