#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_9C8EBBB20E47F2DA_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xB6ADDC0)
#define CLASS_4_9C8EBBB20E47F2DA_METHOD_4_736362F4F36A44A7_OFFSET UNITYSDK_OFFSET(0xB6AD960)
#define CLASS_4_9C8EBBB20E47F2DA_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB6AD890)
#define CLASS_4_9C8EBBB20E47F2DA__CTOR_OFFSET UNITYSDK_OFFSET(0xB6ADD20)

inline static constexpr unsigned int Class_4_9C8EBBB20E47F2DA_TypeDefinitionIndex = 39235;

class Class_4_9C8EBBB20E47F2DA : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::String*>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9C8EBBB20E47F2DA__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9C8EBBB20E47F2DA_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_736362F4F36A44A7(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_9C8EBBB20E47F2DA_METHOD_4_736362F4F36A44A7_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9C8EBBB20E47F2DA_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
