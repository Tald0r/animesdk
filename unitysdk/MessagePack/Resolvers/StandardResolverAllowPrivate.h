#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_RESOLVERS_STANDARDRESOLVERALLOWPRIVATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A223070)
#define MESSAGEPACK_RESOLVERS_STANDARDRESOLVERALLOWPRIVATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2231E0)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int StandardResolverAllowPrivate_TypeDefinitionIndex = 26988;

	class StandardResolverAllowPrivate : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::StandardResolverAllowPrivate** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::StandardResolverAllowPrivate**)Il2CppClass::FromTypeDefinitionIndex(StandardResolverAllowPrivate_TypeDefinitionIndex)->GetStaticField(0x200E0);
		}
		static ::Il2CppArray<::MessagePack::IFormatterResolver*>** StaticGet_Resolvers()
		{
			return (::Il2CppArray<::MessagePack::IFormatterResolver*>**)Il2CppClass::FromTypeDefinitionIndex(StandardResolverAllowPrivate_TypeDefinitionIndex)->GetStaticField(0x200E8);
		}
		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Options()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(StandardResolverAllowPrivate_TypeDefinitionIndex)->GetStaticField(0x200F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_STANDARDRESOLVERALLOWPRIVATE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_STANDARDRESOLVERALLOWPRIVATE__CTOR_OFFSET))(this);
		}
	};
}
