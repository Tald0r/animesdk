#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_F33F9DC5F4112336;
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedInt; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CHECKISANIMATORNAME_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x916B7F0)
#define MOLEMOLE_CHECKISANIMATORNAME_ONRESET_OFFSET UNITYSDK_OFFSET(0x916C260)
#define MOLEMOLE_CHECKISANIMATORNAME_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x916B9D0)
#define MOLEMOLE_CHECKISANIMATORNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x916C360)
#define MOLEMOLE_CHECKISANIMATORNAME___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x916C3A0)
#define MOLEMOLE_CHECKISANIMATORNAME___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x916C430)
#define MOLEMOLE_CHECKISANIMATORNAME___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x916C4C0)

namespace MoleMole
{
	inline static constexpr unsigned int CheckIsAnimatorName_TypeDefinitionIndex = 46425;

	class CheckIsAnimatorName : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedInt* startFrame; // 0x50
		::BehaviorDesigner::Runtime::SharedBool* maxEndFrame; // 0x58
		::BehaviorDesigner::Runtime::SharedBool* maxStartFrame; // 0x60
		::Class_3_F33F9DC5F4112336* animatorComponent; // 0x68
		::MoleMole::Battle::Entity* ownerEntity; // 0x70
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x78
		::BehaviorDesigner::Runtime::SharedInt* index; // 0x80
		::BehaviorDesigner::Runtime::SharedString* name; // 0x88
		::BehaviorDesigner::Runtime::SharedInt* endFrame; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISANIMATORNAME__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISANIMATORNAME_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISANIMATORNAME_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISANIMATORNAME_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISANIMATORNAME___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISANIMATORNAME___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISANIMATORNAME___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
