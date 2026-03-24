#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_3.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_228;

#define MOLEMOLE_ARCADE_CLIENTBASE_MINIGAMEENGINE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B7440A0)
#define MOLEMOLE_ARCADE_CLIENTBASE_MINIGAMEENGINE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1B744280)
#define MOLEMOLE_ARCADE_CLIENTBASE_MINIGAMEENGINE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B7443B0)
#define MOLEMOLE_ARCADE_CLIENTBASE_MINIGAMEENGINE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B744150)
#define MOLEMOLE_ARCADE_CLIENTBASE_MINIGAMEENGINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B744450)

namespace MoleMole::Arcade::ClientBase
{
	inline static constexpr unsigned int MiniGameEngine_TypeDefinitionIndex = 83728;

	class MiniGameEngine : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Enum_3_71AA90D596A09AC8_3 miniGameType; // 0x18
		::Class_0_16E4307DCC419505_228* gameLogic; // 0x20

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
