#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_254F54BB98E2C94F.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define STRUCT_2_6D1969169CB23895_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x3628A0)
#define STRUCT_2_6D1969169CB23895_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x272280)
#define STRUCT_2_6D1969169CB23895_METHOD_2_27F57F525D5BF8AD_OFFSET UNITYSDK_OFFSET(0x362920)
#define STRUCT_2_6D1969169CB23895_METHOD_2_83D48E223A2E197E_OFFSET UNITYSDK_OFFSET(0x362930)
#define STRUCT_2_6D1969169CB23895__CTOR_OFFSET UNITYSDK_OFFSET(0x362910)

inline static constexpr unsigned int Struct_2_6D1969169CB23895_TypeDefinitionIndex = 60683;

struct alignas(8) Struct_2_6D1969169CB23895
{
	::System::Boolean Field_2_0; // 0x10
	::Struct_2_254F54BB98E2C94F Field_2_1; // 0x18

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_6D1969169CB23895__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6D1969169CB23895_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_6D1969169CB23895_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_27F57F525D5BF8AD(::SimpleJSON::JSONNode* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_6D1969169CB23895_METHOD_2_27F57F525D5BF8AD_OFFSET))(this, a1, a2);
	}

	::SimpleJSON::JSONNode* Method_2_83D48E223A2E197E()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6D1969169CB23895_METHOD_2_83D48E223A2E197E_OFFSET))(this);
	}
};
