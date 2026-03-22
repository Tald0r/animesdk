#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_FORCEBYTEBLOCKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A1ACF00)
#define MESSAGEPACK_FORMATTERS_FORCEBYTEBLOCKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A1ACEF0)
#define MESSAGEPACK_FORMATTERS_FORCEBYTEBLOCKFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1ACF10)
#define MESSAGEPACK_FORMATTERS_FORCEBYTEBLOCKFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1ACEE0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ForceByteBlockFormatter_TypeDefinitionIndex = 25431;

	class ForceByteBlockFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ForceByteBlockFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ForceByteBlockFormatter**)Il2CppClass::FromTypeDefinitionIndex(ForceByteBlockFormatter_TypeDefinitionIndex)->GetStaticField(0x1F550);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEBYTEBLOCKFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEBYTEBLOCKFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Byte value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Byte, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEBYTEBLOCKFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Byte Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Byte(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEBYTEBLOCKFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
