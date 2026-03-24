#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }

#define CLASS_1_5A6771CD0CA2718D_STRUCT_2_C0806093E36AD4F8_METHOD_2_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0x33EE10)

inline static constexpr unsigned int Class_1_5A6771CD0CA2718D_Struct_2_C0806093E36AD4F8_TypeDefinitionIndex = 62924;

struct alignas(8) Class_1_5A6771CD0CA2718D_Struct_2_C0806093E36AD4F8
{
	::System::Single Field_2_0; // 0x10
	::Foundation::Coroutine::CoroutineHandle Field_2_1; // 0x14
	::System::Action* Field_2_2; // 0x18

	::System::Void Method_2_3C56C1AF247AC1EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A6771CD0CA2718D_STRUCT_2_C0806093E36AD4F8_METHOD_2_3C56C1AF247AC1EC_OFFSET))(this);
	}
};
