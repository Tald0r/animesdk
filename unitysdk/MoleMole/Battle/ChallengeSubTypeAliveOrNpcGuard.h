#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/ChallengeSubTypeItem.h"

class Class_1_15CCFE77B9E12299;
class Class_2_208CC9941471731A_236;
namespace System { class String; }

#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEALIVEORNPCGUARD_GETFIGHTER_OFFSET UNITYSDK_OFFSET(0x62123E0)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEALIVEORNPCGUARD_GETPROGRESSSTRING_OFFSET UNITYSDK_OFFSET(0x6212CC0)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEALIVEORNPCGUARD_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x62128D0)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEALIVEORNPCGUARD_GET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x6212650)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEALIVEORNPCGUARD__CTOR_OFFSET UNITYSDK_OFFSET(0x62125E0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ChallengeSubTypeAliveOrNpcGuard_TypeDefinitionIndex = 47571;

	class ChallengeSubTypeAliveOrNpcGuard : public ::MoleMole::Battle::ChallengeSubTypeItem
	{
	public:
		::System::String* tag; // 0x20
		::System::Single HPRatio; // 0x28

		::System::Void _ctor(::Class_2_208CC9941471731A_236* inTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_236*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEALIVEORNPCGUARD__CTOR_OFFSET))(this, inTemplate);
		}

		::Class_1_15CCFE77B9E12299* GetFighter()
		{
			return ((::Class_1_15CCFE77B9E12299*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEALIVEORNPCGUARD_GETFIGHTER_OFFSET))(this);
		}

		::System::Boolean get_IsSuccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEALIVEORNPCGUARD_GET_ISSUCCESS_OFFSET))(this);
		}

		::System::Single GetProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEALIVEORNPCGUARD_GETPROGRESS_OFFSET))(this);
		}

		::System::String* GetProgressString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEALIVEORNPCGUARD_GETPROGRESSSTRING_OFFSET))(this);
		}
	};
}
