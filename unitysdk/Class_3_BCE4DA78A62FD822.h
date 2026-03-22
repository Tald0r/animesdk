#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_BCE4DA78A62FD822_METHOD_3_0A19E296A9ABEDE6_OFFSET UNITYSDK_OFFSET(0x7EE8D20)
#define CLASS_3_BCE4DA78A62FD822_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7EE9170)
#define CLASS_3_BCE4DA78A62FD822_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x7EE8A40)
#define CLASS_3_BCE4DA78A62FD822__CTOR_OFFSET UNITYSDK_OFFSET(0x7EE8FD0)

inline static constexpr unsigned int Class_3_BCE4DA78A62FD822_TypeDefinitionIndex = 60709;

class Class_3_BCE4DA78A62FD822 : public ::Class_2_52F82E04F7FEE529
{
public:
	// static const ::System::String* Field_3_5; // 0x0
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x18
	::Class_3_CF43FA1E89397A1C* Field_3_4; // 0x20
	::Class_4_179456445C225AB4<::System::Single>* Field_3_2; // 0x28
	::Class_4_179456445C225AB4<::System::Boolean>* Field_3_3; // 0x30
	::Class_4_179456445C225AB4<::System::String*>* Field_3_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BCE4DA78A62FD822__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BCE4DA78A62FD822_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_0A19E296A9ABEDE6(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_BCE4DA78A62FD822_METHOD_3_0A19E296A9ABEDE6_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BCE4DA78A62FD822_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
