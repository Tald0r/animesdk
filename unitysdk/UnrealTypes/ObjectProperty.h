#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/ObjectPropertyBase_1.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class IFieldVariant; }
namespace UnrealTypes { class Object; }
namespace UnrealTypes { class ObjectPropertyParams; }

#define UNREALTYPES_OBJECTPROPERTY_GETOBJECTPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1A20C5C0)
#define UNREALTYPES_OBJECTPROPERTY_SETOBJECTPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1A20C610)
#define UNREALTYPES_OBJECTPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A202B50)

namespace UnrealTypes
{
	inline static constexpr unsigned int ObjectProperty_TypeDefinitionIndex = 24774;

	class ObjectProperty : public ::UnrealTypes::ObjectPropertyBase_1<::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>>
	{
	public:
		::UnrealTypes::Class* PropertyClass; // 0x58

		::System::Void _ctor(::UnrealTypes::IFieldVariant* owner, ::UnrealTypes::ObjectPropertyParams* prop)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::UnrealTypes::ObjectPropertyParams*))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECTPROPERTY__CTOR_OFFSET))(this, owner, prop);
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> GetObjectPropertyValue(::System::Void* propertyValueAddress)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECTPROPERTY_GETOBJECTPROPERTYVALUE_OFFSET))(this, propertyValueAddress);
		}

		::System::Void SetObjectPropertyValue(::System::Void* propertyValueAddress, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECTPROPERTY_SETOBJECTPROPERTYVALUE_OFFSET))(this, propertyValueAddress, value);
		}
	};
}
