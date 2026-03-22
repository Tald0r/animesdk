#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_LOCALIZABLEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x197E3630)
#define SYSTEM_COMPONENTMODEL_LOCALIZABLEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x197E3690)
#define SYSTEM_COMPONENTMODEL_LOCALIZABLEATTRIBUTE_GET_ISLOCALIZABLE_OFFSET UNITYSDK_OFFSET(0x197E3580)
#define SYSTEM_COMPONENTMODEL_LOCALIZABLEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x197E3590)
#define SYSTEM_COMPONENTMODEL_LOCALIZABLEATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x197E36A0)
#define SYSTEM_COMPONENTMODEL_LOCALIZABLEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x197E3570)

namespace System::ComponentModel
{
	inline static constexpr unsigned int LocalizableAttribute_TypeDefinitionIndex = 2942;

	class LocalizableAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::LocalizableAttribute** StaticGet_Yes()
		{
			return (::System::ComponentModel::LocalizableAttribute**)Il2CppClass::FromTypeDefinitionIndex(LocalizableAttribute_TypeDefinitionIndex)->GetStaticField(0x26B0);
		}
		static ::System::ComponentModel::LocalizableAttribute** StaticGet_No()
		{
			return (::System::ComponentModel::LocalizableAttribute**)Il2CppClass::FromTypeDefinitionIndex(LocalizableAttribute_TypeDefinitionIndex)->GetStaticField(0x26B8);
		}
		static ::System::ComponentModel::LocalizableAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::LocalizableAttribute**)Il2CppClass::FromTypeDefinitionIndex(LocalizableAttribute_TypeDefinitionIndex)->GetStaticField(0x26C0);
		}
		::System::Boolean isLocalizable; // 0x10

		::System::Void _ctor(::System::Boolean isLocalizable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LOCALIZABLEATTRIBUTE__CTOR_OFFSET))(this, isLocalizable);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LOCALIZABLEATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsLocalizable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LOCALIZABLEATTRIBUTE_GET_ISLOCALIZABLE_OFFSET))(this);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LOCALIZABLEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LOCALIZABLEATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LOCALIZABLEATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}
	};
}
