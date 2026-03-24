#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ContinuesTickAction.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_2_9A7CE2C95D465436;
class Class_3_750DA0E74FE20AAE;
class Class_3_BD1C1745FBC83F51;
class Class_3_F35B080B137ECC46;
namespace MoleMole { class SharedGameEntity; }

#define MOLEMOLE_TRYMOVE_ALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0xC7F6B40)
#define MOLEMOLE_TRYMOVE_DEALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0xC7F6D60)
#define MOLEMOLE_TRYMOVE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xC7F6800)
#define MOLEMOLE_TRYMOVE_ONEND_OFFSET UNITYSDK_OFFSET(0xC7F6CF0)
#define MOLEMOLE_TRYMOVE_ONSTART_OFFSET UNITYSDK_OFFSET(0xC7F6AD0)
#define MOLEMOLE_TRYMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xC7F6C50)
#define MOLEMOLE_TRYMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0xC7F6EE0)
#define MOLEMOLE_TRYMOVE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xC7F6F20)
#define MOLEMOLE_TRYMOVE___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0xC7F6FB0)
#define MOLEMOLE_TRYMOVE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0xC7F7040)
#define MOLEMOLE_TRYMOVE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xC7F70D0)

namespace MoleMole
{
	inline static constexpr unsigned int TryMove_TypeDefinitionIndex = 44037;

	class TryMove : public ::BehaviorDesigner::Runtime::Tasks::ContinuesTickAction
	{
	public:
		::Class_3_BD1C1745FBC83F51* characterInput; // 0x58
		::Class_3_750DA0E74FE20AAE* aiComponent; // 0x60
		::Class_3_F35B080B137ECC46* characterModel; // 0x68
		::Class_2_9A7CE2C95D465436* tryMoveForwardTask; // 0x70
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRYMOVE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRYMOVE_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRYMOVE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRYMOVE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRYMOVE_ONEND_OFFSET))(this);
		}

		::System::Void AllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRYMOVE_ALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::Void DeAllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRYMOVE_DEALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRYMOVE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRYMOVE___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRYMOVE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRYMOVE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
