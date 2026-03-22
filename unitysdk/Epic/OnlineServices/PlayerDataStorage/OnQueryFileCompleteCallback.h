#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::PlayerDataStorage { class QueryFileCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONQUERYFILECOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x190C0120)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONQUERYFILECOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x190C0150)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONQUERYFILECOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x190BFC20)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONQUERYFILECOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x190BFC10)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int OnQueryFileCompleteCallback_TypeDefinitionIndex = 32386;

	class OnQueryFileCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONQUERYFILECOMPLETECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Epic::OnlineServices::PlayerDataStorage::QueryFileCallbackInfo* data)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::QueryFileCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONQUERYFILECOMPLETECALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::PlayerDataStorage::QueryFileCallbackInfo* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::QueryFileCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONQUERYFILECOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONQUERYFILECOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
