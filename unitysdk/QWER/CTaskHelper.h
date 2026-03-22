#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/QWER/STask.h"
#include "unitysdk/QWER/STask_1.h"
#include "unitysdk/System/Object.h"

namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define QWER_CTASKHELPER_CREATEPENDINGTASK_OFFSET UNITYSDK_OFFSET(0x1AA1DA90)
#define QWER_CTASKHELPER_DELAY_OFFSET UNITYSDK_OFFSET(0x1AA21BE0)
#define QWER_CTASKHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA21CF0)
#define QWER_CTASKHELPER___OFFSET UNITYSDK_OFFSET(0x1AA21B20)

namespace QWER
{
	inline static constexpr unsigned int CTaskHelper_TypeDefinitionIndex = 82099;

	class CTaskHelper : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CTASKHELPER__CTOR_OFFSET))(this);
		}

		static ::QWER::STask CreatePendingTask()
		{
			return ((::QWER::STask(*)())((::PBYTE)hIl2Cpp + QWER_CTASKHELPER_CREATEPENDINGTASK_OFFSET))();
		}

		static ::System::Void _(::System::Threading::Tasks::Task* task)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + QWER_CTASKHELPER___OFFSET))(task);
		}

		static ::System::Threading::Tasks::Task* Delay(::System::UInt64 qwMilliSeconds)
		{
			return ((::System::Threading::Tasks::Task*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + QWER_CTASKHELPER_DELAY_OFFSET))(qwMilliSeconds);
		}
	};
}
