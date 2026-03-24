#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CheckEnterBattleStateBase.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"

class Class_4_4307C973EE89761A;

#define MOLEMOLE_CHECKAVATARENTERBATTLESTATE_GETCURRENTENTERBATTLESTATE_OFFSET UNITYSDK_OFFSET(0xBAD8E20)
#define MOLEMOLE_CHECKAVATARENTERBATTLESTATE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xBAD8CD0)
#define MOLEMOLE_CHECKAVATARENTERBATTLESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xBAD8E90)
#define MOLEMOLE_CHECKAVATARENTERBATTLESTATE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xBAD8ED0)

namespace MoleMole
{
	inline static constexpr unsigned int CheckAvatarEnterBattleState_TypeDefinitionIndex = 54032;

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
