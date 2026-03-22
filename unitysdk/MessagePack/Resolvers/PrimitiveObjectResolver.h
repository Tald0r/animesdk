#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_RESOLVERS_PRIMITIVEOBJECTRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F57580)
#define MESSAGEPACK_RESOLVERS_PRIMITIVEOBJECTRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x19F57670)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int PrimitiveObjectResolver_TypeDefinitionIndex = 26545;

	class PrimitiveObjectResolver : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Options()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(PrimitiveObjectResolver_TypeDefinitionIndex)->GetStaticField(0x1F8A0);
		}
		static ::MessagePack::Resolvers::PrimitiveObjectResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::PrimitiveObjectResolver**)Il2CppClass::FromTypeDefinitionIndex(PrimitiveObjectResolver_TypeDefinitionIndex)->GetStaticField(0x1F8A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_PRIMITIVEOBJECTRESOLVER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_PRIMITIVEOBJECTRESOLVER__CTOR_OFFSET))(this);
		}
	};
}
