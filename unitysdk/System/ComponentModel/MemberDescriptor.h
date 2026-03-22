#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Attribute; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IList; }
namespace System::ComponentModel { class AttributeCollection; }
namespace System::ComponentModel { class ISite; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_CHECKATTRIBUTESVALID_OFFSET UNITYSDK_OFFSET(0x182C2C20)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_CREATEATTRIBUTECOLLECTION_OFFSET UNITYSDK_OFFSET(0x182C3AE0)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x182C3B40)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_FILLATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x182C3DA0)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_FILTERATTRIBUTESIFNEEDED_OFFSET UNITYSDK_OFFSET(0x182C2C90)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_FINDMETHOD_1_OFFSET UNITYSDK_OFFSET(0x182C3F40)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_FINDMETHOD_OFFSET UNITYSDK_OFFSET(0x182C3ED0)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x182C3FE0)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GETINVOCATIONTARGET_OFFSET UNITYSDK_OFFSET(0x182C3FF0)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GETINVOKEE_OFFSET UNITYSDK_OFFSET(0x182C4960)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GETSITE_OFFSET UNITYSDK_OFFSET(0x182C4820)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_ATTRIBUTEARRAY_OFFSET UNITYSDK_OFFSET(0x182C2BA0)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x182C3500)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x182C3650)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x182C3730)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_DESIGNTIMEONLY_OFFSET UNITYSDK_OFFSET(0x182C38F0)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x182C3A10)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_ISBROWSABLE_OFFSET UNITYSDK_OFFSET(0x182C3820)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_NAMEHASHCODE_OFFSET UNITYSDK_OFFSET(0x182C38E0)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x182C38C0)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_SET_ATTRIBUTEARRAY_OFFSET UNITYSDK_OFFSET(0x182C3440)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x182C2340)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR__CTOR_2_OFFSET UNITYSDK_OFFSET(0x182C24A0)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR__CTOR_3_OFFSET UNITYSDK_OFFSET(0x182C25E0)
#define SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x182C2330)

namespace System::ComponentModel
{
	inline static constexpr unsigned int MemberDescriptor_TypeDefinitionIndex = 2950;

	class MemberDescriptor : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::String* description; // 0x18
		::System::ComponentModel::AttributeCollection* attributeCollection; // 0x20
		::Il2CppArray<::System::Attribute*>* originalAttributes; // 0x28
		::Il2CppArray<::System::Attribute*>* attributes; // 0x30
		::System::String* displayName; // 0x38
		::System::Object* lockCookie; // 0x40
		::System::String* category; // 0x48
		::System::Boolean attributesFiltered; // 0x50
		::System::Boolean attributesFilled; // 0x51
		::System::Int32 nameHash; // 0x54
		::System::Int32 metadataVersion; // 0x58

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR__CTOR_OFFSET))(this, name);
		}

		::System::Void _ctor_1(::System::String* name, ::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR__CTOR_1_OFFSET))(this, name, attributes);
		}

		::System::Void _ctor_2(::System::ComponentModel::MemberDescriptor* descr)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::MemberDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR__CTOR_2_OFFSET))(this, descr);
		}

		::System::Void _ctor_3(::System::ComponentModel::MemberDescriptor* oldMemberDescriptor, ::Il2CppArray<::System::Attribute*>* newAttributes)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::MemberDescriptor*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR__CTOR_3_OFFSET))(this, oldMemberDescriptor, newAttributes);
		}

		::Il2CppArray<::System::Attribute*>* get_AttributeArray()
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_ATTRIBUTEARRAY_OFFSET))(this);
		}

		::System::Void set_AttributeArray(::Il2CppArray<::System::Attribute*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_SET_ATTRIBUTEARRAY_OFFSET))(this, value);
		}

		::System::ComponentModel::AttributeCollection* get_Attributes()
		{
			return ((::System::ComponentModel::AttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::String* get_Category()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_CATEGORY_OFFSET))(this);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Boolean get_IsBrowsable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_ISBROWSABLE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_NAME_OFFSET))(this);
		}

		::System::Int32 get_NameHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_NAMEHASHCODE_OFFSET))(this);
		}

		::System::Boolean get_DesignTimeOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_DESIGNTIMEONLY_OFFSET))(this);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void CheckAttributesValid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_CHECKATTRIBUTESVALID_OFFSET))(this);
		}

		::System::ComponentModel::AttributeCollection* CreateAttributeCollection()
		{
			return ((::System::ComponentModel::AttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_CREATEATTRIBUTECOLLECTION_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_EQUALS_OFFSET))(this, obj);
		}

		::System::Void FillAttributes(::System::Collections::IList* attributeList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_FILLATTRIBUTES_OFFSET))(this, attributeList);
		}

		::System::Void FilterAttributesIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_FILTERATTRIBUTESIFNEEDED_OFFSET))(this);
		}

		static ::System::Reflection::MethodInfo* FindMethod(::System::Type* componentClass, ::System::String* name, ::Il2CppArray<::System::Type*>* args, ::System::Type* returnType)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Type*>*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_FINDMETHOD_OFFSET))(componentClass, name, args, returnType);
		}

		static ::System::Reflection::MethodInfo* FindMethod_1(::System::Type* componentClass, ::System::String* name, ::Il2CppArray<::System::Type*>* args, ::System::Type* returnType, ::System::Boolean publicOnly)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Type*>*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_FINDMETHOD_1_OFFSET))(componentClass, name, args, returnType, publicOnly);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GETHASHCODE_OFFSET))(this);
		}

		::System::Object* GetInvocationTarget(::System::Type* type, ::System::Object* instance)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GETINVOCATIONTARGET_OFFSET))(this, type, instance);
		}

		static ::System::ComponentModel::ISite* GetSite(::System::Object* component)
		{
			return ((::System::ComponentModel::ISite*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GETSITE_OFFSET))(component);
		}

		static ::System::Object* GetInvokee(::System::Type* componentClass, ::System::Object* component)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MEMBERDESCRIPTOR_GETINVOKEE_OFFSET))(componentClass, component);
		}
	};
}
