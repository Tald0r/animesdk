#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class IConvertible; }
namespace System { class String; }

#define FOUNDATION_CONVERSIONX_FROMBASE64_OFFSET UNITYSDK_OFFSET(0x178383B0)
#define FOUNDATION_CONVERSIONX_TOBASE64_OFFSET UNITYSDK_OFFSET(0x17838120)
#define FOUNDATION_CONVERSIONX_TOBOOLNULL_OFFSET UNITYSDK_OFFSET(0x17836C20)
#define FOUNDATION_CONVERSIONX_TOBOOL_OFFSET UNITYSDK_OFFSET(0x17836A00)
#define FOUNDATION_CONVERSIONX_TOCHAR_OFFSET UNITYSDK_OFFSET(0x17835150)
#define FOUNDATION_CONVERSIONX_TODATETIMENULL_OFFSET UNITYSDK_OFFSET(0x17837140)
#define FOUNDATION_CONVERSIONX_TODATETIME_OFFSET UNITYSDK_OFFSET(0x17836EC0)
#define FOUNDATION_CONVERSIONX_TODECIMALNULLABLE_OFFSET UNITYSDK_OFFSET(0x17837A50)
#define FOUNDATION_CONVERSIONX_TODECIMALNULL_OFFSET UNITYSDK_OFFSET(0x17836200)
#define FOUNDATION_CONVERSIONX_TODECIMAL_1_OFFSET UNITYSDK_OFFSET(0x17835D00)
#define FOUNDATION_CONVERSIONX_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x17834EB0)
#define FOUNDATION_CONVERSIONX_TODOUBLENULLABLE_OFFSET UNITYSDK_OFFSET(0x17837770)
#define FOUNDATION_CONVERSIONX_TODOUBLE_1_OFFSET UNITYSDK_OFFSET(0x17837F50)
#define FOUNDATION_CONVERSIONX_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x17835FD0)
#define FOUNDATION_CONVERSIONX_TOFLOATNULL_OFFSET UNITYSDK_OFFSET(0x17836760)
#define FOUNDATION_CONVERSIONX_TOFLOAT_1_OFFSET UNITYSDK_OFFSET(0x17836530)
#define FOUNDATION_CONVERSIONX_TOFLOAT_OFFSET UNITYSDK_OFFSET(0x17834CF0)
#define FOUNDATION_CONVERSIONX_TOGUID_OFFSET UNITYSDK_OFFSET(0x17837420)
#define FOUNDATION_CONVERSIONX_TOINTNULLABLE_OFFSET UNITYSDK_OFFSET(0x17837B40)
#define FOUNDATION_CONVERSIONX_TOINTNULL_OFFSET UNITYSDK_OFFSET(0x17835570)
#define FOUNDATION_CONVERSIONX_TOINT_1_OFFSET UNITYSDK_OFFSET(0x17837BF0)
#define FOUNDATION_CONVERSIONX_TOINT_OFFSET UNITYSDK_OFFSET(0x17835360)
#define FOUNDATION_CONVERSIONX_TOLONGNULL_OFFSET UNITYSDK_OFFSET(0x17835A20)
#define FOUNDATION_CONVERSIONX_TOLONG_1_OFFSET UNITYSDK_OFFSET(0x17837DA0)
#define FOUNDATION_CONVERSIONX_TOLONG_OFFSET UNITYSDK_OFFSET(0x17835810)

namespace Foundation
{
	inline static constexpr unsigned int ConversionX_TypeDefinitionIndex = 8213;

