#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_MESSAGEPUMPCOOPTOPSHOW_GET_ISPENETRATE_OFFSET UNITYSDK_OFFSET(0x6E34910)
#define MOLEMOLE_MESSAGEPUMPCOOPTOPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x6E34920)
#define MOLEMOLE_MESSAGEPUMPCOOPTOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x6E34960)
#define MOLEMOLE_MESSAGEPUMPCOOPTOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x6E34930)

namespace MoleMole
{
	inline static constexpr unsigned int MessagePumpCoopTopShow_TypeDefinitionIndex = 76079;

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
