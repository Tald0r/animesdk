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

#define MOLEMOLE_TURNFACEDIRECTION_ALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0xC7F78C0)
#define MOLEMOLE_TURNFACEDIRECTION_CHECKCONTINUERATATEANGLEVALID_OFFSET UNITYSDK_OFFSET(0xC7F7D90)
#define MOLEMOLE_TURNFACEDIRECTION_CHECKFACETOPLAYERANGLEVALID_OFFSET UNITYSDK_OFFSET(0xC7F81A0)
#define MOLEMOLE_TURNFACEDIRECTION_DEALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0xC7F8600)
#define MOLEMOLE_TURNFACEDIRECTION_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xC7F71D0)
#define MOLEMOLE_TURNFACEDIRECTION_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xC7F7160)
#define MOLEMOLE_TURNFACEDIRECTION_ONEND_OFFSET UNITYSDK_OFFSET(0xC7F8570)
#define MOLEMOLE_TURNFACEDIRECTION_ONROTATEDONE_OFFSET UNITYSDK_OFFSET(0xC7F8060)
#define MOLEMOLE_TURNFACEDIRECTION_ONSTART_OFFSET UNITYSDK_OFFSET(0xC7F7720)
#define MOLEMOLE_TURNFACEDIRECTION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xC7F79F0)
#define MOLEMOLE_TURNFACEDIRECTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC7F8780)
#define MOLEMOLE_TURNFACEDIRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xC7F8980)
#define MOLEMOLE_TURNFACEDIRECTION___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xC7F8A10)
#define MOLEMOLE_TURNFACEDIRECTION___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0xC7F8AA0)
#define MOLEMOLE_TURNFACEDIRECTION___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0xC7F8B30)
#define MOLEMOLE_TURNFACEDIRECTION___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xC7F8BC0)
#define MOLEMOLE_TURNFACEDIRECTION___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC7F8C50)

namespace MoleMole
{
	inline static constexpr unsigned int TurnFaceDirection_TypeDefinitionIndex = 48702;

	class TurnFaceDirection : public ::BehaviorDesigner::Runtime::Tasks::ContinuesTickAction
	{
	public:
		::MoleMole::Battle::Entity* _ownerEntity; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* RotateRightMaxAngle; // 0x60
		::Class_3_BD1C1745FBC83F51* _inputComponent; // 0x68
		::Class_3_750DA0E74FE20AAE* _aiCharacter; // 0x70
		::Class_3_883E597458B91E77* _characterMovement; // 0x78
		::Class_3_C0D5B1A036ED00F0* _dataComponent; // 0x80
		::Class_3_F33F9DC5F4112336* _animCharacter; // 0x88
		::BehaviorDesigner::Runtime::SharedFloat* RotateLeftMaxAngle; // 0x90
		::Class_2_269D3BE91CDA4C29* turnFaceDirectionTask; // 0x98
		::Class_3_F35B080B137ECC46* _characterModel; // 0xA0
		::BehaviorDesigner::Runtime::SharedBool* CanMoveInRotating; // 0xA8
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0xB0
		::System::Boolean _isRotating; // 0xB8
		::System::Boolean ContinueRotate; // 0xB9
		::System::Boolean ApplyRotateSpeed; // 0xBA
		::UnityEngine::Vector3 _beforeAtkForwardDir; // 0xBC
		::System::Single RotateTimeSpan; // 0xC8
		::System::Single _rotateTimer; // 0xCC
		::System::Single RotateSpeed; // 0xD0

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
