#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Authentication/ExtendedProtection/ChannelBindingKind.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Security::Authentication::ExtendedProtection { class ChannelBinding; }
namespace System::Security::Authentication::ExtendedProtection { class TokenBinding; }

#define SYSTEM_NET_TRANSPORTCONTEXT_GETTLSTOKENBINDINGS_OFFSET UNITYSDK_OFFSET(0x188F95D0)
#define SYSTEM_NET_TRANSPORTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x188F9620)

namespace System::Net
{
	inline static constexpr unsigned int TransportContext_TypeDefinitionIndex = 3334;

	class TransportContext : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TRANSPORTCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Security::Authentication::ExtendedProtection::TokenBinding*>* GetTlsTokenBindings()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Security::Authentication::ExtendedProtection::TokenBinding*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TRANSPORTCONTEXT_GETTLSTOKENBINDINGS_OFFSET))(this);
		}
	};
}
