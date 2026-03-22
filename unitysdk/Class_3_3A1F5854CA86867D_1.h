#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_3A1F5854CA86867D_1_METHOD_3_070EF64ABEC8A125_OFFSET UNITYSDK_OFFSET(0xBB69E50)
#define CLASS_3_3A1F5854CA86867D_1_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0xBB69A40)
#define CLASS_3_3A1F5854CA86867D_1_METHOD_3_709CF7B1B9FB703C_OFFSET UNITYSDK_OFFSET(0xBB69DB0)
#define CLASS_3_3A1F5854CA86867D_1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBB6A470)
#define CLASS_3_3A1F5854CA86867D_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBB6A290)

inline static constexpr unsigned int Class_3_3A1F5854CA86867D_1_TypeDefinitionIndex = 41351;

class Class_3_3A1F5854CA86867D_1 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::System::String*>* Field_3_3; // 0x18
	::Class_4_179456445C225AB4<::System::String*>* Field_3_2; // 0x20
	::Class_4_179456445C225AB4<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x30
	::Class_4_AF61EEC11F34483C<::System::Boolean>* Field_3_4; // 0x38
	::Class_3_B537A0AA78803363* Field_3_5; // 0x40

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

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A1F5854CA86867D_1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_3_070EF64ABEC8A125(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_3A1F5854CA86867D_1_METHOD_3_070EF64ABEC8A125_OFFSET))(this, a1);
	}
};
