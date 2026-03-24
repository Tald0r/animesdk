#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Composite.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedInt; }

#define MOLEMOLE_NAPREPEATER_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x6EBEC40)
#define MOLEMOLE_NAPREPEATER_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x6EBEB40)
#define MOLEMOLE_NAPREPEATER_DECORATE_OFFSET UNITYSDK_OFFSET(0x6EBF060)
#define MOLEMOLE_NAPREPEATER_FINALOVERRIDE_OFFSET UNITYSDK_OFFSET(0x6EBEFF0)
#define MOLEMOLE_NAPREPEATER_MAXCHILDREN_OFFSET UNITYSDK_OFFSET(0x6EBECD0)
#define MOLEMOLE_NAPREPEATER_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x6EBED30)
#define MOLEMOLE_NAPREPEATER_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x6EBEF10)
#define MOLEMOLE_NAPREPEATER_ONEND_OFFSET UNITYSDK_OFFSET(0x6EBEF80)
#define MOLEMOLE_NAPREPEATER_ONSTART_OFFSET UNITYSDK_OFFSET(0x6EBEBB0)
#define MOLEMOLE_NAPREPEATER__CTOR_OFFSET UNITYSDK_OFFSET(0x6EBF0D0)
#define MOLEMOLE_NAPREPEATER___BASE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x6EBF1E0)
#define MOLEMOLE_NAPREPEATER___BASE_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x6EBF270)
#define MOLEMOLE_NAPREPEATER___BASE_DECORATE_OFFSET UNITYSDK_OFFSET(0x6EBF300)
#define MOLEMOLE_NAPREPEATER___BASE_FINALOVERRIDE_OFFSET UNITYSDK_OFFSET(0x6EBF390)
#define MOLEMOLE_NAPREPEATER___BASE_MAXCHILDREN_OFFSET UNITYSDK_OFFSET(0x6EBF420)
#define MOLEMOLE_NAPREPEATER___BASE_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x6EBF4B0)
#define MOLEMOLE_NAPREPEATER___BASE_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x6EBF540)
#define MOLEMOLE_NAPREPEATER___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x6EBF5D0)
#define MOLEMOLE_NAPREPEATER___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x6EBF660)

namespace MoleMole
{
	inline static constexpr unsigned int NapRepeater_TypeDefinitionIndex = 58642;

	class NapRepeater : public ::BehaviorDesigner::Runtime::Tasks::Composite
	{
	public:
		::BehaviorDesigner::Runtime::SharedBool* repeatForever; // 0x60
		::BehaviorDesigner::Runtime::SharedBool* endOnFailure; // 0x68
		::BehaviorDesigner::Runtime::SharedInt* count; // 0x70
		::System::Int32 executionCount; // 0x78
		::BehaviorDesigner::Runtime::Tasks::TaskStatus executionStatus; // 0x7C
		::System::Int32 currentChildIndex; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER__CTOR_OFFSET))(this);
		}

		::System::Int32 CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER_ONSTART_OFFSET))(this);
		}

		::System::Boolean CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER_CANEXECUTE_OFFSET))(this);
		}

		::System::Int32 MaxChildren()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER_MAXCHILDREN_OFFSET))(this);
		}

		::System::Void OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus childStatus)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER_ONCHILDEXECUTED_OFFSET))(this, childStatus);
		}

		::System::Void OnConditionalAbort(::System::Int32 childIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER_ONCONDITIONALABORT_OFFSET))(this, childIndex);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER_ONEND_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus FinalOverride(::BehaviorDesigner::Runtime::Tasks::TaskStatus status)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER_FINALOVERRIDE_OFFSET))(this, status);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus Decorate(::BehaviorDesigner::Runtime::Tasks::TaskStatus status)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER_DECORATE_OFFSET))(this, status);
		}

		::System::Boolean __base_CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER___BASE_CANEXECUTE_OFFSET))(this);
		}

		::System::Int32 __base_CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER___BASE_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_Decorate(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER___BASE_DECORATE_OFFSET))(this, P0);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_FinalOverride(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER___BASE_FINALOVERRIDE_OFFSET))(this, P0);
		}

		::System::Int32 __base_MaxChildren()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER___BASE_MAXCHILDREN_OFFSET))(this);
		}

		::System::Void __base_OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER___BASE_ONCHILDEXECUTED_OFFSET))(this, P0);
		}

		::System::Void __base_OnConditionalAbort(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER___BASE_ONCONDITIONALABORT_OFFSET))(this, P0);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER___BASE_ONSTART_OFFSET))(this);
		}
	};
}
