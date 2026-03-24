#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UISUMMERFISHAQUARIUMPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9EE1480)
#define MOLEMOLE_UISUMMERFISHAQUARIUMPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9EE14C0)
#define MOLEMOLE_UISUMMERFISHAQUARIUMPAGECONTROLLER___C__ONFISHBAGBTN_B__33_0_OFFSET UNITYSDK_OFFSET(0x9EE14D0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishAquariumPageController___c_TypeDefinitionIndex = 51373;

	class UISummerFishAquariumPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UISummerFishAquariumPageController___c** StaticGet___9()
		{
			return (::MoleMole::UISummerFishAquariumPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UISummerFishAquariumPageController___c_TypeDefinitionIndex)->GetStaticField(0x433A0);
		}
		static ::System::Action** StaticGet___9__33_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UISummerFishAquariumPageController___c_TypeDefinitionIndex)->GetStaticField(0x433A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHAQUARIUMPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHAQUARIUMPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnFishBagBtn_b__33_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHAQUARIUMPAGECONTROLLER___C__ONFISHBAGBTN_B__33_0_OFFSET))(this);
		}
	};
}
