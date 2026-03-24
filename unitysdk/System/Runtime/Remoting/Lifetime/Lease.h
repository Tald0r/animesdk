#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/MarshalByRefObject.h"
#include "unitysdk/System/Runtime/Remoting/Lifetime/LeaseState.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class Object; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Queue; }
namespace System::Runtime::Remoting::Lifetime { class ISponsor; }
namespace System::Runtime::Remoting::Lifetime { class Lease_RenewalDelegate; }

#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1900BA10)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_CHECKNEXTSPONSOR_OFFSET UNITYSDK_OFFSET(0x1900C040)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_GET_CURRENTLEASETIME_OFFSET UNITYSDK_OFFSET(0x1900B9B0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x1900BA00)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_GET_RENEWONCALLTIME_OFFSET UNITYSDK_OFFSET(0x1900BB90)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_PROCESSSPONSORRESPONSE_OFFSET UNITYSDK_OFFSET(0x1900C2F0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_RENEW_OFFSET UNITYSDK_OFFSET(0x1900BCE0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_SET_INITIALLEASETIME_OFFSET UNITYSDK_OFFSET(0x1900BA20)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_SET_RENEWONCALLTIME_OFFSET UNITYSDK_OFFSET(0x1900BBA0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_SET_SPONSORSHIPTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1900BC40)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1900BDD0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_UPDATESTATE_OFFSET UNITYSDK_OFFSET(0x1900BF10)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1900B870)

namespace System::Runtime::Remoting::Lifetime
{
	inline static constexpr unsigned int Lease_TypeDefinitionIndex = 1276;

	class Lease : public ::System::MarshalByRefObject
	{
	public:
		::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate* _renewalDelegate; // 0x18
		::System::Collections::ArrayList* _sponsors; // 0x20
		::System::Collections::Queue* _renewingSponsors; // 0x28
		::System::TimeSpan _renewOnCallTime; // 0x30
		::System::Runtime::Remoting::Lifetime::LeaseState _currentState; // 0x38
		::System::TimeSpan _sponsorshipTimeout; // 0x40
		::System::DateTime _leaseExpireTime; // 0x48
		::System::TimeSpan _initialLeaseTime; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE__CTOR_OFFSET))(this);
		}

		::System::TimeSpan get_CurrentLeaseTime()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_GET_CURRENTLEASETIME_OFFSET))(this);
		}

		::System::Runtime::Remoting::Lifetime::LeaseState get_CurrentState()
		{
			return ((::System::Runtime::Remoting::Lifetime::LeaseState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_GET_CURRENTSTATE_OFFSET))(this);
		}

		::System::Void Activate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_ACTIVATE_OFFSET))(this);
		}

		::System::Void set_InitialLeaseTime(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_SET_INITIALLEASETIME_OFFSET))(this, value);
		}

		::System::TimeSpan get_RenewOnCallTime()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_GET_RENEWONCALLTIME_OFFSET))(this);
		}

		::System::Void set_RenewOnCallTime(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_SET_RENEWONCALLTIME_OFFSET))(this, value);
		}

		::System::Void set_SponsorshipTimeout(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_SET_SPONSORSHIPTIMEOUT_OFFSET))(this, value);
		}

		::System::TimeSpan Renew(::System::TimeSpan renewalTime)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_RENEW_OFFSET))(this, renewalTime);
		}

		::System::Void Unregister(::System::Runtime::Remoting::Lifetime::ISponsor* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Lifetime::ISponsor*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_UNREGISTER_OFFSET))(this, obj);
		}

		::System::Void UpdateState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_UPDATESTATE_OFFSET))(this);
		}

		::System::Void CheckNextSponsor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_CHECKNEXTSPONSOR_OFFSET))(this);
		}

		::System::Void ProcessSponsorResponse(::System::Object* state, ::System::Boolean timedOut)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASE_PROCESSSPONSORRESPONSE_OFFSET))(this, state, timedOut);
		}
	};
}
