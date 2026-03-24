#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_254F54BB98E2C94F.h"
#include "unitysdk/Struct_2_9505641EB996F055_1.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define STRUCT_2_A12AE614E1EEE2CC_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x316800)
#define STRUCT_2_A12AE614E1EEE2CC_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x272280)
#define STRUCT_2_A12AE614E1EEE2CC_METHOD_2_C1254194FF3DB77C_OFFSET UNITYSDK_OFFSET(0x3168F0)
#define STRUCT_2_A12AE614E1EEE2CC_METHOD_2_DE05E71228219707_OFFSET UNITYSDK_OFFSET(0x3168E0)
#define STRUCT_2_A12AE614E1EEE2CC__CTOR_OFFSET UNITYSDK_OFFSET(0x316870)

inline static constexpr unsigned int Struct_2_A12AE614E1EEE2CC_TypeDefinitionIndex = 40397;

struct alignas(8) Struct_2_A12AE614E1EEE2CC
{
	::Struct_2_9505641EB996F055_1 Field_2_0; // 0x10
	::Struct_2_254F54BB98E2C94F Field_2_1; // 0x18

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_A12AE614E1EEE2CC__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A12AE614E1EEE2CC_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_A12AE614E1EEE2CC_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DE05E71228219707(::SimpleJSON::JSONNode* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_A12AE614E1EEE2CC_METHOD_2_DE05E71228219707_OFFSET))(this, a1, a2);
	}

	::SimpleJSON::JSONNode* Method_2_C1254194FF3DB77C()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A12AE614E1EEE2CC_METHOD_2_C1254194FF3DB77C_OFFSET))(this);
	}
};
