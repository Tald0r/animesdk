#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_4_5128D5AA1341BFD6_1_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x6F81450)
#define CLASS_4_5128D5AA1341BFD6_1_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x6F81130)
#define CLASS_4_5128D5AA1341BFD6_1_METHOD_4_C2E8BBDD048A1B46_OFFSET UNITYSDK_OFFSET(0x6F81290)
#define CLASS_4_5128D5AA1341BFD6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x6F81360)

inline static constexpr unsigned int Class_4_5128D5AA1341BFD6_1_TypeDefinitionIndex = 70182;

class Class_4_5128D5AA1341BFD6_1 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_D0B094D0B900A9F0<::System::Int32>* Field_4_1; // 0x28
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5128D5AA1341BFD6_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5128D5AA1341BFD6_1_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_C2E8BBDD048A1B46(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_5128D5AA1341BFD6_1_METHOD_4_C2E8BBDD048A1B46_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5128D5AA1341BFD6_1_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
