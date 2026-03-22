#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_723;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIMAINCITYMENUSPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC8B5500)
#define MOLEMOLE_UIMAINCITYMENUSPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC8B5540)
#define MOLEMOLE_UIMAINCITYMENUSPOPWINDOWCONTROLLER___C__INITSUNDRYVIEW_B__14_0_OFFSET UNITYSDK_OFFSET(0xC8B5550)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMenusPopWindowController___c_TypeDefinitionIndex = 71061;

	class UIMainCityMenusPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIMainCityMenusPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIMainCityMenusPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityMenusPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2D310);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_723*>** StaticGet___9__14_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_723*>**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityMenusPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2D318);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitSundryView_b__14_0(::Class_2_208CC9941471731A_723* a, ::Class_2_208CC9941471731A_723* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_723*, ::Class_2_208CC9941471731A_723*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSPOPWINDOWCONTROLLER___C__INITSUNDRYVIEW_B__14_0_OFFSET))(this, a, b);
		}
	};
}
