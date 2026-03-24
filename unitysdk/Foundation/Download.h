#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Download_FailedReason.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class DownloadHandler; }
namespace System { class String; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define FOUNDATION_DOWNLOAD_ABORT_OFFSET UNITYSDK_OFFSET(0x1AEB76D0)
#define FOUNDATION_DOWNLOAD_CANCEL_OFFSET UNITYSDK_OFFSET(0x1AEB7550)
#define FOUNDATION_DOWNLOAD_CANRETRY_OFFSET UNITYSDK_OFFSET(0x1AEB8020)
#define FOUNDATION_DOWNLOAD_CLOSETEMPFILE_OFFSET UNITYSDK_OFFSET(0x1AEB77E0)
#define FOUNDATION_DOWNLOAD_DIDDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x1AEB8090)
#define FOUNDATION_DOWNLOAD_DISPOSEREQUEST_OFFSET UNITYSDK_OFFSET(0x1AEB7760)
#define FOUNDATION_DOWNLOAD_FINISH_OFFSET UNITYSDK_OFFSET(0x1AEB7850)
#define FOUNDATION_DOWNLOAD_GET_ERRMSG_OFFSET UNITYSDK_OFFSET(0x1AEB6BE0)
#define FOUNDATION_DOWNLOAD_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1AEB6BA0)
#define FOUNDATION_DOWNLOAD_GET_HASH_OFFSET UNITYSDK_OFFSET(0x1AEB6C20)
#define FOUNDATION_DOWNLOAD_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AEB6BC0)
#define FOUNDATION_DOWNLOAD_GET_ISABORTED_OFFSET UNITYSDK_OFFSET(0x1AEB6C80)
#define FOUNDATION_DOWNLOAD_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1AEB6C90)
#define FOUNDATION_DOWNLOAD_GET_ISRESPONSEERROR_OFFSET UNITYSDK_OFFSET(0x1AEB6DB0)
#define FOUNDATION_DOWNLOAD_GET_LEN_OFFSET UNITYSDK_OFFSET(0x1AEB6C00)
#define FOUNDATION_DOWNLOAD_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1AEB6C60)
#define FOUNDATION_DOWNLOAD_GET_REQUESTERROR_OFFSET UNITYSDK_OFFSET(0x1AEB6D90)
#define FOUNDATION_DOWNLOAD_GET_RESPONSECODE_OFFSET UNITYSDK_OFFSET(0x1AEB6D10)
#define FOUNDATION_DOWNLOAD_GET_URL_OFFSET UNITYSDK_OFFSET(0x1AEB6C40)
#define FOUNDATION_DOWNLOAD_INITREQUEST_OFFSET UNITYSDK_OFFSET(0x1AEB73A0)
#define FOUNDATION_DOWNLOAD_ISVALID_OFFSET UNITYSDK_OFFSET(0x1AEB7A50)
#define FOUNDATION_DOWNLOAD_PAUSE_OFFSET UNITYSDK_OFFSET(0x1AEB74E0)
#define FOUNDATION_DOWNLOAD_RESETRETRYCOUNT_OFFSET UNITYSDK_OFFSET(0x1AEB7B90)
#define FOUNDATION_DOWNLOAD_RETRY_OFFSET UNITYSDK_OFFSET(0x1AEB7C00)
#define FOUNDATION_DOWNLOAD_SET_ERRMSG_OFFSET UNITYSDK_OFFSET(0x1AEB6BF0)
#define FOUNDATION_DOWNLOAD_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1AEB6BB0)
#define FOUNDATION_DOWNLOAD_SET_HASH_OFFSET UNITYSDK_OFFSET(0x1AEB6C30)
#define FOUNDATION_DOWNLOAD_SET_ID_OFFSET UNITYSDK_OFFSET(0x1AEB6BD0)
#define FOUNDATION_DOWNLOAD_SET_LEN_OFFSET UNITYSDK_OFFSET(0x1AEB6C10)
#define FOUNDATION_DOWNLOAD_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1AEB6C70)
#define FOUNDATION_DOWNLOAD_SET_URL_OFFSET UNITYSDK_OFFSET(0x1AEB6C50)
#define FOUNDATION_DOWNLOAD_START_OFFSET UNITYSDK_OFFSET(0x1AEB7330)
#define FOUNDATION_DOWNLOAD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AEB6E40)
#define FOUNDATION_DOWNLOAD_UNPAUSE_OFFSET UNITYSDK_OFFSET(0x1AEB7620)
#define FOUNDATION_DOWNLOAD_WRITE_OFFSET UNITYSDK_OFFSET(0x1AEB8270)
#define FOUNDATION_DOWNLOAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEB82E0)
#define FOUNDATION_DOWNLOAD___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AEB82F0)

namespace Foundation
{
	inline static constexpr unsigned int Download_TypeDefinitionIndex = 8257;

