#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZEASREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A185E90)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsSerializeAsReference_TypeDefinitionIndex = 25800;

	class fsSerializeAsReference : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZEASREFERENCE__CTOR_OFFSET))(this);
		}
	};
}
