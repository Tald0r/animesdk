#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::ComponentModel { class IComponent; }
namespace System::ComponentModel { class IContainer; }
namespace System::ComponentModel { class NestedContainer; }

#define SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_SITE_GETSERVICE_OFFSET UNITYSDK_OFFSET(0x182C4A50)
#define SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_SITE_GET_COMPONENT_OFFSET UNITYSDK_OFFSET(0x182C4A30)
#define SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_SITE_GET_CONTAINER_OFFSET UNITYSDK_OFFSET(0x182C4A40)
#define SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_SITE_GET_DESIGNMODE_OFFSET UNITYSDK_OFFSET(0x182C4B00)
#define SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_SITE_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x182C4D10)
#define SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_SITE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x182C4DA0)
#define SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_SITE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x182C4DB0)
#define SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_SITE__CTOR_OFFSET UNITYSDK_OFFSET(0x182C4A20)

namespace System::ComponentModel
{
	inline static constexpr unsigned int NestedContainer_Site_TypeDefinitionIndex = 2954;

	class NestedContainer_Site : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::ComponentModel::NestedContainer* container; // 0x18
		::System::ComponentModel::IComponent* component; // 0x20

		::System::Void _ctor(::System::ComponentModel::IComponent* component, ::System::ComponentModel::NestedContainer* container, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::IComponent*, ::System::ComponentModel::NestedContainer*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_SITE__CTOR_OFFSET))(this, component, container, name);
		}

		::System::ComponentModel::IComponent* get_Component()
		{
			return ((::System::ComponentModel::IComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_SITE_GET_COMPONENT_OFFSET))(this);
		}

		::System::ComponentModel::IContainer* get_Container()
		{
			return ((::System::ComponentModel::IContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_SITE_GET_CONTAINER_OFFSET))(this);
		}

		::System::Object* GetService(::System::Type* service)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_SITE_GETSERVICE_OFFSET))(this, service);
		}

		::System::Boolean get_DesignMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_SITE_GET_DESIGNMODE_OFFSET))(this);
		}

		::System::String* get_FullName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_SITE_GET_FULLNAME_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_SITE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_SITE_SET_NAME_OFFSET))(this, value);
		}
	};
}
