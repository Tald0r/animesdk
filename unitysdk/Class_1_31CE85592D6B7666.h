#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_EB21B0C235B14349.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_90;
namespace System { class String; }

#define CLASS_1_31CE85592D6B7666_METHOD_1_2D533DD2C7E92FB8_OFFSET UNITYSDK_OFFSET(0x1A0D7DD0)
#define CLASS_1_31CE85592D6B7666_METHOD_1_6C8CDD20E8BBABD6_OFFSET UNITYSDK_OFFSET(0x1A0D7980)
#define CLASS_1_31CE85592D6B7666__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0D74E0)

inline static constexpr unsigned int Class_1_31CE85592D6B7666_TypeDefinitionIndex = 31812;

class Class_1_31CE85592D6B7666 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31CE85592D6B7666__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_90* Method_1_6C8CDD20E8BBABD6(::System::String* a1, ::Enum_3_EB21B0C235B14349 a2)
	{
		return ((::Class_0_16E4307DCC419505_90*(*)(::PVOID, ::System::String*, ::Enum_3_EB21B0C235B14349))((::PBYTE)hIl2Cpp + CLASS_1_31CE85592D6B7666_METHOD_1_6C8CDD20E8BBABD6_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2D533DD2C7E92FB8(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_31CE85592D6B7666_METHOD_1_2D533DD2C7E92FB8_OFFSET))(this, a1);
	}
};
