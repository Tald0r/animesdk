#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFF9A50)
#define CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFF9A80)
#define CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1AFF9A90)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_NextFramePromise___c_TypeDefinitionIndex = 27125;

	class UniTask_NextFramePromise___c : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTask_NextFramePromise___c** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::UniTask_NextFramePromise___c**)Il2CppClass::FromTypeDefinitionIndex(UniTask_NextFramePromise___c_TypeDefinitionIndex)->GetStaticField(0x1FB60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__4_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE___C___CCTOR_B__4_0_OFFSET))(this);
		}
	};
}
