#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_CF43FA1E89397A1C;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_0CB93349935E36BB_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x73F73A0)
#define CLASS_4_0CB93349935E36BB_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x73F77E0)
#define CLASS_4_0CB93349935E36BB_METHOD_4_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x73F7590)
#define CLASS_4_0CB93349935E36BB__CTOR_OFFSET UNITYSDK_OFFSET(0x73F7600)

inline static constexpr unsigned int Class_4_0CB93349935E36BB_TypeDefinitionIndex = 47355;

class Class_4_0CB93349935E36BB : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_3_CF43FA1E89397A1C* Field_4_1; // 0x28
	::Class_3_CF43FA1E89397A1C* Field_4_2; // 0x30
	::Class_4_179456445C225AB4<::System::Collections::Generic::List_1<::System::Int32>*>* Field_4_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0CB93349935E36BB__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0CB93349935E36BB_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_8CE0803574BB66D7(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_0CB93349935E36BB_METHOD_4_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0CB93349935E36BB_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
