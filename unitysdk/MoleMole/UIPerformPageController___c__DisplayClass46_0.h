#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_EEB6F2355690A1CC.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPerformPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS46_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD282F60)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS46_0__ONPLAYCGEND_B__0_OFFSET UNITYSDK_OFFSET(0xD283D30)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS46_0__ONPLAYCGEND_B__3_OFFSET UNITYSDK_OFFSET(0xD283E40)

namespace MoleMole
{
	inline static constexpr unsigned int UIPerformPageController___c__DisplayClass46_0_TypeDefinitionIndex = 60590;

	class UIPerformPageController___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPerformPageController* __4__this; // 0x10
		::System::Action* __9__3; // 0x18
		::Enum_3_EEB6F2355690A1CC performType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS46_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnPlayCGEnd_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS46_0__ONPLAYCGEND_B__0_OFFSET))(this);
		}

		::System::Void _OnPlayCGEnd_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS46_0__ONPLAYCGEND_B__3_OFFSET))(this);
		}
	};
}
