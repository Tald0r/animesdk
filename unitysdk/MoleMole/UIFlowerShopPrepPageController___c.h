#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIFLOWERSHOPPREPPAGECONTROLLER___C__BINDVIEWCALLBACKS_B__14_0_OFFSET UNITYSDK_OFFSET(0x95E7AA0)
#define MOLEMOLE_UIFLOWERSHOPPREPPAGECONTROLLER___C__BINDVIEWCALLBACKS_B__14_10_OFFSET UNITYSDK_OFFSET(0x95E7B30)
#define MOLEMOLE_UIFLOWERSHOPPREPPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x95E7A50)
#define MOLEMOLE_UIFLOWERSHOPPREPPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x95E7A90)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerShopPrepPageController___c_TypeDefinitionIndex = 36623;

	class UIFlowerShopPrepPageController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Boolean>** StaticGet___9__14_10()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIFlowerShopPrepPageController___c_TypeDefinitionIndex)->GetStaticField(0x36AD0);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__14_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIFlowerShopPrepPageController___c_TypeDefinitionIndex)->GetStaticField(0x36AD8);
		}
		static ::MoleMole::UIFlowerShopPrepPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIFlowerShopPrepPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIFlowerShopPrepPageController___c_TypeDefinitionIndex)->GetStaticField(0x36AE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREPPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREPPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _BindViewCallbacks_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREPPAGECONTROLLER___C__BINDVIEWCALLBACKS_B__14_0_OFFSET))(this);
		}

		::System::Void _BindViewCallbacks_b__14_10(::System::Boolean jump)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREPPAGECONTROLLER___C__BINDVIEWCALLBACKS_B__14_10_OFFSET))(this, jump);
		}
	};
}
