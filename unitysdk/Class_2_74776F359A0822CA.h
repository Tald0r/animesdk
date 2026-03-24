#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"
#include "unitysdk/Class_2_95C7794E44FC59B2_Struct_2_E68059AB8DC16A3C.h"

class Class_0_16E4307DCC419505_106;
class Class_2_4BE21148C8967B21;
class Class_2_74776F359A0822CA_Class_3_193816260C40D177;
class Class_3_1A345EAE5F749316_28;
class Class_3_B388727954800282;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class Class_0_16E4307DCC419505_118;
template <typename T> class Class_0_16E4307DCC419505_96;

#define CLASS_2_74776F359A0822CA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA157830)
#define CLASS_2_74776F359A0822CA_METHOD_2_106A27B044BAA19B_OFFSET UNITYSDK_OFFSET(0xA157C20)
#define CLASS_2_74776F359A0822CA_METHOD_2_630A3B9C63A23882_OFFSET UNITYSDK_OFFSET(0xA1579C0)
#define CLASS_2_74776F359A0822CA_METHOD_2_6A8C1A0BCB187983_OFFSET UNITYSDK_OFFSET(0xA158790)
#define CLASS_2_74776F359A0822CA_METHOD_2_6BDDB418F8493276_OFFSET UNITYSDK_OFFSET(0xA1579D0)
#define CLASS_2_74776F359A0822CA_METHOD_2_974EFCD6A4246648_OFFSET UNITYSDK_OFFSET(0xA157320)
#define CLASS_2_74776F359A0822CA_METHOD_2_A0223071CB47F295_OFFSET UNITYSDK_OFFSET(0xA158CD0)
#define CLASS_2_74776F359A0822CA_METHOD_2_F8DD904435F624C4_OFFSET UNITYSDK_OFFSET(0xA159600)
#define CLASS_2_74776F359A0822CA_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xA156E60)
#define CLASS_2_74776F359A0822CA__CTOR_OFFSET UNITYSDK_OFFSET(0xA157940)

inline static constexpr unsigned int Class_2_74776F359A0822CA_TypeDefinitionIndex = 53835;

class Class_2_74776F359A0822CA : public ::Class_1_F57C3EEEB03201AF
{
public:
	::Class_0_16E4307DCC419505_96<::System::Boolean>* Field_2_4; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_96<::System::Int32>*>* Field_2_5; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_96<::System::Int32>*>* Field_2_6; // 0x70
	::Class_0_16E4307DCC419505_106* Field_2_7; // 0x78
	::Class_2_74776F359A0822CA_Class_3_193816260C40D177* Field_2_1; // 0x80
	::Class_2_4BE21148C8967B21* Field_2_2; // 0x88
	::Class_0_16E4307DCC419505_118<::Class_2_95C7794E44FC59B2_Struct_2_E68059AB8DC16A3C>* Field_2_3; // 0x90
	::System::UInt32 Field_2_0; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74776F359A0822CA__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74776F359A0822CA_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74776F359A0822CA_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_630A3B9C63A23882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74776F359A0822CA_METHOD_2_630A3B9C63A23882_OFFSET))(this);
	}

	::System::Void Method_2_6BDDB418F8493276(::Class_3_B388727954800282* a1, ::Class_3_1A345EAE5F749316_28* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B388727954800282*, ::Class_3_1A345EAE5F749316_28*))((::PBYTE)hIl2Cpp + CLASS_2_74776F359A0822CA_METHOD_2_6BDDB418F8493276_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_106A27B044BAA19B(::Class_2_74776F359A0822CA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_74776F359A0822CA*))((::PBYTE)hIl2Cpp + CLASS_2_74776F359A0822CA_METHOD_2_106A27B044BAA19B_OFFSET))(this, a1);
	}

	::System::Void Method_2_6A8C1A0BCB187983(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_74776F359A0822CA_METHOD_2_6A8C1A0BCB187983_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_974EFCD6A4246648(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_74776F359A0822CA_METHOD_2_974EFCD6A4246648_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A0223071CB47F295(::Class_2_74776F359A0822CA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_74776F359A0822CA*))((::PBYTE)hIl2Cpp + CLASS_2_74776F359A0822CA_METHOD_2_A0223071CB47F295_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F8DD904435F624C4(::System::UInt32 a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_74776F359A0822CA_METHOD_2_F8DD904435F624C4_OFFSET))(this, a1, a2);
	}
};
