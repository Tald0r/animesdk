#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackCompression.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack { class MessagePackSecurity; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Text::RegularExpressions { class Regex; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_CLONE_OFFSET UNITYSDK_OFFSET(0x19C076A0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_ALLOWASSEMBLYVERSIONMISMATCH_OFFSET UNITYSDK_OFFSET(0x19C06E90)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_COMPRESSION_OFFSET UNITYSDK_OFFSET(0x19C06E30)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_OLDSPEC_OFFSET UNITYSDK_OFFSET(0x19C06E50)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_OMITASSEMBLYVERSION_OFFSET UNITYSDK_OFFSET(0x19C06E70)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_RESOLVER_OFFSET UNITYSDK_OFFSET(0x19C06E10)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_SECURITY_OFFSET UNITYSDK_OFFSET(0x19C06EB0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_STANDARD_OFFSET UNITYSDK_OFFSET(0x19C06C40)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_LOADTYPE_OFFSET UNITYSDK_OFFSET(0x19C06ED0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_ALLOWASSEMBLYVERSIONMISMATCH_OFFSET UNITYSDK_OFFSET(0x19C06EA0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_COMPRESSION_OFFSET UNITYSDK_OFFSET(0x19C06E40)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_OLDSPEC_OFFSET UNITYSDK_OFFSET(0x19C06E60)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_OMITASSEMBLYVERSION_OFFSET UNITYSDK_OFFSET(0x19C06E80)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_RESOLVER_OFFSET UNITYSDK_OFFSET(0x19C06E20)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_SECURITY_OFFSET UNITYSDK_OFFSET(0x19C06EC0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_THROWIFDESERIALIZINGTYPEISDISALLOWED_OFFSET UNITYSDK_OFFSET(0x19C073C0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_WITHALLOWASSEMBLYVERSIONMISMATCH_OFFSET UNITYSDK_OFFSET(0x19C075D0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_WITHCOMPRESSION_OFFSET UNITYSDK_OFFSET(0x19C074F0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_WITHOLDSPEC_OFFSET UNITYSDK_OFFSET(0x19C07530)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_WITHOMITASSEMBLYVERSION_OFFSET UNITYSDK_OFFSET(0x19C07590)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_WITHRESOLVER_OFFSET UNITYSDK_OFFSET(0x19C074B0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_WITHSECURITY_OFFSET UNITYSDK_OFFSET(0x19C07610)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C07790)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19C06D40)
#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x19C06CA0)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializerOptions_TypeDefinitionIndex = 26877;

	class MessagePackSerializerOptions : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_DisallowedTypes()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializerOptions_TypeDefinitionIndex)->GetStaticField(0x1F740);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_AssemblyNameVersionSelectorRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializerOptions_TypeDefinitionIndex)->GetStaticField(0x1F748);
		}
		::MessagePack::IFormatterResolver* _Resolver_k__BackingField; // 0x10
		::System::Object* UserObject; // 0x18
		::MessagePack::MessagePackSecurity* _Security_k__BackingField; // 0x20
		::MessagePack::MessagePackCompression _Compression_k__BackingField; // 0x28
		::System::Nullable_1<::System::Boolean> _OldSpec_k__BackingField; // 0x2C
		::System::Boolean _OmitAssemblyVersion_k__BackingField; // 0x2E
		::System::Boolean _AllowAssemblyVersionMismatch_k__BackingField; // 0x2F

		::System::Void _ctor(::MessagePack::IFormatterResolver* resolver)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::IFormatterResolver*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS__CTOR_OFFSET))(this, resolver);
		}

		::System::Void _ctor_1(::MessagePack::MessagePackSerializerOptions* copyFrom)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS__CTOR_1_OFFSET))(this, copyFrom);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS__CCTOR_OFFSET))();
		}

		static ::MessagePack::MessagePackSerializerOptions* get_Standard()
		{
			return ((::MessagePack::MessagePackSerializerOptions*(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_STANDARD_OFFSET))();
		}

		::MessagePack::IFormatterResolver* get_Resolver()
		{
			return ((::MessagePack::IFormatterResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_RESOLVER_OFFSET))(this);
		}

		::System::Void set_Resolver(::MessagePack::IFormatterResolver* value)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::IFormatterResolver*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_RESOLVER_OFFSET))(this, value);
		}

		::MessagePack::MessagePackCompression get_Compression()
		{
			return ((::MessagePack::MessagePackCompression(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_COMPRESSION_OFFSET))(this);
		}

		::System::Void set_Compression(::MessagePack::MessagePackCompression value)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackCompression))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_COMPRESSION_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Boolean> get_OldSpec()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_OLDSPEC_OFFSET))(this);
		}

		::System::Void set_OldSpec(::System::Nullable_1<::System::Boolean> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_OLDSPEC_OFFSET))(this, value);
		}

		::System::Boolean get_OmitAssemblyVersion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_OMITASSEMBLYVERSION_OFFSET))(this);
		}

		::System::Void set_OmitAssemblyVersion(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_OMITASSEMBLYVERSION_OFFSET))(this, value);
		}

		::System::Boolean get_AllowAssemblyVersionMismatch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_ALLOWASSEMBLYVERSIONMISMATCH_OFFSET))(this);
		}

		::System::Void set_AllowAssemblyVersionMismatch(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_ALLOWASSEMBLYVERSIONMISMATCH_OFFSET))(this, value);
		}

		::MessagePack::MessagePackSecurity* get_Security()
		{
			return ((::MessagePack::MessagePackSecurity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_GET_SECURITY_OFFSET))(this);
		}

		::System::Void set_Security(::MessagePack::MessagePackSecurity* value)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackSecurity*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_SET_SECURITY_OFFSET))(this, value);
		}

		::System::Type* LoadType(::System::String* typeName)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_LOADTYPE_OFFSET))(this, typeName);
		}

		::System::Void ThrowIfDeserializingTypeIsDisallowed(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_THROWIFDESERIALIZINGTYPEISDISALLOWED_OFFSET))(this, type);
		}

		::MessagePack::MessagePackSerializerOptions* WithResolver(::MessagePack::IFormatterResolver* resolver)
		{
			return ((::MessagePack::MessagePackSerializerOptions*(*)(::PVOID, ::MessagePack::IFormatterResolver*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_WITHRESOLVER_OFFSET))(this, resolver);
		}

		::MessagePack::MessagePackSerializerOptions* WithCompression(::MessagePack::MessagePackCompression compression)
		{
			return ((::MessagePack::MessagePackSerializerOptions*(*)(::PVOID, ::MessagePack::MessagePackCompression))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_WITHCOMPRESSION_OFFSET))(this, compression);
		}

		::MessagePack::MessagePackSerializerOptions* WithOldSpec(::System::Nullable_1<::System::Boolean> oldSpec)
		{
			return ((::MessagePack::MessagePackSerializerOptions*(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_WITHOLDSPEC_OFFSET))(this, oldSpec);
		}

		::MessagePack::MessagePackSerializerOptions* WithOmitAssemblyVersion(::System::Boolean omitAssemblyVersion)
		{
			return ((::MessagePack::MessagePackSerializerOptions*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_WITHOMITASSEMBLYVERSION_OFFSET))(this, omitAssemblyVersion);
		}

		::MessagePack::MessagePackSerializerOptions* WithAllowAssemblyVersionMismatch(::System::Boolean allowAssemblyVersionMismatch)
		{
			return ((::MessagePack::MessagePackSerializerOptions*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_WITHALLOWASSEMBLYVERSIONMISMATCH_OFFSET))(this, allowAssemblyVersionMismatch);
		}

		::MessagePack::MessagePackSerializerOptions* WithSecurity(::MessagePack::MessagePackSecurity* security)
		{
			return ((::MessagePack::MessagePackSerializerOptions*(*)(::PVOID, ::MessagePack::MessagePackSecurity*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_WITHSECURITY_OFFSET))(this, security);
		}

		::MessagePack::MessagePackSerializerOptions* Clone()
		{
			return ((::MessagePack::MessagePackSerializerOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_CLONE_OFFSET))(this);
		}
	};
}