	class Download : public ::System::Object
	{
	public:
		::Foundation::DownloadHandler* _downloadHandler; // 0x10
		::System::String* _filename_k__BackingField; // 0x18
		::System::String* _errMsg_k__BackingField; // 0x20
		::System::String* _hash_k__BackingField; // 0x28
		::System::String* _url_k__BackingField; // 0x30
		::UnityEngine::Networking::UnityWebRequest* _request; // 0x38
		::System::Boolean aborted; // 0x40
		::System::Int32 _id_k__BackingField; // 0x44
		::Foundation::Download_FailedReason failedReason; // 0x48
		::System::Int32 retryMaxCount; // 0x4C
		::System::Int32 retryCount; // 0x50
		::System::Int64 _position; // 0x58
		::System::Int64 _len_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD__CTOR_OFFSET))(this);
		}

		::System::String* get_filename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_GET_FILENAME_OFFSET))(this);
		}

		::System::Void set_filename(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_SET_FILENAME_OFFSET))(this, value);
		}

		::System::Int32 get_id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_GET_ID_OFFSET))(this);
		}

		::System::Void set_id(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_SET_ID_OFFSET))(this, value);
		}

		::System::String* get_errMsg()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_GET_ERRMSG_OFFSET))(this);
		}

		::System::Void set_errMsg(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_SET_ERRMSG_OFFSET))(this, value);
		}

		::System::Int64 get_len()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_GET_LEN_OFFSET))(this);
		}

		::System::Void set_len(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_SET_LEN_OFFSET))(this, value);
		}

		::System::String* get_hash()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_GET_HASH_OFFSET))(this);
		}

		::System::Void set_hash(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_SET_HASH_OFFSET))(this, value);
		}

		::System::String* get_url()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_GET_URL_OFFSET))(this);
		}

		::System::Void set_url(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_SET_URL_OFFSET))(this, value);
		}

		::System::Int64 get_position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_SET_POSITION_OFFSET))(this, value);
		}

		::System::Boolean get_isAborted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_GET_ISABORTED_OFFSET))(this);
		}

		::System::Boolean get_isFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Int64 get_ResponseCode()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_GET_RESPONSECODE_OFFSET))(this);
		}

		::System::String* get_RequestError()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_GET_REQUESTERROR_OFFSET))(this);
		}

		::System::Boolean get_isResponseError()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_GET_ISRESPONSEERROR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_TOSTRING_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_START_OFFSET))(this);
		}

		::System::Void InitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_INITREQUEST_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_PAUSE_OFFSET))(this);
		}

		::System::Void UnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_UNPAUSE_OFFSET))(this);
		}

		::System::Void Cancel(::System::Boolean save)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_CANCEL_OFFSET))(this, save);
		}

		::System::Void CloseTempFile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_CLOSETEMPFILE_OFFSET))(this);
		}

		::System::Void Abort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_ABORT_OFFSET))(this);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_FINISH_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_ISVALID_OFFSET))(this);
		}

		::System::Void DisposeRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_DISPOSEREQUEST_OFFSET))(this);
		}

		::System::Void ResetRetryCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_RESETRETRYCOUNT_OFFSET))(this);
		}

		::System::Void Retry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_RETRY_OFFSET))(this);
		}

		::System::Boolean CanRetry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_CANRETRY_OFFSET))(this);
		}

		::System::Void DidDownload(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_DIDDOWNLOAD_OFFSET))(this, success);
		}

		::System::Void Write(::System::Int32 dataLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD_WRITE_OFFSET))(this, dataLength);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOAD___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
