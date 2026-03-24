#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AIMoveTargetType.h"
#include "unitysdk/MoleMole/AITargetType.h"
#include "unitysdk/MoleMole/CheckObstacle_ShapeType.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_0D4C1A014C7CC9DE;
class Class_3_4E22895815E0F387;
class Class_3_B19369CC4AB45FA4;
class Class_3_F35B080B137ECC46;
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_CHECKOBSTACLE_BOXCHECK_OFFSET UNITYSDK_OFFSET(0xC212F80)
#define MOLEMOLE_CHECKOBSTACLE_CHECKANGLE_OFFSET UNITYSDK_OFFSET(0xC2139A0)
#define MOLEMOLE_CHECKOBSTACLE_CHECKNAVMESHANGLE_OFFSET UNITYSDK_OFFSET(0xC212A50)
#define MOLEMOLE_CHECKOBSTACLE_ISENTITYVAILD_OFFSET UNITYSDK_OFFSET(0xC213F50)
#define MOLEMOLE_CHECKOBSTACLE_NAVMESHCHECK_OFFSET UNITYSDK_OFFSET(0xC2117A0)
#define MOLEMOLE_CHECKOBSTACLE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x84F9180)
#define MOLEMOLE_CHECKOBSTACLE_ONEND_OFFSET UNITYSDK_OFFSET(0xC211880)
#define MOLEMOLE_CHECKOBSTACLE_ONSTART_OFFSET UNITYSDK_OFFSET(0xC211630)
#define MOLEMOLE_CHECKOBSTACLE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xC211730)
#define MOLEMOLE_CHECKOBSTACLE_SETTARGETPOS_OFFSET UNITYSDK_OFFSET(0xC211910)
#define MOLEMOLE_CHECKOBSTACLE__CTOR_OFFSET UNITYSDK_OFFSET(0xC213FD0)
#define MOLEMOLE_CHECKOBSTACLE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xC214080)
#define MOLEMOLE_CHECKOBSTACLE___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0xC214110)
#define MOLEMOLE_CHECKOBSTACLE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0xC2141A0)
#define MOLEMOLE_CHECKOBSTACLE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xC214230)

namespace MoleMole
{
	inline static constexpr unsigned int CheckObstacle_TypeDefinitionIndex = 47986;

	class CheckObstacle : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedBool* SelfToTarget; // 0x50
		::MoleMole::Battle::Entity* ownerEntity; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* currentObstacles; // 0x60
		::BehaviorDesigner::Runtime::SharedFloat* maxDistance; // 0x68
		::Il2CppArray<::UnityEngine::RaycastHit>* rayResults; // 0x70
		::BehaviorDesigner::Runtime::SharedString* targetAnchorName; // 0x78
		::BehaviorDesigner::Runtime::SharedFloat* BoxHeight; // 0x80
		::Class_3_4E22895815E0F387* stageComponent; // 0x88
		::Class_3_F35B080B137ECC46* characterModel; // 0x90
		::MoleMole::Battle::Entity* targetEntity; // 0x98
		::BehaviorDesigner::Runtime::SharedString* ownerCustomName; // 0xA0
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0xA8
		::BehaviorDesigner::Runtime::SharedFloat* minDistance; // 0xB0
		::Class_3_B19369CC4AB45FA4* attackTargetComponent; // 0xB8
		::BehaviorDesigner::Runtime::SharedFloat* BoxDistance; // 0xC0
		::System::Collections::Generic::List_1<::System::String*>* tagListTmp; // 0xC8
		::BehaviorDesigner::Runtime::SharedFloat* BoxWidth; // 0xD0
		::Class_3_0D4C1A014C7CC9DE* levelaiComponent; // 0xD8
		::UnityEngine::Vector3 BoxCenter; // 0xE0
		::MoleMole::AITargetType ownerType; // 0xEC
		::MoleMole::CheckObstacle_ShapeType CheckShape; // 0xF0
		::System::Single AngleMin; // 0xF4
		::UnityEngine::Vector3 targetForward; // 0xF8
		::UnityEngine::Vector3 targetPos; // 0x104
		::System::Boolean IsSymmetry; // 0x110
		::System::Single AngleMax; // 0x114
		::MoleMole::AIMoveTargetType targetType; // 0x118
		::System::Int32 _collisionLayerMask; // 0x11C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKOBSTACLE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKOBSTACLE_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKOBSTACLE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKOBSTACLE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKOBSTACLE_ONEND_OFFSET))(this);
		}

		::System::Boolean NavmeshCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKOBSTACLE_NAVMESHCHECK_OFFSET))(this);
		}

		::System::Boolean BoxCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKOBSTACLE_BOXCHECK_OFFSET))(this);
		}

		::System::Boolean CheckNavmeshAngle(::System::Single minAngle, ::System::Single maxAngle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKOBSTACLE_CHECKNAVMESHANGLE_OFFSET))(this, minAngle, maxAngle);
		}

		::System::Boolean CheckAngle(::System::Single minAngle, ::System::Single maxAngle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKOBSTACLE_CHECKANGLE_OFFSET))(this, minAngle, maxAngle);
		}

		::System::Boolean SetTargetPos()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKOBSTACLE_SETTARGETPOS_OFFSET))(this);
		}

		::System::Boolean IsEntityVaild(::MoleMole::Battle::Entity* ent)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKOBSTACLE_ISENTITYVAILD_OFFSET))(this, ent);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKOBSTACLE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKOBSTACLE___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKOBSTACLE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKOBSTACLE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
