#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_022F5D9FC8455383.h"
#include "unitysdk/Enum_3_9BDA95366DF1E3E0.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_EC6BF1DF2ADA817C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x6DA6F80)
#define CLASS_1_EC6BF1DF2ADA817C_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x6DA6FD0)
#define CLASS_1_EC6BF1DF2ADA817C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x6DA6FC0)
#define CLASS_1_EC6BF1DF2ADA817C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6DA6E90)
#define CLASS_1_EC6BF1DF2ADA817C__CTOR_OFFSET UNITYSDK_OFFSET(0x6DA6F70)

inline static constexpr unsigned int Class_1_EC6BF1DF2ADA817C_TypeDefinitionIndex = 56575;

class Class_1_EC6BF1DF2ADA817C : public ::System::Object
{
public:
	::System::Boolean Field_1_1; // 0x10
	::System::Int64 Field_1_3; // 0x18
	::Enum_3_9BDA95366DF1E3E0 Field_1_2; // 0x20
	::Enum_3_022F5D9FC8455383 Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC6BF1DF2ADA817C__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC6BF1DF2ADA817C_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC6BF1DF2ADA817C_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC6BF1DF2ADA817C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EC6BF1DF2ADA817C_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}
};
