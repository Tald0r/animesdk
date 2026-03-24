#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5CD23A6C3B64A60B_Enum_3_50C035BFE9C372F6.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_5CD23A6C3B64A60B_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x327B00)
#define STRUCT_2_5CD23A6C3B64A60B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x327AF0)

inline static constexpr unsigned int Struct_2_5CD23A6C3B64A60B_TypeDefinitionIndex = 72160;

struct alignas(8) Struct_2_5CD23A6C3B64A60B
{
	::System::Object* Field_2_0; // 0x10
	::Struct_2_5CD23A6C3B64A60B_Enum_3_50C035BFE9C372F6 Field_2_1; // 0x18

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5CD23A6C3B64A60B_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5CD23A6C3B64A60B_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
