#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ObservableCollections { class CollectionEventDispatcherEventArgs; }
namespace ObservableCollections { class ICollectionEventDispatcher; }
namespace System { template <typename T> class Lazy_1; }
namespace System::Threading { class SendOrPostCallback; }
namespace System::Threading { class SynchronizationContext; }

#define OBSERVABLECOLLECTIONS_SYNCHRONIZATIONCONTEXTCOLLECTIONEVENTDISPATCHER_POST_OFFSET UNITYSDK_OFFSET(0x1AF08610)
#define OBSERVABLECOLLECTIONS_SYNCHRONIZATIONCONTEXTCOLLECTIONEVENTDISPATCHER_SENDORPOSTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1AF086D0)
#define OBSERVABLECOLLECTIONS_SYNCHRONIZATIONCONTEXTCOLLECTIONEVENTDISPATCHER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF087D0)
#define OBSERVABLECOLLECTIONS_SYNCHRONIZATIONCONTEXTCOLLECTIONEVENTDISPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF08600)

namespace ObservableCollections
{
	inline static constexpr unsigned int SynchronizationContextCollectionEventDispatcher_TypeDefinitionIndex = 24309;

	class SynchronizationContextCollectionEventDispatcher : public ::System::Object
	{
	public:
		static ::System::Lazy_1<::ObservableCollections::ICollectionEventDispatcher*>** StaticGet_current()
		{
			return (::System::Lazy_1<::ObservableCollections::ICollectionEventDispatcher*>**)Il2CppClass::FromTypeDefinitionIndex(SynchronizationContextCollectionEventDispatcher_TypeDefinitionIndex)->GetStaticField(0x1DB20);
		}
		static ::System::Threading::SendOrPostCallback** StaticGet_callback()
		{
			return (::System::Threading::SendOrPostCallback**)Il2CppClass::FromTypeDefinitionIndex(SynchronizationContextCollectionEventDispatcher_TypeDefinitionIndex)->GetStaticField(0x1DB28);
		}
		static ::ObservableCollections::ICollectionEventDispatcher** StaticGet_Current()
		{
			return (::ObservableCollections::ICollectionEventDispatcher**)Il2CppClass::FromTypeDefinitionIndex(SynchronizationContextCollectionEventDispatcher_TypeDefinitionIndex)->GetStaticField(0x1DB30);
		}
		::System::Threading::SynchronizationContext* synchronizationContext; // 0x10

		::System::Void _ctor(::System::Threading::SynchronizationContext* synchronizationContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SynchronizationContext*))((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_SYNCHRONIZATIONCONTEXTCOLLECTIONEVENTDISPATCHER__CTOR_OFFSET))(this, synchronizationContext);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_SYNCHRONIZATIONCONTEXTCOLLECTIONEVENTDISPATCHER__CCTOR_OFFSET))();
		}

		::System::Void Post(::ObservableCollections::CollectionEventDispatcherEventArgs* ev)
		{
			return ((::System::Void(*)(::PVOID, ::ObservableCollections::CollectionEventDispatcherEventArgs*))((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_SYNCHRONIZATIONCONTEXTCOLLECTIONEVENTDISPATCHER_POST_OFFSET))(this, ev);
		}

		static ::System::Void SendOrPostCallback(::System::Object* state)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_SYNCHRONIZATIONCONTEXTCOLLECTIONEVENTDISPATCHER_SENDORPOSTCALLBACK_OFFSET))(state);
		}
	};
}
