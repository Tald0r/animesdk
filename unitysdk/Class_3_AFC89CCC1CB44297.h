#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_AFC89CCC1CB44297_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xADD1460)
#define CLASS_3_AFC89CCC1CB44297_METHOD_3_47125C76AFDB961E_OFFSET UNITYSDK_OFFSET(0xADD1640)
#define CLASS_3_AFC89CCC1CB44297_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xADD19E0)
#define CLASS_3_AFC89CCC1CB44297__CTOR_OFFSET UNITYSDK_OFFSET(0xADD18C0)

inline static constexpr unsigned int Class_3_AFC89CCC1CB44297_TypeDefinitionIndex = 50228;

class Class_3_AFC89CCC1CB44297 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_2; // 0x18
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x20
	::Class_4_179456445C225AB4<::System::String*>* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AFC89CCC1CB44297__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AFC89CCC1CB44297_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_47125C76AFDB961E(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_AFC89CCC1CB44297_METHOD_3_47125C76AFDB961E_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AFC89CCC1CB44297_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
