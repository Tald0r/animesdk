#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_692;
class Class_2_208CC9941471731A_822;
class Class_2_4E304963EFC1C1E1_Class_2_14EFA41EA8691CBD;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
template <typename T> class Class_2_0D31A1661D004892;

#define MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBF67880)
#define MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBF678C0)
#define MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__ONTABCLICKED_B__15_0_OFFSET UNITYSDK_OFFSET(0xBF67920)
#define MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__ONUIINIT_B__11_0_OFFSET UNITYSDK_OFFSET(0xBF678D0)
#define MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__REFRESHTABS_B__16_0_OFFSET UNITYSDK_OFFSET(0xBF67B70)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCaseManualPageController___c_TypeDefinitionIndex = 46689;

	class UIDisplayCaseManualPageController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_2_208CC9941471731A_822*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_822*>**)Il2CppClass::FromTypeDefinitionIndex(UIDisplayCaseManualPageController___c_TypeDefinitionIndex)->GetStaticField(0x34930);
		}
		static ::MoleMole::UIDisplayCaseManualPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIDisplayCaseManualPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIDisplayCaseManualPageController___c_TypeDefinitionIndex)->GetStaticField(0x34938);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_692*>** StaticGet___9__15_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_692*>**)Il2CppClass::FromTypeDefinitionIndex(UIDisplayCaseManualPageController___c_TypeDefinitionIndex)->GetStaticField(0x34940);
		}
		static ::System::Func_2<::Class_2_0D31A1661D004892<::Class_2_4E304963EFC1C1E1_Class_2_14EFA41EA8691CBD*>*, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::Class_2_0D31A1661D004892<::Class_2_4E304963EFC1C1E1_Class_2_14EFA41EA8691CBD*>*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIDisplayCaseManualPageController___c_TypeDefinitionIndex)->GetStaticField(0x34948);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUIInit_b__11_0(::Class_2_208CC9941471731A_822* i, ::Class_2_208CC9941471731A_822* j)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_822*, ::Class_2_208CC9941471731A_822*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__ONUIINIT_B__11_0_OFFSET))(this, i, j);
		}

		::System::Int32 _OnTabClicked_b__15_0(::Class_2_208CC9941471731A_692* a, ::Class_2_208CC9941471731A_692* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_692*, ::Class_2_208CC9941471731A_692*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__ONTABCLICKED_B__15_0_OFFSET))(this, a, b);
		}

		::System::Boolean _RefreshTabs_b__16_0(::Class_2_0D31A1661D004892<::Class_2_4E304963EFC1C1E1_Class_2_14EFA41EA8691CBD*>* v)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_0D31A1661D004892<::Class_2_4E304963EFC1C1E1_Class_2_14EFA41EA8691CBD*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__REFRESHTABS_B__16_0_OFFSET))(this, v);
		}
	};
}
