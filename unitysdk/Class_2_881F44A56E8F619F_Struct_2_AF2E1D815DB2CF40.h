#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_881F44A56E8F619F_STRUCT_2_AF2E1D815DB2CF40_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x35FB70)
#define CLASS_2_881F44A56E8F619F_STRUCT_2_AF2E1D815DB2CF40_EQUALS_OFFSET UNITYSDK_OFFSET(0x35FA90)
#define CLASS_2_881F44A56E8F619F_STRUCT_2_AF2E1D815DB2CF40_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x35FB80)

inline static constexpr unsigned int Class_2_881F44A56E8F619F_Struct_2_AF2E1D815DB2CF40_TypeDefinitionIndex = 44572;

struct alignas(8) Class_2_881F44A56E8F619F_Struct_2_AF2E1D815DB2CF40
{
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18

	::System::Boolean Equals(::Class_2_881F44A56E8F619F_Struct_2_AF2E1D815DB2CF40 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_881F44A56E8F619F_Struct_2_AF2E1D815DB2CF40))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_STRUCT_2_AF2E1D815DB2CF40_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_STRUCT_2_AF2E1D815DB2CF40_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_STRUCT_2_AF2E1D815DB2CF40_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}
};
