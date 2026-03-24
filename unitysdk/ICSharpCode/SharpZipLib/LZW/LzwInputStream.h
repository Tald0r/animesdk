#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1B39FD20)
#define ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1B39FD70)
#define ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_FILL_OFFSET UNITYSDK_OFFSET(0x1B39FA30)
#define ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1B39FBB0)
#define ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1B39FAD0)
#define ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1B39FB00)
#define ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1B39FB10)
#define ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_GET_ISSTREAMOWNER_OFFSET UNITYSDK_OFFSET(0x1B39EA20)
#define ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1B39FB20)
#define ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1B39FB30)
#define ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_PARSEHEADER_OFFSET UNITYSDK_OFFSET(0x1B39F610)
#define ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x1B39EAC0)
#define ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1B39EB20)
#define ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_RESETBUF_OFFSET UNITYSDK_OFFSET(0x1B39FA90)
#define ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1B39FBE0)
#define ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1B39FC30)
#define ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_SET_ISSTREAMOWNER_OFFSET UNITYSDK_OFFSET(0x1B39EA30)
#define ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1B39FB60)
#define ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x1B39FCD0)
#define ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1B39FC80)
#define ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B39EA40)

namespace ICSharpCode::SharpZipLib::LZW
{
	inline static constexpr unsigned int LzwInputStream_TypeDefinitionIndex = 6679;

	class LzwInputStream : public ::System::IO::Stream
	{
	public:
		// static const ::System::Int32 TBL_CLEAR = 0x100; // 0x0
		// static const ::System::Int32 TBL_FIRST = 0x101; // 0x0
		// static const ::System::Int32 EXTRA = 0x40; // 0x0
		::System::IO::Stream* baseInputStream; // 0x28
		::Il2CppArray<::System::Byte>* stack; // 0x30
		::Il2CppArray<::System::Byte>* tabSuffix; // 0x38
		::Il2CppArray<::System::Int32>* tabPrefix; // 0x40
		::Il2CppArray<::System::Byte>* data; // 0x48
		::Il2CppArray<::System::Int32>* zeros; // 0x50
		::Il2CppArray<::System::Byte>* one; // 0x58
		::System::Int32 stackP; // 0x60
		::System::Int32 bitMask; // 0x64
		::System::Int32 freeEnt; // 0x68
		::System::Int32 nBits; // 0x6C
		::System::Int32 maxBits; // 0x70
		::System::Byte finChar; // 0x74
		::System::Boolean eof; // 0x75
		::System::Boolean isClosed; // 0x76
		::System::Boolean isStreamOwner; // 0x77
		::System::Int32 got; // 0x78
		::System::Boolean blockMode; // 0x7C
		::System::Boolean headerParsed; // 0x7D
		::System::Int32 oldCode; // 0x80
		::System::Int32 end; // 0x84
		::System::Int32 maxCode; // 0x88
		::System::Int32 maxMaxCode; // 0x8C
		::System::Int32 bitPos; // 0x90

		::System::Void _ctor(::System::IO::Stream* baseInputStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM__CTOR_OFFSET))(this, baseInputStream);
		}

		::System::Boolean get_IsStreamOwner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_GET_ISSTREAMOWNER_OFFSET))(this);
		}

		::System::Void set_IsStreamOwner(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_SET_ISSTREAMOWNER_OFFSET))(this, value);
		}

		::System::Int32 ReadByte()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_READBYTE_OFFSET))(this);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_READ_OFFSET))(this, buffer, offset, count);
		}

		::System::Int32 ResetBuf(::System::Int32 bitPosition)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_RESETBUF_OFFSET))(this, bitPosition);
		}

		::System::Void Fill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_FILL_OFFSET))(this);
		}

		::System::Void ParseHeader()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_PARSEHEADER_OFFSET))(this);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_SET_POSITION_OFFSET))(this, value);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin origin)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_SEEK_OFFSET))(this, offset, origin);
		}

		::System::Void SetLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_SETLENGTH_OFFSET))(this, value);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_WRITE_OFFSET))(this, buffer, offset, count);
		}

		::System::Void WriteByte(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_WRITEBYTE_OFFSET))(this, value);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_BEGINWRITE_OFFSET))(this, buffer, offset, count, callback, state);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_LZW_LZWINPUTSTREAM_CLOSE_OFFSET))(this);
		}
	};
}
