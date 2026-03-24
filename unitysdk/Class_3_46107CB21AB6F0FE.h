#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_3_46107CB21AB6F0FE_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x8A43110)
#define CLASS_3_46107CB21AB6F0FE_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8A43A40)
#define CLASS_3_46107CB21AB6F0FE_METHOD_3_D36F1AC51FF9E63B_OFFSET UNITYSDK_OFFSET(0x8A43480)
#define CLASS_3_46107CB21AB6F0FE__CTOR_OFFSET UNITYSDK_OFFSET(0x8A437F0)

inline static constexpr unsigned int Class_3_46107CB21AB6F0FE_TypeDefinitionIndex = 43482;

class Class_3_46107CB21AB6F0FE : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_4; // 0x18
	::Class_4_179456445C225AB4<::System::String*>* Field_3_2; // 0x20
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_3_1; // 0x28
	::Class_4_D0B094D0B900A9F0<::System::Boolean>* Field_3_3; // 0x30
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x38
	::Class_3_B537A0AA78803363* Field_3_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_46107CB21AB6F0FE__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_46107CB21AB6F0FE_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_3_D36F1AC51FF9E63B(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_46107CB21AB6F0FE_METHOD_3_D36F1AC51FF9E63B_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_46107CB21AB6F0FE_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
