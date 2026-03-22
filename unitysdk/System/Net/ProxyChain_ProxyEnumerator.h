#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Uri; }
namespace System::Net { class ProxyChain; }

#define SYSTEM_NET_PROXYCHAIN_PROXYENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18247A40)
#define SYSTEM_NET_PROXYCHAIN_PROXYENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x182476D0)
#define SYSTEM_NET_PROXYCHAIN_PROXYENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18247780)
#define SYSTEM_NET_PROXYCHAIN_PROXYENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18247A30)
#define SYSTEM_NET_PROXYCHAIN_PROXYENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18247770)
#define SYSTEM_NET_PROXYCHAIN_PROXYENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18247540)

namespace System::Net
{
	inline static constexpr unsigned int ProxyChain_ProxyEnumerator_TypeDefinitionIndex = 3387;

	class ProxyChain_ProxyEnumerator : public ::System::Object
	{
	public:
		::System::Net::ProxyChain* m_Chain; // 0x10
		::System::Int32 m_CurrentIndex; // 0x18
		::System::Boolean m_Finished; // 0x1C
		::System::Boolean m_TriedDirect; // 0x1D

		::System::Void _ctor(::System::Net::ProxyChain* chain)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::ProxyChain*))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROXYCHAIN_PROXYENUMERATOR__CTOR_OFFSET))(this, chain);
		}

		::System::Uri* get_Current()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROXYCHAIN_PROXYENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROXYCHAIN_PROXYENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROXYCHAIN_PROXYENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROXYCHAIN_PROXYENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROXYCHAIN_PROXYENUMERATOR_DISPOSE_OFFSET))(this);
		}
	};
}
