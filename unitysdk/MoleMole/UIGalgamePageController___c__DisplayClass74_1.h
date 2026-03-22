#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController_AvatarDisplaySetting; }
namespace MoleMole { class UIGalgamePageController___c__DisplayClass74_0; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS74_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA912150)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS74_1__GENERATEUIZOOMPLAYABLE_B__1_OFFSET UNITYSDK_OFFSET(0xA912160)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass74_1_TypeDefinitionIndex = 54660;

	class UIGalgamePageController___c__DisplayClass74_1 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController_AvatarDisplaySetting* avatarSetting; // 0x10
		::MoleMole::UIGalgamePageController___c__DisplayClass74_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS74_1__CTOR_OFFSET))(this);
		}

		::System::Void _GenerateUIZoomPlayable_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS74_1__GENERATEUIZOOMPLAYABLE_B__1_OFFSET))(this);
		}
	};
}
