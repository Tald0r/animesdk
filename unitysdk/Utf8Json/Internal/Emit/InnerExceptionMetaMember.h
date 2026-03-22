#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Utf8Json/Internal/Emit/ArgumentField.h"
#include "unitysdk/Utf8Json/Internal/Emit/MetaMember.h"

namespace System { class String; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection::Emit { class ILGenerator; }

#define UTF8JSON_INTERNAL_EMIT_INNEREXCEPTIONMETAMEMBER_EMITLOADVALUE_OFFSET UNITYSDK_OFFSET(0x1AFF28E0)
#define UTF8JSON_INTERNAL_EMIT_INNEREXCEPTIONMETAMEMBER_EMITSERIALIZEDIRECTLY_OFFSET UNITYSDK_OFFSET(0x1AFF29F0)
#define UTF8JSON_INTERNAL_EMIT_INNEREXCEPTIONMETAMEMBER_EMITSTOREVALUE_OFFSET UNITYSDK_OFFSET(0x1AFF29A0)
#define UTF8JSON_INTERNAL_EMIT_INNEREXCEPTIONMETAMEMBER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFF2B50)
#define UTF8JSON_INTERNAL_EMIT_INNEREXCEPTIONMETAMEMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFF2890)

namespace Utf8Json::Internal::Emit
{
	inline static constexpr unsigned int InnerExceptionMetaMember_TypeDefinitionIndex = 81912;

	class InnerExceptionMetaMember : public ::Utf8Json::Internal::Emit::MetaMember
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_getInnerException()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(InnerExceptionMetaMember_TypeDefinitionIndex)->GetStaticField(0x475F0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_nongenericSerialize()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(InnerExceptionMetaMember_TypeDefinitionIndex)->GetStaticField(0x475F8);
		}
		::Utf8Json::Internal::Emit::ArgumentField argResolver; // 0x58
		::Utf8Json::Internal::Emit::ArgumentField argValue; // 0x68
		::Utf8Json::Internal::Emit::ArgumentField argWriter; // 0x78

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_INNEREXCEPTIONMETAMEMBER__CTOR_OFFSET))(this, name);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_INNEREXCEPTIONMETAMEMBER__CCTOR_OFFSET))();
		}

		::System::Void EmitLoadValue(::System::Reflection::Emit::ILGenerator* il)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_INNEREXCEPTIONMETAMEMBER_EMITLOADVALUE_OFFSET))(this, il);
		}

		::System::Void EmitStoreValue(::System::Reflection::Emit::ILGenerator* il)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_INNEREXCEPTIONMETAMEMBER_EMITSTOREVALUE_OFFSET))(this, il);
		}

		::System::Void EmitSerializeDirectly(::System::Reflection::Emit::ILGenerator* il)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_INNEREXCEPTIONMETAMEMBER_EMITSERIALIZEDIRECTLY_OFFSET))(this, il);
		}
	};
}
