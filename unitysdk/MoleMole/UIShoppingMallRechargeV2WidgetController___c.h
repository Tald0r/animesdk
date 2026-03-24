#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UISHOPPINGMALLRECHARGEV2WIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCA8BE30)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEV2WIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCA8BE70)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEV2WIDGETCONTROLLER___C__REFRESHCLOUD_B__13_0_OFFSET UNITYSDK_OFFSET(0xCA8BE80)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEV2WIDGETCONTROLLER___C__REFRESHCLOUD_B__13_1_OFFSET UNITYSDK_OFFSET(0xCA8C190)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallRechargeV2WidgetController___c_TypeDefinitionIndex = 38632;

	class UIShoppingMallRechargeV2WidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIShoppingMallRechargeV2WidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIShoppingMallRechargeV2WidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIShoppingMallRechargeV2WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x444A0);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__13_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIShoppingMallRechargeV2WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x444A8);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__13_1()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIShoppingMallRechargeV2WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x444B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEV2WIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEV2WIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshCloud_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEV2WIDGETCONTROLLER___C__REFRESHCLOUD_B__13_0_OFFSET))(this);
		}

		::System::Void _RefreshCloud_b__13_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEV2WIDGETCONTROLLER___C__REFRESHCLOUD_B__13_1_OFFSET))(this);
		}
	};
}
