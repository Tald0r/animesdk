#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Utf8Json/JsonToken.h"

namespace System { class String; }
namespace Utf8Json { class JsonParsingException; }

#define UTF8JSON_JSONREADER_ADVANCEOFFSET_OFFSET UNITYSDK_OFFSET(0x95A740)
#define UTF8JSON_JSONREADER_CREATEPARSINGEXCEPTIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x964EC0)
#define UTF8JSON_JSONREADER_CREATEPARSINGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x964EB0)
#define UTF8JSON_JSONREADER_GETBUFFERUNSAFE_OFFSET UNITYSDK_OFFSET(0x21C7C0)
#define UTF8JSON_JSONREADER_GETCODEPOINT_OFFSET UNITYSDK_OFFSET(0x1ADC3070)
#define UTF8JSON_JSONREADER_GETCURRENTJSONTOKEN_OFFSET UNITYSDK_OFFSET(0x964F00)
#define UTF8JSON_JSONREADER_GETCURRENTOFFSETUNSAFE_OFFSET UNITYSDK_OFFSET(0x2C6230)
#define UTF8JSON_JSONREADER_GET_ISINRANGE_OFFSET UNITYSDK_OFFSET(0x964ED0)
#define UTF8JSON_JSONREADER_ISWORDBREAK_OFFSET UNITYSDK_OFFSET(0x1ADC35C0)
#define UTF8JSON_JSONREADER_READBOOLEAN_OFFSET UNITYSDK_OFFSET(0x965570)
#define UTF8JSON_JSONREADER_READBYTE_OFFSET UNITYSDK_OFFSET(0x9656E0)
#define UTF8JSON_JSONREADER_READCOMMENT_OFFSET UNITYSDK_OFFSET(0x1ADC1F70)
#define UTF8JSON_JSONREADER_READDOUBLE_OFFSET UNITYSDK_OFFSET(0x9657A0)
#define UTF8JSON_JSONREADER_READINT16_OFFSET UNITYSDK_OFFSET(0x965640)
#define UTF8JSON_JSONREADER_READINT32_OFFSET UNITYSDK_OFFSET(0x965650)
#define UTF8JSON_JSONREADER_READINT64_OFFSET UNITYSDK_OFFSET(0x965660)
#define UTF8JSON_JSONREADER_READISBEGINARRAYWITHVERIFY_OFFSET UNITYSDK_OFFSET(0x964F90)
#define UTF8JSON_JSONREADER_READISBEGINARRAY_OFFSET UNITYSDK_OFFSET(0x964F30)
#define UTF8JSON_JSONREADER_READISBEGINOBJECTWITHVERIFY_OFFSET UNITYSDK_OFFSET(0x965100)
#define UTF8JSON_JSONREADER_READISBEGINOBJECT_OFFSET UNITYSDK_OFFSET(0x9650A0)
#define UTF8JSON_JSONREADER_READISENDARRAYWITHSKIPVALUESEPARATOR_OFFSET UNITYSDK_OFFSET(0x965010)
#define UTF8JSON_JSONREADER_READISENDARRAYWITHVERIFY_OFFSET UNITYSDK_OFFSET(0x965000)
#define UTF8JSON_JSONREADER_READISENDARRAY_OFFSET UNITYSDK_OFFSET(0x964FA0)
#define UTF8JSON_JSONREADER_READISENDOBJECTWITHSKIPVALUESEPARATOR_OFFSET UNITYSDK_OFFSET(0x965180)
#define UTF8JSON_JSONREADER_READISENDOBJECTWITHVERIFY_OFFSET UNITYSDK_OFFSET(0x965170)
#define UTF8JSON_JSONREADER_READISENDOBJECT_OFFSET UNITYSDK_OFFSET(0x965110)
#define UTF8JSON_JSONREADER_READISINARRAY_OFFSET UNITYSDK_OFFSET(0x965090)
#define UTF8JSON_JSONREADER_READISINOBJECT_OFFSET UNITYSDK_OFFSET(0x965200)
#define UTF8JSON_JSONREADER_READISNAMESEPARATORWITHVERIFY_OFFSET UNITYSDK_OFFSET(0x9652E0)
#define UTF8JSON_JSONREADER_READISNAMESEPARATOR_OFFSET UNITYSDK_OFFSET(0x965280)
#define UTF8JSON_JSONREADER_READISNULL_OFFSET UNITYSDK_OFFSET(0x964F20)
#define UTF8JSON_JSONREADER_READISVALUESEPARATORWITHVERIFY_OFFSET UNITYSDK_OFFSET(0x965270)
#define UTF8JSON_JSONREADER_READISVALUESEPARATOR_OFFSET UNITYSDK_OFFSET(0x965210)
#define UTF8JSON_JSONREADER_READNEXTBLOCKCORE_OFFSET UNITYSDK_OFFSET(0x9655D0)
#define UTF8JSON_JSONREADER_READNEXTBLOCKSEGMENT_OFFSET UNITYSDK_OFFSET(0x9655E0)
#define UTF8JSON_JSONREADER_READNEXTBLOCK_OFFSET UNITYSDK_OFFSET(0x9655C0)
#define UTF8JSON_JSONREADER_READNEXTCORE_OFFSET UNITYSDK_OFFSET(0x9655B0)
#define UTF8JSON_JSONREADER_READNEXT_OFFSET UNITYSDK_OFFSET(0x965580)
#define UTF8JSON_JSONREADER_READNUMBERSEGMENT_OFFSET UNITYSDK_OFFSET(0x9657B0)
#define UTF8JSON_JSONREADER_READPROPERTYNAMESEGMENTRAW_OFFSET UNITYSDK_OFFSET(0x965530)
#define UTF8JSON_JSONREADER_READPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x965410)
#define UTF8JSON_JSONREADER_READSBYTE_OFFSET UNITYSDK_OFFSET(0x965630)
#define UTF8JSON_JSONREADER_READSINGLE_OFFSET UNITYSDK_OFFSET(0x965790)
#define UTF8JSON_JSONREADER_READSTRINGSEGMENTCORE_OFFSET UNITYSDK_OFFSET(0x9652F0)
#define UTF8JSON_JSONREADER_READSTRINGSEGMENTRAW_OFFSET UNITYSDK_OFFSET(0x965510)
#define UTF8JSON_JSONREADER_READSTRINGSEGMENTUNSAFE_OFFSET UNITYSDK_OFFSET(0x965300)
#define UTF8JSON_JSONREADER_READSTRING_OFFSET UNITYSDK_OFFSET(0x965320)
#define UTF8JSON_JSONREADER_READUINT16_OFFSET UNITYSDK_OFFSET(0x9656F0)
#define UTF8JSON_JSONREADER_READUINT32_OFFSET UNITYSDK_OFFSET(0x965700)
#define UTF8JSON_JSONREADER_READUINT64_OFFSET UNITYSDK_OFFSET(0x965710)
#define UTF8JSON_JSONREADER_SKIPWHITESPACE_OFFSET UNITYSDK_OFFSET(0x964F10)
#define UTF8JSON_JSONREADER_TONUMBER_OFFSET UNITYSDK_OFFSET(0x1ADC3100)
#define UTF8JSON_JSONREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADC4020)
#define UTF8JSON_JSONREADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x964EA0)
#define UTF8JSON_JSONREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x964E90)

