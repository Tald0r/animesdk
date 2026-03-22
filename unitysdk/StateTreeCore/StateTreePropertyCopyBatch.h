#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeBindableStructDesc.h"
#include "unitysdk/System/ValueType.h"

#define STATETREECORE_STATETREEPROPERTYCOPYBATCH_RESET_OFFSET UNITYSDK_OFFSET(0x8EC810)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreePropertyCopyBatch_TypeDefinitionIndex = 26964;

	struct alignas(4) StateTreePropertyCopyBatch
	{
		::StateTreeCore::StateTreeBindableStructDesc TargetStruct; // 0x10
		::System::UInt16 BindingsBegin; // 0x28
		::System::UInt16 BindingsEnd; // 0x2A

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYCOPYBATCH_RESET_OFFSET))(this);
		}
	};
}
