#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UISUIBIANBUSINESSTOPPANELWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB6F6950)
#define MOLEMOLE_UISUIBIANBUSINESSTOPPANELWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB6F6990)
#define MOLEMOLE_UISUIBIANBUSINESSTOPPANELWIDGETCONTROLLER___C__ONUIINIT_B__2_0_OFFSET UNITYSDK_OFFSET(0xB6F69A0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianBusinessTopPanelWidgetController___c_TypeDefinitionIndex = 45977;

	class UISuibianBusinessTopPanelWidgetController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__2_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UISuibianBusinessTopPanelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F2E0);
		}
		static ::MoleMole::UISuibianBusinessTopPanelWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianBusinessTopPanelWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianBusinessTopPanelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F2E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANBUSINESSTOPPANELWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANBUSINESSTOPPANELWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANBUSINESSTOPPANELWIDGETCONTROLLER___C__ONUIINIT_B__2_0_OFFSET))(this);
		}
	};
}
