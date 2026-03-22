#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_5AC51717F6C3FC2E_METHOD_1_66DE926C950ACCE3_OFFSET UNITYSDK_OFFSET(0x70FC450)
#define CLASS_1_5AC51717F6C3FC2E_METHOD_1_F52D8C29ED22C82E_OFFSET UNITYSDK_OFFSET(0x70FC2F0)

inline static constexpr unsigned int Class_1_5AC51717F6C3FC2E_TypeDefinitionIndex = 51078;

class Class_1_5AC51717F6C3FC2E : public ::System::Object
{
public:
	static ::System::Boolean Method_1_F52D8C29ED22C82E(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5AC51717F6C3FC2E_METHOD_1_F52D8C29ED22C82E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_66DE926C950ACCE3(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5AC51717F6C3FC2E_METHOD_1_66DE926C950ACCE3_OFFSET))(a1);
	}
};
