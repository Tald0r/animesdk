#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define STRUCT_2_D19F1A95B589BD6B_METHOD_2_83D48E223A2E197E_OFFSET UNITYSDK_OFFSET(0x2D3270)
#define STRUCT_2_D19F1A95B589BD6B_METHOD_2_9C12A00315CAECCE_OFFSET UNITYSDK_OFFSET(0x2D31B0)
#define STRUCT_2_D19F1A95B589BD6B_METHOD_2_C14CE3C74061BA70_OFFSET UNITYSDK_OFFSET(0x2D3280)

inline static constexpr unsigned int Struct_2_D19F1A95B589BD6B_TypeDefinitionIndex = 39243;

struct alignas(8) Struct_2_D19F1A95B589BD6B
{
	::System::String* Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18

	::System::Boolean Method_2_9C12A00315CAECCE(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_D19F1A95B589BD6B_METHOD_2_9C12A00315CAECCE_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_2_83D48E223A2E197E()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D19F1A95B589BD6B_METHOD_2_83D48E223A2E197E_OFFSET))(this);
	}

	::System::Boolean Method_2_C14CE3C74061BA70(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_D19F1A95B589BD6B_METHOD_2_C14CE3C74061BA70_OFFSET))(this, a1);
	}
};
