#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CheckEnterBattleStateBase.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"

class Class_4_4307C973EE89761A;

#define MOLEMOLE_CHECKAVATARENTERBATTLESTATE_GETCURRENTENTERBATTLESTATE_OFFSET UNITYSDK_OFFSET(0x6D37E80)
#define MOLEMOLE_CHECKAVATARENTERBATTLESTATE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x6D37D20)
#define MOLEMOLE_CHECKAVATARENTERBATTLESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x6D37EF0)
#define MOLEMOLE_CHECKAVATARENTERBATTLESTATE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x6D37F30)

namespace MoleMole
{
	inline static constexpr unsigned int CheckAvatarEnterBattleState_TypeDefinitionIndex = 48986;

	class CheckAvatarEnterBattleState : public ::MoleMole::CheckEnterBattleStateBase
	{
	public:
		::Class_4_4307C973EE89761A* _enterBattleComponent; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKAVATARENTERBATTLESTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKAVATARENTERBATTLESTATE_ONAWAKE_OFFSET))(this);
		}

		::MoleMole::Config::EnterBattleState GetCurrentEnterBattleState()
		{
			return ((::MoleMole::Config::EnterBattleState(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKAVATARENTERBATTLESTATE_GETCURRENTENTERBATTLESTATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKAVATARENTERBATTLESTATE___BASE_ONAWAKE_OFFSET))(this);
		}
	};
}
