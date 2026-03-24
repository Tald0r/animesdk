#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_442;
namespace MoleMole { class UIRidusGotBooSelectLevelPageController; }

#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDF2B8B0)
#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS22_0__ISLEVELTYPEUNLOCKED_B__0_OFFSET UNITYSDK_OFFSET(0xDF2B8C0)
#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS22_0__ISLEVELTYPEUNLOCKED_B__1_OFFSET UNITYSDK_OFFSET(0xDF2B8F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooSelectLevelPageController___c__DisplayClass22_0_TypeDefinitionIndex = 62730;

	class UIRidusGotBooSelectLevelPageController___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRidusGotBooSelectLevelPageController* __4__this; // 0x10
		::System::Int32 levelType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsLevelTypeUnlocked_b__0(::Class_2_208CC9941471731A_442* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_442*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS22_0__ISLEVELTYPEUNLOCKED_B__0_OFFSET))(this, x);
		}

		::System::Boolean _IsLevelTypeUnlocked_b__1(::Class_2_208CC9941471731A_442* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_442*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS22_0__ISLEVELTYPEUNLOCKED_B__1_OFFSET))(this, x);
		}
	};
}
