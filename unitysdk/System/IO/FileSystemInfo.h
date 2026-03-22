#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/IO/FileAttributes.h"
#include "unitysdk/System/IO/MonoIOStat.h"
#include "unitysdk/System/MarshalByRefObject.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_IO_FILESYSTEMINFO_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1965FC40)
#define SYSTEM_IO_FILESYSTEMINFO_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1965FAD0)
#define SYSTEM_IO_FILESYSTEMINFO_GET_CREATIONTIMEUTC_OFFSET UNITYSDK_OFFSET(0x1965F560)
#define SYSTEM_IO_FILESYSTEMINFO_GET_CREATIONTIME_OFFSET UNITYSDK_OFFSET(0x1965F440)
#define SYSTEM_IO_FILESYSTEMINFO_GET_EXTENSION_OFFSET UNITYSDK_OFFSET(0x1965F3B0)
#define SYSTEM_IO_FILESYSTEMINFO_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x1965F3A0)
#define SYSTEM_IO_FILESYSTEMINFO_GET_LASTACCESSTIMEUTC_OFFSET UNITYSDK_OFFSET(0x1965F790)
#define SYSTEM_IO_FILESYSTEMINFO_GET_LASTACCESSTIME_OFFSET UNITYSDK_OFFSET(0x1965F670)
#define SYSTEM_IO_FILESYSTEMINFO_GET_LASTWRITETIMEUTC_OFFSET UNITYSDK_OFFSET(0x1965F9C0)
#define SYSTEM_IO_FILESYSTEMINFO_GET_LASTWRITETIME_OFFSET UNITYSDK_OFFSET(0x1965F8A0)
#define SYSTEM_IO_FILESYSTEMINFO_REFRESH_OFFSET UNITYSDK_OFFSET(0x1965E9B0)
#define SYSTEM_IO_FILESYSTEMINFO_SET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1965FB60)
#define SYSTEM_IO_FILESYSTEMINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1965E880)
#define SYSTEM_IO_FILESYSTEMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1965E5B0)

namespace System::IO
{
	inline static constexpr unsigned int FileSystemInfo_TypeDefinitionIndex = 645;

	class FileSystemInfo : public ::System::MarshalByRefObject
	{
	public:
		::System::String* _displayPath; // 0x18
		::System::String* FullPath; // 0x20
		::System::String* OriginalPath; // 0x28
		::System::IO::MonoIOStat _data; // 0x30
		::System::Int32 _dataInitialised; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO__CTOR_1_OFFSET))(this, info, context);
		}

		::System::String* get_FullName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GET_FULLNAME_OFFSET))(this);
		}

		::System::String* get_Extension()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GET_EXTENSION_OFFSET))(this);
		}

		::System::DateTime get_CreationTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GET_CREATIONTIME_OFFSET))(this);
		}

		::System::DateTime get_CreationTimeUtc()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GET_CREATIONTIMEUTC_OFFSET))(this);
		}

		::System::DateTime get_LastAccessTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GET_LASTACCESSTIME_OFFSET))(this);
		}

		::System::DateTime get_LastAccessTimeUtc()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GET_LASTACCESSTIMEUTC_OFFSET))(this);
		}

		::System::DateTime get_LastWriteTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GET_LASTWRITETIME_OFFSET))(this);
		}

		::System::DateTime get_LastWriteTimeUtc()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GET_LASTWRITETIMEUTC_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_REFRESH_OFFSET))(this);
		}

		::System::IO::FileAttributes get_Attributes()
		{
			return ((::System::IO::FileAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Void set_Attributes(::System::IO::FileAttributes value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::FileAttributes))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_SET_ATTRIBUTES_OFFSET))(this, value);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GETOBJECTDATA_OFFSET))(this, info, context);
		}
	};
}
