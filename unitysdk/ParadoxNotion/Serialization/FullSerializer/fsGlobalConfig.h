#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSGLOBALCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C8B5F0)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsGlobalConfig_TypeDefinitionIndex = 25439;

	class fsGlobalConfig : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Type*>** StaticGet_IgnoreSerializeAttributes()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(fsGlobalConfig_TypeDefinitionIndex)->GetStaticField(0x1E4A0);
		}
		static ::Il2CppArray<::System::Type*>** StaticGet_SerializeAttributes()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(fsGlobalConfig_TypeDefinitionIndex)->GetStaticField(0x1E4A8);
		}
		static ::System::String** StaticGet_CustomDateTimeFormatString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(fsGlobalConfig_TypeDefinitionIndex)->GetStaticField(0x1E4B0);
		}
		static ::System::Boolean* StaticGet_SerializeEnumsAsInteger()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(fsGlobalConfig_TypeDefinitionIndex)->GetStaticField(0x4960);
		}
		static ::System::Boolean* StaticGet_Serialize64BitIntegerAsString()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(fsGlobalConfig_TypeDefinitionIndex)->GetStaticField(0x4961);
		}
		static ::System::Boolean* StaticGet_SerializeDefaultValues()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(fsGlobalConfig_TypeDefinitionIndex)->GetStaticField(0x4962);
		}
		static ::System::Boolean* StaticGet_IsCaseSensitive()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(fsGlobalConfig_TypeDefinitionIndex)->GetStaticField(0x4963);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSGLOBALCONFIG__CCTOR_OFFSET))();
		}
	};
}
