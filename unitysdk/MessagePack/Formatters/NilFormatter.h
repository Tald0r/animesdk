#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/MessagePack/Nil.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_FORMATTERS_NILFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A1C2860)
#define MESSAGEPACK_FORMATTERS_NILFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A1C2850)
#define MESSAGEPACK_FORMATTERS_NILFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1C2870)
#define MESSAGEPACK_FORMATTERS_NILFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1C2840)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NilFormatter_TypeDefinitionIndex = 26077;

	class NilFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::MessagePack::Nil>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::MessagePack::Nil>**)Il2CppClass::FromTypeDefinitionIndex(NilFormatter_TypeDefinitionIndex)->GetStaticField(0x1FCA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NILFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NILFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::MessagePack::Nil value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::MessagePack::Nil, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NILFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::MessagePack::Nil Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::MessagePack::Nil(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NILFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
