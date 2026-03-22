#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
#include "unitysdk/NPCCrowd/Ability/NPCEntityNativeData.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeLinker.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTaskVirtualProxy.h"
#include "unitysdk/UnrealTypes/FReadonlyStructView.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"
#include "unitysdk/UnrealTypes/FStructView.h"

#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKVIRTUALPROXY_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x5DF9EC0)
#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKVIRTUALPROXY_GETNATIVEDATA_OFFSET UNITYSDK_OFFSET(0x5DFAEF0)
#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKVIRTUALPROXY_LINK_OFFSET UNITYSDK_OFFSET(0x5DF9D00)
#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKVIRTUALPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x5DF9F90)
#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKVIRTUALPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x5DFB0E0)
#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKVIRTUALPROXY___BASE_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x5DFB0F0)
#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKVIRTUALPROXY___BASE_LINK_OFFSET UNITYSDK_OFFSET(0x5DFB150)
#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKVIRTUALPROXY___BASE_TICK_OFFSET UNITYSDK_OFFSET(0x5DFB160)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CarQueueMovingUpdateTaskVirtualProxy_TypeDefinitionIndex = 67814;

	class CarQueueMovingUpdateTaskVirtualProxy : public ::StateTreeCore::StateTreeTaskVirtualProxy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKVIRTUALPROXY__CTOR_OFFSET))(this);
		}

		::System::Boolean Link(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKVIRTUALPROXY_LINK_OFFSET))(this, self, linker);
		}

		::UnrealTypes::FStructHandle GetInstanceDataType()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKVIRTUALPROXY_GETINSTANCEDATATYPE_OFFSET))(this);
		}

		::StateTreeCore::StateTreeRunStatus Tick(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKVIRTUALPROXY_TICK_OFFSET))(this, self, context, deltaTime);
		}

		static ::NPCCrowd::Ability::NPCEntityNativeData GetNativeData(::System::UInt32 entityId, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> entityMap)
		{
			return ((::NPCCrowd::Ability::NPCEntityNativeData(*)(::System::UInt32, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKVIRTUALPROXY_GETNATIVEDATA_OFFSET))(entityId, entityMap);
		}

		::UnrealTypes::FStructHandle __base_GetInstanceDataType()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKVIRTUALPROXY___BASE_GETINSTANCEDATATYPE_OFFSET))(this);
		}

		::System::Boolean __base_Link(::UnrealTypes::FStructView& P0, ::StateTreeCore::StateTreeLinker& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKVIRTUALPROXY___BASE_LINK_OFFSET))(this, P0, P1);
		}

		::StateTreeCore::StateTreeRunStatus __base_Tick(::UnrealTypes::FReadonlyStructView& P0, ::StateTreeCore::StateTreeExecutionContext& P1, ::System::Single P2)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKVIRTUALPROXY___BASE_TICK_OFFSET))(this, P0, P1, P2);
		}
	};
}
