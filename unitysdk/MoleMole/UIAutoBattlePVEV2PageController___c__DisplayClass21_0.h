#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_132;
class Class_2_208CC9941471731A_717;

#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC8F5D40)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER___C__DISPLAYCLASS21_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0xC8F5D50)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVEV2PageController___c__DisplayClass21_0_TypeDefinitionIndex = 75785;

	class UIAutoBattlePVEV2PageController___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_132* levelConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshView_b__0(::Class_2_208CC9941471731A_717* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_717*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER___C__DISPLAYCLASS21_0__REFRESHVIEW_B__0_OFFSET))(this, x);
		}
	};
}
