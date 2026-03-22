#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AD01CC4683F4B718.h"
#include "unitysdk/Struct_2_D175BB468F2F7256.h"
#include "unitysdk/System/ValueType.h"

class Class_1_4E13B7E9A9C9F5AE;

#define STRUCT_2_8184918300B83A18_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x396A20)

inline static constexpr unsigned int Struct_2_8184918300B83A18_TypeDefinitionIndex = 44301;

struct alignas(8) Struct_2_8184918300B83A18
{
	::Enum_3_AD01CC4683F4B718 Field_2_0; // 0x10
	::Enum_3_AD01CC4683F4B718 Field_2_1; // 0x14
	::Class_1_4E13B7E9A9C9F5AE* Field_2_2; // 0x18
	::Struct_2_D175BB468F2F7256 Field_2_3; // 0x20

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8184918300B83A18_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
