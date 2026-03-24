#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_A1115FB9D88748E5_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x69B72F0)
#define CLASS_4_A1115FB9D88748E5_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x69B6C50)
#define CLASS_4_A1115FB9D88748E5_METHOD_4_F2D1B54FE72ACDF7_OFFSET UNITYSDK_OFFSET(0x69B6DB0)
#define CLASS_4_A1115FB9D88748E5__CTOR_OFFSET UNITYSDK_OFFSET(0x69B7200)

inline static constexpr unsigned int Class_4_A1115FB9D88748E5_TypeDefinitionIndex = 49273;

class Class_4_A1115FB9D88748E5 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::Boolean>* Field_4_0; // 0x28
	::Class_4_179456445C225AB4<::System::Collections::Generic::List_1<::System::Int32>*>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A1115FB9D88748E5__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A1115FB9D88748E5_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_F2D1B54FE72ACDF7(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_A1115FB9D88748E5_METHOD_4_F2D1B54FE72ACDF7_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A1115FB9D88748E5_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
