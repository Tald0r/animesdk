#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_EXITPERFORM_EXITPERFORMEVENT_GET_CUREVENTNAME_OFFSET UNITYSDK_OFFSET(0xD7F5800)
#define MOLEMOLE_EXITPERFORM_EXITPERFORMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xD7F58D0)

namespace MoleMole::ExitPerform
{
	inline static constexpr unsigned int ExitPerformEvent_TypeDefinitionIndex = 49702;

	class ExitPerformEvent : public ::System::Object
	{
	public:
		::MoleMole::ExitPerform::ExitPerformEvent* parent; // 0x10
		::System::String* eventName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXITPERFORM_EXITPERFORMEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_CurEventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXITPERFORM_EXITPERFORMEVENT_GET_CUREVENTNAME_OFFSET))(this);
		}
	};
}
