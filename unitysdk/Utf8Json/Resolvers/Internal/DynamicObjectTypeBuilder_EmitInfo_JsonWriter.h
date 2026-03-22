#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }

#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_JSONWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A93FD80)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex = 81801;

	class DynamicObjectTypeBuilder_EmitInfo_JsonWriter : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_GetEncodedPropertyNameWithPrefixValueSeparator()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x46E50);
		}
		static ::System::Reflection::MethodInfo** StaticGet_WriteNull()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x46E58);
		}
		static ::System::Reflection::MethodInfo** StaticGet_GetEncodedPropertyNameWithoutQuotation()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x46E60);
		}
		static ::System::Reflection::MethodInfo** StaticGet_WriteEndObject()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x46E68);
		}
		static ::System::Reflection::MethodInfo** StaticGet_GetEncodedPropertyName()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x46E70);
		}
		static ::System::Reflection::MethodInfo** StaticGet_WriteValueSeparator()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x46E78);
		}
		static ::System::Reflection::MethodInfo** StaticGet_GetEncodedPropertyNameWithBeginObject()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x46E80);
		}
		static ::System::Reflection::MethodInfo** StaticGet_WriteRaw()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x46E88);
		}
		static ::System::Reflection::MethodInfo** StaticGet_WriteBeginObject()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x46E90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_JSONWRITER__CCTOR_OFFSET))();
		}
	};
}
