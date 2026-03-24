#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_7AF84398D0D55B93_EXECUTE_OFFSET UNITYSDK_OFFSET(0x3819E0)

inline static constexpr unsigned int Struct_2_7AF84398D0D55B93_TypeDefinitionIndex = 43192;

struct alignas(1) Struct_2_7AF84398D0D55B93
{
	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_7AF84398D0D55B93_EXECUTE_OFFSET))(this, a1);
	}
};
