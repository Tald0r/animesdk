#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_968;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIMAINCITYMENUSPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCFA0380)
#define MOLEMOLE_UIMAINCITYMENUSPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCFA03C0)
#define MOLEMOLE_UIMAINCITYMENUSPOPWINDOWCONTROLLER___C__INITSUNDRYVIEW_B__14_0_OFFSET UNITYSDK_OFFSET(0xCFA03D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMenusPopWindowController___c_TypeDefinitionIndex = 60934;

	class UIMainCityMenusPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIMainCityMenusPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIMainCityMenusPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityMenusPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2E790);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_968*>** StaticGet___9__14_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_968*>**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityMenusPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2E798);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitSundryView_b__14_0(::Class_2_208CC9941471731A_968* a, ::Class_2_208CC9941471731A_968* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_968*, ::Class_2_208CC9941471731A_968*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSPOPWINDOWCONTROLLER___C__INITSUNDRYVIEW_B__14_0_OFFSET))(this, a, b);
		}
	};
}
