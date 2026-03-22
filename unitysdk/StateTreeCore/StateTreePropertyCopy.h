#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeDataHandle.h"
#include "unitysdk/StateTreeCore/StateTreePropertyCopyType.h"
#include "unitysdk/StateTreeCore/StateTreePropertyIndirection.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreePropertyCopy_TypeDefinitionIndex = 26968;

	struct alignas(4) StateTreePropertyCopy
	{
		::StateTreeCore::StateTreePropertyIndirection SourceIndirection; // 0x10
		::StateTreeCore::StateTreePropertyIndirection TargetIndirection; // 0x20
		::UnrealTypes::FStructHandle SourceStructType; // 0x30
		::System::Int32 CopySize; // 0x34
		::StateTreeCore::StateTreeDataHandle SourceDataHandle; // 0x38
		::StateTreeCore::StateTreePropertyCopyType Type; // 0x40
	};
}
