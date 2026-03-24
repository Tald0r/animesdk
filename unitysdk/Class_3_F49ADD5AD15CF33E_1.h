#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
class Class_4_425BBC3CBFD638A0_1;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_3_F49ADD5AD15CF33E_1_METHOD_3_070EF64ABEC8A125_OFFSET UNITYSDK_OFFSET(0xD6830C0)
#define CLASS_3_F49ADD5AD15CF33E_1_METHOD_3_709CF7B1B9FB703C_OFFSET UNITYSDK_OFFSET(0xD683020)
#define CLASS_3_F49ADD5AD15CF33E_1_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0xD682C30)
#define CLASS_3_F49ADD5AD15CF33E_1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD683730)
#define CLASS_3_F49ADD5AD15CF33E_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD683540)

inline static constexpr unsigned int Class_3_F49ADD5AD15CF33E_1_TypeDefinitionIndex = 65177;

class Class_3_F49ADD5AD15CF33E_1 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x18
	::Class_4_425BBC3CBFD638A0_1* Field_3_4; // 0x20
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_2; // 0x28
	::Class_4_179456445C225AB4<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x30
	::Class_3_B537A0AA78803363* Field_3_6; // 0x38
	::Class_4_179456445C225AB4<::System::String*>* Field_3_3; // 0x40
	::Class_4_D0B094D0B900A9F0<::System::Boolean>* Field_3_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F49ADD5AD15CF33E_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F49ADD5AD15CF33E_1_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_3_709CF7B1B9FB703C(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_F49ADD5AD15CF33E_1_METHOD_3_709CF7B1B9FB703C_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F49ADD5AD15CF33E_1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_3_070EF64ABEC8A125(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_F49ADD5AD15CF33E_1_METHOD_3_070EF64ABEC8A125_OFFSET))(this, a1);
	}
};
