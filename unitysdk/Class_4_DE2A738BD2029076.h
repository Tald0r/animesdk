#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_DE2A738BD2029076_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xD787500)
#define CLASS_4_DE2A738BD2029076_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xD787070)
#define CLASS_4_DE2A738BD2029076_METHOD_4_652514A15DC5E0CD_OFFSET UNITYSDK_OFFSET(0xD7871D0)
#define CLASS_4_DE2A738BD2029076__CTOR_OFFSET UNITYSDK_OFFSET(0xD787410)

inline static constexpr unsigned int Class_4_DE2A738BD2029076_TypeDefinitionIndex = 50714;

class Class_4_DE2A738BD2029076 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::String*>* Field_4_0; // 0x28
	::Class_4_179456445C225AB4<::System::Single>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DE2A738BD2029076__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DE2A738BD2029076_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_652514A15DC5E0CD(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_DE2A738BD2029076_METHOD_4_652514A15DC5E0CD_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DE2A738BD2029076_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