namespace Utf8Json
{
	inline static constexpr unsigned int JsonReader_TypeDefinitionIndex = 81735;

	struct alignas(8) JsonReader
	{
		static ::System::ArraySegment_1<::System::Byte>* StaticGet_nullTokenSegment()
		{
			return (::System::ArraySegment_1<::System::Byte>*)Il2CppClass::FromTypeDefinitionIndex(JsonReader_TypeDefinitionIndex)->GetStaticField(0x46A50);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_bom()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(JsonReader_TypeDefinitionIndex)->GetStaticField(0x46A60);
		}
		::Il2CppArray<::System::Byte>* bytes; // 0x10
		::System::Int32 offset; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER__CTOR_OFFSET))(this, bytes);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER__CTOR_1_OFFSET))(this, bytes, offset);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER__CCTOR_OFFSET))();
		}

		::Utf8Json::JsonParsingException* CreateParsingException(::System::String* expected)
		{
			return ((::Utf8Json::JsonParsingException*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_CREATEPARSINGEXCEPTION_OFFSET))(this, expected);
		}

		::Utf8Json::JsonParsingException* CreateParsingExceptionMessage(::System::String* message)
		{
			return ((::Utf8Json::JsonParsingException*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_CREATEPARSINGEXCEPTIONMESSAGE_OFFSET))(this, message);
		}

		::System::Boolean get_IsInRange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_GET_ISINRANGE_OFFSET))(this);
		}

		::System::Void AdvanceOffset(::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_ADVANCEOFFSET_OFFSET))(this, offset);
		}

		::Il2CppArray<::System::Byte>* GetBufferUnsafe()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_GETBUFFERUNSAFE_OFFSET))(this);
		}

		::System::Int32 GetCurrentOffsetUnsafe()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_GETCURRENTOFFSETUNSAFE_OFFSET))(this);
		}

		::Utf8Json::JsonToken GetCurrentJsonToken()
		{
			return ((::Utf8Json::JsonToken(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_GETCURRENTJSONTOKEN_OFFSET))(this);
		}

		::System::Void SkipWhiteSpace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_SKIPWHITESPACE_OFFSET))(this);
		}

		::System::Boolean ReadIsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISNULL_OFFSET))(this);
		}

		::System::Boolean ReadIsBeginArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISBEGINARRAY_OFFSET))(this);
		}

		::System::Void ReadIsBeginArrayWithVerify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISBEGINARRAYWITHVERIFY_OFFSET))(this);
		}

		::System::Boolean ReadIsEndArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISENDARRAY_OFFSET))(this);
		}

		::System::Void ReadIsEndArrayWithVerify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISENDARRAYWITHVERIFY_OFFSET))(this);
		}

		::System::Boolean ReadIsEndArrayWithSkipValueSeparator(::System::Int32& count)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISENDARRAYWITHSKIPVALUESEPARATOR_OFFSET))(this, count);
		}

		::System::Boolean ReadIsInArray(::System::Int32& count)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISINARRAY_OFFSET))(this, count);
		}

		::System::Boolean ReadIsBeginObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISBEGINOBJECT_OFFSET))(this);
		}

		::System::Void ReadIsBeginObjectWithVerify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISBEGINOBJECTWITHVERIFY_OFFSET))(this);
		}

		::System::Boolean ReadIsEndObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISENDOBJECT_OFFSET))(this);
		}

		::System::Void ReadIsEndObjectWithVerify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISENDOBJECTWITHVERIFY_OFFSET))(this);
		}

		::System::Boolean ReadIsEndObjectWithSkipValueSeparator(::System::Int32& count)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISENDOBJECTWITHSKIPVALUESEPARATOR_OFFSET))(this, count);
		}

		::System::Boolean ReadIsInObject(::System::Int32& count)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISINOBJECT_OFFSET))(this, count);
		}

		::System::Boolean ReadIsValueSeparator()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISVALUESEPARATOR_OFFSET))(this);
		}

		::System::Void ReadIsValueSeparatorWithVerify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISVALUESEPARATORWITHVERIFY_OFFSET))(this);
		}

		::System::Boolean ReadIsNameSeparator()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISNAMESEPARATOR_OFFSET))(this);
		}

		::System::Void ReadIsNameSeparatorWithVerify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READISNAMESEPARATORWITHVERIFY_OFFSET))(this);
		}

		::System::Void ReadStringSegmentCore(::Il2CppArray<::System::Byte>*& resultBytes, ::System::Int32& resultOffset, ::System::Int32& resultLength)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READSTRINGSEGMENTCORE_OFFSET))(this, resultBytes, resultOffset, resultLength);
		}

		static ::System::Int32 GetCodePoint(::System::Char a, ::System::Char b, ::System::Char c, ::System::Char d)
		{
			return ((::System::Int32(*)(::System::Char, ::System::Char, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_GETCODEPOINT_OFFSET))(a, b, c, d);
		}

		static ::System::Int32 ToNumber(::System::Char x)
		{
			return ((::System::Int32(*)(::System::Char))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_TONUMBER_OFFSET))(x);
		}

		::System::ArraySegment_1<::System::Byte> ReadStringSegmentUnsafe()
		{
			return ((::System::ArraySegment_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READSTRINGSEGMENTUNSAFE_OFFSET))(this);
		}

		::System::String* ReadString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READSTRING_OFFSET))(this);
		}

		::System::String* ReadPropertyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READPROPERTYNAME_OFFSET))(this);
		}

		::System::ArraySegment_1<::System::Byte> ReadStringSegmentRaw()
		{
			return ((::System::ArraySegment_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READSTRINGSEGMENTRAW_OFFSET))(this);
		}

		::System::ArraySegment_1<::System::Byte> ReadPropertyNameSegmentRaw()
		{
			return ((::System::ArraySegment_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READPROPERTYNAMESEGMENTRAW_OFFSET))(this);
		}

		::System::Boolean ReadBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READBOOLEAN_OFFSET))(this);
		}

		static ::System::Boolean IsWordBreak(::System::Byte c)
		{
			return ((::System::Boolean(*)(::System::Byte))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_ISWORDBREAK_OFFSET))(c);
		}

		::System::Void ReadNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READNEXT_OFFSET))(this);
		}

		::System::Void ReadNextCore(::Utf8Json::JsonToken token)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonToken))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READNEXTCORE_OFFSET))(this, token);
		}

		::System::Void ReadNextBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READNEXTBLOCK_OFFSET))(this);
		}

		::System::Void ReadNextBlockCore(::System::Int32 stack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READNEXTBLOCKCORE_OFFSET))(this, stack);
		}

		::System::ArraySegment_1<::System::Byte> ReadNextBlockSegment()
		{
			return ((::System::ArraySegment_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READNEXTBLOCKSEGMENT_OFFSET))(this);
		}

		::System::SByte ReadSByte()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READSBYTE_OFFSET))(this);
		}

		::System::Int16 ReadInt16()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READINT16_OFFSET))(this);
		}

		::System::Int32 ReadInt32()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READINT32_OFFSET))(this);
		}

		::System::Int64 ReadInt64()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READINT64_OFFSET))(this);
		}

		::System::Byte ReadByte()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READBYTE_OFFSET))(this);
		}

		::System::UInt16 ReadUInt16()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READUINT16_OFFSET))(this);
		}

		::System::UInt32 ReadUInt32()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READUINT32_OFFSET))(this);
		}

		::System::UInt64 ReadUInt64()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READUINT64_OFFSET))(this);
		}

		::System::Single ReadSingle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READSINGLE_OFFSET))(this);
		}

		::System::Double ReadDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READDOUBLE_OFFSET))(this);
		}

		::System::ArraySegment_1<::System::Byte> ReadNumberSegment()
		{
			return ((::System::ArraySegment_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READNUMBERSEGMENT_OFFSET))(this);
		}

		static ::System::Int32 ReadComment(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_READCOMMENT_OFFSET))(bytes, offset);
		}
	};
}
