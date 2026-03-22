#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ContinuesTickAction.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_2_24B31638312672D4;
class Class_3_750DA0E74FE20AAE;
class Class_3_B19369CC4AB45FA4;
class Class_3_BD1C1745FBC83F51;
class Class_3_F35B080B137ECC46;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_GUARDMOVE_ALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0xA5F51E0)
#define MOLEMOLE_GUARDMOVE_DEALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0xA5F5700)
#define MOLEMOLE_GUARDMOVE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xA5F4D40)
#define MOLEMOLE_GUARDMOVE_ONEND_OFFSET UNITYSDK_OFFSET(0xA5F5690)
#define MOLEMOLE_GUARDMOVE_ONSTART_OFFSET UNITYSDK_OFFSET(0xA5F5150)
#define MOLEMOLE_GUARDMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xA5F52F0)
#define MOLEMOLE_GUARDMOVE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA5F5880)
#define MOLEMOLE_GUARDMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0xA5F5B00)
#define MOLEMOLE_GUARDMOVE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xA5F5B40)
#define MOLEMOLE_GUARDMOVE___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0xA5F5BD0)
#define MOLEMOLE_GUARDMOVE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0xA5F5C60)
#define MOLEMOLE_GUARDMOVE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xA5F5CF0)
#define MOLEMOLE_GUARDMOVE___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA5F5D80)

namespace MoleMole
{
	inline static constexpr unsigned int GuardMove_TypeDefinitionIndex = 48194;

	class GuardMove : public ::BehaviorDesigner::Runtime::Tasks::ContinuesTickAction
	{
	public:
		::Class_3_BD1C1745FBC83F51* characterInput; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60
		::Class_3_F35B080B137ECC46* characterModel; // 0x68
		::Class_2_24B31638312672D4* guardMoveTask; // 0x70
		::Class_3_B19369CC4AB45FA4* attackTargetComponent; // 0x78
		::MoleMole::Battle::Entity* ownerEntity; // 0x80
		::Class_3_750DA0E74FE20AAE* aiComponent; // 0x88
		::System::Single rotateSpeed; // 0x90
		::System::Single guardDistance; // 0x94
		::System::Single _checkDistance; // 0x98
		::System::Single moveAngleOffset; // 0x9C
		::System::Single moveTime; // 0xA0
		::System::Single _moveTimer; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE_ONEND_OFFSET))(this);
		}

		::System::Void AllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE_ALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::Void DeAllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE_DEALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE_TOSTRING_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUARDMOVE___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
