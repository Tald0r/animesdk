#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;
class Class_3_1699D6295DC3F818;
class Class_3_AE02BC8285203464_22;

#define MOLEMOLE_UIFOODTRUCKTASKROWWIDGETCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD5642D0)
#define MOLEMOLE_UIFOODTRUCKTASKROWWIDGETCONTROLLER___C__DISPLAYCLASS5_0__ONSCROLLITEMUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0xD564930)

namespace MoleMole
{
	inline static constexpr unsigned int UIFoodTruckTaskRowWidgetController___c__DisplayClass5_0_TypeDefinitionIndex = 80592;

	class UIFoodTruckTaskRowWidgetController___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::Class_3_AE02BC8285203464_22* task; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKTASKROWWIDGETCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::Class_1_1685EC66FBD28897* _OnScrollItemUpdate_b__0(::Class_3_1699D6295DC3F818* x)
		{
			return ((::Class_1_1685EC66FBD28897*(*)(::PVOID, ::Class_3_1699D6295DC3F818*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKTASKROWWIDGETCONTROLLER___C__DISPLAYCLASS5_0__ONSCROLLITEMUPDATE_B__0_OFFSET))(this, x);
		}
	};
}
