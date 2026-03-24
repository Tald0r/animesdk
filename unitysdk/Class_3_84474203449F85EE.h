#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_84474203449F85EE_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x6195370)
#define CLASS_3_84474203449F85EE_METHOD_3_86F8B7095AA93B3B_OFFSET UNITYSDK_OFFSET(0x61956E0)
#define CLASS_3_84474203449F85EE_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6195BF0)
#define CLASS_3_84474203449F85EE__CTOR_OFFSET UNITYSDK_OFFSET(0x61959A0)

inline static constexpr unsigned int Class_3_84474203449F85EE_TypeDefinitionIndex = 79428;

class Class_3_84474203449F85EE : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_1; // 0x18
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x20
	::Class_4_179456445C225AB4<::System::Boolean>* Field_3_3; // 0x28
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_2; // 0x30
	::Class_3_B537A0AA78803363* Field_3_5; // 0x38
	::Class_3_B537A0AA78803363* Field_3_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_84474203449F85EE__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_84474203449F85EE_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_3_86F8B7095AA93B3B(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_84474203449F85EE_METHOD_3_86F8B7095AA93B3B_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_84474203449F85EE_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
