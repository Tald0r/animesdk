#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

#define MESSAGEPACK_SAFEBITCONVERTER_TOINT64_OFFSET UNITYSDK_OFFSET(0x19263340)
#define MESSAGEPACK_SAFEBITCONVERTER_TOUINT16_OFFSET UNITYSDK_OFFSET(0x19263400)
#define MESSAGEPACK_SAFEBITCONVERTER_TOUINT32_OFFSET UNITYSDK_OFFSET(0x19263460)
#define MESSAGEPACK_SAFEBITCONVERTER_TOUINT64_OFFSET UNITYSDK_OFFSET(0x192633A0)

namespace MessagePack
{
	inline static constexpr unsigned int SafeBitConverter_TypeDefinitionIndex = 25974;

	class SafeBitConverter : public ::System::Object
	{
	public:
		static ::System::Int64 ToInt64(::System::ReadOnlySpan_1<::System::Byte> value)
		{
			return ((::System::Int64(*)(::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_SAFEBITCONVERTER_TOINT64_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64(::System::ReadOnlySpan_1<::System::Byte> value)
		{
			return ((::System::UInt64(*)(::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_SAFEBITCONVERTER_TOUINT64_OFFSET))(value);
		}

		static ::System::UInt16 ToUInt16(::System::ReadOnlySpan_1<::System::Byte> value)
		{
			return ((::System::UInt16(*)(::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_SAFEBITCONVERTER_TOUINT16_OFFSET))(value);
		}

		static ::System::UInt32 ToUInt32(::System::ReadOnlySpan_1<::System::Byte> value)
		{
			return ((::System::UInt32(*)(::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_SAFEBITCONVERTER_TOUINT32_OFFSET))(value);
		}
	};
}
