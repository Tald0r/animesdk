#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_674.h"

class Class_2_208CC9941471731A_1017;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_D43F76BF4351F32C_15_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1AB6DBF0)
#define CLASS_2_D43F76BF4351F32C_15_METHOD_2_52F693593F7BBFE8_OFFSET UNITYSDK_OFFSET(0x1AB6DCA0)
#define CLASS_2_D43F76BF4351F32C_15_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1AB6D6E0)
#define CLASS_2_D43F76BF4351F32C_15_METHOD_2_CFC3030A2F1B39EC_OFFSET UNITYSDK_OFFSET(0x1AB6D9F0)
#define CLASS_2_D43F76BF4351F32C_15_METHOD_2_DB4B6D1970066BE6_OFFSET UNITYSDK_OFFSET(0x1AB6D7B0)
#define CLASS_2_D43F76BF4351F32C_15__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB6D720)

inline static constexpr unsigned int Class_2_D43F76BF4351F32C_15_TypeDefinitionIndex = 81479;

class Class_2_D43F76BF4351F32C_15 : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1017*>* Field_2_1; // 0x18
	::Struct_2_1862835F8661A21F_674 Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_15__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_15_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_DB4B6D1970066BE6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_15_METHOD_2_DB4B6D1970066BE6_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1017* Method_2_CFC3030A2F1B39EC(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Class_2_208CC9941471731A_1017*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_15_METHOD_2_CFC3030A2F1B39EC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_15_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_52F693593F7BBFE8(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_15_METHOD_2_52F693593F7BBFE8_OFFSET))(this, a1);
	}
};
