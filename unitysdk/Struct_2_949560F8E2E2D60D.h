#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define STRUCT_2_949560F8E2E2D60D_METHOD_2_4E0C664E82C94A31_OFFSET UNITYSDK_OFFSET(0x35A420)
#define STRUCT_2_949560F8E2E2D60D_METHOD_2_984CE5E4DF4B2C9B_OFFSET UNITYSDK_OFFSET(0x35A410)
#define STRUCT_2_949560F8E2E2D60D_METHOD_2_9C12A00315CAECCE_OFFSET UNITYSDK_OFFSET(0x35A350)

inline static constexpr unsigned int Struct_2_949560F8E2E2D60D_TypeDefinitionIndex = 76901;

struct alignas(8) Struct_2_949560F8E2E2D60D
{
	::System::Int32 Field_2_0; // 0x10
	::UnityEngine::Vector2 Field_2_1; // 0x14
	::System::String* Field_2_2; // 0x20
	::System::Boolean Field_2_3; // 0x28

	::System::Boolean Method_2_9C12A00315CAECCE(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_949560F8E2E2D60D_METHOD_2_9C12A00315CAECCE_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_2_984CE5E4DF4B2C9B()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_949560F8E2E2D60D_METHOD_2_984CE5E4DF4B2C9B_OFFSET))(this);
	}

	::System::Boolean Method_2_4E0C664E82C94A31(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_949560F8E2E2D60D_METHOD_2_4E0C664E82C94A31_OFFSET))(this, a1);
	}
};
