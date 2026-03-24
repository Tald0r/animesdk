#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_3_DB4680B1EF8EFDBE_STRUCT_2_327586AF0044D0D6_EXECUTE_OFFSET UNITYSDK_OFFSET(0x398A70)

inline static constexpr unsigned int Class_3_DB4680B1EF8EFDBE_Struct_2_327586AF0044D0D6_TypeDefinitionIndex = 64082;

struct alignas(4) Class_3_DB4680B1EF8EFDBE_Struct_2_327586AF0044D0D6
{
	::System::Single Field_2_0; // 0x10

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_DB4680B1EF8EFDBE_STRUCT_2_327586AF0044D0D6_EXECUTE_OFFSET))(this, a1);
	}
};
