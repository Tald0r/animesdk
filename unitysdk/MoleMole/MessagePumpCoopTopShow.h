#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_MESSAGEPUMPCOOPTOPSHOW_GET_ISPENETRATE_OFFSET UNITYSDK_OFFSET(0x6EA0EF0)
#define MOLEMOLE_MESSAGEPUMPCOOPTOPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x6EA0F00)
#define MOLEMOLE_MESSAGEPUMPCOOPTOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x6EA0F40)
#define MOLEMOLE_MESSAGEPUMPCOOPTOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x6EA0F10)

namespace MoleMole
{
	inline static constexpr unsigned int MessagePumpCoopTopShow_TypeDefinitionIndex = 47572;

	class MessagePumpCoopTopShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MESSAGEPUMPCOOPTOPSHOW__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPenetrate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MESSAGEPUMPCOOPTOPSHOW_GET_ISPENETRATE_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MESSAGEPUMPCOOPTOPSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MESSAGEPUMPCOOPTOPSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
