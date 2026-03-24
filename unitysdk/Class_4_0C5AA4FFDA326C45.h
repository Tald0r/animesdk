#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_0C5AA4FFDA326C45_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x7B3FA00)
#define CLASS_4_0C5AA4FFDA326C45_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x7B3F3F0)
#define CLASS_4_0C5AA4FFDA326C45_METHOD_4_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x7B3F550)
#define CLASS_4_0C5AA4FFDA326C45_METHOD_4_9F2ED0595DBE2FA1_OFFSET UNITYSDK_OFFSET(0x7B3F5E0)
#define CLASS_4_0C5AA4FFDA326C45__CTOR_OFFSET UNITYSDK_OFFSET(0x7B3F910)

inline static constexpr unsigned int Class_4_0C5AA4FFDA326C45_TypeDefinitionIndex = 45083;

class Class_4_0C5AA4FFDA326C45 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::String*>* Field_4_0; // 0x28
	::Class_4_179456445C225AB4<::System::Collections::Generic::List_1<::System::String*>*>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C5AA4FFDA326C45__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C5AA4FFDA326C45_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_3F0F9592A0E917D4(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_0C5AA4FFDA326C45_METHOD_4_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C5AA4FFDA326C45_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Boolean Method_4_9F2ED0595DBE2FA1(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_0C5AA4FFDA326C45_METHOD_4_9F2ED0595DBE2FA1_OFFSET))(this, a1);
	}
};
