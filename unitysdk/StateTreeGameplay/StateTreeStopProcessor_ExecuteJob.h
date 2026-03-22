#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTree.h"
#include "unitysdk/StateTreeCore/StateTreeInstanceData.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define STATETREEGAMEPLAY_STATETREESTOPPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x458150)
#define STATETREEGAMEPLAY_STATETREESTOPPROCESSOR_EXECUTEJOB_GETFRAGMENTSTRUCTVIEW_OFFSET UNITYSDK_OFFSET(0x458130)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int StateTreeStopProcessor_ExecuteJob_TypeDefinitionIndex = 61290;

	struct alignas(8) StateTreeStopProcessor_ExecuteJob
	{
		::Unity::Collections::NativeArray_1<::StateTreeCore::StateTree> StateTree; // 0x10
		::Unity::Collections::NativeArray_1<::StateTreeCore::StateTreeInstanceData> StateTreeInstanceData; // 0x20
		::Unity::Collections::NativeArray_1<::System::Int32> StateTreeIndex; // 0x30

		/*
		::UnrealTypes::FStructView GetFragmentStructView(::UnrealTypes::FStructHandle fragmentStruct, ::System::Int32 index)
		{
			return ((::UnrealTypes::FStructView(*)(::PVOID, ::UnrealTypes::FStructHandle, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREESTOPPROCESSOR_EXECUTEJOB_GETFRAGMENTSTRUCTVIEW_OFFSET))(this, fragmentStruct, index);
		}
		*/

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREESTOPPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET))(this, index);
		}
	};
}
