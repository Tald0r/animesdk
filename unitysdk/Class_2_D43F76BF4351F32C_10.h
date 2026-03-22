#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_556.h"

class Class_2_94EDEFF9AE3C046E;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_D43F76BF4351F32C_10_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1A5E59E0)
#define CLASS_2_D43F76BF4351F32C_10_METHOD_2_5D6624A62F65B989_OFFSET UNITYSDK_OFFSET(0x1A5E55D0)
#define CLASS_2_D43F76BF4351F32C_10_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A5E5500)
#define CLASS_2_D43F76BF4351F32C_10_METHOD_2_CFC3030A2F1B39EC_OFFSET UNITYSDK_OFFSET(0x1A5E5DD0)
#define CLASS_2_D43F76BF4351F32C_10_METHOD_2_DB4B6D1970066BE6_OFFSET UNITYSDK_OFFSET(0x1A5E5FD0)
#define CLASS_2_D43F76BF4351F32C_10__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5E5540)

inline static constexpr unsigned int Class_2_D43F76BF4351F32C_10_TypeDefinitionIndex = 79518;

class Class_2_D43F76BF4351F32C_10 : public ::Class_1_275515F210334D06
{
public:
	::Struct_2_1862835F8661A21F_556 Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_94EDEFF9AE3C046E*>* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_10__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_10_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_5D6624A62F65B989(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_10_METHOD_2_5D6624A62F65B989_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_10_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::Class_2_94EDEFF9AE3C046E* Method_2_CFC3030A2F1B39EC(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Class_2_94EDEFF9AE3C046E*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_10_METHOD_2_CFC3030A2F1B39EC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_DB4B6D1970066BE6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_10_METHOD_2_DB4B6D1970066BE6_OFFSET))(this);
	}
};
