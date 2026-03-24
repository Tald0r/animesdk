#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }

#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_JSONREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B6D0840)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_EmitInfo_JsonReader_TypeDefinitionIndex = 83844;

	class DynamicObjectTypeBuilder_EmitInfo_JsonReader : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_ReadIsEndObjectWithSkipValueSeparator()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonReader_TypeDefinitionIndex)->GetStaticField(0x488C0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadIsNull()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonReader_TypeDefinitionIndex)->GetStaticField(0x488C8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadIsBeginObjectWithVerify()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonReader_TypeDefinitionIndex)->GetStaticField(0x488D0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_GetCurrentOffsetUnsafe()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonReader_TypeDefinitionIndex)->GetStaticField(0x488D8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadNextBlock()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonReader_TypeDefinitionIndex)->GetStaticField(0x488E0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadPropertyNameSegmentUnsafe()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonReader_TypeDefinitionIndex)->GetStaticField(0x488E8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_GetBufferUnsafe()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonReader_TypeDefinitionIndex)->GetStaticField(0x488F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_JSONREADER__CCTOR_OFFSET))();
		}
	};
}
