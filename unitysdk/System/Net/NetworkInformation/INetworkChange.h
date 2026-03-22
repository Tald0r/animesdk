#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::NetworkInformation { class NetworkAddressChangedEventHandler; }
namespace System::Net::NetworkInformation { class NetworkAvailabilityChangedEventHandler; }

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int INetworkChange_TypeDefinitionIndex = 3799;

	class INetworkChange
	{
	public:
	};
}
