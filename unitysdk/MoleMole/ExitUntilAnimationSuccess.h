#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ContinuesTickConditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AICompareType.h"
#include "unitysdk/MoleMole/ExitUntilAnimationSuccess_AnimationTimeType.h"
#include "unitysdk/MoleMole/ExitUntilAnimationSuccess_AnimationType.h"

class Class_2_57AD714CA60496DE;
class Class_3_750DA0E74FE20AAE;
class Class_3_F33F9DC5F4112336;
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedInt; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_EXITUNTILANIMATIONSUCCESS_ALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0xB9FC900)
#define MOLEMOLE_EXITUNTILANIMATIONSUCCESS_CLEARFLAGS_OFFSET UNITYSDK_OFFSET(0xB9FC590)
#define MOLEMOLE_EXITUNTILANIMATIONSUCCESS_DEALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0xB9FCA30)
#define MOLEMOLE_EXITUNTILANIMATIONSUCCESS_GETEXITTIME_OFFSET UNITYSDK_OFFSET(0xB9FD4A0)
#define MOLEMOLE_EXITUNTILANIMATIONSUCCESS_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xB9FC1F0)
#define MOLEMOLE_EXITUNTILANIMATIONSUCCESS_ONCHECKANIMATION_OFFSET UNITYSDK_OFFSET(0xB9FC600)
#define MOLEMOLE_EXITUNTILANIMATIONSUCCESS_ONSTART_OFFSET UNITYSDK_OFFSET(0xB9FC4C0)
#define MOLEMOLE_EXITUNTILANIMATIONSUCCESS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xB9FCBB0)
#define MOLEMOLE_EXITUNTILANIMATIONSUCCESS_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB9FD600)
#define MOLEMOLE_EXITUNTILANIMATIONSUCCESS__CTOR_OFFSET UNITYSDK_OFFSET(0xB9FD840)
#define MOLEMOLE_EXITUNTILANIMATIONSUCCESS___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xB9FD950)
#define MOLEMOLE_EXITUNTILANIMATIONSUCCESS___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0xB9FD9E0)
#define MOLEMOLE_EXITUNTILANIMATIONSUCCESS___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xB9FDA80)
#define MOLEMOLE_EXITUNTILANIMATIONSUCCESS___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB9FDB10)

namespace MoleMole
{
	inline static constexpr unsigned int ExitUntilAnimationSuccess_TypeDefinitionIndex = 43409;

	class ExitUntilAnimationSuccess : public ::BehaviorDesigner::Runtime::Tasks::ContinuesTickConditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* ForceAnimExitTime; // 0x50
		::Class_3_F33F9DC5F4112336* _animCharacter; // 0x58
		::Class_3_750DA0E74FE20AAE* _aiCharacter; // 0x60
		::Class_2_57AD714CA60496DE* animationSuccessTask; // 0x68
		::BehaviorDesigner::Runtime::SharedInt* AnimatorLayerIndex; // 0x70
		::MoleMole::Battle::Entity* _ownerEntity; // 0x78
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x80
		::BehaviorDesigner::Runtime::SharedString* AnimationName; // 0x88
		::System::Boolean DontExitUntilSuccess; // 0x90
		::System::Boolean _inAnim; // 0x91
		::MoleMole::ExitUntilAnimationSuccess_AnimationType AnimationStateType; // 0x94
		::MoleMole::ExitUntilAnimationSuccess_AnimationTimeType ExitTimeType; // 0x98
		::System::Int32 AnimationNameHash; // 0x9C
		::System::Single _protectedTimer; // 0xA0
		::MoleMole::AICompareType AnimTimeCompareType; // 0xA4
		::System::Single _protectedMaxTime; // 0xA8
		::System::Single animationTotalFrameCount; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXITUNTILANIMATIONSUCCESS__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXITUNTILANIMATIONSUCCESS_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXITUNTILANIMATIONSUCCESS_ONSTART_OFFSET))(this);
		}

		::System::Void OnCheckAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXITUNTILANIMATIONSUCCESS_ONCHECKANIMATION_OFFSET))(this);
		}

		::System::Void AllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXITUNTILANIMATIONSUCCESS_ALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::Void DeAllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXITUNTILANIMATIONSUCCESS_DEALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXITUNTILANIMATIONSUCCESS_ONUPDATE_OFFSET))(this);
		}

		::System::Single GetExitTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXITUNTILANIMATIONSUCCESS_GETEXITTIME_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXITUNTILANIMATIONSUCCESS_TOSTRING_OFFSET))(this);
		}

		::System::Void ClearFlags()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXITUNTILANIMATIONSUCCESS_CLEARFLAGS_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXITUNTILANIMATIONSUCCESS___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXITUNTILANIMATIONSUCCESS___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXITUNTILANIMATIONSUCCESS___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXITUNTILANIMATIONSUCCESS___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
