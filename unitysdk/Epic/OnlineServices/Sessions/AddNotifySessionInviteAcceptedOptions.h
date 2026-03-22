#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_SESSIONS_ADDNOTIFYSESSIONINVITEACCEPTEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x18F30260)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int AddNotifySessionInviteAcceptedOptions_TypeDefinitionIndex = 31966;

	class AddNotifySessionInviteAcceptedOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ADDNOTIFYSESSIONINVITEACCEPTEDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
