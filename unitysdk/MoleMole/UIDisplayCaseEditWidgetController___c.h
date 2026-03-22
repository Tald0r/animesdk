#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D890F2F8C9260D13;
class Class_2_208CC9941471731A_822;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA272F30)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA272F70)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___C__INITSCROLLVIEW_B__35_0_OFFSET UNITYSDK_OFFSET(0xA272FD0)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___C__ONUIINIT_B__15_2_OFFSET UNITYSDK_OFFSET(0xA272F80)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___C__TRYSAVE_B__40_0_OFFSET UNITYSDK_OFFSET(0xA2730A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCaseEditWidgetController___c_TypeDefinitionIndex = 54853;

	class UIDisplayCaseEditWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIDisplayCaseEditWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIDisplayCaseEditWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIDisplayCaseEditWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3D710);
		}
		static ::System::Comparison_1<::Class_1_D890F2F8C9260D13*>** StaticGet___9__35_0()
		{
			return (::System::Comparison_1<::Class_1_D890F2F8C9260D13*>**)Il2CppClass::FromTypeDefinitionIndex(UIDisplayCaseEditWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3D718);
		}
		static ::System::Action** StaticGet___9__40_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIDisplayCaseEditWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3D720);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_822*>** StaticGet___9__15_2()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_822*>**)Il2CppClass::FromTypeDefinitionIndex(UIDisplayCaseEditWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3D728);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUIInit_b__15_2(::Class_2_208CC9941471731A_822* i, ::Class_2_208CC9941471731A_822* j)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_822*, ::Class_2_208CC9941471731A_822*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___C__ONUIINIT_B__15_2_OFFSET))(this, i, j);
		}

		::System::Int32 _InitScrollView_b__35_0(::Class_1_D890F2F8C9260D13* a, ::Class_1_D890F2F8C9260D13* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_D890F2F8C9260D13*, ::Class_1_D890F2F8C9260D13*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___C__INITSCROLLVIEW_B__35_0_OFFSET))(this, a, b);
		}

		::System::Void _TrySave_b__40_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___C__TRYSAVE_B__40_0_OFFSET))(this);
		}
	};
}
