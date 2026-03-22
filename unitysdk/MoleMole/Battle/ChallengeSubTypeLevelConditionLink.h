#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/ChallengeSubTypeItem.h"

class Class_2_208CC9941471731A_236;
namespace System { class String; }

#define MOLEMOLE_BATTLE_CHALLENGESUBTYPELEVELCONDITIONLINK_GETPROGRESSSTRING_OFFSET UNITYSDK_OFFSET(0x6BD7970)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPELEVELCONDITIONLINK_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x6BD7900)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPELEVELCONDITIONLINK_GET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x6BD7890)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPELEVELCONDITIONLINK_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x6BD7A70)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPELEVELCONDITIONLINK__CTOR_OFFSET UNITYSDK_OFFSET(0x6BD77F0)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPELEVELCONDITIONLINK___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x6BD7DE0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ChallengeSubTypeLevelConditionLink_TypeDefinitionIndex = 48472;

	class ChallengeSubTypeLevelConditionLink : public ::MoleMole::Battle::ChallengeSubTypeItem
	{
	public:
		::System::Int32 _levelConditionID; // 0x20
		::System::Int32 _currSuccessCount; // 0x24
		::System::Int32 _targetSuccessCount; // 0x28

		::System::Void _ctor(::Class_2_208CC9941471731A_236* inTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_236*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPELEVELCONDITIONLINK__CTOR_OFFSET))(this, inTemplate);
		}

		::System::Boolean get_IsSuccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPELEVELCONDITIONLINK_GET_ISSUCCESS_OFFSET))(this);
		}

		::System::Single GetProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPELEVELCONDITIONLINK_GETPROGRESS_OFFSET))(this);
		}

		::System::String* GetProgressString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPELEVELCONDITIONLINK_GETPROGRESSSTRING_OFFSET))(this);
		}

		::System::Void OnUpdate(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPELEVELCONDITIONLINK_ONUPDATE_OFFSET))(this, dt);
		}

		::System::Void __base_OnUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPELEVELCONDITIONLINK___BASE_ONUPDATE_OFFSET))(this, P0);
		}
	};
}
