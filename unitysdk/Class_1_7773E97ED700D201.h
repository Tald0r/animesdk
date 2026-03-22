#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2C3CB84E07DDE41A.h"
#include "unitysdk/Struct_2_A391FBC09B5D7A1C.h"
#include "unitysdk/Struct_2_CC86B677214AB654.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_229;
class Class_1_49729109E01D22A0;
class Class_1_E4DCFD174698F990;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_7773E97ED700D201_METHOD_1_0B85A40159581BBB_OFFSET UNITYSDK_OFFSET(0x92F5BF0)
#define CLASS_1_7773E97ED700D201_METHOD_1_0F9AAA87B634A146_OFFSET UNITYSDK_OFFSET(0x92F5F60)
#define CLASS_1_7773E97ED700D201_METHOD_1_461A6EE07D8A988C_OFFSET UNITYSDK_OFFSET(0x92F65A0)
#define CLASS_1_7773E97ED700D201_METHOD_1_5A8A09D078D6326B_OFFSET UNITYSDK_OFFSET(0x92F6670)
#define CLASS_1_7773E97ED700D201_METHOD_1_5C71BB0FC969EA75_OFFSET UNITYSDK_OFFSET(0x92F8810)
#define CLASS_1_7773E97ED700D201_METHOD_1_5E51F7FA8AE3963E_OFFSET UNITYSDK_OFFSET(0x92F6C60)
#define CLASS_1_7773E97ED700D201_METHOD_1_6632BA9E17A7643A_OFFSET UNITYSDK_OFFSET(0x92F6FC0)
#define CLASS_1_7773E97ED700D201_METHOD_1_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x92F5A30)
#define CLASS_1_7773E97ED700D201_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x92F7180)
#define CLASS_1_7773E97ED700D201_METHOD_1_D0A1FDA05D5ED92B_OFFSET UNITYSDK_OFFSET(0x92F71E0)
#define CLASS_1_7773E97ED700D201_METHOD_1_D30CC5B4F0E44E1B_OFFSET UNITYSDK_OFFSET(0x92F8780)
#define CLASS_1_7773E97ED700D201_METHOD_1_EBD8C3E24DD8C8EC_OFFSET UNITYSDK_OFFSET(0x92F54D0)
#define CLASS_1_7773E97ED700D201__CCTOR_OFFSET UNITYSDK_OFFSET(0x92F53A0)
#define CLASS_1_7773E97ED700D201__CTOR_1_OFFSET UNITYSDK_OFFSET(0x92F4F60)
#define CLASS_1_7773E97ED700D201__CTOR_OFFSET UNITYSDK_OFFSET(0x92F4B30)

inline static constexpr unsigned int Class_1_7773E97ED700D201_TypeDefinitionIndex = 43987;

class Class_1_7773E97ED700D201 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>** StaticGet_Field_1_19()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7773E97ED700D201_TypeDefinitionIndex)->GetStaticField(0x3D000);
	}
	// static const ::System::String* Field_1_8; // 0x0
	::Class_0_16E4307DCC419505_229* Field_1_17; // 0x10
	::System::Text::RegularExpressions::Regex* Field_1_9; // 0x18
	::System::String* Field_1_18; // 0x20
	::System::Text::StringBuilder* Field_1_5; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_4; // 0x30
	::Class_1_49729109E01D22A0* Field_1_13; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* Field_1_14; // 0x40
	::System::Type* Field_1_16; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_E4DCFD174698F990*>* Field_1_0; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_3; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_A391FBC09B5D7A1C>* Field_1_2; // 0x60
	::System::String* Field_1_6; // 0x68
	::System::String* Field_1_7; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_2C3CB84E07DDE41A>* Field_1_1; // 0x78
	::System::Type* Field_1_15; // 0x80
	::System::Boolean Field_1_10; // 0x88
	::System::Boolean Field_1_12; // 0x89
	::System::Boolean Field_1_11; // 0x8A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7773E97ED700D201__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_0_16E4307DCC419505_229* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_229*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7773E97ED700D201__CTOR_1_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7773E97ED700D201__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_E4DCFD174698F990*>* Method_1_EBD8C3E24DD8C8EC(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_49729109E01D22A0*>* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_E4DCFD174698F990*>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_49729109E01D22A0*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7773E97ED700D201_METHOD_1_EBD8C3E24DD8C8EC_OFFSET))(this, a1, a2);
	}

	::Struct_2_CC86B677214AB654 Method_1_461A6EE07D8A988C(::SimpleJSON::JSONNode* a1, ::System::Boolean a2)
	{
		return ((::Struct_2_CC86B677214AB654(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7773E97ED700D201_METHOD_1_461A6EE07D8A988C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0B85A40159581BBB(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_49729109E01D22A0*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_49729109E01D22A0*>*))((::PBYTE)hIl2Cpp + CLASS_1_7773E97ED700D201_METHOD_1_0B85A40159581BBB_OFFSET))(this, a1);
	}

	::System::Void Method_1_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7773E97ED700D201_METHOD_1_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Void Method_1_6632BA9E17A7643A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7773E97ED700D201_METHOD_1_6632BA9E17A7643A_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7773E97ED700D201_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_5A8A09D078D6326B(::System::String* a1, ::System::String* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_49729109E01D22A0*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_49729109E01D22A0*>*))((::PBYTE)hIl2Cpp + CLASS_1_7773E97ED700D201_METHOD_1_5A8A09D078D6326B_OFFSET))(this, a1, a2, a3);
	}

	static ::System::String* Method_1_5C71BB0FC969EA75(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7773E97ED700D201_METHOD_1_5C71BB0FC969EA75_OFFSET))(a1);
	}

	::System::Void Method_1_5E51F7FA8AE3963E(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_7773E97ED700D201_METHOD_1_5E51F7FA8AE3963E_OFFSET))(this, a1);
	}

	::System::Void Method_1_0F9AAA87B634A146()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7773E97ED700D201_METHOD_1_0F9AAA87B634A146_OFFSET))(this);
	}

	::System::Void Method_1_D0A1FDA05D5ED92B(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_49729109E01D22A0*>* a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_49729109E01D22A0*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7773E97ED700D201_METHOD_1_D0A1FDA05D5ED92B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::UInt64 Method_1_D30CC5B4F0E44E1B(::System::UInt64 a1, ::System::UInt64 a2)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_7773E97ED700D201_METHOD_1_D30CC5B4F0E44E1B_OFFSET))(this, a1, a2);
	}
};
