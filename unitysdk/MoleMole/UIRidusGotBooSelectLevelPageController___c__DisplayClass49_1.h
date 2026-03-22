#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_689;

#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS49_1__CTOR_OFFSET UNITYSDK_OFFSET(0xAC33F00)
#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS49_1__REFRESHTOPTABS_B__0_OFFSET UNITYSDK_OFFSET(0xAC33F10)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooSelectLevelPageController___c__DisplayClass49_1_TypeDefinitionIndex = 43393;

	class UIRidusGotBooSelectLevelPageController___c__DisplayClass49_1 : public ::System::Object
	{
	public:
		::System::Int32 levelType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS49_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshTopTabs_b__0(::Class_2_208CC9941471731A_689* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_689*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS49_1__REFRESHTOPTABS_B__0_OFFSET))(this, x);
		}
	};
}
