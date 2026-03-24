#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class PropertyInfo; }
namespace System::Reflection::Emit { class ILGenerator; }

#define UTF8JSON_INTERNAL_EMIT_METAMEMBER_EMITLOADVALUE_OFFSET UNITYSDK_OFFSET(0x1B66A290)
#define UTF8JSON_INTERNAL_EMIT_METAMEMBER_EMITSTOREVALUE_OFFSET UNITYSDK_OFFSET(0x1B66A320)
#define UTF8JSON_INTERNAL_EMIT_METAMEMBER_GETSHOULDSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B66A040)
#define UTF8JSON_INTERNAL_EMIT_METAMEMBER_GET_FIELDINFO_OFFSET UNITYSDK_OFFSET(0x1B669F00)
#define UTF8JSON_INTERNAL_EMIT_METAMEMBER_GET_ISFIELD_OFFSET UNITYSDK_OFFSET(0x1B669E90)
#define UTF8JSON_INTERNAL_EMIT_METAMEMBER_GET_ISPROPERTY_OFFSET UNITYSDK_OFFSET(0x1B669E80)
#define UTF8JSON_INTERNAL_EMIT_METAMEMBER_GET_ISREADABLE_OFFSET UNITYSDK_OFFSET(0x1B669EC0)
#define UTF8JSON_INTERNAL_EMIT_METAMEMBER_GET_ISWRITABLE_OFFSET UNITYSDK_OFFSET(0x1B669EA0)
#define UTF8JSON_INTERNAL_EMIT_METAMEMBER_GET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1B669E60)
#define UTF8JSON_INTERNAL_EMIT_METAMEMBER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B669E40)
#define UTF8JSON_INTERNAL_EMIT_METAMEMBER_GET_PROPERTYINFO_OFFSET UNITYSDK_OFFSET(0x1B669F20)
#define UTF8JSON_INTERNAL_EMIT_METAMEMBER_GET_SHOULDSERIALIZEMETHODINFO_OFFSET UNITYSDK_OFFSET(0x1B669F40)
#define UTF8JSON_INTERNAL_EMIT_METAMEMBER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B669EE0)
#define UTF8JSON_INTERNAL_EMIT_METAMEMBER_SET_FIELDINFO_OFFSET UNITYSDK_OFFSET(0x1B669F10)
#define UTF8JSON_INTERNAL_EMIT_METAMEMBER_SET_ISREADABLE_OFFSET UNITYSDK_OFFSET(0x1B669ED0)
#define UTF8JSON_INTERNAL_EMIT_METAMEMBER_SET_ISWRITABLE_OFFSET UNITYSDK_OFFSET(0x1B669EB0)
#define UTF8JSON_INTERNAL_EMIT_METAMEMBER_SET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1B669E70)
#define UTF8JSON_INTERNAL_EMIT_METAMEMBER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1B669E50)
#define UTF8JSON_INTERNAL_EMIT_METAMEMBER_SET_PROPERTYINFO_OFFSET UNITYSDK_OFFSET(0x1B669F30)
#define UTF8JSON_INTERNAL_EMIT_METAMEMBER_SET_SHOULDSERIALIZEMETHODINFO_OFFSET UNITYSDK_OFFSET(0x1B669F50)
#define UTF8JSON_INTERNAL_EMIT_METAMEMBER_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B669EF0)
#define UTF8JSON_INTERNAL_EMIT_METAMEMBER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B669F80)
#define UTF8JSON_INTERNAL_EMIT_METAMEMBER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B66A150)
#define UTF8JSON_INTERNAL_EMIT_METAMEMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B669F60)

namespace Utf8Json::Internal::Emit
{
	inline static constexpr unsigned int MetaMember_TypeDefinitionIndex = 83950;

