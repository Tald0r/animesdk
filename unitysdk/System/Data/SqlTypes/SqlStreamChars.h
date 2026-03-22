#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_DATA_SQLTYPES_SQLSTREAMCHARS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A7BFD60)
#define SYSTEM_DATA_SQLTYPES_SQLSTREAMCHARS_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A7BFD40)
#define SYSTEM_DATA_SQLTYPES_SQLSTREAMCHARS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7BFD70)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlStreamChars_TypeDefinitionIndex = 35550;

	class SqlStreamChars : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTREAMCHARS__CTOR_OFFSET))(this);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTREAMCHARS_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTREAMCHARS_DISPOSE_OFFSET))(this, disposing);
		}
	};
}
