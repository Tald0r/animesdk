#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_9F091E965E210217_5;

#define MOLEMOLE_UIAREAGOODSWIDGETCONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBFBD290)
#define MOLEMOLE_UIAREAGOODSWIDGETCONTROLLER___C__DISPLAYCLASS45_0__ONSCROLLITEMUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0xBFBD2A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAreaGoodsWidgetController___c__DisplayClass45_0_TypeDefinitionIndex = 66204;

	class UIAreaGoodsWidgetController___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::Class_3_9F091E965E210217_5* buy; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSWIDGETCONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnScrollItemUpdate_b__0(::Class_3_9F091E965E210217_5* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_9F091E965E210217_5*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSWIDGETCONTROLLER___C__DISPLAYCLASS45_0__ONSCROLLITEMUPDATE_B__0_OFFSET))(this, x);
		}
	};
}
