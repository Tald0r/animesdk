#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_87D98DA5C1AD6384_Enum_3_3DCE6AAF7E47B319.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILevelResultV2_PageController; }
namespace System { class Action; }

#define MOLEMOLE_UILEVELRESULTV2_PAGECONTROLLER___C__DISPLAYCLASS54_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAF33FA0)
#define MOLEMOLE_UILEVELRESULTV2_PAGECONTROLLER___C__DISPLAYCLASS54_0___BINDBTNCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xAF33FB0)
#define MOLEMOLE_UILEVELRESULTV2_PAGECONTROLLER___C__DISPLAYCLASS54_0___BINDBTNCALLBACK_B__1_OFFSET UNITYSDK_OFFSET(0xAF34200)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultV2_PageController___c__DisplayClass54_0_TypeDefinitionIndex = 44748;

	class UILevelResultV2_PageController___c__DisplayClass54_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::System::Action* callback; // 0x18
		::MoleMole::UILevelResultV2_PageController* __4__this; // 0x20
		::Class_1_87D98DA5C1AD6384_Enum_3_3DCE6AAF7E47B319 btnTag; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_PAGECONTROLLER___C__DISPLAYCLASS54_0__CTOR_OFFSET))(this);
		}

		::System::Void __BindBtnCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_PAGECONTROLLER___C__DISPLAYCLASS54_0___BINDBTNCALLBACK_B__0_OFFSET))(this);
		}

		::System::Void __BindBtnCallback_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_PAGECONTROLLER___C__DISPLAYCLASS54_0___BINDBTNCALLBACK_B__1_OFFSET))(this);
		}
	};
}
