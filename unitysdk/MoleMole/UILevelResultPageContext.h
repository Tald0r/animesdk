#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3FDE76C86672FDDC.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_1A345EAE5F749316_5;
class Class_3_452E05BC28CF3B11;
class Class_3_BD5405822947C18D_1;
class Class_3_D0B68EB9E337E202_1;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
template <typename T1, typename T2> class Class_1_D4CCA64101A9C471;

#define MOLEMOLE_UILEVELRESULTPAGECONTEXT_ISADDITIONAUPITEM_OFFSET UNITYSDK_OFFSET(0x9A01A80)
#define MOLEMOLE_UILEVELRESULTPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9A01B00)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultPageContext_TypeDefinitionIndex = 68637;

	class UILevelResultPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_BD5405822947C18D_1* dungeonDoneRet; // 0x28
		::System::Action* OnRestartBattleAction; // 0x30
		::System::Collections::Generic::IDictionary_2<::System::UInt32, ::Class_3_452E05BC28CF3B11*>* FightRewards; // 0x38
		::System::Action* OnStartFadeInFinsh; // 0x40
		::Class_1_D4CCA64101A9C471<::System::UInt32, ::Class_3_1A345EAE5F749316_5*>* RawRewardReasonItemMap; // 0x48
		::System::Action* OnExitBattleAction; // 0x50
		::System::Action* OnFairyBtnAction; // 0x58
		::System::Collections::Generic::HashSet_1<::System::Int32>* additionalUpItemSet; // 0x60
		::Class_1_D4CCA64101A9C471<::System::UInt32, ::Class_3_D0B68EB9E337E202_1*>* RawRewardItemReasonMap; // 0x68
		::System::Action* OnContinueAction; // 0x70
		::System::Boolean IsOvernight; // 0x78
		::System::Boolean isWin; // 0x79
		::System::Boolean canRevive; // 0x7A
		::System::Boolean Procedure; // 0x7B
		::System::Boolean enableDelayExit; // 0x7C
		::System::Single delayExitTime; // 0x80
		::Enum_3_3FDE76C86672FDDC ShowType; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean IsAdditionaUpItem(::System::Int32 itemId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTEXT_ISADDITIONAUPITEM_OFFSET))(this, itemId);
		}
	};
}
