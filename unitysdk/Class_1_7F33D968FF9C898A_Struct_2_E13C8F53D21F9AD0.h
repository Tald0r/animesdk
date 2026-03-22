#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Threading { class AutoResetEvent; }

#define CLASS_1_7F33D968FF9C898A_STRUCT_2_E13C8F53D21F9AD0_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x37F8D0)
#define CLASS_1_7F33D968FF9C898A_STRUCT_2_E13C8F53D21F9AD0_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x37F9B0)

inline static constexpr unsigned int Class_1_7F33D968FF9C898A_Struct_2_E13C8F53D21F9AD0_TypeDefinitionIndex = 64373;

struct alignas(8) Class_1_7F33D968FF9C898A_Struct_2_E13C8F53D21F9AD0
{
	::System::String* Field_2_0; // 0x10
	::System::Threading::AutoResetEvent* Field_2_1; // 0x18

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F33D968FF9C898A_STRUCT_2_E13C8F53D21F9AD0_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F33D968FF9C898A_STRUCT_2_E13C8F53D21F9AD0_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}
};
