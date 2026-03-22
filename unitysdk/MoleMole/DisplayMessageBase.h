#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205E43D40B9E7AEA.h"
#include "unitysdk/MoleMole/MessageTaskBase.h"

#define MOLEMOLE_DISPLAYMESSAGEBASE_GET_ISBLOCKCENTER_OFFSET UNITYSDK_OFFSET(0x8F612F0)
#define MOLEMOLE_DISPLAYMESSAGEBASE_GET_ISPENETRATE_OFFSET UNITYSDK_OFFSET(0x8F61300)
#define MOLEMOLE_DISPLAYMESSAGEBASE_GET_ISTRIGGERINLOADING_OFFSET UNITYSDK_OFFSET(0x8F61380)
#define MOLEMOLE_DISPLAYMESSAGEBASE_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x8F612E0)
#define MOLEMOLE_DISPLAYMESSAGEBASE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x8F612D0)
#define MOLEMOLE_DISPLAYMESSAGEBASE_SETPRIORITYWHENSORT_OFFSET UNITYSDK_OFFSET(0x8F61400)
#define MOLEMOLE_DISPLAYMESSAGEBASE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8F61470)
#define MOLEMOLE_DISPLAYMESSAGEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x8F61460)

namespace MoleMole
{
	inline static constexpr unsigned int DisplayMessageBase_TypeDefinitionIndex = 36903;

	class DisplayMessageBase : public ::MoleMole::MessageTaskBase
	{
	public:
		::System::Int32 _messagePriority; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYMESSAGEBASE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Enum_3_205E43D40B9E7AEA matchPage)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_205E43D40B9E7AEA))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYMESSAGEBASE__CTOR_1_OFFSET))(this, matchPage);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYMESSAGEBASE_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean get_IsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYMESSAGEBASE_GET_ISTRIGGER_OFFSET))(this);
		}

		::System::Boolean get_IsBlockCenter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYMESSAGEBASE_GET_ISBLOCKCENTER_OFFSET))(this);
		}

		::System::Boolean get_IsPenetrate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYMESSAGEBASE_GET_ISPENETRATE_OFFSET))(this);
		}

		::System::Boolean get_IsTriggerInLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYMESSAGEBASE_GET_ISTRIGGERINLOADING_OFFSET))(this);
		}

		::System::Void SetPriorityWhenSort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYMESSAGEBASE_SETPRIORITYWHENSORT_OFFSET))(this);
		}
	};
}
