#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class MemoryStream; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class SimpleAsyncCallback; }
namespace System::Net { class SimpleAsyncResult; }
namespace System::Net { class WebConnection; }
namespace System::Net { class WebConnectionData; }
namespace System::Threading { class ManualResetEvent; }

#define SYSTEM_NET_WEBCONNECTIONSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x185AD920)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x185ADFB0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_CHECKAUTHHEADER_OFFSET UNITYSDK_OFFSET(0x185ACAF0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_CHECKCOMPLETE_OFFSET UNITYSDK_OFFSET(0x185ACD70)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_CHECKRESPONSEINBUFFER_OFFSET UNITYSDK_OFFSET(0x185A97A0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_CHECKWRITEOVERFLOW_OFFSET UNITYSDK_OFFSET(0x185AE8F0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x185AF1D0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x185AD3E0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x185ACFC0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x185AEB70)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_FORCECOMPLETION_OFFSET UNITYSDK_OFFSET(0x185A97F0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x185AF730)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x185AF720)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_GET_CANTIMEOUT_OFFSET UNITYSDK_OFFSET(0x185ACBB0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x185AF750)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_GET_COMPLETEREQUESTWRITTEN_OFFSET UNITYSDK_OFFSET(0x185ACCC0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_GET_CONNECTION_OFFSET UNITYSDK_OFFSET(0x185ACBA0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_GET_GETRESPONSEONCLOSE_OFFSET UNITYSDK_OFFSET(0x185AF1B0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x185AF770)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x185AF7E0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_GET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x185ACBC0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_GET_REQUESTWRITTEN_OFFSET UNITYSDK_OFFSET(0x185AEF50)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x185ACB90)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_GET_WRITEBUFFERLENGTH_OFFSET UNITYSDK_OFFSET(0x185ACD40)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_GET_WRITEBUFFER_OFFSET UNITYSDK_OFFSET(0x185ACD10)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_GET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x185ACC40)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_INTERNALCLOSE_OFFSET UNITYSDK_OFFSET(0x185AF1A0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_ISNTLMAUTH_OFFSET UNITYSDK_OFFSET(0x185AC610)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_KILLBUFFER_OFFSET UNITYSDK_OFFSET(0x185ADFA0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_READALL_OFFSET UNITYSDK_OFFSET(0x185AC700)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_READCALLBACKWRAPPER_OFFSET UNITYSDK_OFFSET(0x185AD210)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x185AD780)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x185AF680)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_SETHEADERSASYNC_1_OFFSET UNITYSDK_OFFSET(0x185AEBF0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_SETHEADERSASYNC_OFFSET UNITYSDK_OFFSET(0x185AEB80)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x185AF6D0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_SET_GETRESPONSEONCLOSE_OFFSET UNITYSDK_OFFSET(0x185AF1C0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x185AF830)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_SET_READBUFFEROFFSET_OFFSET UNITYSDK_OFFSET(0x185ACCF0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_SET_READBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x185ACD00)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_SET_READBUFFER_OFFSET UNITYSDK_OFFSET(0x185ACCE0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_SET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x185ACBD0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_SET_SENDCHUNKED_OFFSET UNITYSDK_OFFSET(0x185ACCD0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_SET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x185ACC50)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_WRITEASYNCCB_OFFSET UNITYSDK_OFFSET(0x185ADCD0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_WRITECALLBACKWRAPPER_OFFSET UNITYSDK_OFFSET(0x185ACDC0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_WRITEREQUESTASYNC_1_OFFSET UNITYSDK_OFFSET(0x185AEFC0)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_WRITEREQUESTASYNC_OFFSET UNITYSDK_OFFSET(0x185AEF60)
#define SYSTEM_NET_WEBCONNECTIONSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x185AE990)
#define SYSTEM_NET_WEBCONNECTIONSTREAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x185AF880)
#define SYSTEM_NET_WEBCONNECTIONSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x185A9C20)
#define SYSTEM_NET_WEBCONNECTIONSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x185A9450)

