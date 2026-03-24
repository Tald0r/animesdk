#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C_5_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x7835230)
#define CLASS_1_945ACFB1FEBC7A2C_5__CTOR_OFFSET UNITYSDK_OFFSET(0x78352A0)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_5_TypeDefinitionIndex = 41523;

class Class_1_945ACFB1FEBC7A2C_5 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_5__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_5_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}
};
