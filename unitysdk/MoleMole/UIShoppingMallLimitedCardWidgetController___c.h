#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBEAD080)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBEAD0C0)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETCONTROLLER___C__ONCLICKRECEIVEBTN_B__8_0_OFFSET UNITYSDK_OFFSET(0xBEAD0D0)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETCONTROLLER___C__ONCLICKRECEIVEBTN_B__8_1_OFFSET UNITYSDK_OFFSET(0xBEAD1A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallLimitedCardWidgetController___c_TypeDefinitionIndex = 62564;

	class UIShoppingMallLimitedCardWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIShoppingMallLimitedCardWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIShoppingMallLimitedCardWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIShoppingMallLimitedCardWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38EF0);
		}
		static ::System::Action** StaticGet___9__8_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIShoppingMallLimitedCardWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38EF8);
		}
		static ::System::Action** StaticGet___9__8_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIShoppingMallLimitedCardWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38F00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickReceiveBtn_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETCONTROLLER___C__ONCLICKRECEIVEBTN_B__8_0_OFFSET))(this);
		}

		::System::Void _OnClickReceiveBtn_b__8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARDWIDGETCONTROLLER___C__ONCLICKRECEIVEBTN_B__8_1_OFFSET))(this);
		}
	};
}
