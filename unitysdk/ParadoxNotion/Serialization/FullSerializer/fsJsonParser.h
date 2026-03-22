#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsResult.h"
#include "unitysdk/System/Object.h"

namespace ParadoxNotion::Serialization::FullSerializer { class fsData; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_CHARACTER_1_OFFSET UNITYSDK_OFFSET(0x19E0E830)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_CHARACTER_OFFSET UNITYSDK_OFFSET(0x19E0E7D0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_HASVALUE_1_OFFSET UNITYSDK_OFFSET(0x19E0E7A0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_HASVALUE_OFFSET UNITYSDK_OFFSET(0x19E0E770)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_ISHEX_OFFSET UNITYSDK_OFFSET(0x19E0EB90)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_ISSEPARATOR_OFFSET UNITYSDK_OFFSET(0x19E0F600)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_MAKEFAILURE_OFFSET UNITYSDK_OFFSET(0x19E0E530)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_PARSESINGLECHAR_OFFSET UNITYSDK_OFFSET(0x19E0EBB0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_PARSEUNICODE_OFFSET UNITYSDK_OFFSET(0x19E0EBF0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_PARSE_1_OFFSET UNITYSDK_OFFSET(0x19E10780)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x19E10580)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_RUNPARSE_OFFSET UNITYSDK_OFFSET(0x19E0FDA0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_SKIPSPACE_OFFSET UNITYSDK_OFFSET(0x19E0E890)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_TRYMOVENEXT_OFFSET UNITYSDK_OFFSET(0x19E0E740)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_TRYPARSEARRAY_OFFSET UNITYSDK_OFFSET(0x19E0FB50)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_TRYPARSEEXACT_OFFSET UNITYSDK_OFFSET(0x19E0F290)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_TRYPARSEFALSE_OFFSET UNITYSDK_OFFSET(0x19E0F4A0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_TRYPARSENULL_OFFSET UNITYSDK_OFFSET(0x19E0F560)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_TRYPARSENUMBER_OFFSET UNITYSDK_OFFSET(0x19E0F640)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_TRYPARSEOBJECT_OFFSET UNITYSDK_OFFSET(0x19E10160)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_TRYPARSESTRING_OFFSET UNITYSDK_OFFSET(0x19E0F910)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_TRYPARSETRUE_OFFSET UNITYSDK_OFFSET(0x19E0F3E0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_TRYUNESCAPECHAR_OFFSET UNITYSDK_OFFSET(0x19E0ED10)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x19E106F0)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsJsonParser_TypeDefinitionIndex = 25950;

	class fsJsonParser : public ::System::Object
	{
	public:
		::System::Text::StringBuilder* _cachedStringBuilder; // 0x10
		::System::String* _input; // 0x18
		::System::Int32 _start; // 0x20

		::System::Void _ctor(::System::String* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER__CTOR_OFFSET))(this, input);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult MakeFailure(::System::String* message)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_MAKEFAILURE_OFFSET))(this, message);
		}

		::System::Boolean TryMoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_TRYMOVENEXT_OFFSET))(this);
		}

		::System::Boolean HasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_HASVALUE_OFFSET))(this);
		}

		::System::Boolean HasValue_1(::System::Int32 offset)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_HASVALUE_1_OFFSET))(this, offset);
		}

		::System::Char Character()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_CHARACTER_OFFSET))(this);
		}

		::System::Char Character_1(::System::Int32 offset)
		{
			return ((::System::Char(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_CHARACTER_1_OFFSET))(this, offset);
		}

		::System::Void SkipSpace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_SKIPSPACE_OFFSET))(this);
		}

		::System::Boolean IsHex(::System::Char c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_ISHEX_OFFSET))(this, c);
		}

		::System::UInt32 ParseSingleChar(::System::Char c1, ::System::UInt32 multipliyer)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Char, ::System::UInt32))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_PARSESINGLECHAR_OFFSET))(this, c1, multipliyer);
		}

		::System::UInt32 ParseUnicode(::System::Char c1, ::System::Char c2, ::System::Char c3, ::System::Char c4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Char, ::System::Char, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_PARSEUNICODE_OFFSET))(this, c1, c2, c3, c4);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult TryUnescapeChar(::System::Char& escaped)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::System::Char&))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_TRYUNESCAPECHAR_OFFSET))(this, escaped);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult TryParseExact(::System::String* content)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_TRYPARSEEXACT_OFFSET))(this, content);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult TryParseTrue(::ParadoxNotion::Serialization::FullSerializer::fsData*& data)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*&))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_TRYPARSETRUE_OFFSET))(this, data);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult TryParseFalse(::ParadoxNotion::Serialization::FullSerializer::fsData*& data)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*&))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_TRYPARSEFALSE_OFFSET))(this, data);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult TryParseNull(::ParadoxNotion::Serialization::FullSerializer::fsData*& data)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*&))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_TRYPARSENULL_OFFSET))(this, data);
		}

		::System::Boolean IsSeparator(::System::Char c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_ISSEPARATOR_OFFSET))(this, c);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult TryParseNumber(::ParadoxNotion::Serialization::FullSerializer::fsData*& data)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*&))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_TRYPARSENUMBER_OFFSET))(this, data);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult TryParseString(::System::String*& str)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_TRYPARSESTRING_OFFSET))(this, str);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult TryParseArray(::ParadoxNotion::Serialization::FullSerializer::fsData*& arr)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*&))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_TRYPARSEARRAY_OFFSET))(this, arr);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult TryParseObject(::ParadoxNotion::Serialization::FullSerializer::fsData*& obj)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*&))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_TRYPARSEOBJECT_OFFSET))(this, obj);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult RunParse(::ParadoxNotion::Serialization::FullSerializer::fsData*& data)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*&))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_RUNPARSE_OFFSET))(this, data);
		}

		static ::ParadoxNotion::Serialization::FullSerializer::fsResult Parse(::System::String* input, ::ParadoxNotion::Serialization::FullSerializer::fsData*& data)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*&))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_PARSE_OFFSET))(input, data);
		}

		static ::ParadoxNotion::Serialization::FullSerializer::fsData* Parse_1(::System::String* input)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsData*(*)(::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSJSONPARSER_PARSE_1_OFFSET))(input);
		}
	};
}
