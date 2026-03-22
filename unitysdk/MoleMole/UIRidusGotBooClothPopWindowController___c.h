#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIRIDUSGOTBOOCLOTHPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x73B2F00)
#define MOLEMOLE_UIRIDUSGOTBOOCLOTHPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x73B2F40)
#define MOLEMOLE_UIRIDUSGOTBOOCLOTHPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__10_0_OFFSET UNITYSDK_OFFSET(0x73B2F50)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooClothPopWindowController___c_TypeDefinitionIndex = 61897;

	class UIRidusGotBooClothPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIRidusGotBooClothPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIRidusGotBooClothPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooClothPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x36D00);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__10_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooClothPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x36D08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOCLOTHPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOCLOTHPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOCLOTHPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__10_0_OFFSET))(this);
		}
	};
}
