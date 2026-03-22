#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/MoleMole/GalGame/GalgameFilterType.h"
#include "unitysdk/System/Object.h"

class Class_1_C8FB2F60D8408C02;
namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class UIGalgamePageController; }
namespace MoleMole { class UIGalgamePageController_AvatarDisplaySetting; }
namespace MoleMole { class UIGalgamePageController_UIRoleInfo; }
namespace System { class Action; }
namespace UnityEngine { class CanvasGroup; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS368_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD565C20)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS368_0__SETAVATARNEW_B__0_OFFSET UNITYSDK_OFFSET(0xD565C30)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS368_0__SETAVATARNEW_B__1_OFFSET UNITYSDK_OFFSET(0xD565CA0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS368_0__SETAVATARNEW_B__2_OFFSET UNITYSDK_OFFSET(0xD565E70)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass368_0_TypeDefinitionIndex = 54697;

	class UIGalgamePageController___c__DisplayClass368_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController* __4__this; // 0x10
		::MoleMole::UIGalgamePageController_UIRoleInfo* currUnit; // 0x18
		::MoleMole::UIGalgamePageController_AvatarDisplaySetting* avatarSetting; // 0x20
		::MoleMole::AvatarShowSetting* showSetting; // 0x28
		::System::Action* loadFinished; // 0x30
		::Class_1_C8FB2F60D8408C02* avatarModelInfo; // 0x38
		::UnityEngine::CanvasGroup* rootCanvasGroup; // 0x40
		::System::Int32 realIndex; // 0x48
		::System::Int32 overrideSkinID; // 0x4C
		::System::Boolean isUsingPlayerAvatarSkin; // 0x50
		::System::Boolean useSelfLightSetting; // 0x51
		::System::Boolean hasOverridedAvatarSkin; // 0x52
		::MoleMole::GalGame::GalgameFilterType filterType; // 0x54
		::System::Int32 avatarId; // 0x58
		::MoleMole::GalGame::GalNPCLocation location; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS368_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetAvatarNew_b__0(::MoleMole::UIGalgamePageController_UIRoleInfo* recycleRoleInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGalgamePageController_UIRoleInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS368_0__SETAVATARNEW_B__0_OFFSET))(this, recycleRoleInfo);
		}

		::System::Void _SetAvatarNew_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS368_0__SETAVATARNEW_B__1_OFFSET))(this);
		}

		::System::Void _SetAvatarNew_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS368_0__SETAVATARNEW_B__2_OFFSET))(this);
		}
	};
}
