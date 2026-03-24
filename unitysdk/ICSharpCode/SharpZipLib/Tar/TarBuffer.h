#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::IO { class Stream; }

#define ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1B4B1A00)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_CREATEINPUTTARBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1B4B0E10)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_CREATEINPUTTARBUFFER_OFFSET UNITYSDK_OFFSET(0x1B4B0D20)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_CREATEOUTPUTTARBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1B4B1050)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_CREATEOUTPUTTARBUFFER_OFFSET UNITYSDK_OFFSET(0x1B4B0F60)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_GETBLOCKFACTOR_OFFSET UNITYSDK_OFFSET(0x1B4B0CF0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_GETCURRENTBLOCKNUM_OFFSET UNITYSDK_OFFSET(0x1B4B1570)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_GETCURRENTRECORDNUM_OFFSET UNITYSDK_OFFSET(0x1B4B1590)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_GETRECORDSIZE_OFFSET UNITYSDK_OFFSET(0x1B4B0CD0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_GET_BLOCKFACTOR_OFFSET UNITYSDK_OFFSET(0x1B4B0CE0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_GET_CURRENTBLOCK_OFFSET UNITYSDK_OFFSET(0x1B4B1540)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_GET_CURRENTRECORD_OFFSET UNITYSDK_OFFSET(0x1B4B1580)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_GET_ISSTREAMOWNER_OFFSET UNITYSDK_OFFSET(0x1B4B1550)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_GET_RECORDSIZE_OFFSET UNITYSDK_OFFSET(0x1B4B0CC0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B4B0F10)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_ISENDOFARCHIVEBLOCK_OFFSET UNITYSDK_OFFSET(0x1B4B1250)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_ISEOFBLOCK_OFFSET UNITYSDK_OFFSET(0x1B4B1150)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_READBLOCK_OFFSET UNITYSDK_OFFSET(0x1B4B1490)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_READRECORD_OFFSET UNITYSDK_OFFSET(0x1B4B13D0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_SET_ISSTREAMOWNER_OFFSET UNITYSDK_OFFSET(0x1B4B1560)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_SKIPBLOCK_OFFSET UNITYSDK_OFFSET(0x1B4B1350)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_WRITEBLOCK_1_OFFSET UNITYSDK_OFFSET(0x1B4B17A0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_WRITEBLOCK_OFFSET UNITYSDK_OFFSET(0x1B4B15A0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_WRITEFINALRECORD_OFFSET UNITYSDK_OFFSET(0x1B4B1950)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_WRITERECORD_OFFSET UNITYSDK_OFFSET(0x1B4B16F0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B0D00)

namespace ICSharpCode::SharpZipLib::Tar
{
	inline static constexpr unsigned int TarBuffer_TypeDefinitionIndex = 6684;

	class TarBuffer : public ::System::Object
	{
	public:
		// static const ::System::Int32 BlockSize = 0x200; // 0x0
		// static const ::System::Int32 DefaultBlockFactor = 0x14; // 0x0
		// static const ::System::Int32 DefaultRecordSize = 0x2800; // 0x0
		::System::IO::Stream* inputStream; // 0x10
		::System::IO::Stream* outputStream; // 0x18
		::Il2CppArray<::System::Byte>* recordBuffer; // 0x20
		::System::Int32 currentBlockIndex; // 0x28
		::System::Boolean isStreamOwner_; // 0x2C
		::System::Int32 currentRecordIndex; // 0x30
		::System::Int32 recordSize; // 0x34
		::System::Int32 blockFactor; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_RecordSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_GET_RECORDSIZE_OFFSET))(this);
		}

		::System::Int32 GetRecordSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_GETRECORDSIZE_OFFSET))(this);
		}

		::System::Int32 get_BlockFactor()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_GET_BLOCKFACTOR_OFFSET))(this);
		}

		::System::Int32 GetBlockFactor()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_GETBLOCKFACTOR_OFFSET))(this);
		}

		static ::ICSharpCode::SharpZipLib::Tar::TarBuffer* CreateInputTarBuffer(::System::IO::Stream* inputStream)
		{
			return ((::ICSharpCode::SharpZipLib::Tar::TarBuffer*(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_CREATEINPUTTARBUFFER_OFFSET))(inputStream);
		}

		static ::ICSharpCode::SharpZipLib::Tar::TarBuffer* CreateInputTarBuffer_1(::System::IO::Stream* inputStream, ::System::Int32 blockFactor)
		{
			return ((::ICSharpCode::SharpZipLib::Tar::TarBuffer*(*)(::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_CREATEINPUTTARBUFFER_1_OFFSET))(inputStream, blockFactor);
		}

		static ::ICSharpCode::SharpZipLib::Tar::TarBuffer* CreateOutputTarBuffer(::System::IO::Stream* outputStream)
		{
			return ((::ICSharpCode::SharpZipLib::Tar::TarBuffer*(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_CREATEOUTPUTTARBUFFER_OFFSET))(outputStream);
		}

		static ::ICSharpCode::SharpZipLib::Tar::TarBuffer* CreateOutputTarBuffer_1(::System::IO::Stream* outputStream, ::System::Int32 blockFactor)
		{
			return ((::ICSharpCode::SharpZipLib::Tar::TarBuffer*(*)(::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_CREATEOUTPUTTARBUFFER_1_OFFSET))(outputStream, blockFactor);
		}

		::System::Void Initialize(::System::Int32 archiveBlockFactor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_INITIALIZE_OFFSET))(this, archiveBlockFactor);
		}

		::System::Boolean IsEOFBlock(::Il2CppArray<::System::Byte>* block)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_ISEOFBLOCK_OFFSET))(this, block);
		}

		static ::System::Boolean IsEndOfArchiveBlock(::Il2CppArray<::System::Byte>* block)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_ISENDOFARCHIVEBLOCK_OFFSET))(block);
		}

		::System::Void SkipBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_SKIPBLOCK_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* ReadBlock()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_READBLOCK_OFFSET))(this);
		}

		::System::Boolean ReadRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_READRECORD_OFFSET))(this);
		}

		::System::Int32 get_CurrentBlock()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_GET_CURRENTBLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsStreamOwner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_GET_ISSTREAMOWNER_OFFSET))(this);
		}

		::System::Void set_IsStreamOwner(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_SET_ISSTREAMOWNER_OFFSET))(this, value);
		}

		::System::Int32 GetCurrentBlockNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_GETCURRENTBLOCKNUM_OFFSET))(this);
		}

		::System::Int32 get_CurrentRecord()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_GET_CURRENTRECORD_OFFSET))(this);
		}

		::System::Int32 GetCurrentRecordNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_GETCURRENTRECORDNUM_OFFSET))(this);
		}

		::System::Void WriteBlock(::Il2CppArray<::System::Byte>* block)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_WRITEBLOCK_OFFSET))(this, block);
		}

		::System::Void WriteBlock_1(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_WRITEBLOCK_1_OFFSET))(this, buffer, offset);
		}

		::System::Void WriteRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_WRITERECORD_OFFSET))(this);
		}

		::System::Void WriteFinalRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_WRITEFINALRECORD_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARBUFFER_CLOSE_OFFSET))(this);
		}
	};
}
