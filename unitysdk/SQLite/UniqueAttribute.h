#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SQLite/IndexedAttribute.h"

#define SQLITE_UNIQUEATTRIBUTE_GET_UNIQUE_OFFSET UNITYSDK_OFFSET(0x1A0767E0)
#define SQLITE_UNIQUEATTRIBUTE_SET_UNIQUE_OFFSET UNITYSDK_OFFSET(0x1A0767F0)
#define SQLITE_UNIQUEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A076800)

namespace SQLite
{
	inline static constexpr unsigned int UniqueAttribute_TypeDefinitionIndex = 35229;

	class UniqueAttribute : public ::SQLite::IndexedAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_UNIQUEATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Unique()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_UNIQUEATTRIBUTE_GET_UNIQUE_OFFSET))(this);
		}

		::System::Void set_Unique(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_UNIQUEATTRIBUTE_SET_UNIQUE_OFFSET))(this, value);
		}
	};
}
