#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

namespace System { class String; }

#define CHARACTERRAMPGROUPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1801F250)

inline static constexpr unsigned int CharacterRampGroupAttribute_TypeDefinitionIndex = 28071;

class CharacterRampGroupAttribute : public ::UnityEngine::PropertyAttribute
{
public:
	::System::String* label; // 0x10
	::System::String* rightPropertyName; // 0x18
	::System::String* leftFieldName; // 0x20

	::System::Void _ctor(::System::String* leftFieldName, ::System::String* rightPropertyName, ::System::String* label)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CHARACTERRAMPGROUPATTRIBUTE__CTOR_OFFSET))(this, leftFieldName, rightPropertyName, label);
	}
};
