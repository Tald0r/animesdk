#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_1_AAE113EF1D654B70;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_D4ECA3454AE0B6A1_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xADE5EC0)
#define CLASS_4_D4ECA3454AE0B6A1_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xADE5A60)
#define CLASS_4_D4ECA3454AE0B6A1_METHOD_4_A0A296519EA398EC_OFFSET UNITYSDK_OFFSET(0xADE5BC0)
#define CLASS_4_D4ECA3454AE0B6A1__CTOR_OFFSET UNITYSDK_OFFSET(0xADE5DD0)

inline static constexpr unsigned int Class_4_D4ECA3454AE0B6A1_TypeDefinitionIndex = 76086;

class Class_4_D4ECA3454AE0B6A1 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::Class_1_AAE113EF1D654B70*>* Field_4_0; // 0x28
	::Class_4_179456445C225AB4<::System::String*>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D4ECA3454AE0B6A1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D4ECA3454AE0B6A1_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_A0A296519EA398EC(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_D4ECA3454AE0B6A1_METHOD_4_A0A296519EA398EC_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D4ECA3454AE0B6A1_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
