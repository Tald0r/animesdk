#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_FORMATTERS_NULLABLEUINT64FORMATTER_DESERIALIZEFROMPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1B06F2F0)
#define UTF8JSON_FORMATTERS_NULLABLEUINT64FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B06F120)
#define UTF8JSON_FORMATTERS_NULLABLEUINT64FORMATTER_SERIALIZETOPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1B06F1D0)
#define UTF8JSON_FORMATTERS_NULLABLEUINT64FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B06F090)
#define UTF8JSON_FORMATTERS_NULLABLEUINT64FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B06F360)
#define UTF8JSON_FORMATTERS_NULLABLEUINT64FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B06F350)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int NullableUInt64Formatter_TypeDefinitionIndex = 82013;

	class NullableUInt64Formatter : public ::System::Object
	{
	public:
		static ::Utf8Json::Formatters::NullableUInt64Formatter** StaticGet_Default()
		{
			return (::Utf8Json::Formatters::NullableUInt64Formatter**)Il2CppClass::FromTypeDefinitionIndex(NullableUInt64Formatter_TypeDefinitionIndex)->GetStaticField(0x471E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEUINT64FORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEUINT64FORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::System::Nullable_1<::System::UInt64> value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Nullable_1<::System::UInt64>, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEUINT64FORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Nullable_1<::System::UInt64> Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Nullable_1<::System::UInt64>(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEUINT64FORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}

		::System::Void SerializeToPropertyName(::Utf8Json::JsonWriter& writer, ::System::Nullable_1<::System::UInt64> value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Nullable_1<::System::UInt64>, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEUINT64FORMATTER_SERIALIZETOPROPERTYNAME_OFFSET))(this, writer, value, formatterResolver);
		}

		::System::Nullable_1<::System::UInt64> DeserializeFromPropertyName(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Nullable_1<::System::UInt64>(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_NULLABLEUINT64FORMATTER_DESERIALIZEFROMPROPERTYNAME_OFFSET))(this, reader, formatterResolver);
		}
	};
}
