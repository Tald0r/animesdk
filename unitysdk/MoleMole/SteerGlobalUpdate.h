#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_883FBE6CFFAC5DA2;
class Class_3_AA6DF3A878195D3F;
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_STEERGLOBALUPDATE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xB8C7C00)
#define MOLEMOLE_STEERGLOBALUPDATE_ONSTART_OFFSET UNITYSDK_OFFSET(0xB8C7E60)
#define MOLEMOLE_STEERGLOBALUPDATE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xB8C8230)
#define MOLEMOLE_STEERGLOBALUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0xB8C8290)
#define MOLEMOLE_STEERGLOBALUPDATE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xB8C8330)
#define MOLEMOLE_STEERGLOBALUPDATE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0xB8C83C0)
#define MOLEMOLE_STEERGLOBALUPDATE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xB8C8450)

namespace MoleMole
{
	inline static constexpr unsigned int SteerGlobalUpdate_TypeDefinitionIndex = 54282;

	class SteerGlobalUpdate : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::SharedGameEntity* Entity; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* RVOWeight; // 0x60
		::Class_3_AA6DF3A878195D3F* steerComponent; // 0x68
		::BehaviorDesigner::Runtime::SharedFloat* RVOPriority; // 0x70
		::BehaviorDesigner::Runtime::SharedFloat* IdleLength; // 0x78
		::MoleMole::Battle::Entity* ownerEntity; // 0x80
		::BehaviorDesigner::Runtime::SharedFloat* NearWeight; // 0x88
		::Class_3_883FBE6CFFAC5DA2* rvoComponent; // 0x90
		::BehaviorDesigner::Runtime::SharedFloat* CameraWeight; // 0x98
		::BehaviorDesigner::Runtime::SharedFloat* SeparateGatherWeight; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGLOBALUPDATE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGLOBALUPDATE_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGLOBALUPDATE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGLOBALUPDATE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGLOBALUPDATE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGLOBALUPDATE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STEERGLOBALUPDATE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
