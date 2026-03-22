#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UISUMMERFISHAQUARIUMPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAE90170)
#define MOLEMOLE_UISUMMERFISHAQUARIUMPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAE901B0)
#define MOLEMOLE_UISUMMERFISHAQUARIUMPAGECONTROLLER___C__ONFISHBAGBTN_B__33_0_OFFSET UNITYSDK_OFFSET(0xAE901C0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishAquariumPageController___c_TypeDefinitionIndex = 49160;

	class UISummerFishAquariumPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__33_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UISummerFishAquariumPageController___c_TypeDefinitionIndex)->GetStaticField(0x42800);
		}
		static ::MoleMole::UISummerFishAquariumPageController___c** StaticGet___9()
		{
			return (::MoleMole::UISummerFishAquariumPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UISummerFishAquariumPageController___c_TypeDefinitionIndex)->GetStaticField(0x42808);
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
