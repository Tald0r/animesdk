#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

namespace ICSharpCode::SharpZipLib::Zip { class ZipEntry; }
namespace ICSharpCode::SharpZipLib::Zip::Compression { class Deflater; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Security::Cryptography { class ICryptoTransform; }
namespace System::Security::Cryptography { class RNGCryptoServiceProvider; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1B4E2BA0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1B4E2BF0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1B4E2C90)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_DEFLATE_OFFSET UNITYSDK_OFFSET(0x1B4E2760)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_ENCRYPTBLOCK_OFFSET UNITYSDK_OFFSET(0x1B4E22F0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_FINISH_OFFSET UNITYSDK_OFFSET(0x1B4E1F80)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1B4E2C40)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_GETAUTHCODEIFAES_OFFSET UNITYSDK_OFFSET(0x1B4E2E90)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_GET_CANPATCHENTRIES_OFFSET UNITYSDK_OFFSET(0x1B4E23E0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1B4E2960)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1B4E2970)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1B4E2980)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_GET_ISSTREAMOWNER_OFFSET UNITYSDK_OFFSET(0x1B4E23C0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1B4E29B0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_GET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1B4E2410)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1B4E29E0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_INITIALIZEAESPASSWORD_OFFSET UNITYSDK_OFFSET(0x1B4E2600)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_INITIALIZEPASSWORD_OFFSET UNITYSDK_OFFSET(0x1B4E2440)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x1B4E2B00)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1B4E2B50)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1B4E2A60)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1B4E2AB0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_SET_ISSTREAMOWNER_OFFSET UNITYSDK_OFFSET(0x1B4E23D0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1B4E2420)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1B4E2A10)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x1B4E2F50)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1B4E2FC0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B4E1F70)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B4E1DC0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4E1D50)

namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams
{
	inline static constexpr unsigned int DeflaterOutputStream_TypeDefinitionIndex = 6674;

	class DeflaterOutputStream : public ::System::IO::Stream
	{
	public:
		static ::System::Security::Cryptography::RNGCryptoServiceProvider** StaticGet__aesRnd()
		{
			return (::System::Security::Cryptography::RNGCryptoServiceProvider**)Il2CppClass::FromTypeDefinitionIndex(DeflaterOutputStream_TypeDefinitionIndex)->GetStaticField(0x5C00);
		}
		::ICSharpCode::SharpZipLib::Zip::Compression::Deflater* deflater_; // 0x28
		::System::IO::Stream* baseOutputStream_; // 0x30
		::Il2CppArray<::System::Byte>* AESAuthCode; // 0x38
		::System::Security::Cryptography::ICryptoTransform* cryptoTransform_; // 0x40
		::System::String* password; // 0x48
		::Il2CppArray<::System::Byte>* buffer_; // 0x50
		::System::Boolean isStreamOwner_; // 0x58
		::System::Boolean isClosed_; // 0x59

		::System::Void _ctor(::System::IO::Stream* baseOutputStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM__CTOR_OFFSET))(this, baseOutputStream);
		}

		::System::Void _ctor_1(::System::IO::Stream* baseOutputStream, ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater* deflater)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM__CTOR_1_OFFSET))(this, baseOutputStream, deflater);
		}

		::System::Void _ctor_2(::System::IO::Stream* baseOutputStream, ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater* deflater, ::System::Int32 bufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM__CTOR_2_OFFSET))(this, baseOutputStream, deflater, bufferSize);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_FINISH_OFFSET))(this);
		}

		::System::Boolean get_IsStreamOwner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_GET_ISSTREAMOWNER_OFFSET))(this);
		}

		::System::Void set_IsStreamOwner(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_SET_ISSTREAMOWNER_OFFSET))(this, value);
		}

		::System::Boolean get_CanPatchEntries()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_GET_CANPATCHENTRIES_OFFSET))(this);
		}

		::System::String* get_Password()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_GET_PASSWORD_OFFSET))(this);
		}

		::System::Void set_Password(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_SET_PASSWORD_OFFSET))(this, value);
		}

		::System::Void EncryptBlock(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_ENCRYPTBLOCK_OFFSET))(this, buffer, offset, length);
		}

		::System::Void InitializePassword(::System::String* password)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_INITIALIZEPASSWORD_OFFSET))(this, password);
		}

		::System::Void InitializeAESPassword(::ICSharpCode::SharpZipLib::Zip::ZipEntry* entry, ::System::String* rawPassword, ::Il2CppArray<::System::Byte>*& salt, ::Il2CppArray<::System::Byte>*& pwdVerifier)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*, ::System::String*, ::Il2CppArray<::System::Byte>*&, ::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_INITIALIZEAESPASSWORD_OFFSET))(this, entry, rawPassword, salt, pwdVerifier);
		}

		::System::Void Deflate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_DEFLATE_OFFSET))(this);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_SET_POSITION_OFFSET))(this, value);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin origin)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_SEEK_OFFSET))(this, offset, origin);
		}

		::System::Void SetLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_SETLENGTH_OFFSET))(this, value);
		}

		::System::Int32 ReadByte()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_READBYTE_OFFSET))(this);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_READ_OFFSET))(this, buffer, offset, count);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_BEGINREAD_OFFSET))(this, buffer, offset, count, callback, state);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_BEGINWRITE_OFFSET))(this, buffer, offset, count, callback, state);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_CLOSE_OFFSET))(this);
		}

		::System::Void GetAuthCodeIfAES()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_GETAUTHCODEIFAES_OFFSET))(this);
		}

		::System::Void WriteByte(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_WRITEBYTE_OFFSET))(this, value);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_DEFLATEROUTPUTSTREAM_WRITE_OFFSET))(this, buffer, offset, count);
		}
	};
}
