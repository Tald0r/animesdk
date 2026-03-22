#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_646;
class Class_3_48A3D3A34C52331D_14;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8FB05B0)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8FB05F0)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__ONHOLLOWRECONNECTHANDLE_B__18_0_OFFSET UNITYSDK_OFFSET(0x8FB0610)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__ONHOLLOWRECONNECTHANDLE_B__18_1_OFFSET UNITYSDK_OFFSET(0x8FB0720)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__ONSHOW_B__26_0_OFFSET UNITYSDK_OFFSET(0x8FB0B60)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__ONSTARTCLICKHANDLE_B__17_0_OFFSET UNITYSDK_OFFSET(0x8FB0600)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssArpeggioLevelWidgetController___c_TypeDefinitionIndex = 50231;

	class UIAbyssArpeggioLevelWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIAbyssArpeggioLevelWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssArpeggioLevelWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssArpeggioLevelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3EED0);
		}
		static ::System::Action** StaticGet___9__18_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssArpeggioLevelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3EED8);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_646*>** StaticGet___9__26_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_646*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssArpeggioLevelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3EEE0);
		}
		static ::System::Action_1<::Class_3_48A3D3A34C52331D_14*>** StaticGet___9__17_0()
		{
			return (::System::Action_1<::Class_3_48A3D3A34C52331D_14*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssArpeggioLevelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3EEE8);
		}
		static ::System::Action** StaticGet___9__18_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssArpeggioLevelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3EEF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnStartClickHandle_b__17_0(::Class_3_48A3D3A34C52331D_14* ret)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_48A3D3A34C52331D_14*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__ONSTARTCLICKHANDLE_B__17_0_OFFSET))(this, ret);
		}

		::System::Void _OnHollowReconnectHandle_b__18_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__ONHOLLOWRECONNECTHANDLE_B__18_0_OFFSET))(this);
		}

		::System::Void _OnHollowReconnectHandle_b__18_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__ONHOLLOWRECONNECTHANDLE_B__18_1_OFFSET))(this);
		}

		::System::Int32 _OnShow_b__26_0(::Class_2_208CC9941471731A_646* a, ::Class_2_208CC9941471731A_646* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_646*, ::Class_2_208CC9941471731A_646*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__ONSHOW_B__26_0_OFFSET))(this, a, b);
		}
	};
}
