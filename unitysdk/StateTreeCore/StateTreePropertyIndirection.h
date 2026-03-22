#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreePropertyAccessType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreePropertyIndirection_TypeDefinitionIndex = 26966;

	struct alignas(4) StateTreePropertyIndirection
	{
		::System::UInt16 ArrayIndex; // 0x10
		::System::UInt16 Offset; // 0x12
		::System::UInt16 NextIndex; // 0x14
		::StateTreeCore::StateTreePropertyAccessType Type; // 0x18
		::UnrealTypes::FStructHandle InstanceStruct; // 0x1C
	};
}
