#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_1A345EAE5F749316_5;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_1_D4CCA64101A9C471;

#define MOLEMOLE_UISWEEPREWARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x86AF5C0)

namespace MoleMole
{
	inline static constexpr unsigned int UISweepRewardContext_TypeDefinitionIndex = 53808;

	class UISweepRewardContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_D4CCA64101A9C471<::System::UInt32, ::Class_3_1A345EAE5F749316_5*>*>* RewardList; // 0x28
		::MoleMole::ELocalPlayType LocalPlayType; // 0x30
		::System::UInt32 OverflowId; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWEEPREWARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
