#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D2BBBB758B896E04.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_0106C133B17575D7_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x45D3D0)
#define STRUCT_2_0106C133B17575D7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x45D3C0)

inline static constexpr unsigned int Struct_2_0106C133B17575D7_TypeDefinitionIndex = 38280;

struct alignas(4) Struct_2_0106C133B17575D7
{
	::System::Int32 Field_2_0; // 0x10
	::Enum_3_D2BBBB758B896E04 Field_2_1; // 0x14

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0106C133B17575D7_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0106C133B17575D7_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
