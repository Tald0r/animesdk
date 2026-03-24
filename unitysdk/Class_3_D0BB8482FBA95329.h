#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_19B7C5138FC90FBC.h"
#include "unitysdk/Struct_2_B196590B3E289741.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace System { class String; }

#define CLASS_3_D0BB8482FBA95329_METHOD_3_2C0DDE22CA1C73CB_OFFSET UNITYSDK_OFFSET(0x9984590)
#define CLASS_3_D0BB8482FBA95329_METHOD_3_9F049CD313DA262B_OFFSET UNITYSDK_OFFSET(0x9984490)
#define CLASS_3_D0BB8482FBA95329__CTOR_OFFSET UNITYSDK_OFFSET(0x9984570)

inline static constexpr unsigned int Class_3_D0BB8482FBA95329_TypeDefinitionIndex = 38398;

class Class_3_D0BB8482FBA95329 : public ::Class_2_19B7C5138FC90FBC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D0BB8482FBA95329__CTOR_OFFSET))(this);
	}

	::Struct_2_B196590B3E289741 Method_3_9F049CD313DA262B(::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char> a1)
	{
		return ((::Struct_2_B196590B3E289741(*)(::PVOID, ::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char>))((::PBYTE)hIl2Cpp + CLASS_3_D0BB8482FBA95329_METHOD_3_9F049CD313DA262B_OFFSET))(this, a1);
	}

	::Struct_2_B196590B3E289741 Method_3_2C0DDE22CA1C73CB(::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char> a1)
	{
		return ((::Struct_2_B196590B3E289741(*)(::PVOID, ::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char>))((::PBYTE)hIl2Cpp + CLASS_3_D0BB8482FBA95329_METHOD_3_2C0DDE22CA1C73CB_OFFSET))(this, a1);
	}
};
