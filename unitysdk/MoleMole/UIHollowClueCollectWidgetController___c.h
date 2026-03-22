#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_431;
class Class_2_6D99A03C58ED2B6E_4;
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHOLLOWCLUECOLLECTWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A2DA00)
#define MOLEMOLE_UIHOLLOWCLUECOLLECTWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8A2DA40)
#define MOLEMOLE_UIHOLLOWCLUECOLLECTWIDGETCONTROLLER___C__ONSCROLLVIEWSELECTHANDLE_B__21_0_OFFSET UNITYSDK_OFFSET(0x8A2DA50)
#define MOLEMOLE_UIHOLLOWCLUECOLLECTWIDGETCONTROLLER___C__REFRESHLEFTSCROLLVIEW_B__28_0_OFFSET UNITYSDK_OFFSET(0x8A2DA70)
#define MOLEMOLE_UIHOLLOWCLUECOLLECTWIDGETCONTROLLER___C__REFRESHRIGHTSCROLLVIEW_B__31_0_OFFSET UNITYSDK_OFFSET(0x8A2DAC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowClueCollectWidgetController___c_TypeDefinitionIndex = 76721;

	class UIHollowClueCollectWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_2_208CC9941471731A_431*>** StaticGet___9__28_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_431*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowClueCollectWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36BB0);
		}
		static ::MoleMole::UIHollowClueCollectWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowClueCollectWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowClueCollectWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36BB8);
		}
		static ::System::Converter_2<::Class_2_6D99A03C58ED2B6E_4*, ::System::Int32>** StaticGet___9__21_0()
		{
			return (::System::Converter_2<::Class_2_6D99A03C58ED2B6E_4*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowClueCollectWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36BC0);
		}
		static ::System::Comparison_1<::Class_2_6D99A03C58ED2B6E_4*>** StaticGet___9__31_0()
		{
			return (::System::Comparison_1<::Class_2_6D99A03C58ED2B6E_4*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowClueCollectWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36BC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCLUECOLLECTWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCLUECOLLECTWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnScrollViewSelectHandle_b__21_0(::Class_2_6D99A03C58ED2B6E_4* x)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_6D99A03C58ED2B6E_4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCLUECOLLECTWIDGETCONTROLLER___C__ONSCROLLVIEWSELECTHANDLE_B__21_0_OFFSET))(this, x);
		}

		::System::Int32 _RefreshLeftScrollView_b__28_0(::Class_2_208CC9941471731A_431* x, ::Class_2_208CC9941471731A_431* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_431*, ::Class_2_208CC9941471731A_431*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCLUECOLLECTWIDGETCONTROLLER___C__REFRESHLEFTSCROLLVIEW_B__28_0_OFFSET))(this, x, y);
		}

		::System::Int32 _RefreshRightScrollView_b__31_0(::Class_2_6D99A03C58ED2B6E_4* x, ::Class_2_6D99A03C58ED2B6E_4* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_6D99A03C58ED2B6E_4*, ::Class_2_6D99A03C58ED2B6E_4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCLUECOLLECTWIDGETCONTROLLER___C__REFRESHRIGHTSCROLLVIEW_B__31_0_OFFSET))(this, x, y);
		}
	};
}
