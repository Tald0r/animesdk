#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_92D28DDE4833EDF9;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2_ValueCollection; }

#define MOLEMOLE_UIINLEVELPAUSEBATTLEINFOLEVELMISSIONROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xBD20F70)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseBattleInfoLevelMissionRowContext_TypeDefinitionIndex = 68602;

	class UIInLevelPauseBattleInfoLevelMissionRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::Dictionary_2_ValueCollection<::System::Int32, ::Class_1_92D28DDE4833EDF9*>* Quests; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBATTLEINFOLEVELMISSIONROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
