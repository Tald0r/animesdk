#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CameraStoryDataActiveCondition.h"

namespace Nap::NapECS { class EcsWorld; }

#define MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITIONBYDEFAULT_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xB46ABB0)
#define MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITIONBYDEFAULT_PASS_OFFSET UNITYSDK_OFFSET(0xB46AB30)
#define MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITIONBYDEFAULT__CTOR_OFFSET UNITYSDK_OFFSET(0xB46ABC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraStoryDataActiveConditionByDefault_TypeDefinitionIndex = 60372;

	class CameraStoryDataActiveConditionByDefault : public ::MoleMole::Config::CameraStoryDataActiveCondition
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITIONBYDEFAULT__CTOR_OFFSET))(this);
		}

		::System::Boolean Pass(::Nap::NapECS::EcsWorld* world, ::System::UInt32 playerId, ::System::UInt32 npcId)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITIONBYDEFAULT_PASS_OFFSET))(this, world, playerId, npcId);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITIONBYDEFAULT_GET_PRIORITY_OFFSET))(this);
		}
	};
}
