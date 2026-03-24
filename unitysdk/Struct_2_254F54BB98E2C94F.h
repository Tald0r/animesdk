#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define STRUCT_2_254F54BB98E2C94F_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x223870)
#define STRUCT_2_254F54BB98E2C94F_METHOD_2_6E960388ADD5BE40_OFFSET UNITYSDK_OFFSET(0x398A50)
#define STRUCT_2_254F54BB98E2C94F_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x3074E0)
#define STRUCT_2_254F54BB98E2C94F_METHOD_2_98BF8FC1F4CFC3DE_OFFSET UNITYSDK_OFFSET(0x3989E0)
#define STRUCT_2_254F54BB98E2C94F_METHOD_2_A112CB25BC4890B2_OFFSET UNITYSDK_OFFSET(0x3989D0)
#define STRUCT_2_254F54BB98E2C94F__CTOR_OFFSET UNITYSDK_OFFSET(0x3074E0)

inline static constexpr unsigned int Struct_2_254F54BB98E2C94F_TypeDefinitionIndex = 58995;

struct alignas(8) Struct_2_254F54BB98E2C94F
{
	::System::String* Field_2_0; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_254F54BB98E2C94F__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_254F54BB98E2C94F_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_254F54BB98E2C94F_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A112CB25BC4890B2(::SimpleJSON::JSONNode* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_254F54BB98E2C94F_METHOD_2_A112CB25BC4890B2_OFFSET))(this, a1, a2);
	}

	::SimpleJSON::JSONNode* Method_2_98BF8FC1F4CFC3DE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_254F54BB98E2C94F_METHOD_2_98BF8FC1F4CFC3DE_OFFSET))(this);
	}

	::System::Void Method_2_6E960388ADD5BE40(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_254F54BB98E2C94F_METHOD_2_6E960388ADD5BE40_OFFSET))(this, a1);
	}
};
