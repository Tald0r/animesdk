#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIHANDBOOKNORMALMATERIALWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9D9F3A0)
#define MOLEMOLE_UIHANDBOOKNORMALMATERIALWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9D9F3E0)
#define MOLEMOLE_UIHANDBOOKNORMALMATERIALWIDGETCONTROLLER___C__ONUIINIT_B__3_4_OFFSET UNITYSDK_OFFSET(0x9D9F3F0)
#define MOLEMOLE_UIHANDBOOKNORMALMATERIALWIDGETCONTROLLER___C__ONUIINIT_B__3_5_OFFSET UNITYSDK_OFFSET(0x9D9F510)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookNormalMaterialWidgetController___c_TypeDefinitionIndex = 49720;

	class UIHandBookNormalMaterialWidgetController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__3_5()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookNormalMaterialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x326A0);
		}
		static ::MoleMole::UIHandBookNormalMaterialWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookNormalMaterialWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookNormalMaterialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x326A8);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__3_4()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookNormalMaterialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x326B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKNORMALMATERIALWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKNORMALMATERIALWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKNORMALMATERIALWIDGETCONTROLLER___C__ONUIINIT_B__3_4_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKNORMALMATERIALWIDGETCONTROLLER___C__ONUIINIT_B__3_5_OFFSET))(this);
		}
	};
}
