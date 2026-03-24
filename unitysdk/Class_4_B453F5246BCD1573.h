#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_B453F5246BCD1573_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x67F0E10)
#define CLASS_4_B453F5246BCD1573_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x67F0840)
#define CLASS_4_B453F5246BCD1573_METHOD_4_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x67F09A0)
#define CLASS_4_B453F5246BCD1573_METHOD_4_7E5B07261D121B15_OFFSET UNITYSDK_OFFSET(0x67F0A30)
#define CLASS_4_B453F5246BCD1573__CTOR_OFFSET UNITYSDK_OFFSET(0x67F0D20)

inline static constexpr unsigned int Class_4_B453F5246BCD1573_TypeDefinitionIndex = 74828;

class Class_4_B453F5246BCD1573 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::String*>* Field_4_0; // 0x28
	::Class_4_179456445C225AB4<::System::Collections::Generic::List_1<::System::Int32>*>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B453F5246BCD1573__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B453F5246BCD1573_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_3F0F9592A0E917D4(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_B453F5246BCD1573_METHOD_4_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B453F5246BCD1573_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_4_7E5B07261D121B15(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_B453F5246BCD1573_METHOD_4_7E5B07261D121B15_OFFSET))(this, a1);
	}
};
