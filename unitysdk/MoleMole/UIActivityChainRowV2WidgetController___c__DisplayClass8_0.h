#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;
class Class_3_1699D6295DC3F818_3;
class Class_3_BE75AAF0F7C40C75_3;

#define MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB326870)
#define MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER___C__DISPLAYCLASS8_0__ONSCROLLITEMUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0xB326880)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityChainRowV2WidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 66383;

	class UIActivityChainRowV2WidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::Class_3_BE75AAF0F7C40C75_3* task; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::Class_1_1685EC66FBD28897* _OnScrollItemUpdate_b__0(::Class_3_1699D6295DC3F818_3* x)
		{
			return ((::Class_1_1685EC66FBD28897*(*)(::PVOID, ::Class_3_1699D6295DC3F818_3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER___C__DISPLAYCLASS8_0__ONSCROLLITEMUPDATE_B__0_OFFSET))(this, x);
		}
	};
}
