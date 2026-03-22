#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ContinuesTickAction.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_269D3BE91CDA4C29;
class Class_3_750DA0E74FE20AAE;
class Class_3_883E597458B91E77;
class Class_3_BD1C1745FBC83F51;
class Class_3_C0D5B1A036ED00F0;
class Class_3_F33F9DC5F4112336;
class Class_3_F35B080B137ECC46;
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_TURNFACEDIRECTION_ALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0xB5BEDB0)
#define MOLEMOLE_TURNFACEDIRECTION_CHECKCONTINUERATATEANGLEVALID_OFFSET UNITYSDK_OFFSET(0xB5BF290)
#define MOLEMOLE_TURNFACEDIRECTION_CHECKFACETOPLAYERANGLEVALID_OFFSET UNITYSDK_OFFSET(0xB5BF6A0)
#define MOLEMOLE_TURNFACEDIRECTION_DEALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0xB5BFB00)
#define MOLEMOLE_TURNFACEDIRECTION_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xB5BE690)
#define MOLEMOLE_TURNFACEDIRECTION_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xB5BE620)
#define MOLEMOLE_TURNFACEDIRECTION_ONEND_OFFSET UNITYSDK_OFFSET(0xB5BFA70)
#define MOLEMOLE_TURNFACEDIRECTION_ONROTATEDONE_OFFSET UNITYSDK_OFFSET(0xB5BF560)
#define MOLEMOLE_TURNFACEDIRECTION_ONSTART_OFFSET UNITYSDK_OFFSET(0xB5BEC00)
#define MOLEMOLE_TURNFACEDIRECTION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xB5BEEE0)
#define MOLEMOLE_TURNFACEDIRECTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB5BFC80)
#define MOLEMOLE_TURNFACEDIRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB5BFE80)
#define MOLEMOLE_TURNFACEDIRECTION___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xB5BFF10)
#define MOLEMOLE_TURNFACEDIRECTION___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0xB5BFFA0)
#define MOLEMOLE_TURNFACEDIRECTION___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0xB5C0030)
#define MOLEMOLE_TURNFACEDIRECTION___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xB5C00C0)
#define MOLEMOLE_TURNFACEDIRECTION___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB5C0150)

namespace MoleMole
{
	inline static constexpr unsigned int TurnFaceDirection_TypeDefinitionIndex = 61134;

	class TurnFaceDirection : public ::BehaviorDesigner::Runtime::Tasks::ContinuesTickAction
	{
	public:
		::Class_3_F33F9DC5F4112336* _animCharacter; // 0x58
		::Class_3_C0D5B1A036ED00F0* _dataComponent; // 0x60
		::BehaviorDesigner::Runtime::SharedFloat* RotateLeftMaxAngle; // 0x68
		::BehaviorDesigner::Runtime::SharedBool* CanMoveInRotating; // 0x70
		::Class_3_BD1C1745FBC83F51* _inputComponent; // 0x78
		::Class_3_750DA0E74FE20AAE* _aiCharacter; // 0x80
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x88
		::MoleMole::Battle::Entity* _ownerEntity; // 0x90
		::Class_3_883E597458B91E77* _characterMovement; // 0x98
		::BehaviorDesigner::Runtime::SharedFloat* RotateRightMaxAngle; // 0xA0
		::Class_3_F35B080B137ECC46* _characterModel; // 0xA8
		::Class_2_269D3BE91CDA4C29* turnFaceDirectionTask; // 0xB0
		::System::Single RotateSpeed; // 0xB8
		::System::Boolean ContinueRotate; // 0xBC
		::System::Boolean _isRotating; // 0xBD
		::System::Boolean ApplyRotateSpeed; // 0xBE
		::System::Single _rotateTimer; // 0xC0
		::System::Single RotateTimeSpan; // 0xC4
		::UnityEngine::Vector3 _beforeAtkForwardDir; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean CheckFaceToPlayerAngleValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION_CHECKFACETOPLAYERANGLEVALID_OFFSET))(this);
		}

		::System::Boolean CheckContinueRatateAngleValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION_CHECKCONTINUERATATEANGLEVALID_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION_ONEND_OFFSET))(this);
		}

		::System::Void AllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION_ALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::Void DeAllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION_DEALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION_TOSTRING_OFFSET))(this);
		}

		::System::Void OnRotateDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION_ONROTATEDONE_OFFSET))(this);
		}

		::System::Void InitComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION_INITCOMPONENT_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNFACEDIRECTION___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
