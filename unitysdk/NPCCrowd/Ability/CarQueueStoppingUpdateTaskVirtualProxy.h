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

#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKVIRTUALPROXY_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x6489F20)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKVIRTUALPROXY_GETNATIVEDATA_OFFSET UNITYSDK_OFFSET(0x648A9C0)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKVIRTUALPROXY_LINK_OFFSET UNITYSDK_OFFSET(0x6489D60)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKVIRTUALPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x6489FF0)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKVIRTUALPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x648ABB0)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKVIRTUALPROXY___BASE_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x648ABC0)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKVIRTUALPROXY___BASE_LINK_OFFSET UNITYSDK_OFFSET(0x648AC20)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKVIRTUALPROXY___BASE_TICK_OFFSET UNITYSDK_OFFSET(0x648AC30)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CarQueueStoppingUpdateTaskVirtualProxy_TypeDefinitionIndex = 52106;

	class CarQueueStoppingUpdateTaskVirtualProxy : public ::StateTreeCore::StateTreeTaskVirtualProxy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKVIRTUALPROXY__CTOR_OFFSET))(this);
		}

		::System::Boolean Link(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKVIRTUALPROXY_LINK_OFFSET))(this, self, linker);
		}

		::UnrealTypes::FStructHandle GetInstanceDataType()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKVIRTUALPROXY_GETINSTANCEDATATYPE_OFFSET))(this);
		}

		::StateTreeCore::StateTreeRunStatus Tick(::UnrealTypes::FReadonlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKVIRTUALPROXY_TICK_OFFSET))(this, self, context, deltaTime);
		}

		static ::NPCCrowd::Ability::NPCEntityNativeData GetNativeData(::System::UInt32 entityId, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> entityMap)
		{
			return ((::NPCCrowd::Ability::NPCEntityNativeData(*)(::System::UInt32, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKVIRTUALPROXY_GETNATIVEDATA_OFFSET))(entityId, entityMap);
		}

		::UnrealTypes::FStructHandle __base_GetInstanceDataType()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKVIRTUALPROXY___BASE_GETINSTANCEDATATYPE_OFFSET))(this);
		}

		::System::Boolean __base_Link(::UnrealTypes::FStructView& P0, ::StateTreeCore::StateTreeLinker& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKVIRTUALPROXY___BASE_LINK_OFFSET))(this, P0, P1);
		}

		::StateTreeCore::StateTreeRunStatus __base_Tick(::UnrealTypes::FReadonlyStructView& P0, ::StateTreeCore::StateTreeExecutionContext& P1, ::System::Single P2)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadonlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKVIRTUALPROXY___BASE_TICK_OFFSET))(this, P0, P1, P2);
		}
	};
}
