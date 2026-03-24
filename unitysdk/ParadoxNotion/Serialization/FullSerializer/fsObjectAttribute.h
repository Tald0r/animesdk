#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSOBJECTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A56FC10)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsObjectAttribute_TypeDefinitionIndex = 26699;

	class fsObjectAttribute : public ::System::Attribute
	{
	public:
		::System::Type* Processor; // 0x10
		::System::Type* Converter; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSOBJECTATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
