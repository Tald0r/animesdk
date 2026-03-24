#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_2A154C6D4517B879;
namespace System { class Action; }
template <typename T1, typename T2> class Class_1_D4CCA64101A9C471;

#define MOLEMOLE_UIFISHCONTESTRESULTPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC0E96F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFishContestResultPopContext_TypeDefinitionIndex = 46504;

	class UIFishContestResultPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_D4CCA64101A9C471<::System::UInt32, ::System::UInt32>* RewardItemMap; // 0x28
		::System::Action* OnClose; // 0x30
		::Class_1_2A154C6D4517B879* FishData; // 0x38
		::System::Boolean HideNew; // 0x40
		::System::Boolean ForceBg; // 0x41
		::System::UInt32 RewardTypeMask; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCONTESTRESULTPOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
