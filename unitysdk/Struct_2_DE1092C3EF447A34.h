#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_DE1092C3EF447A34_METHOD_2_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0x33B6A0)
#define STRUCT_2_DE1092C3EF447A34_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x33B6C0)

inline static constexpr unsigned int Struct_2_DE1092C3EF447A34_TypeDefinitionIndex = 42361;

struct alignas(4) Struct_2_DE1092C3EF447A34
{
	::System::Single Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x18
	::System::Single Field_2_3; // 0x1C
	::System::Single Field_2_4; // 0x20
	::UnityEngine::Vector3 Field_2_5; // 0x24
	::UnityEngine::Vector3 Field_2_6; // 0x30
	::System::Boolean Field_2_7; // 0x3C

	::UnityEngine::Vector3 Method_2_7DFB4B9C80198D98()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DE1092C3EF447A34_METHOD_2_7DFB4B9C80198D98_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DE1092C3EF447A34_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
