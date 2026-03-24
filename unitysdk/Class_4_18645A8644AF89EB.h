#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_18645A8644AF89EB_METHOD_4_00C582D95B60B963_OFFSET UNITYSDK_OFFSET(0x9E77870)
#define CLASS_4_18645A8644AF89EB_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x9E77B10)
#define CLASS_4_18645A8644AF89EB_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x9E777A0)
#define CLASS_4_18645A8644AF89EB__CTOR_OFFSET UNITYSDK_OFFSET(0x9E77A70)

inline static constexpr unsigned int Class_4_18645A8644AF89EB_TypeDefinitionIndex = 60380;

class Class_4_18645A8644AF89EB : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::String*>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_18645A8644AF89EB__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_18645A8644AF89EB_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_00C582D95B60B963(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_18645A8644AF89EB_METHOD_4_00C582D95B60B963_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_18645A8644AF89EB_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
