#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

namespace System::Reflection
{
	inline static constexpr unsigned int DefaultMemberAttribute_TypeDefinitionIndex = 531;

	class DefaultMemberAttribute : public ::System::Attribute
	{
	public:
		::System::String* m_memberName; // 0x10
	};
}
