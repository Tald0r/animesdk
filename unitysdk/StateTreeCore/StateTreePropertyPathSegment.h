#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreePropertyPathSegment_TypeDefinitionIndex = 26961;

	struct alignas(4) StateTreePropertyPathSegment
	{
		::Foundation::Unreal::FName Name; // 0x10
		::System::Int32 ArrayIndex; // 0x18
		::UnrealTypes::FStructHandle InstanceStruct; // 0x1C
	};
}
