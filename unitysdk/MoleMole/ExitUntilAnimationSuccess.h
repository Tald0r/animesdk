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

#define MOLEMOLE_EXITUNTILANIMATIONSUCCESS_ALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0xC9B7F10)
#define MOLEMOLE_EXITUNTILANIMATIONSUCCESS_CLEARFLAGS_OFFSET UNITYSDK_OFFSET(0xC9B7BA0)
#define MOLEMOLE_EXITUNTILANIMATIONSUCCESS_DEALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0xC9B8040)
#define MOLEMOLE_EXITUNTILANIMATIONSUCCESS_GETEXITTIME_OFFSET UNITYSDK_OFFSET(0xC9B8AB0)
#define MOLEMOLE_EXITUNTILANIMATIONSUCCESS_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xC9B77F0)
#define MOLEMOLE_EXITUNTILANIMATIONSUCCESS_ONCHECKANIMATION_OFFSET UNITYSDK_OFFSET(0xC9B7C10)
#define MOLEMOLE_EXITUNTILANIMATIONSUCCESS_ONSTART_OFFSET UNITYSDK_OFFSET(0xC9B7AD0)
#define MOLEMOLE_EXITUNTILANIMATIONSUCCESS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xC9B81C0)
#define MOLEMOLE_EXITUNTILANIMATIONSUCCESS_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC9B8C10)
#define MOLEMOLE_EXITUNTILANIMATIONSUCCESS__CTOR_OFFSET UNITYSDK_OFFSET(0xC9B8E50)
#define MOLEMOLE_EXITUNTILANIMATIONSUCCESS___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xC9B8F70)
#define MOLEMOLE_EXITUNTILANIMATIONSUCCESS___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0xC9B9000)
#define MOLEMOLE_EXITUNTILANIMATIONSUCCESS___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xC9B90A0)
#define MOLEMOLE_EXITUNTILANIMATIONSUCCESS___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC9B9130)

namespace MoleMole
{
	inline static constexpr unsigned int ExitUntilAnimationSuccess_TypeDefinitionIndex = 36828;

	class ExitUntilAnimationSuccess : public ::BehaviorDesigner::Runtime::Tasks::ContinuesTickConditional
	{
	public:
		::Class_3_F33F9DC5F4112336* _animCharacter; // 0x50
		::BehaviorDesigner::Runtime::SharedInt* AnimatorLayerIndex; // 0x58
		::MoleMole::Battle::Entity* _ownerEntity; // 0x60
		::Class_2_57AD714CA60496DE* animationSuccessTask; // 0x68
		::BehaviorDesigner::Runtime::SharedString* AnimationName; // 0x70
		::BehaviorDesigner::Runtime::SharedFloat* ForceAnimExitTime; // 0x78
		::Class_3_750DA0E74FE20AAE* _aiCharacter; // 0x80
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x88
		::MoleMole::ExitUntilAnimationSuccess_AnimationType AnimationStateType; // 0x90
		::MoleMole::ExitUntilAnimationSuccess_AnimationTimeType ExitTimeType; // 0x94
		::System::Single _protectedTimer; // 0x98
		::MoleMole::AICompareType AnimTimeCompareType; // 0x9C
		::System::Boolean _inAnim; // 0xA0
		::System::Boolean DontExitUntilSuccess; // 0xA1
		::System::Single _protectedMaxTime; // 0xA4
		::System::Single animationTotalFrameCount; // 0xA8
		::System::Int32 AnimationNameHash; // 0xAC

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
