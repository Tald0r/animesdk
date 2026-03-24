#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER___C__BINDEVENT_B__10_0_OFFSET UNITYSDK_OFFSET(0x9113CD0)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER___C__BINDEVENT_B__10_1_OFFSET UNITYSDK_OFFSET(0x9113DF0)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9113C80)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9113CC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendSystemWidgetController___c_TypeDefinitionIndex = 49627;

	class UIFriendSystemWidgetController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__10_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIFriendSystemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x397A0);
		}
		static ::MoleMole::UIFriendSystemWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIFriendSystemWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIFriendSystemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x397A8);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__10_1()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIFriendSystemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x397B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _BindEvent_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER___C__BINDEVENT_B__10_0_OFFSET))(this);
		}

		::System::Void _BindEvent_b__10_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER___C__BINDEVENT_B__10_1_OFFSET))(this);
		}
	};
}
