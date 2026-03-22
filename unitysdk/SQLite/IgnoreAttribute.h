#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SQLITE_IGNOREATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0641B0)

namespace SQLite
{
	inline static constexpr unsigned int IgnoreAttribute_TypeDefinitionIndex = 35228;

	class IgnoreAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_IGNOREATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
