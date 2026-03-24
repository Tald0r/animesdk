#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_175AE710F2202EFF_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x85514C0)
#define CLASS_4_175AE710F2202EFF_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x8550F20)
#define CLASS_4_175AE710F2202EFF_METHOD_4_9D7A9451E63F9903_OFFSET UNITYSDK_OFFSET(0x8551080)
#define CLASS_4_175AE710F2202EFF__CTOR_OFFSET UNITYSDK_OFFSET(0x85513D0)

inline static constexpr unsigned int Class_4_175AE710F2202EFF_TypeDefinitionIndex = 74118;

class Class_4_175AE710F2202EFF : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::Boolean>* Field_4_1; // 0x28
	::Class_4_179456445C225AB4<::System::Collections::Generic::List_1<::System::Int32>*>* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_175AE710F2202EFF__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_175AE710F2202EFF_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_9D7A9451E63F9903(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_175AE710F2202EFF_METHOD_4_9D7A9451E63F9903_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_175AE710F2202EFF_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
