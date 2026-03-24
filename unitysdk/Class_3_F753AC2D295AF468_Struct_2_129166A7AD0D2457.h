#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F753AC2D295AF468_Struct_2_182B12DADCBBAB8D.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeHashMap_2.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"

#define CLASS_3_F753AC2D295AF468_STRUCT_2_129166A7AD0D2457_EXECUTE_OFFSET UNITYSDK_OFFSET(0x3257C0)

inline static constexpr unsigned int Class_3_F753AC2D295AF468_Struct_2_129166A7AD0D2457_TypeDefinitionIndex = 40897;

struct alignas(8) Class_3_F753AC2D295AF468_Struct_2_129166A7AD0D2457
{
	::Unity::Collections::NativeHashMap_2<::System::Int32, ::System::Int32> Field_2_0; // 0x10
	::Unity::Collections::NativeList_1<::Class_3_F753AC2D295AF468_Struct_2_182B12DADCBBAB8D> Field_2_1; // 0x20

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F753AC2D295AF468_STRUCT_2_129166A7AD0D2457_EXECUTE_OFFSET))(this, a1);
	}
};
