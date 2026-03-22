#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define CLASS_1_8FD46C79850CAB51_STRUCT_2_2F94537E6CD8CB8F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x77F230)
#define CLASS_1_8FD46C79850CAB51_STRUCT_2_2F94537E6CD8CB8F_EQUALS_OFFSET UNITYSDK_OFFSET(0x317C60)
#define CLASS_1_8FD46C79850CAB51_STRUCT_2_2F94537E6CD8CB8F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x77F290)

inline static constexpr unsigned int Class_1_8FD46C79850CAB51_Struct_2_2F94537E6CD8CB8F_TypeDefinitionIndex = 10082;

struct alignas(4) Class_1_8FD46C79850CAB51_Struct_2_2F94537E6CD8CB8F
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14

	::System::Boolean Equals(::Class_1_8FD46C79850CAB51_Struct_2_2F94537E6CD8CB8F a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8FD46C79850CAB51_Struct_2_2F94537E6CD8CB8F))((::PBYTE)hIl2Cpp + CLASS_1_8FD46C79850CAB51_STRUCT_2_2F94537E6CD8CB8F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8FD46C79850CAB51_STRUCT_2_2F94537E6CD8CB8F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FD46C79850CAB51_STRUCT_2_2F94537E6CD8CB8F_GETHASHCODE_OFFSET))(this);
	}
};
