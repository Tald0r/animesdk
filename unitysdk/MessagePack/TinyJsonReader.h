#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/TinyJsonToken.h"
#include "unitysdk/MessagePack/ValueType.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class TextReader; }
namespace System::Text { class StringBuilder; }

#define MESSAGEPACK_TINYJSONREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A488800)
#define MESSAGEPACK_TINYJSONREADER_GET_DECIMALVALUE_OFFSET UNITYSDK_OFFSET(0x1A487FA0)
#define MESSAGEPACK_TINYJSONREADER_GET_DOUBLEVALUE_OFFSET UNITYSDK_OFFSET(0x1A487F40)
#define MESSAGEPACK_TINYJSONREADER_GET_LONGVALUE_OFFSET UNITYSDK_OFFSET(0x1A487F60)
#define MESSAGEPACK_TINYJSONREADER_GET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x1A487FC0)
#define MESSAGEPACK_TINYJSONREADER_GET_TOKENTYPE_OFFSET UNITYSDK_OFFSET(0x1A487F00)
#define MESSAGEPACK_TINYJSONREADER_GET_ULONGVALUE_OFFSET UNITYSDK_OFFSET(0x1A487F80)
#define MESSAGEPACK_TINYJSONREADER_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1A487F20)
#define MESSAGEPACK_TINYJSONREADER_ISWORDBREAK_OFFSET UNITYSDK_OFFSET(0x1A488910)
#define MESSAGEPACK_TINYJSONREADER_READCHAR_OFFSET UNITYSDK_OFFSET(0x1A4888E0)
#define MESSAGEPACK_TINYJSONREADER_READNEXTTOKEN_OFFSET UNITYSDK_OFFSET(0x1A488020)
#define MESSAGEPACK_TINYJSONREADER_READNUMBER_OFFSET UNITYSDK_OFFSET(0x1A488960)
#define MESSAGEPACK_TINYJSONREADER_READSTRING_OFFSET UNITYSDK_OFFSET(0x1A488CA0)
#define MESSAGEPACK_TINYJSONREADER_READVALUE_OFFSET UNITYSDK_OFFSET(0x1A488280)
#define MESSAGEPACK_TINYJSONREADER_READ_OFFSET UNITYSDK_OFFSET(0x1A487FF0)
#define MESSAGEPACK_TINYJSONREADER_SET_DECIMALVALUE_OFFSET UNITYSDK_OFFSET(0x1A487FB0)
#define MESSAGEPACK_TINYJSONREADER_SET_DOUBLEVALUE_OFFSET UNITYSDK_OFFSET(0x1A487F50)
#define MESSAGEPACK_TINYJSONREADER_SET_LONGVALUE_OFFSET UNITYSDK_OFFSET(0x1A487F70)
#define MESSAGEPACK_TINYJSONREADER_SET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x1A487FD0)
#define MESSAGEPACK_TINYJSONREADER_SET_TOKENTYPE_OFFSET UNITYSDK_OFFSET(0x1A487F10)
#define MESSAGEPACK_TINYJSONREADER_SET_ULONGVALUE_OFFSET UNITYSDK_OFFSET(0x1A487F90)
#define MESSAGEPACK_TINYJSONREADER_SET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1A487F30)
#define MESSAGEPACK_TINYJSONREADER_SKIPWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1A488870)
#define MESSAGEPACK_TINYJSONREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A487FE0)

namespace MessagePack
{
	inline static constexpr unsigned int TinyJsonReader_TypeDefinitionIndex = 26382;

	class TinyJsonReader : public ::System::Object
	{
	public:
		::System::Text::StringBuilder* reusableBuilder; // 0x10
		::System::String* _StringValue_k__BackingField; // 0x18
		::System::IO::TextReader* reader; // 0x20
		::MessagePack::TinyJsonToken _TokenType_k__BackingField; // 0x28
		::System::Decimal _DecimalValue_k__BackingField; // 0x2C
		::MessagePack::ValueType _ValueType_k__BackingField; // 0x3C
		::System::Boolean disposeInnerReader; // 0x3D
		::System::UInt64 _ULongValue_k__BackingField; // 0x40
		::System::Int64 _LongValue_k__BackingField; // 0x48
		::System::Double _DoubleValue_k__BackingField; // 0x50

		::System::Void _ctor(::System::IO::TextReader* reader, ::System::Boolean disposeInnerReader)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextReader*, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_TINYJSONREADER__CTOR_OFFSET))(this, reader, disposeInnerReader);
		}

		::MessagePack::TinyJsonToken get_TokenType()
		{
			return ((::MessagePack::TinyJsonToken(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_TINYJSONREADER_GET_TOKENTYPE_OFFSET))(this);
		}

		::System::Void set_TokenType(::MessagePack::TinyJsonToken value)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::TinyJsonToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_TINYJSONREADER_SET_TOKENTYPE_OFFSET))(this, value);
		}

		::MessagePack::ValueType get_ValueType()
		{
			return ((::MessagePack::ValueType(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_TINYJSONREADER_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Void set_ValueType(::MessagePack::ValueType value)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::ValueType))((::PBYTE)hIl2Cpp + MESSAGEPACK_TINYJSONREADER_SET_VALUETYPE_OFFSET))(this, value);
		}

		::System::Double get_DoubleValue()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_TINYJSONREADER_GET_DOUBLEVALUE_OFFSET))(this);
		}

		::System::Void set_DoubleValue(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MESSAGEPACK_TINYJSONREADER_SET_DOUBLEVALUE_OFFSET))(this, value);
		}

		::System::Int64 get_LongValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_TINYJSONREADER_GET_LONGVALUE_OFFSET))(this);
		}

		::System::Void set_LongValue(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MESSAGEPACK_TINYJSONREADER_SET_LONGVALUE_OFFSET))(this, value);
		}

		::System::UInt64 get_ULongValue()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_TINYJSONREADER_GET_ULONGVALUE_OFFSET))(this);
		}

		::System::Void set_ULongValue(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MESSAGEPACK_TINYJSONREADER_SET_ULONGVALUE_OFFSET))(this, value);
		}

		::System::Decimal get_DecimalValue()
		{
			return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_TINYJSONREADER_GET_DECIMALVALUE_OFFSET))(this);
		}

		::System::Void set_DecimalValue(::System::Decimal value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + MESSAGEPACK_TINYJSONREADER_SET_DECIMALVALUE_OFFSET))(this, value);
		}

		::System::String* get_StringValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_TINYJSONREADER_GET_STRINGVALUE_OFFSET))(this);
		}

		::System::Void set_StringValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_TINYJSONREADER_SET_STRINGVALUE_OFFSET))(this, value);
		}

		::System::Boolean Read()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_TINYJSONREADER_READ_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_TINYJSONREADER_DISPOSE_OFFSET))(this);
		}

		::System::Void SkipWhiteSpace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_TINYJSONREADER_SKIPWHITESPACE_OFFSET))(this);
		}

		::System::Char ReadChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_TINYJSONREADER_READCHAR_OFFSET))(this);
		}

		static ::System::Boolean IsWordBreak(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + MESSAGEPACK_TINYJSONREADER_ISWORDBREAK_OFFSET))(c);
		}

		::System::Void ReadNextToken()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_TINYJSONREADER_READNEXTTOKEN_OFFSET))(this);
		}

		::System::Void ReadValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_TINYJSONREADER_READVALUE_OFFSET))(this);
		}

		::System::Void ReadNumber()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_TINYJSONREADER_READNUMBER_OFFSET))(this);
		}

		::System::Void ReadString()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_TINYJSONREADER_READSTRING_OFFSET))(this);
		}
	};
}
