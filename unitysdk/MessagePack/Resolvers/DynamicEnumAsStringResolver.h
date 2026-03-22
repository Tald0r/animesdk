#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_RESOLVERS_DYNAMICENUMASSTRINGRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A17C610)
#define MESSAGEPACK_RESOLVERS_DYNAMICENUMASSTRINGRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A17C700)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicEnumAsStringResolver_TypeDefinitionIndex = 25532;

	class DynamicEnumAsStringResolver : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Options()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(DynamicEnumAsStringResolver_TypeDefinitionIndex)->GetStaticField(0x1EA30);
		}
		static ::MessagePack::Resolvers::DynamicEnumAsStringResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::DynamicEnumAsStringResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicEnumAsStringResolver_TypeDefinitionIndex)->GetStaticField(0x1EA38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICENUMASSTRINGRESOLVER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICENUMASSTRINGRESOLVER__CTOR_OFFSET))(this);
		}
	};
}
