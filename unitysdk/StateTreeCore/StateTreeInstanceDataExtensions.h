#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeEventQueue.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionState.h"
#include "unitysdk/StateTreeCore/StateTreeInstanceData.h"
#include "unitysdk/System/Object.h"

#define STATETREECORE_STATETREEINSTANCEDATAEXTENSIONS_GETEXECUTIONSTATE_OFFSET UNITYSDK_OFFSET(0x19BD9370)
#define STATETREECORE_STATETREEINSTANCEDATAEXTENSIONS_GETMUTABLEEVENTQUEUE_OFFSET UNITYSDK_OFFSET(0x19BE9120)
#define STATETREECORE_STATETREEINSTANCEDATAEXTENSIONS_GETMUTABLEEXECUTIONSTATE_OFFSET UNITYSDK_OFFSET(0x19BD9F50)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeInstanceDataExtensions_TypeDefinitionIndex = 26949;

	class StateTreeInstanceDataExtensions : public ::System::Object
	{
	public:
		static ::StateTreeCore::StateTreeExecutionState& GetExecutionState(::StateTreeCore::StateTreeInstanceData& self)
		{
			return ((::StateTreeCore::StateTreeExecutionState&(*)(::StateTreeCore::StateTreeInstanceData&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATAEXTENSIONS_GETEXECUTIONSTATE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeExecutionState& GetMutableExecutionState(::StateTreeCore::StateTreeInstanceData& self)
		{
			return ((::StateTreeCore::StateTreeExecutionState&(*)(::StateTreeCore::StateTreeInstanceData&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATAEXTENSIONS_GETMUTABLEEXECUTIONSTATE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeEventQueue& GetMutableEventQueue(::StateTreeCore::StateTreeInstanceData& self)
		{
			return ((::StateTreeCore::StateTreeEventQueue&(*)(::StateTreeCore::StateTreeInstanceData&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATAEXTENSIONS_GETMUTABLEEVENTQUEUE_OFFSET))(self);
		}
	};
}
