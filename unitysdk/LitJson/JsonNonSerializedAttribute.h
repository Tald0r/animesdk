#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define LITJSON_JSONNONSERIALIZEDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5A28B0)

namespace LitJson
{
	inline static constexpr unsigned int JsonNonSerializedAttribute_TypeDefinitionIndex = 7845;

	class JsonNonSerializedAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONNONSERIALIZEDATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
