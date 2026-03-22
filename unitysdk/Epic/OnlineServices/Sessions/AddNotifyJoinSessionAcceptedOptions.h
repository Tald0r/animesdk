#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_SESSIONS_ADDNOTIFYJOINSESSIONACCEPTEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x19A8AE90)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int AddNotifyJoinSessionAcceptedOptions_TypeDefinitionIndex = 31964;

	class AddNotifyJoinSessionAcceptedOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ADDNOTIFYJOINSESSIONACCEPTEDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
