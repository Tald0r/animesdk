#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIHANDBOOKAVATARAWAKENRIGHTWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC0080E0)
#define MOLEMOLE_UIHANDBOOKAVATARAWAKENRIGHTWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC008120)
#define MOLEMOLE_UIHANDBOOKAVATARAWAKENRIGHTWIDGETCONTROLLER___C__ONUIINIT_B__3_4_OFFSET UNITYSDK_OFFSET(0xC008130)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookAvatarAwakenRightWidgetController___c_TypeDefinitionIndex = 47927;

	class UIHandBookAvatarAwakenRightWidgetController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__3_4()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookAvatarAwakenRightWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2D180);
		}
		static ::MoleMole::UIHandBookAvatarAwakenRightWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookAvatarAwakenRightWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookAvatarAwakenRightWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2D188);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAVATARAWAKENRIGHTWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAVATARAWAKENRIGHTWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAVATARAWAKENRIGHTWIDGETCONTROLLER___C__ONUIINIT_B__3_4_OFFSET))(this);
		}
	};
}
