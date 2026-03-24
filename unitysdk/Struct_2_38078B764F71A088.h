#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EF79B9ABDA480CB0_Struct_2_08F066FEBA3BBA30.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace UnityEngine { class RectTransform; }

#define STRUCT_2_38078B764F71A088_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x368D10)
#define STRUCT_2_38078B764F71A088_EQUALS_OFFSET UNITYSDK_OFFSET(0x368D00)
#define STRUCT_2_38078B764F71A088_METHOD_2_5E3E9C73AC450301_OFFSET UNITYSDK_OFFSET(0x368D50)

inline static constexpr unsigned int Struct_2_38078B764F71A088_TypeDefinitionIndex = 69058;

struct alignas(8) Struct_2_38078B764F71A088
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x1C
	::UnityEngine::Vector3 Field_2_2; // 0x28
	::Class_1_EF79B9ABDA480CB0_Struct_2_08F066FEBA3BBA30 Field_2_3; // 0x38
	::UnityEngine::RectTransform* Field_2_4; // 0x70
	::System::Boolean Field_2_5; // 0x78
	::UnityEngine::Vector3 Field_2_6; // 0x7C
	::UnityEngine::Vector3 Field_2_7; // 0x88
	::System::Int32 Field_2_8; // 0x94
	::System::Int32 Field_2_9; // 0x98
	::System::Int32 Field_2_10; // 0x9C
	::System::Int32 Field_2_11; // 0xA0
	::System::Int32 Field_2_12; // 0xA4
	::System::Boolean Field_2_13; // 0xA8
	::System::Int32 Field_2_14; // 0xAC
	::System::Single Field_2_15; // 0xB0
	::System::Single Field_2_16; // 0xB4
	::System::Single Field_2_17; // 0xB8
	::System::Single Field_2_18; // 0xBC
	::System::Single Field_2_19; // 0xC0
	::System::Single Field_2_20; // 0xC4
	::System::Boolean Field_2_21; // 0xC8

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_38078B764F71A088_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_38078B764F71A088 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_38078B764F71A088))((::PBYTE)hIl2Cpp + STRUCT_2_38078B764F71A088_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_5E3E9C73AC450301(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_38078B764F71A088_METHOD_2_5E3E9C73AC450301_OFFSET))(this, a1);
	}
};
