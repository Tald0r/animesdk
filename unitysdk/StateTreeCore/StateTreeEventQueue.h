#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NativeTypes/NativeList_1.h"
#include "unitysdk/StateTreeCore/StateTreeEvent.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

#define STATETREECORE_STATETREEEVENTQUEUE_CLEAR_OFFSET UNITYSDK_OFFSET(0x474550)
#define STATETREECORE_STATETREEEVENTQUEUE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x474440)
#define STATETREECORE_STATETREEEVENTQUEUE_GETEVENTS_OFFSET UNITYSDK_OFFSET(0x475170)
#define STATETREECORE_STATETREEEVENTQUEUE_SENDEVENT_OFFSET UNITYSDK_OFFSET(0x8EB3E0)
#define STATETREECORE_STATETREEEVENTQUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x8EB3A0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeEventQueue_TypeDefinitionIndex = 26923;

	struct alignas(8) StateTreeEventQueue
	{
		// static const ::System::Int32 MaxActiveEvents = 0x40; // 0x0
		::NativeTypes::NativeList_1<::StateTreeCore::StateTreeEvent> _events; // 0x10

		::System::Void _ctor(::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENTQUEUE__CTOR_OFFSET))(this, allocator);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENTQUEUE_DISPOSE_OFFSET))(this);
		}

		/*
		::System::Void SendEvent(::Foundation::Unreal::FGameplayTag tag)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENTQUEUE_SENDEVENT_OFFSET))(this, tag);
		}
		*/

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENTQUEUE_CLEAR_OFFSET))(this);
		}

		/*
		::NativeTypes::NativeListView_1<::StateTreeCore::StateTreeEvent> GetEvents()
		{
			return ((::NativeTypes::NativeListView_1<::StateTreeCore::StateTreeEvent>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEVENTQUEUE_GETEVENTS_OFFSET))(this);
		}
		*/
	};
}
