#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_RESOLVERS_NATIVEDATETIMERESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A725840)
#define MESSAGEPACK_RESOLVERS_NATIVEDATETIMERESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A725930)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int NativeDateTimeResolver_TypeDefinitionIndex = 27213;

	class NativeDateTimeResolver : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Options()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(NativeDateTimeResolver_TypeDefinitionIndex)->GetStaticField(0x1F580);
		}
		static ::MessagePack::Resolvers::NativeDateTimeResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::NativeDateTimeResolver**)Il2CppClass::FromTypeDefinitionIndex(NativeDateTimeResolver_TypeDefinitionIndex)->GetStaticField(0x1F588);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_NATIVEDATETIMERESOLVER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_NATIVEDATETIMERESOLVER__CTOR_OFFSET))(this);
		}
	};
}
