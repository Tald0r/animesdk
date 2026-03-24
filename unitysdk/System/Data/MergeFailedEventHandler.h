#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Data { class MergeFailedEventArgs; }

#define SYSTEM_DATA_MERGEFAILEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1ABA29A0)
#define SYSTEM_DATA_MERGEFAILEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1ABA29E0)
#define SYSTEM_DATA_MERGEFAILEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ABA2420)
#define SYSTEM_DATA_MERGEFAILEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABA2400)

namespace System::Data
{
	inline static constexpr unsigned int MergeFailedEventHandler_TypeDefinitionIndex = 36495;

	class MergeFailedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGEFAILEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::Data::MergeFailedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Data::MergeFailedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGEFAILEDEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::Data::MergeFailedEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Data::MergeFailedEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGEFAILEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGEFAILEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
