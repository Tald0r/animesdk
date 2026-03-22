#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTree.h"
#include "unitysdk/StateTreeCore/StateTreeInstanceData.h"
#include "unitysdk/StateTreeGameplay/TestFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define STATETREEGAMEPLAY_STATETREESTARTPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x859BF0)
#define STATETREEGAMEPLAY_STATETREESTARTPROCESSOR_EXECUTEJOB_GETFRAGMENTSTRUCTVIEW_OFFSET UNITYSDK_OFFSET(0x859BD0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int StateTreeStartProcessor_ExecuteJob_TypeDefinitionIndex = 60516;

	struct alignas(8) StateTreeStartProcessor_ExecuteJob
	{
		::Unity::Collections::NativeArray_1<::StateTreeCore::StateTree> StateTree; // 0x10
		::Unity::Collections::NativeArray_1<::StateTreeCore::StateTreeInstanceData> StateTreeInstanceData; // 0x20
		::Unity::Collections::NativeArray_1<::System::Int32> StateTreeIndex; // 0x30
		::Unity::Collections::NativeArray_1<::StateTreeGameplay::TestFragment> TestFragments; // 0x40

		/*
		::UnrealTypes::FStructView GetFragmentStructView(::UnrealTypes::FStructHandle fragmentStruct, ::System::Int32 index)
		{
			return ((::UnrealTypes::FStructView(*)(::PVOID, ::UnrealTypes::FStructHandle, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREESTARTPROCESSOR_EXECUTEJOB_GETFRAGMENTSTRUCTVIEW_OFFSET))(this, fragmentStruct, index);
		}
		*/

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREESTARTPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET))(this, index);
		}
	};
}
