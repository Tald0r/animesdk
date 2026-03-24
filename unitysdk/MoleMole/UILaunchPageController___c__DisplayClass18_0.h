#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7ECB9691B142D586;
namespace MoleMole { class UILaunchPageController; }
namespace System { class Action; }

#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8767E40)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS18_0__PLAYKOREAAGELIMIT_B__1_OFFSET UNITYSDK_OFFSET(0x8767E50)

namespace MoleMole
{
	inline static constexpr unsigned int UILaunchPageController___c__DisplayClass18_0_TypeDefinitionIndex = 75802;

	class UILaunchPageController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::Action* next; // 0x10
		::MoleMole::UILaunchPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayKoreaAgeLimit_b__1(::Class_1_7ECB9691B142D586* playerHelper)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7ECB9691B142D586*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS18_0__PLAYKOREAAGELIMIT_B__1_OFFSET))(this, playerHelper);
		}
	};
}
