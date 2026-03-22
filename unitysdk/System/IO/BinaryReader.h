#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Text { class Decoder; }
namespace System::Text { class Encoding; }

#define SYSTEM_IO_BINARYREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1943A3A0)
#define SYSTEM_IO_BINARYREADER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1943A410)
#define SYSTEM_IO_BINARYREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1943A3C0)
#define SYSTEM_IO_BINARYREADER_FILLBUFFER_OFFSET UNITYSDK_OFFSET(0x1943B9B0)
#define SYSTEM_IO_BINARYREADER_GET_BASESTREAM_OFFSET UNITYSDK_OFFSET(0x1943A390)
#define SYSTEM_IO_BINARYREADER_INTERNALREADCHARS_OFFSET UNITYSDK_OFFSET(0x1943B290)
#define SYSTEM_IO_BINARYREADER_INTERNALREADONECHAR_OFFSET UNITYSDK_OFFSET(0x1943A450)
#define SYSTEM_IO_BINARYREADER_READ7BITENCODEDINT_OFFSET UNITYSDK_OFFSET(0x1943B1B0)
#define SYSTEM_IO_BINARYREADER_READBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1943A750)
#define SYSTEM_IO_BINARYREADER_READBYTES_OFFSET UNITYSDK_OFFSET(0x1943B890)
#define SYSTEM_IO_BINARYREADER_READBYTE_OFFSET UNITYSDK_OFFSET(0x1943A7A0)
#define SYSTEM_IO_BINARYREADER_READCHARS_OFFSET UNITYSDK_OFFSET(0x1943B650)
#define SYSTEM_IO_BINARYREADER_READCHAR_OFFSET UNITYSDK_OFFSET(0x1943A820)
#define SYSTEM_IO_BINARYREADER_READDECIMAL_OFFSET UNITYSDK_OFFSET(0x1943ADC0)
#define SYSTEM_IO_BINARYREADER_READDOUBLE_OFFSET UNITYSDK_OFFSET(0x1943AD80)
#define SYSTEM_IO_BINARYREADER_READINT16_OFFSET UNITYSDK_OFFSET(0x1943A840)
#define SYSTEM_IO_BINARYREADER_READINT32_OFFSET UNITYSDK_OFFSET(0x1943A900)
#define SYSTEM_IO_BINARYREADER_READINT64_OFFSET UNITYSDK_OFFSET(0x1943AAA0)
#define SYSTEM_IO_BINARYREADER_READSBYTE_OFFSET UNITYSDK_OFFSET(0x1943A7D0)
#define SYSTEM_IO_BINARYREADER_READSINGLE_OFFSET UNITYSDK_OFFSET(0x1943AD40)
#define SYSTEM_IO_BINARYREADER_READSTRING_OFFSET UNITYSDK_OFFSET(0x1943AEF0)
#define SYSTEM_IO_BINARYREADER_READUINT16_OFFSET UNITYSDK_OFFSET(0x1943A8A0)
#define SYSTEM_IO_BINARYREADER_READUINT32_OFFSET UNITYSDK_OFFSET(0x1943AA00)
#define SYSTEM_IO_BINARYREADER_READUINT64_OFFSET UNITYSDK_OFFSET(0x1943ABF0)
#define SYSTEM_IO_BINARYREADER_READ_1_OFFSET UNITYSDK_OFFSET(0x1943B760)
#define SYSTEM_IO_BINARYREADER_READ_OFFSET UNITYSDK_OFFSET(0x1943A430)
#define SYSTEM_IO_BINARYREADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1943A380)
#define SYSTEM_IO_BINARYREADER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1943A1D0)
#define SYSTEM_IO_BINARYREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1943A170)

namespace System::IO
{
	inline static constexpr unsigned int BinaryReader_TypeDefinitionIndex = 628;

	class BinaryReader : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Char>* m_charBuffer; // 0x10
		::System::IO::Stream* m_stream; // 0x18
		::System::Text::Decoder* m_decoder; // 0x20
		::Il2CppArray<::System::Char>* m_singleChar; // 0x28
		::Il2CppArray<::System::Byte>* m_buffer; // 0x30
		::Il2CppArray<::System::Byte>* m_charBytes; // 0x38
		::System::Boolean m_leaveOpen; // 0x40
		::System::Boolean m_2BytesPerChar; // 0x41
		::System::Boolean m_isMemoryStream; // 0x42
		::System::Int32 m_maxCharsSize; // 0x44

		::System::Void _ctor(::System::IO::Stream* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER__CTOR_OFFSET))(this, input);
		}

		::System::Void _ctor_1(::System::IO::Stream* input, ::System::Text::Encoding* encoding)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER__CTOR_1_OFFSET))(this, input, encoding);
		}

		::System::Void _ctor_2(::System::IO::Stream* input, ::System::Text::Encoding* encoding, ::System::Boolean leaveOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER__CTOR_2_OFFSET))(this, input, encoding, leaveOpen);
		}

		::System::IO::Stream* get_BaseStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_GET_BASESTREAM_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Dispose_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_DISPOSE_1_OFFSET))(this);
		}

		::System::Int32 Read()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READ_OFFSET))(this);
		}

		::System::Boolean ReadBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READBOOLEAN_OFFSET))(this);
		}

		::System::Byte ReadByte()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READBYTE_OFFSET))(this);
		}

		::System::SByte ReadSByte()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READSBYTE_OFFSET))(this);
		}

		::System::Char ReadChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READCHAR_OFFSET))(this);
		}

		::System::Int16 ReadInt16()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READINT16_OFFSET))(this);
		}

		::System::UInt16 ReadUInt16()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READUINT16_OFFSET))(this);
		}

		::System::Int32 ReadInt32()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READINT32_OFFSET))(this);
		}

		::System::UInt32 ReadUInt32()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READUINT32_OFFSET))(this);
		}

		::System::Int64 ReadInt64()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READINT64_OFFSET))(this);
		}

		::System::UInt64 ReadUInt64()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READUINT64_OFFSET))(this);
		}

		::System::Single ReadSingle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READSINGLE_OFFSET))(this);
		}

		::System::Double ReadDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READDOUBLE_OFFSET))(this);
		}

		::System::Decimal ReadDecimal()
		{
			return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READDECIMAL_OFFSET))(this);
		}

		::System::String* ReadString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READSTRING_OFFSET))(this);
		}

		::System::Int32 InternalReadChars(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_INTERNALREADCHARS_OFFSET))(this, buffer, index, count);
		}

		::System::Int32 InternalReadOneChar()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_INTERNALREADONECHAR_OFFSET))(this);
		}

		::Il2CppArray<::System::Char>* ReadChars(::System::Int32 count)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READCHARS_OFFSET))(this, count);
		}

		::System::Int32 Read_1(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READ_1_OFFSET))(this, buffer, index, count);
		}

		::Il2CppArray<::System::Byte>* ReadBytes(::System::Int32 count)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READBYTES_OFFSET))(this, count);
		}

		::System::Void FillBuffer(::System::Int32 numBytes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_FILLBUFFER_OFFSET))(this, numBytes);
		}

		::System::Int32 Read7BitEncodedInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYREADER_READ7BITENCODEDINT_OFFSET))(this);
		}
	};
}
