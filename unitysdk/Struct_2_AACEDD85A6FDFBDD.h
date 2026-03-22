#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_AACEDD85A6FDFBDD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x34F9E0)

inline static constexpr unsigned int Struct_2_AACEDD85A6FDFBDD_TypeDefinitionIndex = 51215;

struct alignas(1) Struct_2_AACEDD85A6FDFBDD
{
	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AACEDD85A6FDFBDD_DISPOSE_OFFSET))(this);
	}
};
