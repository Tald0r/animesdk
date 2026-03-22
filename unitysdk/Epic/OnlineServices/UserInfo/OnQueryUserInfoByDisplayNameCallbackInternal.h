#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYDISPLAYNAMECALLBACKINTERNAL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18DD66B0)
#define EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYDISPLAYNAMECALLBACKINTERNAL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18DD6700)
#define EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYDISPLAYNAMECALLBACKINTERNAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x18DD63B0)
#define EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYDISPLAYNAMECALLBACKINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD63A0)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int OnQueryUserInfoByDisplayNameCallbackInternal_TypeDefinitionIndex = 31834;

	class OnQueryUserInfoByDisplayNameCallbackInternal : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYDISPLAYNAMECALLBACKINTERNAL__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr data)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYDISPLAYNAMECALLBACKINTERNAL_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYDISPLAYNAMECALLBACKINTERNAL_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_ONQUERYUSERINFOBYDISPLAYNAMECALLBACKINTERNAL_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
