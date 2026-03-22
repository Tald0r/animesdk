#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_SERIALIZATION_IGNOREDATAMEMBERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B156C20)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int IgnoreDataMemberAttribute_TypeDefinitionIndex = 6518;

	class IgnoreDataMemberAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_IGNOREDATAMEMBERATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
