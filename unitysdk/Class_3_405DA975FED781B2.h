#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_19B7C5138FC90FBC.h"
#include "unitysdk/Struct_2_B196590B3E289741.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace System { class String; }

#define CLASS_3_405DA975FED781B2_METHOD_3_0C7E1AD712DECD7D_OFFSET UNITYSDK_OFFSET(0xCA1F350)
#define CLASS_3_405DA975FED781B2_METHOD_3_2C0DDE22CA1C73CB_OFFSET UNITYSDK_OFFSET(0xCA1F4D0)
#define CLASS_3_405DA975FED781B2__CTOR_OFFSET UNITYSDK_OFFSET(0xCA1F4B0)

inline static constexpr unsigned int Class_3_405DA975FED781B2_TypeDefinitionIndex = 61231;

class Class_3_405DA975FED781B2 : public ::Class_2_19B7C5138FC90FBC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_405DA975FED781B2__CTOR_OFFSET))(this);
	}

	::Struct_2_B196590B3E289741 Method_3_0C7E1AD712DECD7D(::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char> a1)
	{
		return ((::Struct_2_B196590B3E289741(*)(::PVOID, ::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char>))((::PBYTE)hIl2Cpp + CLASS_3_405DA975FED781B2_METHOD_3_0C7E1AD712DECD7D_OFFSET))(this, a1);
	}

	::Struct_2_B196590B3E289741 Method_3_2C0DDE22CA1C73CB(::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char> a1)
	{
		return ((::Struct_2_B196590B3E289741(*)(::PVOID, ::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char>))((::PBYTE)hIl2Cpp + CLASS_3_405DA975FED781B2_METHOD_3_2C0DDE22CA1C73CB_OFFSET))(this, a1);
	}
};
