#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER___C__BACKTOMAIN_B__10_0_OFFSET UNITYSDK_OFFSET(0xCA78A60)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCA78A10)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCA78A50)

namespace MoleMole
{
	inline static constexpr unsigned int UIRamenStoreWidgetController___c_TypeDefinitionIndex = 73224;

	class UIRamenStoreWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIRamenStoreWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIRamenStoreWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRamenStoreWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44470);
		}
		static ::System::Action** StaticGet___9__10_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRamenStoreWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44478);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _BackToMain_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER___C__BACKTOMAIN_B__10_0_OFFSET))(this);
		}
	};
}
