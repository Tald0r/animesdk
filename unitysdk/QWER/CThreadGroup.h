#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace QWER { class CFutex; }
namespace QWER { class CThreadGroup_CPollInRunner; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Threading { class Thread; }

#define QWER_CTHREADGROUP_ABORT_OFFSET UNITYSDK_OFFSET(0x1B012200)
#define QWER_CTHREADGROUP_GET_EXECACTIONCOUNTPERPOLL_OFFSET UNITYSDK_OFFSET(0x1B0120B0)
#define QWER_CTHREADGROUP_GET_ISBACKGROUND_OFFSET UNITYSDK_OFFSET(0x1B012070)
#define QWER_CTHREADGROUP_JOIN_OFFSET UNITYSDK_OFFSET(0x1B012160)
#define QWER_CTHREADGROUP_POST_OFFSET UNITYSDK_OFFSET(0x1B00D8C0)
#define QWER_CTHREADGROUP_SET_EXECACTIONCOUNTPERPOLL_OFFSET UNITYSDK_OFFSET(0x1B0120C0)
#define QWER_CTHREADGROUP_SET_ISBACKGROUND_OFFSET UNITYSDK_OFFSET(0x1B00D610)
#define QWER_CTHREADGROUP_START_OFFSET UNITYSDK_OFFSET(0x1B00D680)
#define QWER_CTHREADGROUP_STOP_OFFSET UNITYSDK_OFFSET(0x1B0121D0)
#define QWER_CTHREADGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B00D330)
#define QWER_CTHREADGROUP__THREADSTART_OFFSET UNITYSDK_OFFSET(0x1B012300)

namespace QWER
{
	inline static constexpr unsigned int CThreadGroup_TypeDefinitionIndex = 84147;

	class CThreadGroup : public ::System::Object
	{
	public:
		::QWER::CThreadGroup_CPollInRunner* m_oPollInRunner; // 0x10
		::Il2CppArray<::System::Threading::Thread*>* m_aThreads; // 0x18
		::QWER::CFutex* m_oFutex; // 0x20
		::System::Int32 m_dwExecActionCountPerPoll; // 0x28
		::System::Boolean m_bTerminal; // 0x2C

		::System::Void _ctor(::System::Int32 dwThreadCount, ::System::String* strName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + QWER_CTHREADGROUP__CTOR_OFFSET))(this, dwThreadCount, strName);
		}

		::System::Boolean get_IsBackground()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CTHREADGROUP_GET_ISBACKGROUND_OFFSET))(this);
		}

		::System::Void set_IsBackground(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + QWER_CTHREADGROUP_SET_ISBACKGROUND_OFFSET))(this, value);
		}

		::System::Int32 get_ExecActionCountPerPoll()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CTHREADGROUP_GET_EXECACTIONCOUNTPERPOLL_OFFSET))(this);
		}

		::System::Void set_ExecActionCountPerPoll(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + QWER_CTHREADGROUP_SET_EXECACTIONCOUNTPERPOLL_OFFSET))(this, value);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CTHREADGROUP_START_OFFSET))(this);
		}

		::System::Void Join()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CTHREADGROUP_JOIN_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CTHREADGROUP_STOP_OFFSET))(this);
		}

		::System::Void Abort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CTHREADGROUP_ABORT_OFFSET))(this);
		}

		::System::Void Post(::System::Action* oAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + QWER_CTHREADGROUP_POST_OFFSET))(this, oAction);
		}

		::System::Void _ThreadStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CTHREADGROUP__THREADSTART_OFFSET))(this);
		}
	};
}
