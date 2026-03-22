#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Avatar/NPCAvatarSubSystem___c__DisplayClass8_0.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleSubSystemBase.h"

class Class_3_9AE843FF905C0BDB;
class Class_3_C0D5B1A036ED00F0;
class Class_3_F2DAD7F45F518868;
class NPCAvatarRuntimeData;
namespace MoleMole::Battle { class Entity; }
namespace NPCCrowd { class NPCIDGeneratorInt; }
namespace NPCCrowd::Ability { class NPCAbility; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsWorld; }

#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x6B57850)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITACCESSORYINFO_OFFSET UNITYSDK_OFFSET(0x6B58270)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITANIMATION_OFFSET UNITYSDK_OFFSET(0x6B58430)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITAUDIO_OFFSET UNITYSDK_OFFSET(0x6B583A0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITLOOKATIK_OFFSET UNITYSDK_OFFSET(0x6B59E00)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INIT_OFFSET UNITYSDK_OFFSET(0x6B57780)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONENTITYADD_OFFSET UNITYSDK_OFFSET(0x6B57AE0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONENTITYREADY_OFFSET UNITYSDK_OFFSET(0x6B58D30)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0x6B5A1F0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_RELEASEAUDIO_OFFSET UNITYSDK_OFFSET(0x6B5A920)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_UPDATEAUDIO_OFFSET UNITYSDK_OFFSET(0x6B5B9A0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_UPDATEDITHERSTATE_OFFSET UNITYSDK_OFFSET(0x6B5B790)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x6B5B420)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x6B5C100)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM__INITANIMATION_G__PLAYANIMATION_8_0_OFFSET UNITYSDK_OFFSET(0x6B5B5C0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___BASE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x6B5C110)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x6B5C120)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x6B5C180)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCAvatarSubSystem_TypeDefinitionIndex = 41385;

	class NPCAvatarSubSystem : public ::NPCCrowd::NPCCrowdModuleSubSystemBase
	{
	public:
		static ::NPCCrowd::NPCIDGeneratorInt** StaticGet_IDGen()
		{
			return (::NPCCrowd::NPCIDGeneratorInt**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarSubSystem_TypeDefinitionIndex)->GetStaticField(0x3C720);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INIT_OFFSET))(this);
		}

		::System::Void CreateFilters(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_CREATEFILTERS_OFFSET))(this, world);
		}

		static ::System::Void OnEntityAdd(::Nap::NapECS::EcsEntity* ecsEntity)
		{
			return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONENTITYADD_OFFSET))(ecsEntity);
		}

		static ::System::Void OnEntityReady(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONENTITYREADY_OFFSET))(entityId);
		}

		static ::System::Void OnEntityRemove(::Nap::NapECS::EcsEntity* ecsEntity)
		{
			return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_ONENTITYREMOVE_OFFSET))(ecsEntity);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_UPDATE_OFFSET))(this, deltaTime);
		}

		static ::System::Void InitAccessoryInfo(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITACCESSORYINFO_OFFSET))(npcComp);
		}

		static ::System::Void InitAnimation(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITANIMATION_OFFSET))(npcComp);
		}

		static ::System::Boolean InitLookAtIK(::Class_3_C0D5B1A036ED00F0* baseDataComp, ::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Boolean(*)(::Class_3_C0D5B1A036ED00F0*, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITLOOKATIK_OFFSET))(baseDataComp, npcComp);
		}

		static ::System::Void InitAudio(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_INITAUDIO_OFFSET))(npcComp);
		}

		static ::System::Void ReleaseAudio(::MoleMole::Battle::Entity* entity, ::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_RELEASEAUDIO_OFFSET))(entity, npcComp);
		}

		static ::System::Void UpdateDitherState(::NPCCrowd::Ability::NPCAbility* ability, ::NPCAvatarRuntimeData* avatarRuntimeData, ::Class_3_9AE843FF905C0BDB* materialComponent)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::NPCAbility*, ::NPCAvatarRuntimeData*, ::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_UPDATEDITHERSTATE_OFFSET))(ability, avatarRuntimeData, materialComponent);
		}

		static ::System::Void UpdateAudio(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM_UPDATEAUDIO_OFFSET))(npcComp);
		}

		static ::System::Boolean _InitAnimation_g__PlayAnimation_8_0(::System::Int32 animID, ::System::Int32 upperID, ::NPCCrowd::Avatar::NPCAvatarSubSystem___c__DisplayClass8_0& a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::NPCCrowd::Avatar::NPCAvatarSubSystem___c__DisplayClass8_0&))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM__INITANIMATION_G__PLAYANIMATION_8_0_OFFSET))(animID, upperID, a3);
		}

		::System::Void __base_CreateFilters(::Nap::NapECS::EcsWorld* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___BASE_CREATEFILTERS_OFFSET))(this, P0);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