namespace System::Net
{
	inline static constexpr unsigned int WebConnectionStream_TypeDefinitionIndex = 3571;

	class WebConnectionStream : public ::System::IO::Stream
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_crlf()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(WebConnectionStream_TypeDefinitionIndex)->GetStaticField(0x3360);
		}
		::Il2CppArray<::System::Byte>* readBuffer; // 0x28
		::System::IO::MemoryStream* writeBuffer; // 0x30
		::System::Net::HttpWebRequest* request; // 0x38
		::System::Object* locker; // 0x40
		::System::AsyncCallback* cb_wrapper; // 0x48
		::Il2CppArray<::System::Byte>* headers; // 0x50
		::System::Net::WebConnection* cnc; // 0x58
		::System::Threading::ManualResetEvent* pending; // 0x60
		::System::Boolean nextReadCalled; // 0x68
		::System::Boolean complete_request_written; // 0x69
		::System::Boolean read_eof; // 0x6A
		::System::Boolean initRead; // 0x6B
		::System::Int32 stream_length; // 0x6C
		::System::Int64 totalRead; // 0x70
		::System::Int32 readBufferOffset; // 0x78
		::System::Int32 pendingReads; // 0x7C
		::System::Int64 contentLength; // 0x80
		::System::Boolean _GetResponseOnClose_k__BackingField; // 0x88
		::System::Boolean sendChunked; // 0x89
		::System::Boolean allowBuffering; // 0x8A
		::System::Boolean IgnoreIOErrors; // 0x8B
		::System::Int32 read_timeout; // 0x8C
		::System::Int64 totalWritten; // 0x90
		::System::Int32 pendingWrites; // 0x98
		::System::Boolean headersSent; // 0x9C
		::System::Boolean isRead; // 0x9D
		::System::Boolean disposed; // 0x9E
		::System::Boolean requestWritten; // 0x9F
		::System::Int32 write_timeout; // 0xA0
		::System::Int32 readBufferSize; // 0xA4

		::System::Void _ctor(::System::Net::WebConnection* cnc, ::System::Net::WebConnectionData* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebConnection*, ::System::Net::WebConnectionData*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM__CTOR_OFFSET))(this, cnc, data);
		}

		::System::Void _ctor_1(::System::Net::WebConnection* cnc, ::System::Net::HttpWebRequest* request)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebConnection*, ::System::Net::HttpWebRequest*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM__CTOR_1_OFFSET))(this, cnc, request);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM__CCTOR_OFFSET))();
		}

		::System::Boolean CheckAuthHeader(::System::String* headerName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_CHECKAUTHHEADER_OFFSET))(this, headerName);
		}

		::System::Boolean IsNtlmAuth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_ISNTLMAUTH_OFFSET))(this);
		}

		::System::Void CheckResponseInBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_CHECKRESPONSEINBUFFER_OFFSET))(this);
		}

		::System::Net::HttpWebRequest* get_Request()
		{
			return ((::System::Net::HttpWebRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_GET_REQUEST_OFFSET))(this);
		}

		::System::Net::WebConnection* get_Connection()
		{
			return ((::System::Net::WebConnection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_GET_CONNECTION_OFFSET))(this);
		}

		::System::Boolean get_CanTimeout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_GET_CANTIMEOUT_OFFSET))(this);
		}

		::System::Int32 get_ReadTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_GET_READTIMEOUT_OFFSET))(this);
		}

		::System::Void set_ReadTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_SET_READTIMEOUT_OFFSET))(this, value);
		}

		::System::Int32 get_WriteTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_GET_WRITETIMEOUT_OFFSET))(this);
		}

		::System::Void set_WriteTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_SET_WRITETIMEOUT_OFFSET))(this, value);
		}

		::System::Boolean get_CompleteRequestWritten()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_GET_COMPLETEREQUESTWRITTEN_OFFSET))(this);
		}

		::System::Void set_SendChunked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_SET_SENDCHUNKED_OFFSET))(this, value);
		}

		::System::Void set_ReadBuffer(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_SET_READBUFFER_OFFSET))(this, value);
		}

		::System::Void set_ReadBufferOffset(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_SET_READBUFFEROFFSET_OFFSET))(this, value);
		}

		::System::Void set_ReadBufferSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_SET_READBUFFERSIZE_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_WriteBuffer()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_GET_WRITEBUFFER_OFFSET))(this);
		}

		::System::Int32 get_WriteBufferLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_GET_WRITEBUFFERLENGTH_OFFSET))(this);
		}

		::System::Void ForceCompletion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_FORCECOMPLETION_OFFSET))(this);
		}

		::System::Void CheckComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_CHECKCOMPLETE_OFFSET))(this);
		}

		::System::Void ReadAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_READALL_OFFSET))(this);
		}

		::System::Void WriteCallbackWrapper(::System::IAsyncResult* r)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_WRITECALLBACKWRAPPER_OFFSET))(this, r);
		}

		::System::Void ReadCallbackWrapper(::System::IAsyncResult* r)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_READCALLBACKWRAPPER_OFFSET))(this, r);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_READ_OFFSET))(this, buffer, offset, size);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::AsyncCallback* cb, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_BEGINREAD_OFFSET))(this, buffer, offset, size, cb, state);
		}

		::System::Int32 EndRead(::System::IAsyncResult* r)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_ENDREAD_OFFSET))(this, r);
		}

		::System::Void WriteAsyncCB(::System::IAsyncResult* r)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_WRITEASYNCCB_OFFSET))(this, r);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::AsyncCallback* cb, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_BEGINWRITE_OFFSET))(this, buffer, offset, size, cb, state);
		}

		::System::Void CheckWriteOverflow(::System::Int64 contentLength, ::System::Int64 totalWritten, ::System::Int64 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_CHECKWRITEOVERFLOW_OFFSET))(this, contentLength, totalWritten, size);
		}

		::System::Void EndWrite(::System::IAsyncResult* r)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_ENDWRITE_OFFSET))(this, r);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_WRITE_OFFSET))(this, buffer, offset, size);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Void SetHeadersAsync(::System::Boolean setInternalLength, ::System::Net::SimpleAsyncCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Net::SimpleAsyncCallback*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_SETHEADERSASYNC_OFFSET))(this, setInternalLength, callback);
		}

		::System::Boolean SetHeadersAsync_1(::System::Net::SimpleAsyncResult* result, ::System::Boolean setInternalLength)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::SimpleAsyncResult*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_SETHEADERSASYNC_1_OFFSET))(this, result, setInternalLength);
		}

		::System::Boolean get_RequestWritten()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_GET_REQUESTWRITTEN_OFFSET))(this);
		}

		::System::Net::SimpleAsyncResult* WriteRequestAsync(::System::Net::SimpleAsyncCallback* callback)
		{
			return ((::System::Net::SimpleAsyncResult*(*)(::PVOID, ::System::Net::SimpleAsyncCallback*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_WRITEREQUESTASYNC_OFFSET))(this, callback);
		}

		::System::Boolean WriteRequestAsync_1(::System::Net::SimpleAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::SimpleAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_WRITEREQUESTASYNC_1_OFFSET))(this, result);
		}

		::System::Void InternalClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_INTERNALCLOSE_OFFSET))(this);
		}

		::System::Boolean get_GetResponseOnClose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_GET_GETRESPONSEONCLOSE_OFFSET))(this);
		}

		::System::Void set_GetResponseOnClose(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_SET_GETRESPONSEONCLOSE_OFFSET))(this, value);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_CLOSE_OFFSET))(this);
		}

		::System::Void KillBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_KILLBUFFER_OFFSET))(this);
		}

		::System::Int64 Seek(::System::Int64 a, ::System::IO::SeekOrigin b)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_SEEK_OFFSET))(this, a, b);
		}

		::System::Void SetLength(::System::Int64 a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_SETLENGTH_OFFSET))(this, a);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM_SET_POSITION_OFFSET))(this, value);
		}
	};
}
