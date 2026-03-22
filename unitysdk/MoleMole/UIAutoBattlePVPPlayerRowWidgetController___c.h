#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIAUTOBATTLEPVPPLAYERROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDC51260)
#define MOLEMOLE_UIAUTOBATTLEPVPPLAYERROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDC512A0)
#define MOLEMOLE_UIAUTOBATTLEPVPPLAYERROWWIDGETCONTROLLER___C__ONADDFRIENDHANDLE_B__22_0_OFFSET UNITYSDK_OFFSET(0xDC512B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVPPlayerRowWidgetController___c_TypeDefinitionIndex = 74162;

	class UIAutoBattlePVPPlayerRowWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIAutoBattlePVPPlayerRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIAutoBattlePVPPlayerRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePVPPlayerRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C2F0);
		}
		static ::System::Action** StaticGet___9__22_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePVPPlayerRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C2F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPPLAYERROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPPLAYERROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnAddFriendHandle_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPPLAYERROWWIDGETCONTROLLER___C__ONADDFRIENDHANDLE_B__22_0_OFFSET))(this);
		}
	};
}
