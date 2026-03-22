#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_133B62C3E053DEAA.h"
#include "unitysdk/MoleMole/Config/MusicBattleMarkerNodeType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO_DOCHECKCLOSEEVADE_OFFSET UNITYSDK_OFFSET(0xB49B8F0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO_DOCHECKOPENEVADE_OFFSET UNITYSDK_OFFSET(0xB49B740)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO_DOCLOSEINPUT_OFFSET UNITYSDK_OFFSET(0xB49B9F0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO_DOHINT_OFFSET UNITYSDK_OFFSET(0xB49B590)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO_DOOPENINPUT_OFFSET UNITYSDK_OFFSET(0xB49B840)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO_GETNEEDWAIT_OFFSET UNITYSDK_OFFSET(0xB49B510)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO_GETRESULT_OFFSET UNITYSDK_OFFSET(0xB49B330)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB49BAA0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int MusicBattleSubSystem_LevelPressInfo_TypeDefinitionIndex = 64002;

	class MusicBattleSubSystem_LevelPressInfo : public ::System::Object
	{
	public:
		::System::Double perfectTime; // 0x10
		::MoleMole::LogicButtonInputType inputType; // 0x18
		::System::Boolean CheckedClose; // 0x1C
		::System::Boolean needOpenEvadeInput; // 0x1D
		::System::Boolean CheckedOpen; // 0x1E
		::System::Boolean needCloseEvadeInput; // 0x1F
		::System::Double recordClickTime; // 0x20
		::MoleMole::Config::MusicBattleMarkerNodeType nodeType; // 0x28
		::System::Double earliestCheckTime; // 0x30
		::System::Double hintTime; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO__CTOR_OFFSET))(this);
		}

		::Enum_3_133B62C3E053DEAA GetResult(::System::Double curTime, ::System::Single& waitTime)
		{
			return ((::Enum_3_133B62C3E053DEAA(*)(::PVOID, ::System::Double, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO_GETRESULT_OFFSET))(this, curTime, waitTime);
		}

		::System::Boolean GetNeedWait(::System::Double curTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO_GETNEEDWAIT_OFFSET))(this, curTime);
		}

		::System::Void DoHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO_DOHINT_OFFSET))(this);
		}

		::System::Boolean DoCheckOpenEvade(::System::Double curTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO_DOCHECKOPENEVADE_OFFSET))(this, curTime);
		}

		::System::Boolean DoCheckCloseEvade(::System::Double curTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO_DOCHECKCLOSEEVADE_OFFSET))(this, curTime);
		}

		::System::Void DoOpenInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO_DOOPENINPUT_OFFSET))(this);
		}

		::System::Void DoCloseInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_LEVELPRESSINFO_DOCLOSEINPUT_OFFSET))(this);
		}
	};
}
