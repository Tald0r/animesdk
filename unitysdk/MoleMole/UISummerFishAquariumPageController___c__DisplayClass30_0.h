#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISummerFishAquariumFishRowWidgetController; }
namespace MoleMole { class UISummerFishAquariumPageController; }

#define MOLEMOLE_UISUMMERFISHAQUARIUMPAGECONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x752BCB0)
#define MOLEMOLE_UISUMMERFISHAQUARIUMPAGECONTROLLER___C__DISPLAYCLASS30_0__ONCLICKPUTFISHBTN_B__0_OFFSET UNITYSDK_OFFSET(0x752BCC0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishAquariumPageController___c__DisplayClass30_0_TypeDefinitionIndex = 49159;

	class UISummerFishAquariumPageController___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::MoleMole::UISummerFishAquariumPageController* __4__this; // 0x10
		::MoleMole::UISummerFishAquariumFishRowWidgetController* ctrl; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHAQUARIUMPAGECONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickPutFishBtn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHAQUARIUMPAGECONTROLLER___C__DISPLAYCLASS30_0__ONCLICKPUTFISHBTN_B__0_OFFSET))(this);
		}
	};
}
