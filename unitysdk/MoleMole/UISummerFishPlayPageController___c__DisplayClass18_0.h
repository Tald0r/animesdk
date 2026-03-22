#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISummerFishPlayPageController; }
namespace System { class String; }

#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x752BD40)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___C__DISPLAYCLASS18_0__SHOWNEWTIPS_B__0_OFFSET UNITYSDK_OFFSET(0x752BD50)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishPlayPageController___c__DisplayClass18_0_TypeDefinitionIndex = 62770;

	class UISummerFishPlayPageController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::MoleMole::UISummerFishPlayPageController* __4__this; // 0x10
		::System::String* key; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowNewTips_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___C__DISPLAYCLASS18_0__SHOWNEWTIPS_B__0_OFFSET))(this);
		}
	};
}
