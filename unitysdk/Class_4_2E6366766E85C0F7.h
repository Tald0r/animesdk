#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_2E6366766E85C0F7_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x8B000A0)
#define CLASS_4_2E6366766E85C0F7_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x8AFFC60)
#define CLASS_4_2E6366766E85C0F7_METHOD_4_73B4FE09D697EB6E_OFFSET UNITYSDK_OFFSET(0x8AFFDC0)
#define CLASS_4_2E6366766E85C0F7__CTOR_OFFSET UNITYSDK_OFFSET(0x8AFFFB0)

inline static constexpr unsigned int Class_4_2E6366766E85C0F7_TypeDefinitionIndex = 56166;

class Class_4_2E6366766E85C0F7 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::Boolean>* Field_4_1; // 0x28
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2E6366766E85C0F7__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2E6366766E85C0F7_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_73B4FE09D697EB6E(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_2E6366766E85C0F7_METHOD_4_73B4FE09D697EB6E_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2E6366766E85C0F7_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
