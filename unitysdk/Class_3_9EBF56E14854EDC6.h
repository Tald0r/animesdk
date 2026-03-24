#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_9EBF56E14854EDC6_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x8E90620)
#define CLASS_3_9EBF56E14854EDC6_METHOD_3_73B4FE09D697EB6E_OFFSET UNITYSDK_OFFSET(0x8E90800)
#define CLASS_3_9EBF56E14854EDC6_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8E90AD0)
#define CLASS_3_9EBF56E14854EDC6__CTOR_OFFSET UNITYSDK_OFFSET(0x8E909B0)

inline static constexpr unsigned int Class_3_9EBF56E14854EDC6_TypeDefinitionIndex = 53186;

class Class_3_9EBF56E14854EDC6 : public ::Class_2_52F82E04F7FEE529
{
public:
	// static const ::System::String* Field_3_3; // 0x0
	::Class_3_B537A0AA78803363* Field_3_2; // 0x18
	::Class_4_179456445C225AB4<::System::Boolean>* Field_3_1; // 0x20
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9EBF56E14854EDC6__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9EBF56E14854EDC6_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_73B4FE09D697EB6E(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_9EBF56E14854EDC6_METHOD_3_73B4FE09D697EB6E_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9EBF56E14854EDC6_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
