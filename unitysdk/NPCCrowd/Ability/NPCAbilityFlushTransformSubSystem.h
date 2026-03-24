#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/HierarchicalHashGrid2D_2.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
#include "unitysdk/NPCCrowd/Ability/NPCEntityNativeData.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItem.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItemEqualsFunc.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleSubSystemBase.h"

namespace Nap::NapECS { class EcsWorld; }

#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x76CE4F0)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_GET_OFFSET UNITYSDK_OFFSET(0x76CDFB0)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_INIT_OFFSET UNITYSDK_OFFSET(0x76CE1C0)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x76CE660)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x76CE3B0)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x76CE710)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x76CE120)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x76CE850)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x76CE840)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM___BASE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x76CE860)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x76CE870)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM___BASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x76CE8D0)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x76CE940)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM___BASE_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x76CE9A0)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM___BASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x76CEA10)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityFlushTransformSubSystem_TypeDefinitionIndex = 51475;

	class NPCAbilityFlushTransformSubSystem : public ::NPCCrowd::NPCCrowdModuleSubSystemBase
	{
	public:
		static ::System::Boolean* StaticGet_bIsFreezeMovement()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityFlushTransformSubSystem_TypeDefinitionIndex)->GetStaticField(0x11ED0);
		}
		::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> NativeData; // 0x20
		::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc> ObstacleGrid; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::Ability::NPCAbilityFlushTransformSubSystem* Get()
		{
			return ((::NPCCrowd::Ability::NPCAbilityFlushTransformSubSystem*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_GET_OFFSET))();
		}

		::System::Boolean ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_SHOULDTICK_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_INIT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void CreateFilters(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_CREATEFILTERS_OFFSET))(this, world);
		}

		::System::Void LateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_LATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void PostLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_POSTLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void __base_CreateFilters(::Nap::NapECS::EcsWorld* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM___BASE_CREATEFILTERS_OFFSET))(this, P0);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_LateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM___BASE_LATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_PostLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM___BASE_POSTLATEUPDATE_OFFSET))(this, P0);
		}

		::System::Boolean __base_ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM___BASE_SHOULDTICK_OFFSET))(this);
		}
	};
}
