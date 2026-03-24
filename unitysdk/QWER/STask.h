#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define QWER_STASK_EQUALS_OFFSET UNITYSDK_OFFSET(0x980EA0)
#define QWER_STASK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x77EDD0)
#define QWER_STASK_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x272280)
#define QWER_STASK_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x314B50)
#define QWER_STASK_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B012A70)
#define QWER_STASK_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B012A80)
#define QWER_STASK_WHENDONE_OFFSET UNITYSDK_OFFSET(0x980E90)
#define QWER_STASK__CTOR_OFFSET UNITYSDK_OFFSET(0x301710)

namespace QWER
{
	inline static constexpr unsigned int STask_TypeDefinitionIndex = 84136;

	struct alignas(8) STask
	{
		::System::Threading::Tasks::Task_1<::System::Exception*>* m_oInnerTask; // 0x10
		::System::Action_1<::System::Exception*>* _Action_k__BackingField; // 0x18

		::System::Void _ctor(::System::Threading::Tasks::Task_1<::System::Exception*>* oInnerTask, ::System::Action_1<::System::Exception*>* cbAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task_1<::System::Exception*>*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + QWER_STASK__CTOR_OFFSET))(this, oInnerTask, cbAction);
		}

		::System::Action_1<::System::Exception*>* get_Action()
		{
			return ((::System::Action_1<::System::Exception*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_STASK_GET_ACTION_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_STASK_GET_ISNULL_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* WhenDone()
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_STASK_WHENDONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + QWER_STASK_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_STASK_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::QWER::STask arg1, ::QWER::STask arg2)
		{
			return ((::System::Boolean(*)(::QWER::STask, ::QWER::STask))((::PBYTE)hIl2Cpp + QWER_STASK_OP_EQUALITY_OFFSET))(arg1, arg2);
		}

		static ::System::Boolean op_Inequality(::QWER::STask arg1, ::QWER::STask arg2)
		{
			return ((::System::Boolean(*)(::QWER::STask, ::QWER::STask))((::PBYTE)hIl2Cpp + QWER_STASK_OP_INEQUALITY_OFFSET))(arg1, arg2);
		}
	};
}
