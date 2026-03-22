#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

#define MESSAGEPACK_INTERNAL_DATETIMECONSTANTS__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E95130)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DateTimeConstants_TypeDefinitionIndex = 25378;

	class DateTimeConstants : public ::System::Object
	{
	public:
		static ::System::DateTime* StaticGet_UnixEpoch()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(DateTimeConstants_TypeDefinitionIndex)->GetStaticField(0x49C0);
		}
		// static const ::System::Int64 BclSecondsAtUnixEpoch = 0xE7791F700; // 0x0
		// static const ::System::Int32 NanosecondsPerTick = 0x64; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DATETIMECONSTANTS__CCTOR_OFFSET))();
		}
	};
}
