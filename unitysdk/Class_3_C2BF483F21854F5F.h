#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_3_C2BF483F21854F5F_METHOD_3_29CA7C76C5D57032_OFFSET UNITYSDK_OFFSET(0xD5F09B0)
#define CLASS_3_C2BF483F21854F5F_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0xD5F05C0)
#define CLASS_3_C2BF483F21854F5F_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD5F1540)
#define CLASS_3_C2BF483F21854F5F__CTOR_OFFSET UNITYSDK_OFFSET(0xD5F1250)

inline static constexpr unsigned int Class_3_C2BF483F21854F5F_TypeDefinitionIndex = 39191;

class Class_3_C2BF483F21854F5F : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_6; // 0x18
	::Class_4_D0B094D0B900A9F0<::System::Int32>* Field_3_3; // 0x20
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x28
	::Class_3_B537A0AA78803363* Field_3_4; // 0x30
	::Class_3_B537A0AA78803363* Field_3_5; // 0x38
	::Class_4_179456445C225AB4<::System::String*>* Field_3_2; // 0x40
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2BF483F21854F5F__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2BF483F21854F5F_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_3_29CA7C76C5D57032(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_C2BF483F21854F5F_METHOD_3_29CA7C76C5D57032_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2BF483F21854F5F_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
