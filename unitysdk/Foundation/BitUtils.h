#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_BITUTILS_BYTESWAP64_OFFSET UNITYSDK_OFFSET(0x1B31BB10)
#define FOUNDATION_BITUTILS_COUNTLEADINGZEROS32_OFFSET UNITYSDK_OFFSET(0x1B31BC00)
#define FOUNDATION_BITUTILS_COUNTTRAILINGZEROS32_OFFSET UNITYSDK_OFFSET(0x1B31BC70)
#define FOUNDATION_BITUTILS_GETLOWERBITMASK32_OFFSET UNITYSDK_OFFSET(0x1B31BB20)
#define FOUNDATION_BITUTILS_GETPOPULATIONCOUNT32_OFFSET UNITYSDK_OFFSET(0x1B31BBC0)
#define FOUNDATION_BITUTILS_GETPOPULATIONCOUNT64_OFFSET UNITYSDK_OFFSET(0x1B31BB60)
#define FOUNDATION_BITUTILS_GETUPPERBITMASK32_OFFSET UNITYSDK_OFFSET(0x1B31BB40)
#define FOUNDATION_BITUTILS_NORMALIZE32_OFFSET UNITYSDK_OFFSET(0x1B31BCC0)

namespace Foundation
{
	inline static constexpr unsigned int BitUtils_TypeDefinitionIndex = 8868;

	class BitUtils : public ::System::Object
	{
	public:
		static ::System::UInt64 ByteSwap64(::System::UInt64 value)
		{
			return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_BITUTILS_BYTESWAP64_OFFSET))(value);
		}

		static ::System::UInt32 GetLowerBitMask32(::System::Int32 count)
		{
			return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_BITUTILS_GETLOWERBITMASK32_OFFSET))(count);
		}

		static ::System::UInt32 GetUpperBitMask32(::System::Int32 count)
		{
			return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_BITUTILS_GETUPPERBITMASK32_OFFSET))(count);
		}

		static ::System::UInt32 GetPopulationCount64(::System::UInt64 value)
		{
			return ((::System::UInt32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_BITUTILS_GETPOPULATIONCOUNT64_OFFSET))(value);
		}

		static ::System::UInt32 GetPopulationCount32(::System::UInt32 value)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_BITUTILS_GETPOPULATIONCOUNT32_OFFSET))(value);
		}

		static ::System::UInt32 CountLeadingZeros32(::System::UInt32 value)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_BITUTILS_COUNTLEADINGZEROS32_OFFSET))(value);
		}

		static ::System::UInt32 CountTrailingZeros32(::System::UInt32 value)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_BITUTILS_COUNTTRAILINGZEROS32_OFFSET))(value);
		}

		static ::System::Void Normalize32(::System::UInt32*& ptr, ::System::Int64& index)
		{
			return ((::System::Void(*)(::System::UInt32*&, ::System::Int64&))((::PBYTE)hIl2Cpp + FOUNDATION_BITUTILS_NORMALIZE32_OFFSET))(ptr, index);
		}
	};
}
