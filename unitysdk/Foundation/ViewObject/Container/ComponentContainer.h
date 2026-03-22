#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::ViewObject { class IViewObjectComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define FOUNDATION_VIEWOBJECT_CONTAINER_COMPONENTCONTAINER_CLEAR_OFFSET UNITYSDK_OFFSET(0x5F96620)
#define FOUNDATION_VIEWOBJECT_CONTAINER_COMPONENTCONTAINER_ELEMENTVIEW_OFFSET UNITYSDK_OFFSET(0x5F966E0)
#define FOUNDATION_VIEWOBJECT_CONTAINER_COMPONENTCONTAINER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x5F96780)
#define FOUNDATION_VIEWOBJECT_CONTAINER_COMPONENTCONTAINER_REMOVECOMPONENT_OFFSET UNITYSDK_OFFSET(0x5F965A0)
#define FOUNDATION_VIEWOBJECT_CONTAINER_COMPONENTCONTAINER_UPDATEENABLESTATE_OFFSET UNITYSDK_OFFSET(0x5F96C20)
#define FOUNDATION_VIEWOBJECT_CONTAINER_COMPONENTCONTAINER_UPDATE_OFFSET UNITYSDK_OFFSET(0x5F968C0)
#define FOUNDATION_VIEWOBJECT_CONTAINER_COMPONENTCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x5F96E30)

namespace Foundation::ViewObject::Container
{
	inline static constexpr unsigned int ComponentContainer_TypeDefinitionIndex = 57685;

	class ComponentContainer : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int64, ::Foundation::ViewObject::IViewObjectComponent*>* _components; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_CONTAINER_COMPONENTCONTAINER__CTOR_OFFSET))(this);
		}

		::System::Boolean RemoveComponent(::System::Int64 componentID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_CONTAINER_COMPONENTCONTAINER_REMOVECOMPONENT_OFFSET))(this, componentID);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_CONTAINER_COMPONENTCONTAINER_CLEAR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::Foundation::ViewObject::IViewObjectComponent*>* ElementView()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Foundation::ViewObject::IViewObjectComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_CONTAINER_COMPONENTCONTAINER_ELEMENTVIEW_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Foundation::ViewObject::IViewObjectComponent*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Foundation::ViewObject::IViewObjectComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_CONTAINER_COMPONENTCONTAINER_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_CONTAINER_COMPONENTCONTAINER_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateEnableState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_CONTAINER_COMPONENTCONTAINER_UPDATEENABLESTATE_OFFSET))(this);
		}
	};
}
