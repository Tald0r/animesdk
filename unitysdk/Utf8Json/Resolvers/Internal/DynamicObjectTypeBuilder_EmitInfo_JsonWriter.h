#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }

#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_JSONWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF209C0)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex = 83842;

	class DynamicObjectTypeBuilder_EmitInfo_JsonWriter : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_WriteRaw()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x48860);
		}
		static ::System::Reflection::MethodInfo** StaticGet_WriteEndObject()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x48868);
		}
		static ::System::Reflection::MethodInfo** StaticGet_WriteValueSeparator()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x48870);
		}
		static ::System::Reflection::MethodInfo** StaticGet_GetEncodedPropertyNameWithoutQuotation()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x48878);
		}
		static ::System::Reflection::MethodInfo** StaticGet_GetEncodedPropertyNameWithBeginObject()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x48880);
		}
		static ::System::Reflection::MethodInfo** StaticGet_GetEncodedPropertyNameWithPrefixValueSeparator()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x48888);
		}
		static ::System::Reflection::MethodInfo** StaticGet_GetEncodedPropertyName()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x48890);
		}
		static ::System::Reflection::MethodInfo** StaticGet_WriteNull()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x48898);
		}
		static ::System::Reflection::MethodInfo** StaticGet_WriteBeginObject()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x488A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_JSONWRITER__CCTOR_OFFSET))();
		}
	};
}
