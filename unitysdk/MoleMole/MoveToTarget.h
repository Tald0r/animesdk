#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ContinuesTickAction.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AIMoveTargetType.h"
#include "unitysdk/MoleMole/MoveToTarget_AIMoveTargetState.h"

class Class_2_968DF98DC4CEA2DC;
class Class_3_750DA0E74FE20AAE;
class Class_3_B19369CC4AB45FA4;
class Class_3_BD1C1745FBC83F51;
class Class_3_F33F9DC5F4112336;
class Class_3_F35B080B137ECC46;
namespace MoleMole { class SharedGameEntity; }
namespace System { class String; }

#define MOLEMOLE_MOVETOTARGET_ALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0xA530330)
#define MOLEMOLE_MOVETOTARGET_DEALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0xA530AC0)
#define MOLEMOLE_MOVETOTARGET_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xA52FF00)
#define MOLEMOLE_MOVETOTARGET_ONEND_OFFSET UNITYSDK_OFFSET(0xA530A50)
#define MOLEMOLE_MOVETOTARGET_ONSTART_OFFSET UNITYSDK_OFFSET(0xA5302C0)
#define MOLEMOLE_MOVETOTARGET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xA530460)
#define MOLEMOLE_MOVETOTARGET_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA530C40)
#define MOLEMOLE_MOVETOTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xA530FB0)
#define MOLEMOLE_MOVETOTARGET___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xA531000)
#define MOLEMOLE_MOVETOTARGET___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0xA531090)
#define MOLEMOLE_MOVETOTARGET___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0xA531120)
#define MOLEMOLE_MOVETOTARGET___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xA5311B0)
#define MOLEMOLE_MOVETOTARGET___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA531240)

namespace MoleMole
{
	inline static constexpr unsigned int MoveToTarget_TypeDefinitionIndex = 51605;

	class MoveToTarget : public ::BehaviorDesigner::Runtime::Tasks::ContinuesTickAction
	{
	public:
		::System::String* targetAnchorName; // 0x58
		::Class_3_F35B080B137ECC46* characterModel; // 0x60
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x68
		::Class_3_750DA0E74FE20AAE* aiComponent; // 0x70
		::Class_3_B19369CC4AB45FA4* attackTargetComponent; // 0x78
		::Class_2_968DF98DC4CEA2DC* moveToTargetTask; // 0x80
		::Class_3_BD1C1745FBC83F51* inputComp; // 0x88
		::Class_3_F33F9DC5F4112336* animCharacter; // 0x90
		::System::Single _targetDistance; // 0x98
		::System::Single _moveTimer; // 0x9C
		::System::Single moveTime; // 0xA0
		::MoleMole::AIMoveTargetType type; // 0xA4
		::System::Single minDistance; // 0xA8
		::MoleMole::MoveToTarget_AIMoveTargetState _moveState; // 0xAC
		::System::Single RotateSpeed; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET_ONEND_OFFSET))(this);
		}

		::System::Void AllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET_ALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::Void DeAllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET_DEALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET_TOSTRING_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVETOTARGET___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
