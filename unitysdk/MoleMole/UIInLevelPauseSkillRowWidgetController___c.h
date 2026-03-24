#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_281;
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6C9A000)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6C9A040)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__REFRESHDESC_B__10_0_OFFSET UNITYSDK_OFFSET(0x6C9A050)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__REFRESHINFO_B__11_0_OFFSET UNITYSDK_OFFSET(0x6C9A140)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__REFRESHINFO_B__11_1_OFFSET UNITYSDK_OFFSET(0x6C9A230)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseSkillRowWidgetController___c_TypeDefinitionIndex = 80186;

	class UIInLevelPauseSkillRowWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIInLevelPauseSkillRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIInLevelPauseSkillRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseSkillRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2E690);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_281*>** StaticGet___9__11_1()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_281*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseSkillRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2E698);
		}
		static ::System::Predicate_1<::Class_2_208CC9941471731A_281*>** StaticGet___9__11_0()
		{
			return (::System::Predicate_1<::Class_2_208CC9941471731A_281*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseSkillRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2E6A0);
		}
		static ::System::Predicate_1<::Class_2_208CC9941471731A_281*>** StaticGet___9__10_0()
		{
			return (::System::Predicate_1<::Class_2_208CC9941471731A_281*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseSkillRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2E6A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshDesc_b__10_0(::Class_2_208CC9941471731A_281* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_281*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__REFRESHDESC_B__10_0_OFFSET))(this, x);
		}

		::System::Boolean _RefreshInfo_b__11_0(::Class_2_208CC9941471731A_281* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_281*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__REFRESHINFO_B__11_0_OFFSET))(this, x);
		}

		::System::Int32 _RefreshInfo_b__11_1(::Class_2_208CC9941471731A_281* a, ::Class_2_208CC9941471731A_281* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_281*, ::Class_2_208CC9941471731A_281*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__REFRESHINFO_B__11_1_OFFSET))(this, a, b);
		}
	};
}
