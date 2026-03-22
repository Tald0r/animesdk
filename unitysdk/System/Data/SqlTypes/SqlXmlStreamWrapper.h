#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

namespace System { class String; }

#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18A7A830)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_FLUSH_OFFSET UNITYSDK_OFFSET(0x18A7A810)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x18A79A80)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x18A79B80)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x18A79C10)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x18A79CA0)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x18A79E60)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_ISSTREAMCLOSED_OFFSET UNITYSDK_OFFSET(0x18A79B10)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_READBYTE_OFFSET UNITYSDK_OFFSET(0x18A7A5A0)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_READ_OFFSET UNITYSDK_OFFSET(0x18A7A120)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_SEEK_OFFSET UNITYSDK_OFFSET(0x18A79F60)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x18A7A790)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x18A79EB0)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_THROWIFSTREAMCANNOTREAD_OFFSET UNITYSDK_OFFSET(0x18A7A2D0)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_THROWIFSTREAMCANNOTSEEK_OFFSET UNITYSDK_OFFSET(0x18A79DD0)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_THROWIFSTREAMCANNOTWRITE_OFFSET UNITYSDK_OFFSET(0x18A7A510)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_THROWIFSTREAMCLOSED_OFFSET UNITYSDK_OFFSET(0x18A79D10)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x18A7A6C0)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_WRITE_OFFSET UNITYSDK_OFFSET(0x18A7A360)
#define SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x18A79A40)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlXmlStreamWrapper_TypeDefinitionIndex = 35552;

	class SqlXmlStreamWrapper : public ::System::IO::Stream
	{
	public:
		::System::IO::Stream* _stream; // 0x28
		::System::Boolean _isClosed; // 0x30
		::System::Int64 _lPosition; // 0x38

		::System::Void _ctor(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER__CTOR_OFFSET))(this, stream);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_GET_CANWRITE_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_SET_POSITION_OFFSET))(this, value);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin origin)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_SEEK_OFFSET))(this, offset, origin);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_READ_OFFSET))(this, buffer, offset, count);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_WRITE_OFFSET))(this, buffer, offset, count);
		}

		::System::Int32 ReadByte()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_READBYTE_OFFSET))(this);
		}

		::System::Void WriteByte(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_WRITEBYTE_OFFSET))(this, value);
		}

		::System::Void SetLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_SETLENGTH_OFFSET))(this, value);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_FLUSH_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void ThrowIfStreamCannotSeek(::System::String* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_THROWIFSTREAMCANNOTSEEK_OFFSET))(this, method);
		}

		::System::Void ThrowIfStreamCannotRead(::System::String* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_THROWIFSTREAMCANNOTREAD_OFFSET))(this, method);
		}

		::System::Void ThrowIfStreamCannotWrite(::System::String* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_THROWIFSTREAMCANNOTWRITE_OFFSET))(this, method);
		}

		::System::Void ThrowIfStreamClosed(::System::String* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_THROWIFSTREAMCLOSED_OFFSET))(this, method);
		}

		::System::Boolean IsStreamClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXMLSTREAMWRAPPER_ISSTREAMCLOSED_OFFSET))(this);
		}
	};
}
