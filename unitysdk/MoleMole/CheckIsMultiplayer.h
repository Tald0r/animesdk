#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

#define MOLEMOLE_CHECKISMULTIPLAYER_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x8024A40)
#define MOLEMOLE_CHECKISMULTIPLAYER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x8024AA0)
#define MOLEMOLE_CHECKISMULTIPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x8024BD0)
#define MOLEMOLE_CHECKISMULTIPLAYER___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x8024C10)
#define MOLEMOLE_CHECKISMULTIPLAYER___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x8024CA0)

namespace MoleMole
{
	inline static constexpr unsigned int CheckIsMultiplayer_TypeDefinitionIndex = 70893;

	class CheckIsMultiplayer : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISMULTIPLAYER__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISMULTIPLAYER_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISMULTIPLAYER_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISMULTIPLAYER___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISMULTIPLAYER___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
