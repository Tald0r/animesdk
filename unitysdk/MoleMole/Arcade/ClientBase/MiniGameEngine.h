#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_289;

#define MOLEMOLE_ARCADE_CLIENTBASE_MINIGAMEENGINE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B0D74E0)
#define MOLEMOLE_ARCADE_CLIENTBASE_MINIGAMEENGINE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1B0D76C0)
#define MOLEMOLE_ARCADE_CLIENTBASE_MINIGAMEENGINE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B0D77F0)
#define MOLEMOLE_ARCADE_CLIENTBASE_MINIGAMEENGINE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B0D7590)
#define MOLEMOLE_ARCADE_CLIENTBASE_MINIGAMEENGINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0D7890)

namespace MoleMole::Arcade::ClientBase
{
	inline static constexpr unsigned int MiniGameEngine_TypeDefinitionIndex = 81688;

	class MiniGameEngine : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Enum_3_71AA90D596A09AC8 miniGameType; // 0x18
		::Class_0_16E4307DCC419505_289* gameLogic; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_CLIENTBASE_MINIGAMEENGINE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_CLIENTBASE_MINIGAMEENGINE_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_CLIENTBASE_MINIGAMEENGINE_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_CLIENTBASE_MINIGAMEENGINE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_CLIENTBASE_MINIGAMEENGINE_ONDESTROY_OFFSET))(this);
		}
	};
}
