#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_19B7C5138FC90FBC.h"
#include "unitysdk/Struct_2_B196590B3E289741.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace System { class String; }

#define CLASS_3_D0BB8482FBA95329_1_METHOD_3_2C0DDE22CA1C73CB_OFFSET UNITYSDK_OFFSET(0x965E130)
#define CLASS_3_D0BB8482FBA95329_1_METHOD_3_89DE0EA11F032763_OFFSET UNITYSDK_OFFSET(0x965DFD0)
#define CLASS_3_D0BB8482FBA95329_1__CTOR_OFFSET UNITYSDK_OFFSET(0x965E110)

inline static constexpr unsigned int Class_3_D0BB8482FBA95329_1_TypeDefinitionIndex = 66034;

class Class_3_D0BB8482FBA95329_1 : public ::Class_2_19B7C5138FC90FBC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D0BB8482FBA95329_1__CTOR_OFFSET))(this);
	}

	::Struct_2_B196590B3E289741 Method_3_89DE0EA11F032763(::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char> a1)
	{
		return ((::Struct_2_B196590B3E289741(*)(::PVOID, ::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char>))((::PBYTE)hIl2Cpp + CLASS_3_D0BB8482FBA95329_1_METHOD_3_89DE0EA11F032763_OFFSET))(this, a1);
	}

	::Struct_2_B196590B3E289741 Method_3_2C0DDE22CA1C73CB(::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char> a1)
	{
		return ((::Struct_2_B196590B3E289741(*)(::PVOID, ::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char>))((::PBYTE)hIl2Cpp + CLASS_3_D0BB8482FBA95329_1_METHOD_3_2C0DDE22CA1C73CB_OFFSET))(this, a1);
	}
};
