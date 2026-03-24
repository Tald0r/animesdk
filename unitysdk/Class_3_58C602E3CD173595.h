#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_58C602E3CD173595_METHOD_3_8AB38D899BE6F6BF_OFFSET UNITYSDK_OFFSET(0xD48F440)
#define CLASS_3_58C602E3CD173595_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xD48F380)
#define CLASS_3_58C602E3CD173595_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD48F7F0)
#define CLASS_3_58C602E3CD173595__CTOR_OFFSET UNITYSDK_OFFSET(0xD48F750)

inline static constexpr unsigned int Class_3_58C602E3CD173595_TypeDefinitionIndex = 63683;

class Class_3_58C602E3CD173595 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::System::String*>* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_58C602E3CD173595__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_58C602E3CD173595_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_8AB38D899BE6F6BF(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_58C602E3CD173595_METHOD_3_8AB38D899BE6F6BF_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_58C602E3CD173595_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
