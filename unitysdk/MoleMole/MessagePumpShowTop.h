#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_MESSAGEPUMPSHOWTOP_GET_ISPENETRATE_OFFSET UNITYSDK_OFFSET(0x7F15170)
#define MOLEMOLE_MESSAGEPUMPSHOWTOP_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x7F15180)
#define MOLEMOLE_MESSAGEPUMPSHOWTOP_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x7F151A0)
#define MOLEMOLE_MESSAGEPUMPSHOWTOP__CTOR_OFFSET UNITYSDK_OFFSET(0x7F15190)

namespace MoleMole
{
	inline static constexpr unsigned int MessagePumpShowTop_TypeDefinitionIndex = 75047;

	class MessagePumpShowTop : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MESSAGEPUMPSHOWTOP__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPenetrate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MESSAGEPUMPSHOWTOP_GET_ISPENETRATE_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MESSAGEPUMPSHOWTOP_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MESSAGEPUMPSHOWTOP_ONPROCESS_OFFSET))(this);
		}
	};
}
