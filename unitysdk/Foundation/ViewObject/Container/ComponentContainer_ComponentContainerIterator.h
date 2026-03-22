#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::ViewObject { class IViewObjectComponent; }
namespace Foundation::ViewObject::Container { class ComponentContainer; }
namespace System { class Object; }

#define FOUNDATION_VIEWOBJECT_CONTAINER_COMPONENTCONTAINER_COMPONENTCONTAINERITERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2D2930)
#define FOUNDATION_VIEWOBJECT_CONTAINER_COMPONENTCONTAINER_COMPONENTCONTAINERITERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2D2820)
#define FOUNDATION_VIEWOBJECT_CONTAINER_COMPONENTCONTAINER_COMPONENTCONTAINERITERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2D2770)
#define FOUNDATION_VIEWOBJECT_CONTAINER_COMPONENTCONTAINER_COMPONENTCONTAINERITERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x2D2810)
#define FOUNDATION_VIEWOBJECT_CONTAINER_COMPONENTCONTAINER_COMPONENTCONTAINERITERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2D2890)
#define FOUNDATION_VIEWOBJECT_CONTAINER_COMPONENTCONTAINER_COMPONENTCONTAINERITERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x2D26E0)

namespace Foundation::ViewObject::Container
{
	inline static constexpr unsigned int ComponentContainer_ComponentContainerIterator_TypeDefinitionIndex = 57686;

	struct alignas(8) ComponentContainer_ComponentContainerIterator
	{
		::System::Collections::Generic::Dictionary_2_Enumerator<::System::Int64, ::Foundation::ViewObject::IViewObjectComponent*> _enumerator; // 0x10

		::System::Void _ctor(::Foundation::ViewObject::Container::ComponentContainer* container)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Container::ComponentContainer*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_CONTAINER_COMPONENTCONTAINER_COMPONENTCONTAINERITERATOR__CTOR_OFFSET))(this, container);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_CONTAINER_COMPONENTCONTAINER_COMPONENTCONTAINERITERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_CONTAINER_COMPONENTCONTAINER_COMPONENTCONTAINERITERATOR_RESET_OFFSET))(this);
		}

		::Foundation::ViewObject::IViewObjectComponent* get_Current()
		{
			return ((::Foundation::ViewObject::IViewObjectComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_CONTAINER_COMPONENTCONTAINER_COMPONENTCONTAINERITERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_CONTAINER_COMPONENTCONTAINER_COMPONENTCONTAINERITERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_CONTAINER_COMPONENTCONTAINER_COMPONENTCONTAINERITERATOR_DISPOSE_OFFSET))(this);
		}
	};
}
