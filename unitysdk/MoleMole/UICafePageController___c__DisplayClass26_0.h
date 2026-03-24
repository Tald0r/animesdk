#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/System/Object.h"

class Class_1_499EDFA3518A0E64;
namespace MoleMole { class UICafePageController; }
namespace System { class Action; }

#define MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD5357E0)
#define MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS26_0__ONSHOWDRINKCAFEFINISHED_B__0_OFFSET UNITYSDK_OFFSET(0xD5357F0)
#define MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS26_0__ONSHOWDRINKCAFEFINISHED_G__SHOWTIP_1_OFFSET UNITYSDK_OFFSET(0xD535800)

namespace MoleMole
{
	inline static constexpr unsigned int UICafePageController___c__DisplayClass26_0_TypeDefinitionIndex = 70896;

	class UICafePageController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::MoleMole::UICafePageController* __4__this; // 0x10
		::Class_1_499EDFA3518A0E64* cafeItem; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnShowDrinkCafeFinished_b__0(::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF _)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS26_0__ONSHOWDRINKCAFEFINISHED_B__0_OFFSET))(this, _);
		}

		::System::Void _OnShowDrinkCafeFinished_g__ShowTip_1(::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS26_0__ONSHOWDRINKCAFEFINISHED_G__SHOWTIP_1_OFFSET))(this, onFinish);
		}
	};
}
