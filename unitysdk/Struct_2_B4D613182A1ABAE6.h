#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Collider; }

#define STRUCT_2_B4D613182A1ABAE6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2D4E20)
#define STRUCT_2_B4D613182A1ABAE6_METHOD_2_7EB244899E065362_OFFSET UNITYSDK_OFFSET(0x64C8C20)
#define STRUCT_2_B4D613182A1ABAE6_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x2D4E90)
#define STRUCT_2_B4D613182A1ABAE6__CTOR_OFFSET UNITYSDK_OFFSET(0x2D4C70)

inline static constexpr unsigned int Struct_2_B4D613182A1ABAE6_TypeDefinitionIndex = 74852;

struct alignas(8) Struct_2_B4D613182A1ABAE6
{
	::UnityEngine::Collider* Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x1C

	::System::Void _ctor(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + STRUCT_2_B4D613182A1ABAE6__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B4D613182A1ABAE6_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B4D613182A1ABAE6_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	static ::Struct_2_B4D613182A1ABAE6 Method_2_7EB244899E065362(::UnityEngine::Collider* a1)
	{
		return ((::Struct_2_B4D613182A1ABAE6(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + STRUCT_2_B4D613182A1ABAE6_METHOD_2_7EB244899E065362_OFFSET))(a1);
	}
};
