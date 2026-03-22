#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SQLITE_NOTNULLATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A064270)

namespace SQLite
{
	inline static constexpr unsigned int NotNullAttribute_TypeDefinitionIndex = 35233;

	class NotNullAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_NOTNULLATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
