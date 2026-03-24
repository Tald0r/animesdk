#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6D798C312C19218B.h"
#include "unitysdk/Struct_2_9B079B18CA73BD4E_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"

#define STRUCT_2_6489F961F60AC624_EXECUTE_OFFSET UNITYSDK_OFFSET(0x308E50)

inline static constexpr unsigned int Struct_2_6489F961F60AC624_TypeDefinitionIndex = 72938;

struct alignas(8) Struct_2_6489F961F60AC624
{
	::Unity::Collections::NativeList_1<::Struct_2_6D798C312C19218B> Field_2_0; // 0x10
	::Unity::Collections::NativeList_1<::Struct_2_9B079B18CA73BD4E_1> Field_2_1; // 0x20

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6489F961F60AC624_EXECUTE_OFFSET))(this);
	}
};
