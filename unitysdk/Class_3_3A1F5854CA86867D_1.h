#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_3_3A1F5854CA86867D_1_METHOD_3_070EF64ABEC8A125_OFFSET UNITYSDK_OFFSET(0x7AD9BA0)
#define CLASS_3_3A1F5854CA86867D_1_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x7AD9790)
#define CLASS_3_3A1F5854CA86867D_1_METHOD_3_709CF7B1B9FB703C_OFFSET UNITYSDK_OFFSET(0x7AD9B00)
#define CLASS_3_3A1F5854CA86867D_1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7ADA150)
#define CLASS_3_3A1F5854CA86867D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x7AD9F70)

inline static constexpr unsigned int Class_3_3A1F5854CA86867D_1_TypeDefinitionIndex = 74413;

class Class_3_3A1F5854CA86867D_1 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x18
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x20
	::Class_3_B537A0AA78803363* Field_3_5; // 0x28
	::Class_4_D0B094D0B900A9F0<::System::Boolean>* Field_3_4; // 0x30
	::Class_4_179456445C225AB4<::System::Boolean>* Field_3_3; // 0x38
	::Class_4_179456445C225AB4<::System::String*>* Field_3_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A1F5854CA86867D_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A1F5854CA86867D_1_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_3_709CF7B1B9FB703C(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_3A1F5854CA86867D_1_METHOD_3_709CF7B1B9FB703C_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_070EF64ABEC8A125(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_3A1F5854CA86867D_1_METHOD_3_070EF64ABEC8A125_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A1F5854CA86867D_1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
