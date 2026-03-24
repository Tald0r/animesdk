#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController___c__DisplayClass518_0; }
namespace System { class String; }

#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS518_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD024460)
#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS518_1__PLAYSTARTANIM_B__0_OFFSET UNITYSDK_OFFSET(0xD024470)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController___c__DisplayClass518_1_TypeDefinitionIndex = 58442;

	class UIBaseController___c__DisplayClass518_1 : public ::System::Object
	{
	public:
		::System::String* fadeInAnimName; // 0x10
		::MoleMole::UIBaseController___c__DisplayClass518_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS518_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayStartAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS518_1__PLAYSTARTANIM_B__0_OFFSET))(this);
		}
	};
}
