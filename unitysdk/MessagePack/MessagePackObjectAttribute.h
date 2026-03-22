#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MESSAGEPACK_MESSAGEPACKOBJECTATTRIBUTE_GET_KEYASPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1A1AD3F0)
#define MESSAGEPACK_MESSAGEPACKOBJECTATTRIBUTE_SET_KEYASPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1A1AD400)
#define MESSAGEPACK_MESSAGEPACKOBJECTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1AD410)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackObjectAttribute_TypeDefinitionIndex = 26698;

	class MessagePackObjectAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean _KeyAsPropertyName_k__BackingField; // 0x10

		::System::Void _ctor(::System::Boolean keyAsPropertyName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKOBJECTATTRIBUTE__CTOR_OFFSET))(this, keyAsPropertyName);
		}

		::System::Boolean get_KeyAsPropertyName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKOBJECTATTRIBUTE_GET_KEYASPROPERTYNAME_OFFSET))(this);
		}

		::System::Void set_KeyAsPropertyName(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKOBJECTATTRIBUTE_SET_KEYASPROPERTYNAME_OFFSET))(this, value);
		}
	};
}
