#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace System::Text { class StringBuilder; }

#define MESSAGEPACK_FORMATTERS_STRINGBUILDERFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x19C03F30)
#define MESSAGEPACK_FORMATTERS_STRINGBUILDERFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x19C03EF0)
#define MESSAGEPACK_FORMATTERS_STRINGBUILDERFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C03FC0)
#define MESSAGEPACK_FORMATTERS_STRINGBUILDERFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19C03EE0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int StringBuilderFormatter_TypeDefinitionIndex = 25589;

	class StringBuilderFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Text::StringBuilder*>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Text::StringBuilder*>**)Il2CppClass::FromTypeDefinitionIndex(StringBuilderFormatter_TypeDefinitionIndex)->GetStaticField(0x1F080);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_STRINGBUILDERFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_STRINGBUILDERFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Text::StringBuilder* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Text::StringBuilder*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_STRINGBUILDERFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Text::StringBuilder* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_STRINGBUILDERFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
