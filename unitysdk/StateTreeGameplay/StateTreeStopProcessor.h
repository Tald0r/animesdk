#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTree.h"
#include "unitysdk/StateTreeCore/StateTreeInstanceData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

#define STATETREEGAMEPLAY_STATETREESTOPPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x196F9B90)
#define STATETREEGAMEPLAY_STATETREESTOPPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x196F9CE0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int StateTreeStopProcessor_TypeDefinitionIndex = 61289;

	class StateTreeStopProcessor : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREESTOPPROCESSOR__CTOR_OFFSET))(this);
		}

		::Unity::Jobs::JobHandle Execute(::Unity::Collections::NativeArray_1<::StateTreeCore::StateTree> stateTree, ::Unity::Collections::NativeArray_1<::StateTreeCore::StateTreeInstanceData> instanceData, ::System::Int32 count, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::Unity::Collections::NativeArray_1<::StateTreeCore::StateTree>, ::Unity::Collections::NativeArray_1<::StateTreeCore::StateTreeInstanceData>, ::System::Int32, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREESTOPPROCESSOR_EXECUTE_OFFSET))(this, stateTree, instanceData, count, dependsOn);
		}
	};
}
