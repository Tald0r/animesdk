#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3FDE76C86672FDDC.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_1A345EAE5F749316_6;
class Class_3_452E05BC28CF3B11;
class Class_3_4666E61F66433B1E_3;
class Class_3_D0B68EB9E337E202_5;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
template <typename T1, typename T2> class Class_1_516A565475879095;

#define MOLEMOLE_UILEVELRESULTPAGECONTEXT_ISADDITIONAUPITEM_OFFSET UNITYSDK_OFFSET(0x943D2C0)
#define MOLEMOLE_UILEVELRESULTPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x943D340)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultPageContext_TypeDefinitionIndex = 45344;

	class UILevelResultPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnContinueAction; // 0x28
		::System::Action* OnFairyBtnAction; // 0x30
		::Class_3_4666E61F66433B1E_3* dungeonDoneRet; // 0x38
		::System::Collections::Generic::HashSet_1<::System::Int32>* additionalUpItemSet; // 0x40
		::System::Action* OnRestartBattleAction; // 0x48
		::System::Action* OnStartFadeInFinsh; // 0x50
		::System::Action* OnExitBattleAction; // 0x58
		::Class_1_516A565475879095<::System::UInt32, ::Class_3_1A345EAE5F749316_6*>* RawRewardReasonItemMap; // 0x60
		::System::Collections::Generic::IDictionary_2<::System::UInt32, ::Class_3_452E05BC28CF3B11*>* FightRewards; // 0x68
		::Class_1_516A565475879095<::System::UInt32, ::Class_3_D0B68EB9E337E202_5*>* RawRewardItemReasonMap; // 0x70
		::System::Single delayExitTime; // 0x78
		::System::Boolean isWin; // 0x7C
		::System::Boolean IsOvernight; // 0x7D
		::System::Boolean canRevive; // 0x7E
		::System::Boolean Procedure; // 0x7F
		::System::Boolean enableDelayExit; // 0x80
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
