#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_206.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D0F4E27823F3BE31_1_METHOD_1_0AF57C9DBD7ECFC0_1_OFFSET UNITYSDK_OFFSET(0x16BC5060)
#define CLASS_1_D0F4E27823F3BE31_1_METHOD_1_0AF57C9DBD7ECFC0_OFFSET UNITYSDK_OFFSET(0x16BC49E0)
#define CLASS_1_D0F4E27823F3BE31_1_METHOD_1_5BF0E61BD5CA40A5_1_OFFSET UNITYSDK_OFFSET(0x16BC4D40)
#define CLASS_1_D0F4E27823F3BE31_1_METHOD_1_5BF0E61BD5CA40A5_2_OFFSET UNITYSDK_OFFSET(0x16BC4E50)
#define CLASS_1_D0F4E27823F3BE31_1_METHOD_1_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0x16BC4C20)
#define CLASS_1_D0F4E27823F3BE31_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x16BC5050)
#define CLASS_1_D0F4E27823F3BE31_1_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x16BC4F60)
#define CLASS_1_D0F4E27823F3BE31_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16BC4D30)
#define CLASS_1_D0F4E27823F3BE31_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16BC49D0)

inline static constexpr unsigned int Class_1_D0F4E27823F3BE31_1_TypeDefinitionIndex = 11524;

class Class_1_D0F4E27823F3BE31_1 : public ::System::Object
{
public:
	::System::String* Field_1_9; // 0x10
	::System::String* Field_1_8; // 0x18
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* Field_1_6; // 0x28
	::System::String* Field_1_5; // 0x30
	::Struct_2_3E75877A2888D88A_206 Field_1_0; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* Field_1_7; // 0x48
	::System::Byte Field_1_3; // 0x50
	::System::Byte Field_1_4; // 0x51
	::System::Boolean Field_1_2; // 0x52

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_206 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_206, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_D0F4E27823F3BE31_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_0AF57C9DBD7ECFC0()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F4E27823F3BE31_1_METHOD_1_0AF57C9DBD7ECFC0_OFFSET))(this);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F4E27823F3BE31_1_METHOD_1_5BF0E61BD5CA40A5_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F4E27823F3BE31_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F4E27823F3BE31_1_METHOD_1_5BF0E61BD5CA40A5_1_OFFSET))(this);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F4E27823F3BE31_1_METHOD_1_5BF0E61BD5CA40A5_2_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F4E27823F3BE31_1_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D0F4E27823F3BE31_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_0AF57C9DBD7ECFC0_1()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F4E27823F3BE31_1_METHOD_1_0AF57C9DBD7ECFC0_1_OFFSET))(this);
	}
};
