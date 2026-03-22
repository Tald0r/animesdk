#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AITargetType.h"

class Class_3_B19369CC4AB45FA4;
class Class_3_F97B015544BE936B;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_REMOVETAG_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x6B1DB00)
#define MOLEMOLE_REMOVETAG_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x6B1DD90)
#define MOLEMOLE_REMOVETAG__CTOR_OFFSET UNITYSDK_OFFSET(0x6B1E010)
#define MOLEMOLE_REMOVETAG___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x6B1E050)
#define MOLEMOLE_REMOVETAG___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x6B1E0E0)

namespace MoleMole
{
	inline static constexpr unsigned int RemoveTag_TypeDefinitionIndex = 51963;

	class RemoveTag : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::Battle::Entity* ownerEntity; // 0x58
		::Class_3_B19369CC4AB45FA4* attackTargetComponent; // 0x60
		::System::String* TagName; // 0x68
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x70
		::Class_3_F97B015544BE936B* characterData; // 0x78
		::MoleMole::AITargetType TargetType; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REMOVETAG__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REMOVETAG_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REMOVETAG_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REMOVETAG___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REMOVETAG___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
