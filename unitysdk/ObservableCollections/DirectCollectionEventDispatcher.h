#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ObservableCollections { class CollectionEventDispatcherEventArgs; }
namespace ObservableCollections { class ICollectionEventDispatcher; }

#define OBSERVABLECOLLECTIONS_DIRECTCOLLECTIONEVENTDISPATCHER_POST_OFFSET UNITYSDK_OFFSET(0x1B525850)
#define OBSERVABLECOLLECTIONS_DIRECTCOLLECTIONEVENTDISPATCHER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B525910)
#define OBSERVABLECOLLECTIONS_DIRECTCOLLECTIONEVENTDISPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B525840)

namespace ObservableCollections
{
	inline static constexpr unsigned int DirectCollectionEventDispatcher_TypeDefinitionIndex = 25223;

	class DirectCollectionEventDispatcher : public ::System::Object
	{
	public:
		static ::ObservableCollections::ICollectionEventDispatcher** StaticGet_Instance()
		{
			return (::ObservableCollections::ICollectionEventDispatcher**)Il2CppClass::FromTypeDefinitionIndex(DirectCollectionEventDispatcher_TypeDefinitionIndex)->GetStaticField(0x1E5E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_DIRECTCOLLECTIONEVENTDISPATCHER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_DIRECTCOLLECTIONEVENTDISPATCHER__CCTOR_OFFSET))();
		}

		::System::Void Post(::ObservableCollections::CollectionEventDispatcherEventArgs* ev)
		{
			return ((::System::Void(*)(::PVOID, ::ObservableCollections::CollectionEventDispatcherEventArgs*))((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_DIRECTCOLLECTIONEVENTDISPATCHER_POST_OFFSET))(this, ev);
		}
	};
}
