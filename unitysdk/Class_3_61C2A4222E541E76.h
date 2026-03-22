#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_61C2A4222E541E76_METHOD_3_24AD3B57ADC65069_OFFSET UNITYSDK_OFFSET(0x6E8F080)
#define CLASS_3_61C2A4222E541E76_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x6E8EE20)
#define CLASS_3_61C2A4222E541E76_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6E8F410)
#define CLASS_3_61C2A4222E541E76__CTOR_OFFSET UNITYSDK_OFFSET(0x6E8F2B0)

inline static constexpr unsigned int Class_3_61C2A4222E541E76_TypeDefinitionIndex = 61370;

class Class_3_61C2A4222E541E76 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::System::String*>* Field_3_1; // 0x18
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x20
	::Class_3_B537A0AA78803363* Field_3_3; // 0x28
	::Class_4_179456445C225AB4<::System::Boolean>* Field_3_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61C2A4222E541E76__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61C2A4222E541E76_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_24AD3B57ADC65069(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_61C2A4222E541E76_METHOD_3_24AD3B57ADC65069_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61C2A4222E541E76_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
