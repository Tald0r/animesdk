#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SQLITE_STOREASTEXTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A075160)

namespace SQLite
{
	inline static constexpr unsigned int StoreAsTextAttribute_TypeDefinitionIndex = 35235;

	class StoreAsTextAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_STOREASTEXTATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
