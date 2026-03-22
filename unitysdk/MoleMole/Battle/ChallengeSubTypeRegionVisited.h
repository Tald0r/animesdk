#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/ChallengeSubTypeItem.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_208CC9941471731A_236;
namespace System { class String; }

#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEREGIONVISITED_GETPROGRESSSTRING_OFFSET UNITYSDK_OFFSET(0x84860D0)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEREGIONVISITED_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x8486060)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEREGIONVISITED_GET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x8485E10)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEREGIONVISITED_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x8485E20)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEREGIONVISITED__CTOR_OFFSET UNITYSDK_OFFSET(0x8485A80)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEREGIONVISITED___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x84861B0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ChallengeSubTypeRegionVisited_TypeDefinitionIndex = 47660;

	class ChallengeSubTypeRegionVisited : public ::MoleMole::Battle::ChallengeSubTypeItem
	{
	public:
		::System::String* anchor; // 0x20
		::System::Single sqrRadius; // 0x28
		::System::Boolean reached; // 0x2C
		::UnityEngine::Vector3 targetPos; // 0x30

		::System::Void _ctor(::Class_2_208CC9941471731A_236* inTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_236*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEREGIONVISITED__CTOR_OFFSET))(this, inTemplate);
		}

		::System::Boolean get_IsSuccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEREGIONVISITED_GET_ISSUCCESS_OFFSET))(this);
		}

		::System::Void OnUpdate(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEREGIONVISITED_ONUPDATE_OFFSET))(this, dt);
		}

		::System::Single GetProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEREGIONVISITED_GETPROGRESS_OFFSET))(this);
		}

		::System::String* GetProgressString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEREGIONVISITED_GETPROGRESSSTRING_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEREGIONVISITED___BASE_ONUPDATE_OFFSET))(this, P0);
		}
	};
}
