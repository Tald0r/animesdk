#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlyMemory_1.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_BYTEREADONLYMEMORYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x19C7C880)
#define MESSAGEPACK_FORMATTERS_BYTEREADONLYMEMORYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x19C7C840)
#define MESSAGEPACK_FORMATTERS_BYTEREADONLYMEMORYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C7C8F0)
#define MESSAGEPACK_FORMATTERS_BYTEREADONLYMEMORYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19C7C830)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ByteReadOnlyMemoryFormatter_TypeDefinitionIndex = 25422;

	class ByteReadOnlyMemoryFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ByteReadOnlyMemoryFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ByteReadOnlyMemoryFormatter**)Il2CppClass::FromTypeDefinitionIndex(ByteReadOnlyMemoryFormatter_TypeDefinitionIndex)->GetStaticField(0x1F140);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEREADONLYMEMORYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEREADONLYMEMORYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlyMemory_1<::System::Byte> value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::ReadOnlyMemory_1<::System::Byte>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEREADONLYMEMORYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::ReadOnlyMemory_1<::System::Byte> Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::ReadOnlyMemory_1<::System::Byte>(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEREADONLYMEMORYFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
