#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_5.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC3FA8D0)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___C__DISPLAYCLASS8_0__ONSCROLLITEMUPDATE_B__1_OFFSET UNITYSDK_OFFSET(0xC3FA8E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVRBossCardWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 68808;

	class UIVRBossCardWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Int32 materialItemId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnScrollItemUpdate_b__1(::Struct_2_3659D99D9E0DCBB9_5 preview)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_3659D99D9E0DCBB9_5))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___C__DISPLAYCLASS8_0__ONSCROLLITEMUPDATE_B__1_OFFSET))(this, preview);
		}
	};
}
