#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_22B2F014E35FF7B5.h"
#include "unitysdk/Enum_3_288493BC643C59D0.h"
#include "unitysdk/Enum_3_7890D53463A7CFCB.h"
#include "unitysdk/Enum_3_86C36EB274E242B5.h"
#include "unitysdk/Enum_3_9D7DEE786F49D757.h"
#include "unitysdk/Enum_3_D4E63EB04ADBFF01.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_CA3AEBB0A0D6ED65_METHOD_1_644BB790D5F70195_1_OFFSET UNITYSDK_OFFSET(0x7CB8680)
#define CLASS_1_CA3AEBB0A0D6ED65_METHOD_1_644BB790D5F70195_OFFSET UNITYSDK_OFFSET(0x7CB8480)
#define CLASS_1_CA3AEBB0A0D6ED65_METHOD_1_8F5ABF259CA85596_OFFSET UNITYSDK_OFFSET(0x7CB88D0)
#define CLASS_1_CA3AEBB0A0D6ED65_METHOD_1_C45E8FF341A4056E_OFFSET UNITYSDK_OFFSET(0x7CB8A50)
#define CLASS_1_CA3AEBB0A0D6ED65__CTOR_OFFSET UNITYSDK_OFFSET(0x7CB8470)

inline static constexpr unsigned int Class_1_CA3AEBB0A0D6ED65_TypeDefinitionIndex = 48368;

class Class_1_CA3AEBB0A0D6ED65 : public ::System::Object
{
public:
	::Enum_3_288493BC643C59D0 Field_1_7; // 0x10
	::System::Boolean Field_1_1; // 0x14
	::System::Boolean Field_1_0; // 0x15
	::Enum_3_9D7DEE786F49D757 Field_1_6; // 0x18
	::Enum_3_7890D53463A7CFCB Field_1_3; // 0x1C
	::Enum_3_86C36EB274E242B5 Field_1_5; // 0x20
	::System::UInt64 Field_1_8; // 0x28
	::Enum_3_22B2F014E35FF7B5 Field_1_2; // 0x30
	::Enum_3_D4E63EB04ADBFF01 Field_1_4; // 0x34
	::System::UInt64 Field_1_9; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA3AEBB0A0D6ED65__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_644BB790D5F70195()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA3AEBB0A0D6ED65_METHOD_1_644BB790D5F70195_OFFSET))(this);
	}

	::System::String* Method_1_644BB790D5F70195_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA3AEBB0A0D6ED65_METHOD_1_644BB790D5F70195_1_OFFSET))(this);
	}

	::System::String* Method_1_8F5ABF259CA85596()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA3AEBB0A0D6ED65_METHOD_1_8F5ABF259CA85596_OFFSET))(this);
	}

	::System::String* Method_1_C45E8FF341A4056E()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA3AEBB0A0D6ED65_METHOD_1_C45E8FF341A4056E_OFFSET))(this);
	}
};
