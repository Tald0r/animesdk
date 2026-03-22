#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_CE208E51B3B38943_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x6E655E0)
#define CLASS_3_CE208E51B3B38943_METHOD_3_2C511ACA26F77163_OFFSET UNITYSDK_OFFSET(0x6E657C0)
#define CLASS_3_CE208E51B3B38943_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6E65A80)
#define CLASS_3_CE208E51B3B38943__CTOR_OFFSET UNITYSDK_OFFSET(0x6E65960)

inline static constexpr unsigned int Class_3_CE208E51B3B38943_TypeDefinitionIndex = 55621;

class Class_3_CE208E51B3B38943 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x18
	::Class_3_B537A0AA78803363* Field_3_2; // 0x20
	::Class_4_179456445C225AB4<::System::String*>* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CE208E51B3B38943__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CE208E51B3B38943_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_2C511ACA26F77163(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_CE208E51B3B38943_METHOD_3_2C511ACA26F77163_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CE208E51B3B38943_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