	class MetaMember : public ::System::Object
	{
	public:
		::System::Reflection::FieldInfo* _FieldInfo_k__BackingField; // 0x10
		::System::Type* _Type_k__BackingField; // 0x18
		::System::Reflection::PropertyInfo* _PropertyInfo_k__BackingField; // 0x20
		::System::String* _MemberName_k__BackingField; // 0x28
		::System::Reflection::MethodInfo* _ShouldSerializeMethodInfo_k__BackingField; // 0x30
		::System::Reflection::MethodInfo* setMethod; // 0x38
		::System::String* _Name_k__BackingField; // 0x40
		::System::Reflection::MethodInfo* getMethod; // 0x48
		::System::Boolean _IsWritable_k__BackingField; // 0x50
		::System::Boolean _IsReadable_k__BackingField; // 0x51

		::System::Void _ctor(::System::Type* type, ::System::String* name, ::System::String* memberName, ::System::Boolean isWritable, ::System::Boolean isReadable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METAMEMBER__CTOR_OFFSET))(this, type, name, memberName, isWritable, isReadable);
		}

		::System::Void _ctor_1(::System::Reflection::FieldInfo* info, ::System::String* name, ::System::Boolean allowPrivate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::FieldInfo*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METAMEMBER__CTOR_1_OFFSET))(this, info, name, allowPrivate);
		}

		::System::Void _ctor_2(::System::Reflection::PropertyInfo* info, ::System::String* name, ::System::Boolean allowPrivate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::PropertyInfo*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METAMEMBER__CTOR_2_OFFSET))(this, info, name, allowPrivate);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METAMEMBER_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METAMEMBER_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_MemberName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METAMEMBER_GET_MEMBERNAME_OFFSET))(this);
		}

		::System::Void set_MemberName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METAMEMBER_SET_MEMBERNAME_OFFSET))(this, value);
		}

		::System::Boolean get_IsProperty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METAMEMBER_GET_ISPROPERTY_OFFSET))(this);
		}

		::System::Boolean get_IsField()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METAMEMBER_GET_ISFIELD_OFFSET))(this);
		}

		::System::Boolean get_IsWritable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METAMEMBER_GET_ISWRITABLE_OFFSET))(this);
		}

		::System::Void set_IsWritable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METAMEMBER_SET_ISWRITABLE_OFFSET))(this, value);
		}

		::System::Boolean get_IsReadable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METAMEMBER_GET_ISREADABLE_OFFSET))(this);
		}

		::System::Void set_IsReadable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METAMEMBER_SET_ISREADABLE_OFFSET))(this, value);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METAMEMBER_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METAMEMBER_SET_TYPE_OFFSET))(this, value);
		}

		::System::Reflection::FieldInfo* get_FieldInfo()
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METAMEMBER_GET_FIELDINFO_OFFSET))(this);
		}

		::System::Void set_FieldInfo(::System::Reflection::FieldInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METAMEMBER_SET_FIELDINFO_OFFSET))(this, value);
		}

		::System::Reflection::PropertyInfo* get_PropertyInfo()
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METAMEMBER_GET_PROPERTYINFO_OFFSET))(this);
		}

		::System::Void set_PropertyInfo(::System::Reflection::PropertyInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METAMEMBER_SET_PROPERTYINFO_OFFSET))(this, value);
		}

		::System::Reflection::MethodInfo* get_ShouldSerializeMethodInfo()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METAMEMBER_GET_SHOULDSERIALIZEMETHODINFO_OFFSET))(this);
		}

		::System::Void set_ShouldSerializeMethodInfo(::System::Reflection::MethodInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METAMEMBER_SET_SHOULDSERIALIZEMETHODINFO_OFFSET))(this, value);
		}

		static ::System::Reflection::MethodInfo* GetShouldSerialize(::System::Reflection::MemberInfo* info)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METAMEMBER_GETSHOULDSERIALIZE_OFFSET))(info);
		}

		::System::Void EmitLoadValue(::System::Reflection::Emit::ILGenerator* il)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METAMEMBER_EMITLOADVALUE_OFFSET))(this, il);
		}

		::System::Void EmitStoreValue(::System::Reflection::Emit::ILGenerator* il)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METAMEMBER_EMITSTOREVALUE_OFFSET))(this, il);
		}
	};
}
