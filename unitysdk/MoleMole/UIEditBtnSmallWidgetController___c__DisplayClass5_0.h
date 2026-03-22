#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIEditBtnSmallWidgetController; }
namespace MoleMole { class UIEditBtnSmallWidgetController_Context; }

#define MOLEMOLE_UIEDITBTNSMALLWIDGETCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB2CDB70)
#define MOLEMOLE_UIEDITBTNSMALLWIDGETCONTROLLER___C__DISPLAYCLASS5_0__ONSCROLLITEMUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0xB2CDB80)

namespace MoleMole
{
	inline static constexpr unsigned int UIEditBtnSmallWidgetController___c__DisplayClass5_0_TypeDefinitionIndex = 65450;

	class UIEditBtnSmallWidgetController___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::MoleMole::UIEditBtnSmallWidgetController* __4__this; // 0x10
		::MoleMole::UIEditBtnSmallWidgetController_Context* _data; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEDITBTNSMALLWIDGETCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEDITBTNSMALLWIDGETCONTROLLER___C__DISPLAYCLASS5_0__ONSCROLLITEMUPDATE_B__0_OFFSET))(this);
		}
	};
}
