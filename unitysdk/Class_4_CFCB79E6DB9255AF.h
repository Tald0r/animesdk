#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_CFCB79E6DB9255AF_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xDEA2E20)
#define CLASS_4_CFCB79E6DB9255AF_METHOD_4_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0xDEA2D10)
#define CLASS_4_CFCB79E6DB9255AF_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xDEA2C40)
#define CLASS_4_CFCB79E6DB9255AF__CTOR_OFFSET UNITYSDK_OFFSET(0xDEA2D80)

inline static constexpr unsigned int Class_4_CFCB79E6DB9255AF_TypeDefinitionIndex = 72326;

class Class_4_CFCB79E6DB9255AF : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::String*>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CFCB79E6DB9255AF__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CFCB79E6DB9255AF_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_8CE0803574BB66D7(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_CFCB79E6DB9255AF_METHOD_4_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CFCB79E6DB9255AF_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
