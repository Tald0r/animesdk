#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F4E08D0E9B554572.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_8F61B9A09E64A3EA;
class Class_3_DC4548D26CCF6FCF;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_BUDDYSELECTCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x6D33B70)
#define MOLEMOLE_BUDDYSELECTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x6D33B20)

namespace MoleMole
{
	inline static constexpr unsigned int BuddySelectContext_TypeDefinitionIndex = 77333;

	class BuddySelectContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		// static const ::System::Int32 DefaultMultiSelectCount = 0x2; // 0x0
		::Il2CppArray<::System::Int32>* initBuddys; // 0x28
		::System::Func_2<::System::Int32, ::System::Boolean>* buddyLockCheckFunc; // 0x30
		::Class_2_8F61B9A09E64A3EA* QuestCfg; // 0x38
		::System::Action* OnBuddyChange; // 0x40
		::Class_3_DC4548D26CCF6FCF* onPostGetBuddySelectContext; // 0x48
		::System::String* buddyLockTipTextMapId; // 0x50
		::Il2CppArray<::System::Int32>* OutputSelectBuddy; // 0x58
		::System::Boolean IsShowBuddySelect; // 0x60
		::System::Boolean IsStoryMode; // 0x61
		::System::Boolean IsRobotBuddy; // 0x62
		::System::Int32 MultiSelectCount; // 0x64
		::Enum_3_F4E08D0E9B554572 selectType; // 0x68

		::System::Void _ctor(::System::Int32 selectCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BUDDYSELECTCONTEXT__CTOR_OFFSET))(this, selectCount);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BUDDYSELECTCONTEXT__CTOR_1_OFFSET))(this);
		}
	};
}
