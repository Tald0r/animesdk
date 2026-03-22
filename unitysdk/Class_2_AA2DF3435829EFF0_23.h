#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_956.h"

class Class_2_F6BD7FA5BF83F4CE_1;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_AA2DF3435829EFF0_23_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1A284980)
#define CLASS_2_AA2DF3435829EFF0_23_METHOD_2_32E47D6A527E924D_OFFSET UNITYSDK_OFFSET(0x1A284A30)
#define CLASS_2_AA2DF3435829EFF0_23_METHOD_2_5D6624A62F65B989_OFFSET UNITYSDK_OFFSET(0x1A284570)
#define CLASS_2_AA2DF3435829EFF0_23_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A284260)
#define CLASS_2_AA2DF3435829EFF0_23_METHOD_2_DB4B6D1970066BE6_OFFSET UNITYSDK_OFFSET(0x1A284330)
#define CLASS_2_AA2DF3435829EFF0_23__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2842A0)

inline static constexpr unsigned int Class_2_AA2DF3435829EFF0_23_TypeDefinitionIndex = 79903;

class Class_2_AA2DF3435829EFF0_23 : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_F6BD7FA5BF83F4CE_1*>* Field_2_1; // 0x18
	::Struct_2_1862835F8661A21F_956 Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_23__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_23_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_DB4B6D1970066BE6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_23_METHOD_2_DB4B6D1970066BE6_OFFSET))(this);
	}

	::System::Void Method_2_5D6624A62F65B989(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_23_METHOD_2_5D6624A62F65B989_OFFSET))(this, a1);
	}

	::Class_2_F6BD7FA5BF83F4CE_1* Method_2_32E47D6A527E924D(::System::Int32 a1)
	{
		return ((::Class_2_F6BD7FA5BF83F4CE_1*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_23_METHOD_2_32E47D6A527E924D_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_23_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}
};
