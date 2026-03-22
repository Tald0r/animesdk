#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_6178B3CA1C4EB604;

#define STRUCT_2_D37445D6054F848B_METHOD_2_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x359990)
#define STRUCT_2_D37445D6054F848B_METHOD_2_A4FC9423DE081646_OFFSET UNITYSDK_OFFSET(0x359A20)
#define STRUCT_2_D37445D6054F848B_METHOD_2_ABFE6A357B89C69A_OFFSET UNITYSDK_OFFSET(0x359A10)
#define STRUCT_2_D37445D6054F848B__CCTOR_OFFSET UNITYSDK_OFFSET(0x8CFDBA0)
#define STRUCT_2_D37445D6054F848B__CTOR_OFFSET UNITYSDK_OFFSET(0x359960)

inline static constexpr unsigned int Struct_2_D37445D6054F848B_TypeDefinitionIndex = 50202;

struct alignas(8) Struct_2_D37445D6054F848B
{
	static ::Struct_2_D37445D6054F848B* StaticGet_Field_2_1()
	{
		return (::Struct_2_D37445D6054F848B*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_D37445D6054F848B_TypeDefinitionIndex)->GetStaticField(0x2A680);
	}
	// static const ::System::Int32 Field_2_0 = 0x0; // 0x0
	::System::UInt32 Field_2_2; // 0x10
	::Class_1_6178B3CA1C4EB604* Field_2_3; // 0x18

	::System::Void _ctor(::Class_1_6178B3CA1C4EB604* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6178B3CA1C4EB604*))((::PBYTE)hIl2Cpp + STRUCT_2_D37445D6054F848B__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_D37445D6054F848B__CCTOR_OFFSET))();
	}

	::Class_1_6178B3CA1C4EB604* Method_2_358A144584A5DBFC()
	{
		return ((::Class_1_6178B3CA1C4EB604*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D37445D6054F848B_METHOD_2_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Boolean Method_2_ABFE6A357B89C69A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D37445D6054F848B_METHOD_2_ABFE6A357B89C69A_OFFSET))(this);
	}

	::System::Boolean Method_2_A4FC9423DE081646(::Class_1_6178B3CA1C4EB604*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6178B3CA1C4EB604*&))((::PBYTE)hIl2Cpp + STRUCT_2_D37445D6054F848B_METHOD_2_A4FC9423DE081646_OFFSET))(this, a1);
	}
};
