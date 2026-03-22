#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2DD280)
#define MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB2DD2C0)
#define MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER___C__ONUIINIT_B__9_1_OFFSET UNITYSDK_OFFSET(0xB2DD2D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendSystemPlayerInfoPageController___c_TypeDefinitionIndex = 71779;

	class UIFriendSystemPlayerInfoPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIFriendSystemPlayerInfoPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIFriendSystemPlayerInfoPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIFriendSystemPlayerInfoPageController___c_TypeDefinitionIndex)->GetStaticField(0x2D020);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__9_1()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIFriendSystemPlayerInfoPageController___c_TypeDefinitionIndex)->GetStaticField(0x2D028);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__9_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER___C__ONUIINIT_B__9_1_OFFSET))(this);
		}
	};
}
