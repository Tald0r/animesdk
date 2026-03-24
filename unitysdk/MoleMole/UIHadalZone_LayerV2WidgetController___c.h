#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_254;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD588B40)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD588B80)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___C__ONUIOPEN_B__14_1_OFFSET UNITYSDK_OFFSET(0xD588B90)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___C___BINDGAMEPAD_B__18_0_OFFSET UNITYSDK_OFFSET(0xD588D50)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___C___UPDATEZONES_B__28_0_OFFSET UNITYSDK_OFFSET(0xD588E00)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_LayerV2WidgetController___c_TypeDefinitionIndex = 54092;

	class UIHadalZone_LayerV2WidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__14_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_LayerV2WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3B810);
		}
		static ::System::Func_2<::Class_1_5DA2E7556103D5A3_254*, ::System::Boolean>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::Class_1_5DA2E7556103D5A3_254*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_LayerV2WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3B818);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__18_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_LayerV2WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3B820);
		}
		static ::MoleMole::UIHadalZone_LayerV2WidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHadalZone_LayerV2WidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_LayerV2WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3B828);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__14_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___C__ONUIOPEN_B__14_1_OFFSET))(this);
		}

		::System::Void __BindGamepad_b__18_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___C___BINDGAMEPAD_B__18_0_OFFSET))(this);
		}

		::System::Boolean __UpdateZones_b__28_0(::Class_1_5DA2E7556103D5A3_254* entrance)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_254*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___C___UPDATEZONES_B__28_0_OFFSET))(this, entrance);
		}
	};
}
