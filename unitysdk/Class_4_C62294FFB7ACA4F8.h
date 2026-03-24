#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_C62294FFB7ACA4F8_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xAF237C0)
#define CLASS_4_C62294FFB7ACA4F8_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xAF22CC0)
#define CLASS_4_C62294FFB7ACA4F8_METHOD_4_736362F4F36A44A7_OFFSET UNITYSDK_OFFSET(0xAF22F30)
#define CLASS_4_C62294FFB7ACA4F8__CTOR_OFFSET UNITYSDK_OFFSET(0xAF235B0)

inline static constexpr unsigned int Class_4_C62294FFB7ACA4F8_TypeDefinitionIndex = 64363;

class Class_4_C62294FFB7ACA4F8 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::String*>* Field_4_0; // 0x28
	::Class_3_B537A0AA78803363* Field_4_3; // 0x30
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_1; // 0x38
	::Class_3_B537A0AA78803363* Field_4_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C62294FFB7ACA4F8__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C62294FFB7ACA4F8_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_736362F4F36A44A7(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_C62294FFB7ACA4F8_METHOD_4_736362F4F36A44A7_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C62294FFB7ACA4F8_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
