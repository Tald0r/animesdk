#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_DE0C0BD87BB6D294_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x825EB00)
#define CLASS_3_DE0C0BD87BB6D294_METHOD_3_C43DD7AFEEA2B827_OFFSET UNITYSDK_OFFSET(0x825EEF0)
#define CLASS_3_DE0C0BD87BB6D294_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x825F500)
#define CLASS_3_DE0C0BD87BB6D294__CTOR_OFFSET UNITYSDK_OFFSET(0x825F280)

inline static constexpr unsigned int Class_3_DE0C0BD87BB6D294_TypeDefinitionIndex = 45304;

class Class_3_DE0C0BD87BB6D294 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_3; // 0x18
	::Class_3_B537A0AA78803363* Field_3_5; // 0x20
	::Class_3_B537A0AA78803363* Field_3_6; // 0x28
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_1; // 0x30
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x38
	::Class_4_179456445C225AB4<::System::Single>* Field_3_4; // 0x40
	::Class_4_179456445C225AB4<::System::String*>* Field_3_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DE0C0BD87BB6D294__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DE0C0BD87BB6D294_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_3_C43DD7AFEEA2B827(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_DE0C0BD87BB6D294_METHOD_3_C43DD7AFEEA2B827_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DE0C0BD87BB6D294_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