	class ConversionX : public ::System::Object
	{
	public:
		static ::System::Single ToFloat(::System::Int32 value)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_CONVERSIONX_TOFLOAT_OFFSET))(value);
		}

		static ::System::Decimal ToDecimal(::System::Int32 value)
		{
			return ((::System::Decimal(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_CONVERSIONX_TODECIMAL_OFFSET))(value);
		}

		static ::System::Char ToChar(::System::Int32 value)
		{
			return ((::System::Char(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_CONVERSIONX_TOCHAR_OFFSET))(value);
		}

		static ::System::Int32 ToInt(::System::String* value, ::System::Int32 defaultValue)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_CONVERSIONX_TOINT_OFFSET))(value, defaultValue);
		}

		static ::System::Nullable_1<::System::Int32> ToIntNull(::System::String* value)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_CONVERSIONX_TOINTNULL_OFFSET))(value);
		}

		static ::System::Int64 ToLong(::System::String* value, ::System::Int64 defaultValue)
		{
			return ((::System::Int64(*)(::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + FOUNDATION_CONVERSIONX_TOLONG_OFFSET))(value, defaultValue);
		}

		static ::System::Nullable_1<::System::Int64> ToLongNull(::System::String* value)
		{
			return ((::System::Nullable_1<::System::Int64>(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_CONVERSIONX_TOLONGNULL_OFFSET))(value);
		}

		static ::System::Decimal ToDecimal_1(::System::String* value, ::System::Decimal defaultValue)
		{
			return ((::System::Decimal(*)(::System::String*, ::System::Decimal))((::PBYTE)hIl2Cpp + FOUNDATION_CONVERSIONX_TODECIMAL_1_OFFSET))(value, defaultValue);
		}

		static ::System::Double ToDouble(::System::String* value, ::System::Double defaultValue)
		{
			return ((::System::Double(*)(::System::String*, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_CONVERSIONX_TODOUBLE_OFFSET))(value, defaultValue);
		}

		static ::System::Nullable_1<::System::Decimal> ToDecimalNull(::System::String* value)
		{
			return ((::System::Nullable_1<::System::Decimal>(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_CONVERSIONX_TODECIMALNULL_OFFSET))(value);
		}

		static ::System::Single ToFloat_1(::System::String* value, ::System::Single defaultValue)
		{
			return ((::System::Single(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_CONVERSIONX_TOFLOAT_1_OFFSET))(value, defaultValue);
		}

		static ::System::Nullable_1<::System::Single> ToFloatNull(::System::String* value)
		{
			return ((::System::Nullable_1<::System::Single>(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_CONVERSIONX_TOFLOATNULL_OFFSET))(value);
		}

		static ::System::Boolean ToBool(::System::String* value, ::System::Boolean defaultValue)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_CONVERSIONX_TOBOOL_OFFSET))(value, defaultValue);
		}

		static ::System::Nullable_1<::System::Boolean> ToBoolNull(::System::String* value)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_CONVERSIONX_TOBOOLNULL_OFFSET))(value);
		}

		static ::System::DateTime ToDateTime(::System::String* value, ::System::DateTime defaultValue)
		{
			return ((::System::DateTime(*)(::System::String*, ::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_CONVERSIONX_TODATETIME_OFFSET))(value, defaultValue);
		}

		static ::System::Nullable_1<::System::DateTime> ToDateTimeNull(::System::String* value)
		{
			return ((::System::Nullable_1<::System::DateTime>(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_CONVERSIONX_TODATETIMENULL_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::Guid> ToGuid(::System::String* gString)
		{
			return ((::System::Nullable_1<::System::Guid>(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_CONVERSIONX_TOGUID_OFFSET))(gString);
		}

		static ::System::Nullable_1<::System::Double> ToDoubleNullable(::System::String* value)
		{
			return ((::System::Nullable_1<::System::Double>(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_CONVERSIONX_TODOUBLENULLABLE_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::Decimal> ToDecimalNullable(::System::String* value)
		{
			return ((::System::Nullable_1<::System::Decimal>(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_CONVERSIONX_TODECIMALNULLABLE_OFFSET))(value);
		}

		static ::System::Nullable_1<::System::Int32> ToIntNullable(::System::String* value)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_CONVERSIONX_TOINTNULLABLE_OFFSET))(value);
		}

		static ::System::Int32 ToInt_1(::System::Byte value)
		{
			return ((::System::Int32(*)(::System::Byte))((::PBYTE)hIl2Cpp + FOUNDATION_CONVERSIONX_TOINT_1_OFFSET))(value);
		}

		static ::System::Int64 ToLong_1(::System::Byte value)
		{
			return ((::System::Int64(*)(::System::Byte))((::PBYTE)hIl2Cpp + FOUNDATION_CONVERSIONX_TOLONG_1_OFFSET))(value);
		}

		static ::System::Double ToDouble_1(::System::Byte value)
		{
			return ((::System::Double(*)(::System::Byte))((::PBYTE)hIl2Cpp + FOUNDATION_CONVERSIONX_TODOUBLE_1_OFFSET))(value);
		}

		static ::System::String* ToBase64(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FOUNDATION_CONVERSIONX_TOBASE64_OFFSET))(data);
		}

		static ::Il2CppArray<::System::Byte>* FromBase64(::System::String* data)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_CONVERSIONX_FROMBASE64_OFFSET))(data);
		}
	};
}
