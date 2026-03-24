#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_3.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_228;

#define MOLEMOLE_MINIGAME_MINIGAMEENGINESCRIPTBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0xB19FAE0)
#define MOLEMOLE_MINIGAME_MINIGAMEENGINESCRIPTBASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB19FCA0)
#define MOLEMOLE_MINIGAME_MINIGAMEENGINESCRIPTBASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB19FDF0)
#define MOLEMOLE_MINIGAME_MINIGAMEENGINESCRIPTBASE_UPDATE_OFFSET UNITYSDK_OFFSET(0xB19FB50)
#define MOLEMOLE_MINIGAME_MINIGAMEENGINESCRIPTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xB19FE70)

namespace MoleMole::MiniGame
{
	inline static constexpr unsigned int MiniGameEngineScriptBase_TypeDefinitionIndex = 57346;

	class MiniGameEngineScriptBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Enum_3_71AA90D596A09AC8_3 Field_5_0; // 0x18
		::Class_0_16E4307DCC419505_228* Field_5_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEENGINESCRIPTBASE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEENGINESCRIPTBASE_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEENGINESCRIPTBASE_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEENGINESCRIPTBASE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEENGINESCRIPTBASE_ONDESTROY_OFFSET))(this);
		}
	};
}
