#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeLinker.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTaskVirtualProxy.h"
#include "unitysdk/UnrealTypes/FReadonlyStructView.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"
#include "unitysdk/UnrealTypes/FStructView.h"

#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASKVIRTUALPROXY_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x7578EA0)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASKVIRTUALPROXY_LINK_OFFSET UNITYSDK_OFFSET(0x7578CE0)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASKVIRTUALPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x7578F70)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASKVIRTUALPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x7579190)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASKVIRTUALPROXY___BASE_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x75791A0)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASKVIRTUALPROXY___BASE_LINK_OFFSET UNITYSDK_OFFSET(0x7579200)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASKVIRTUALPROXY___BASE_TICK_OFFSET UNITYSDK_OFFSET(0x7579210)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CarQueueUpdateEnvironmentTaskVirtualProxy_TypeDefinitionIndex = 62001;

	class CarQueueUpdateEnvironmentTaskVirtualProxy : public ::StateTreeCore::StateTreeTaskVirtualProxy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASKVIRTUALPROXY__CTOR_OFFSET))(this);
		}

		::System::Boolean Link(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASKVIRTUALPROXY_LINK_OFFSET))(this, self, linker);
		}

		::UnrealTypes::FStructHandle GetInstanceDataType()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASKVIRTUALPROXY_GETINSTANCEDATATYPE_OFFSET))(this);
		}

		::StateTreeCore::StateTreeRunStatus Tick(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASKVIRTUALPROXY_TICK_OFFSET))(this, self, context, deltaTime);
		}

		::UnrealTypes::FStructHandle __base_GetInstanceDataType()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASKVIRTUALPROXY___BASE_GETINSTANCEDATATYPE_OFFSET))(this);
		}

		::System::Boolean __base_Link(::UnrealTypes::FStructView& P0, ::StateTreeCore::StateTreeLinker& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASKVIRTUALPROXY___BASE_LINK_OFFSET))(this, P0, P1);
		}

		::StateTreeCore::StateTreeRunStatus __base_Tick(::UnrealTypes::FReadonlyStructView& P0, ::StateTreeCore::StateTreeExecutionContext& P1, ::System::Single P2)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASKVIRTUALPROXY___BASE_TICK_OFFSET))(this, P0, P1, P2);
		}
	};
}
