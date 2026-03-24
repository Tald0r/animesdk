#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C_11_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x9F7E1E0)
#define CLASS_1_945ACFB1FEBC7A2C_11_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x9F7E250)
#define CLASS_1_945ACFB1FEBC7A2C_11__CTOR_OFFSET UNITYSDK_OFFSET(0x9F7E2E0)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_11_TypeDefinitionIndex = 65430;

class Class_1_945ACFB1FEBC7A2C_11 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_11__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_11_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_11_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
