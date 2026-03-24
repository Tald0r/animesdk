#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_104.h"
#include "unitysdk/Struct_2_5F20C77812135856.h"

namespace System { class String; }

#define CLASS_2_85739EFB3E7BB231_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x668F730)
#define CLASS_2_85739EFB3E7BB231_METHOD_2_8EF01C146FE38CDA_OFFSET UNITYSDK_OFFSET(0x668F740)
#define CLASS_2_85739EFB3E7BB231__CTOR_OFFSET UNITYSDK_OFFSET(0x668F880)

inline static constexpr unsigned int Class_2_85739EFB3E7BB231_TypeDefinitionIndex = 81121;

class Class_2_85739EFB3E7BB231 : public ::Class_1_43BD383C98B4C0C5_104
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85739EFB3E7BB231__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85739EFB3E7BB231_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::Struct_2_5F20C77812135856 Method_2_8EF01C146FE38CDA(::Struct_2_5F20C77812135856 a1)
	{
		return ((::Struct_2_5F20C77812135856(*)(::PVOID, ::Struct_2_5F20C77812135856))((::PBYTE)hIl2Cpp + CLASS_2_85739EFB3E7BB231_METHOD_2_8EF01C146FE38CDA_OFFSET))(this, a1);
	}
};
