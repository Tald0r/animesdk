#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ObservableCollections { class ICollectionEventDispatcher; }

#define OBSERVABLECOLLECTIONS_SYNCHRONIZATIONCONTEXTCOLLECTIONEVENTDISPATCHER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B525CA0)
#define OBSERVABLECOLLECTIONS_SYNCHRONIZATIONCONTEXTCOLLECTIONEVENTDISPATCHER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B525CE0)
#define OBSERVABLECOLLECTIONS_SYNCHRONIZATIONCONTEXTCOLLECTIONEVENTDISPATCHER___C___CCTOR_B__7_0_OFFSET UNITYSDK_OFFSET(0x1B525CF0)

namespace ObservableCollections
{
	inline static constexpr unsigned int SynchronizationContextCollectionEventDispatcher___c_TypeDefinitionIndex = 25082;

	class SynchronizationContextCollectionEventDispatcher___c : public ::System::Object
	{
	public:
		static ::ObservableCollections::SynchronizationContextCollectionEventDispatcher___c** StaticGet___9()
		{
			return (::ObservableCollections::SynchronizationContextCollectionEventDispatcher___c**)Il2CppClass::FromTypeDefinitionIndex(SynchronizationContextCollectionEventDispatcher___c_TypeDefinitionIndex)->GetStaticField(0x1E610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_SYNCHRONIZATIONCONTEXTCOLLECTIONEVENTDISPATCHER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_SYNCHRONIZATIONCONTEXTCOLLECTIONEVENTDISPATCHER___C__CTOR_OFFSET))(this);
		}

		::ObservableCollections::ICollectionEventDispatcher* __cctor_b__7_0()
		{
			return ((::ObservableCollections::ICollectionEventDispatcher*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_SYNCHRONIZATIONCONTEXTCOLLECTIONEVENTDISPATCHER___C___CCTOR_B__7_0_OFFSET))(this);
		}
	};
}
