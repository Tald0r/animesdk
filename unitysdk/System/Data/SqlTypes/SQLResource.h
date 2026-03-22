#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_DATA_SQLTYPES_SQLRESOURCE_INVALIDOPSTREAMCLOSED_OFFSET UNITYSDK_OFFSET(0x1A4D5C10)
#define SYSTEM_DATA_SQLTYPES_SQLRESOURCE_INVALIDOPSTREAMNONREADABLE_OFFSET UNITYSDK_OFFSET(0x1A4D5CF0)
#define SYSTEM_DATA_SQLTYPES_SQLRESOURCE_INVALIDOPSTREAMNONSEEKABLE_OFFSET UNITYSDK_OFFSET(0x1A4D5D60)
#define SYSTEM_DATA_SQLTYPES_SQLRESOURCE_INVALIDOPSTREAMNONWRITABLE_OFFSET UNITYSDK_OFFSET(0x1A4D5C80)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SQLResource_TypeDefinitionIndex = 35527;

	class SQLResource : public ::System::Object
	{
	public:
		static ::System::String* InvalidOpStreamClosed(::System::String* method)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLRESOURCE_INVALIDOPSTREAMCLOSED_OFFSET))(method);
		}

		static ::System::String* InvalidOpStreamNonWritable(::System::String* method)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLRESOURCE_INVALIDOPSTREAMNONWRITABLE_OFFSET))(method);
		}

		static ::System::String* InvalidOpStreamNonReadable(::System::String* method)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLRESOURCE_INVALIDOPSTREAMNONREADABLE_OFFSET))(method);
		}

		static ::System::String* InvalidOpStreamNonSeekable(::System::String* method)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLRESOURCE_INVALIDOPSTREAMNONSEEKABLE_OFFSET))(method);
		}
	};
}
