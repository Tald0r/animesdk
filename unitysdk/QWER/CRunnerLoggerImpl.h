#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/QWER/ELogLevel.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Object.h"

namespace QWER { class ILogPrinter; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading::Tasks { class Task; }

#define QWER_CRUNNERLOGGERIMPL_ADDLOGPRINTER_OFFSET UNITYSDK_OFFSET(0x1B010530)
#define QWER_CRUNNERLOGGERIMPL_DISABLEPREFIX_OFFSET UNITYSDK_OFFSET(0x1B010330)
#define QWER_CRUNNERLOGGERIMPL_ENABLEPREFIX_OFFSET UNITYSDK_OFFSET(0x1B010130)
#define QWER_CRUNNERLOGGERIMPL_FLUSH_OFFSET UNITYSDK_OFFSET(0x1B010A50)
#define QWER_CRUNNERLOGGERIMPL_GET_GETCURDATETIME_OFFSET UNITYSDK_OFFSET(0x1B011350)
#define QWER_CRUNNERLOGGERIMPL_PRINT_1_OFFSET UNITYSDK_OFFSET(0x1B010DC0)
#define QWER_CRUNNERLOGGERIMPL_PRINT_OFFSET UNITYSDK_OFFSET(0x1B010C80)
#define QWER_CRUNNERLOGGERIMPL_SETLOGLEVEL_OFFSET UNITYSDK_OFFSET(0x1B010880)
#define QWER_CRUNNERLOGGERIMPL_SET_GETCURDATETIME_OFFSET UNITYSDK_OFFSET(0x1B011360)
#define QWER_CRUNNERLOGGERIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B00FF30)

namespace QWER
{
	inline static constexpr unsigned int CRunnerLoggerImpl_TypeDefinitionIndex = 84131;

	class CRunnerLoggerImpl : public ::System::Object
	{
	public:
		::System::Object* m_oMutex; // 0x10
		::System::Func_1<::System::DateTimeOffset>* _GetCurDateTime_k__BackingField; // 0x18
		::System::Collections::Generic::HashSet_1<::QWER::ILogPrinter*>* m_oSet; // 0x20
		::System::Collections::Generic::List_1<::QWER::ILogPrinter*>* m_oLogPrinter; // 0x28
		::System::Boolean m_bEnablePrefix; // 0x30
		::QWER::ELogLevel m_eLogLevel; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CRUNNERLOGGERIMPL__CTOR_OFFSET))(this);
		}

		::System::Func_1<::System::DateTimeOffset>* get_GetCurDateTime()
		{
			return ((::System::Func_1<::System::DateTimeOffset>*(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CRUNNERLOGGERIMPL_GET_GETCURDATETIME_OFFSET))(this);
		}

		::System::Void set_GetCurDateTime(::System::Func_1<::System::DateTimeOffset>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::DateTimeOffset>*))((::PBYTE)hIl2Cpp + QWER_CRUNNERLOGGERIMPL_SET_GETCURDATETIME_OFFSET))(this, value);
		}

		::System::Void EnablePrefix()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CRUNNERLOGGERIMPL_ENABLEPREFIX_OFFSET))(this);
		}

		::System::Void DisablePrefix()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CRUNNERLOGGERIMPL_DISABLEPREFIX_OFFSET))(this);
		}

		::System::Void AddLogPrinter(::System::Func_1<::QWER::ILogPrinter*>* cbCreateLogPrinter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::QWER::ILogPrinter*>*))((::PBYTE)hIl2Cpp + QWER_CRUNNERLOGGERIMPL_ADDLOGPRINTER_OFFSET))(this, cbCreateLogPrinter);
		}

		::System::Void SetLogLevel(::QWER::ELogLevel eLogLevel)
		{
			return ((::System::Void(*)(::PVOID, ::QWER::ELogLevel))((::PBYTE)hIl2Cpp + QWER_CRUNNERLOGGERIMPL_SETLOGLEVEL_OFFSET))(this, eLogLevel);
		}

		::System::Threading::Tasks::Task* Flush()
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CRUNNERLOGGERIMPL_FLUSH_OFFSET))(this);
		}

		::System::Void Print(::QWER::ELogLevel eLogLevel, ::System::Func_1<::System::String*>* cbLog, ::System::String* strCallerFilePath, ::System::String* strCallerMemberName, ::System::Int32 dwCallerLineNumber)
		{
			return ((::System::Void(*)(::PVOID, ::QWER::ELogLevel, ::System::Func_1<::System::String*>*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + QWER_CRUNNERLOGGERIMPL_PRINT_OFFSET))(this, eLogLevel, cbLog, strCallerFilePath, strCallerMemberName, dwCallerLineNumber);
		}

		::System::Void Print_1(::QWER::ELogLevel eLogLevel, ::System::String* strLog, ::System::String* strCallerFilePath, ::System::String* strCallerMemberName, ::System::Int32 dwCallerLineNumber)
		{
			return ((::System::Void(*)(::PVOID, ::QWER::ELogLevel, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + QWER_CRUNNERLOGGERIMPL_PRINT_1_OFFSET))(this, eLogLevel, strLog, strCallerFilePath, strCallerMemberName, dwCallerLineNumber);
		}
	};
}
