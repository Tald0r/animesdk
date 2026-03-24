#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_11671E96E2D37ECD.h"
#include "unitysdk/System/Object.h"

class Class_2_5AB8A906F82D6C7C;

#define CLASS_1_C0F2287D0606097D_METHOD_1_E9200C1042E21ECC_OFFSET UNITYSDK_OFFSET(0x8057950)
#define CLASS_1_C0F2287D0606097D__CTOR_OFFSET UNITYSDK_OFFSET(0x8057940)

inline static constexpr unsigned int Class_1_C0F2287D0606097D_TypeDefinitionIndex = 39123;

class Class_1_C0F2287D0606097D : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	::Class_2_5AB8A906F82D6C7C* Field_1_0; // 0x10

	::System::Void _ctor(::Class_2_5AB8A906F82D6C7C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5AB8A906F82D6C7C*))((::PBYTE)hIl2Cpp + CLASS_1_C0F2287D0606097D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9200C1042E21ECC(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C0F2287D0606097D_METHOD_1_E9200C1042E21ECC_OFFSET))(this, a1, a2);
	}
};
