#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/System/ValueType.h"

#define STATETREECORE_STATETREEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x2C3980)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeEvent_TypeDefinitionIndex = 26921;

	struct alignas(4) StateTreeEvent
	{
		::Foundation::Unreal::FGameplayTag Tag; // 0x10

		::System::Void _ctor(::Foundation::Unreal::FGameplayTag tag)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENT__CTOR_OFFSET))(this, tag);
		}
	};
}
