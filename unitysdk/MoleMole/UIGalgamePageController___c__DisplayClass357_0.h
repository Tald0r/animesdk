#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController_AvatarDisplaySetting; }
namespace MoleMole { class UIGalgamePageController_UIRoleInfo; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS357_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8083540)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS357_0__PLAYTHREEPEOPLECLOSING_B__0_OFFSET UNITYSDK_OFFSET(0x8083550)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass357_0_TypeDefinitionIndex = 54662;

	class UIGalgamePageController___c__DisplayClass357_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController_AvatarDisplaySetting* avatarSetting; // 0x10
		::MoleMole::UIGalgamePageController_UIRoleInfo* roleInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS357_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayThreePeopleClosing_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS357_0__PLAYTHREEPEOPLECLOSING_B__0_OFFSET))(this);
		}
	};
}
