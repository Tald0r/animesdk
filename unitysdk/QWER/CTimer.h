#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace QWER { class CTimerMgr; }
namespace QWER { class DOnTimer; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }

#define QWER_CTIMER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1B64A470)
#define QWER_CTIMER_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B64A450)
#define QWER_CTIMER_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x1B64A220)
#define QWER_CTIMER_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x1B64A480)
#define QWER_CTIMER_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B64A460)
#define QWER_CTIMER_STOP_OFFSET UNITYSDK_OFFSET(0x1B64A490)
#define QWER_CTIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B649CA0)

namespace QWER
{
	inline static constexpr unsigned int CTimer_TypeDefinitionIndex = 82515;

	class CTimer : public ::System::Object
	{
	public:
		::System::Collections::Generic::LinkedListNode_1<::QWER::CTimer*>* m_oNode; // 0x10
		::QWER::DOnTimer* m_cbOnTimer; // 0x18
		::QWER::CTimerMgr* _TimerMgr_k__BackingField; // 0x20
		::System::UInt64 m_qwFirstTimeoutTime; // 0x28
		::System::UInt64 m_qwIntervalMilliSeconds; // 0x30
		::System::UInt32 _Count_k__BackingField; // 0x38
		::System::Boolean m_bAutoFix; // 0x3C
		::System::UInt32 _Current_k__BackingField; // 0x40

		::System::Void _ctor(::QWER::CTimerMgr* oTimerMgr)
		{
			return ((::System::Void(*)(::PVOID, ::QWER::CTimerMgr*))((::PBYTE)hIl2Cpp + QWER_CTIMER__CTOR_OFFSET))(this, oTimerMgr);
		}

		::System::UInt32 get_Current()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CTIMER_GET_CURRENT_OFFSET))(this);
		}

		::System::Void set_Current(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + QWER_CTIMER_SET_CURRENT_OFFSET))(this, value);
		}

		::System::UInt32 get_Count()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CTIMER_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + QWER_CTIMER_SET_COUNT_OFFSET))(this, value);
		}

		::System::Boolean get_IsRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CTIMER_GET_ISRUNNING_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CTIMER_STOP_OFFSET))(this);
		}
	};
}
