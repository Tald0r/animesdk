#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_030BCF7358A7416F_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x87B70C0)
#define CLASS_4_030BCF7358A7416F_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x87B6C00)
#define CLASS_4_030BCF7358A7416F_METHOD_4_C47764933B4AB464_OFFSET UNITYSDK_OFFSET(0x87B6D60)
#define CLASS_4_030BCF7358A7416F__CTOR_OFFSET UNITYSDK_OFFSET(0x87B6FD0)

inline static constexpr unsigned int Class_4_030BCF7358A7416F_TypeDefinitionIndex = 74875;

class Class_4_030BCF7358A7416F : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::Single>* Field_4_1; // 0x28
	::Class_4_179456445C225AB4<::System::String*>* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_030BCF7358A7416F__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_030BCF7358A7416F_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_C47764933B4AB464(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_030BCF7358A7416F_METHOD_4_C47764933B4AB464_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_030BCF7358A7416F_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
