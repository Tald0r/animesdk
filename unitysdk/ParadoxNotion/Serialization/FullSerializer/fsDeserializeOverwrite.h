#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDESERIALIZEOVERWRITE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A0EAE0)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsDeserializeOverwrite_TypeDefinitionIndex = 26868;

	class fsDeserializeOverwrite : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSDESERIALIZEOVERWRITE__CTOR_OFFSET))(this);
		}
	};
}
