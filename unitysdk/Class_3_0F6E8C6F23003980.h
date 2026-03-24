#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
class Class_4_5B5E82918BC44D6E;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_0F6E8C6F23003980_METHOD_3_04701D1E1BAA37EF_OFFSET UNITYSDK_OFFSET(0x7781960)
#define CLASS_3_0F6E8C6F23003980_METHOD_3_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x77818D0)
#define CLASS_3_0F6E8C6F23003980_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7781ED0)
#define CLASS_3_0F6E8C6F23003980_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x77815F0)
#define CLASS_3_0F6E8C6F23003980__CTOR_OFFSET UNITYSDK_OFFSET(0x7781D40)

inline static constexpr unsigned int Class_3_0F6E8C6F23003980_TypeDefinitionIndex = 44871;

class Class_3_0F6E8C6F23003980 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x18
	::Class_4_179456445C225AB4<::System::String*>* Field_3_2; // 0x20
	::Class_4_5B5E82918BC44D6E* Field_3_3; // 0x28
	::Class_3_B537A0AA78803363* Field_3_4; // 0x30
	::Class_4_179456445C225AB4<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F6E8C6F23003980__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F6E8C6F23003980_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_3F0F9592A0E917D4(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_0F6E8C6F23003980_METHOD_3_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F6E8C6F23003980_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_3_04701D1E1BAA37EF(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_0F6E8C6F23003980_METHOD_3_04701D1E1BAA37EF_OFFSET))(this, a1);
	}
};
