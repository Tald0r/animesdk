#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7F91360)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__CLEARLASTTABMANUALNEW_B__40_0_OFFSET UNITYSDK_OFFSET(0x7F91530)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__CLEARMANUALNEWS_B__32_0_OFFSET UNITYSDK_OFFSET(0x7F91470)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7F913A0)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__ONMISSIONITEMCLICKHANDLE_B__27_0_OFFSET UNITYSDK_OFFSET(0x7F913B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotMissionWidgetController___c_TypeDefinitionIndex = 56257;

	class UIInterKnotMissionWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__40_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotMissionWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37480);
		}
		static ::MoleMole::UIInterKnotMissionWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIInterKnotMissionWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotMissionWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37488);
		}
		static ::System::Action** StaticGet___9__27_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotMissionWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37490);
		}
		static ::System::Action** StaticGet___9__32_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotMissionWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37498);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnMissionItemClickHandle_b__27_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__ONMISSIONITEMCLICKHANDLE_B__27_0_OFFSET))(this);
		}

		::System::Void _ClearManualNews_b__32_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__CLEARMANUALNEWS_B__32_0_OFFSET))(this);
		}

		::System::Void _ClearLastTabManualNew_b__40_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__CLEARLASTTABMANUALNEW_B__40_0_OFFSET))(this);
		}
	};
}
