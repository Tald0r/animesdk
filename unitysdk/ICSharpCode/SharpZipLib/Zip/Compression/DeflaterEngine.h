#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Zip/Compression/DeflateStrategy.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Zip/Compression/DeflaterConstants.h"

namespace ICSharpCode::SharpZipLib::Checksums { class Adler32; }
namespace ICSharpCode::SharpZipLib::Zip::Compression { class DeflaterHuffman; }
namespace ICSharpCode::SharpZipLib::Zip::Compression { class DeflaterPending; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_DEFLATEFAST_OFFSET UNITYSDK_OFFSET(0x1B3A0280)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_DEFLATESLOW_OFFSET UNITYSDK_OFFSET(0x1B3A0560)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_DEFLATESTORED_OFFSET UNITYSDK_OFFSET(0x1B3A0130)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_DEFLATE_OFFSET UNITYSDK_OFFSET(0x1B39FEA0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_FILLWINDOW_OFFSET UNITYSDK_OFFSET(0x1B3A0020)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_FINDLONGESTMATCH_OFFSET UNITYSDK_OFFSET(0x1B3A13A0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_GET_ADLER_OFFSET UNITYSDK_OFFSET(0x1B3A0DD0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_GET_STRATEGY_OFFSET UNITYSDK_OFFSET(0x1B3A0E00)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_GET_TOTALIN_OFFSET UNITYSDK_OFFSET(0x1B3A0DF0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_INSERTSTRING_OFFSET UNITYSDK_OFFSET(0x1B3A0B70)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_NEEDSINPUT_OFFSET UNITYSDK_OFFSET(0x1B3A09E0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_RESETADLER_OFFSET UNITYSDK_OFFSET(0x1B3A0DB0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_RESET_OFFSET UNITYSDK_OFFSET(0x1B3A0C30)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_SETDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1B3A09F0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_SETINPUT_OFFSET UNITYSDK_OFFSET(0x1B3A0880)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_SETLEVEL_OFFSET UNITYSDK_OFFSET(0x1B3A0E20)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_SET_STRATEGY_OFFSET UNITYSDK_OFFSET(0x1B3A0E10)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_SLIDEWINDOW_OFFSET UNITYSDK_OFFSET(0x1B3A11F0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_UPDATEHASH_OFFSET UNITYSDK_OFFSET(0x1B3A0B00)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B39FDB0)

namespace ICSharpCode::SharpZipLib::Zip::Compression
{
	inline static constexpr unsigned int DeflaterEngine_TypeDefinitionIndex = 6697;

	class DeflaterEngine : public ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterConstants
	{
	public:
		// static const ::System::Int32 TooFar = 0x1000; // 0x0
		::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending* pending; // 0x10
		::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman* huffman; // 0x18
		::Il2CppArray<::System::Byte>* inputBuf; // 0x20
		::ICSharpCode::SharpZipLib::Checksums::Adler32* adler; // 0x28
		::Il2CppArray<::System::Int16>* prev; // 0x30
		::Il2CppArray<::System::Int16>* head; // 0x38
		::Il2CppArray<::System::Byte>* window; // 0x40
		::System::Int32 compressionFunction; // 0x48
		::System::Int32 lookahead; // 0x4C
		::System::Int32 ins_h; // 0x50
		::System::Int32 matchStart; // 0x54
		::System::Int32 max_lazy; // 0x58
		::System::Int32 matchLen; // 0x5C
		::System::Boolean prevAvailable; // 0x60
		::System::Int64 totalIn; // 0x68
		::System::Int32 max_chain; // 0x70
		::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy strategy; // 0x74
		::System::Int32 inputEnd; // 0x78
		::System::Int32 goodLength; // 0x7C
		::System::Int32 niceLength; // 0x80
		::System::Int32 blockStart; // 0x84
		::System::Int32 strstart; // 0x88
		::System::Int32 inputOff; // 0x8C

		::System::Void _ctor(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending* pending)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE__CTOR_OFFSET))(this, pending);
		}

		::System::Boolean Deflate(::System::Boolean flush, ::System::Boolean finish)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_DEFLATE_OFFSET))(this, flush, finish);
		}

		::System::Void SetInput(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_SETINPUT_OFFSET))(this, buffer, offset, count);
		}

		::System::Boolean NeedsInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_NEEDSINPUT_OFFSET))(this);
		}

		::System::Void SetDictionary(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_SETDICTIONARY_OFFSET))(this, buffer, offset, length);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_RESET_OFFSET))(this);
		}

		::System::Void ResetAdler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_RESETADLER_OFFSET))(this);
		}

		::System::Int32 get_Adler()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_GET_ADLER_OFFSET))(this);
		}

		::System::Int64 get_TotalIn()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_GET_TOTALIN_OFFSET))(this);
		}

		::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy get_Strategy()
		{
			return ((::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_GET_STRATEGY_OFFSET))(this);
		}

		::System::Void set_Strategy(::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy value)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_SET_STRATEGY_OFFSET))(this, value);
		}

		::System::Void SetLevel(::System::Int32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_SETLEVEL_OFFSET))(this, level);
		}

		::System::Void FillWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_FILLWINDOW_OFFSET))(this);
		}

		::System::Void UpdateHash()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_UPDATEHASH_OFFSET))(this);
		}

		::System::Int32 InsertString()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_INSERTSTRING_OFFSET))(this);
		}

		::System::Void SlideWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_SLIDEWINDOW_OFFSET))(this);
		}

		::System::Boolean FindLongestMatch(::System::Int32 curMatch)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_FINDLONGESTMATCH_OFFSET))(this, curMatch);
		}

		::System::Boolean DeflateStored(::System::Boolean flush, ::System::Boolean finish)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_DEFLATESTORED_OFFSET))(this, flush, finish);
		}

		::System::Boolean DeflateFast(::System::Boolean flush, ::System::Boolean finish)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_DEFLATEFAST_OFFSET))(this, flush, finish);
		}

		::System::Boolean DeflateSlow(::System::Boolean flush, ::System::Boolean finish)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERENGINE_DEFLATESLOW_OFFSET))(this, flush, finish);
		}
	};
}
