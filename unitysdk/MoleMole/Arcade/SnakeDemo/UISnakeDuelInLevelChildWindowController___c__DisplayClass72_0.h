#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Arcade::SnakeDemo { class UISnakeDuelInLevelChildWindowController; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER___C__DISPLAYCLASS72_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9DE010)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER___C__DISPLAYCLASS72_0__PLAYSCORETIPS_B__0_OFFSET UNITYSDK_OFFSET(0x1A9DE020)

namespace MoleMole::Arcade::SnakeDemo
{
	inline static constexpr unsigned int UISnakeDuelInLevelChildWindowController___c__DisplayClass72_0_TypeDefinitionIndex = 83738;

	class UISnakeDuelInLevelChildWindowController___c__DisplayClass72_0 : public ::System::Object
	{
	public:
		::MoleMole::Arcade::SnakeDemo::UISnakeDuelInLevelChildWindowController* __4__this; // 0x10
		::UnityEngine::GameObject* numObj; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER___C__DISPLAYCLASS72_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayScoreTips_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER___C__DISPLAYCLASS72_0__PLAYSCORETIPS_B__0_OFFSET))(this);
		}
	};
}
