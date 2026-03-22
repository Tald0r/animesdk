#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::ComponentModel { class IExtenderProvider; }
namespace System::ComponentModel { class PropertyDescriptor; }

#define SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_CREATE_OFFSET UNITYSDK_OFFSET(0x18FDE570)
#define SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x18FDE620)
#define SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18FDE710)
#define SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_GET_EXTENDERPROPERTY_OFFSET UNITYSDK_OFFSET(0x18FDE5F0)
#define SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_GET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x18FDE600)
#define SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_GET_RECEIVERTYPE_OFFSET UNITYSDK_OFFSET(0x18FDE610)
#define SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18FDE720)
#define SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18FDE5E0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ExtenderProvidedPropertyAttribute_TypeDefinitionIndex = 2884;

	class ExtenderProvidedPropertyAttribute : public ::System::Attribute
	{
	public:
		::System::Type* receiverType; // 0x10
		::System::ComponentModel::IExtenderProvider* provider; // 0x18
		::System::ComponentModel::PropertyDescriptor* extenderProperty; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE__CTOR_OFFSET))(this);
		}

		static ::System::ComponentModel::ExtenderProvidedPropertyAttribute* Create(::System::ComponentModel::PropertyDescriptor* extenderProperty, ::System::Type* receiverType, ::System::ComponentModel::IExtenderProvider* provider)
		{
			return ((::System::ComponentModel::ExtenderProvidedPropertyAttribute*(*)(::System::ComponentModel::PropertyDescriptor*, ::System::Type*, ::System::ComponentModel::IExtenderProvider*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_CREATE_OFFSET))(extenderProperty, receiverType, provider);
		}

		::System::ComponentModel::PropertyDescriptor* get_ExtenderProperty()
		{
			return ((::System::ComponentModel::PropertyDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_GET_EXTENDERPROPERTY_OFFSET))(this);
		}

		::System::ComponentModel::IExtenderProvider* get_Provider()
		{
			return ((::System::ComponentModel::IExtenderProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_GET_PROVIDER_OFFSET))(this);
		}

		::System::Type* get_ReceiverType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_GET_RECEIVERTYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDERPROVIDEDPROPERTYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}
	};
}
