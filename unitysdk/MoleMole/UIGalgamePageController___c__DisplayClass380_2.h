#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController_AvatarDisplaySetting; }
namespace MoleMole { class UIGalgamePageController___c__DisplayClass380_1; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS380_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA911D90)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS380_2__PLAYNPCFADEACTIONS_B__3_OFFSET UNITYSDK_OFFSET(0xA911DA0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS380_2__PLAYNPCFADEACTIONS_B__4_OFFSET UNITYSDK_OFFSET(0xA911DE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass380_2_TypeDefinitionIndex = 54659;

	class UIGalgamePageController___c__DisplayClass380_2 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController___c__DisplayClass380_1* CS___8__locals2; // 0x10
		::UnityEngine::RectTransform* stageNodeRoot; // 0x18
		::MoleMole::UIGalgamePageController_AvatarDisplaySetting* avatarSetting; // 0x20
		::System::Int32 location; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS380_2__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS380_2__PLAYNPCFADEACTIONS_B__3_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS380_2__PLAYNPCFADEACTIONS_B__4_OFFSET))(this);
		}
	};
}
