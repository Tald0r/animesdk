#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_NETWORKINFORMATION_UDPSTATISTICS__CTOR_OFFSET UNITYSDK_OFFSET(0x193B0D20)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int UdpStatistics_TypeDefinitionIndex = 3748;

	class UdpStatistics : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UDPSTATISTICS__CTOR_OFFSET))(this);
		}
	};
}
