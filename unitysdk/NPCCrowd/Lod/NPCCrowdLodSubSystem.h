#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleSubSystemBase.h"

class Class_3_F2DAD7F45F518868;
namespace NPCCrowd { class CrowdTickControlInstance; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_CHECKLOD_OFFSET UNITYSDK_OFFSET(0x6BBEAD0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x6BBD600)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_INIT_OFFSET UNITYSDK_OFFSET(0x6BBDFE0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x6BBE120)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ONENTITYREADY_OFFSET UNITYSDK_OFFSET(0x6BBD910)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ONENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0x6BBDD00)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x6BBF210)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_REGISTERTICKCONTROLINSTANCE_OFFSET UNITYSDK_OFFSET(0x6BBDEE0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_SETNPCLOD_OFFSET UNITYSDK_OFFSET(0x6BBEBA0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_UPDATENPCLOD_OFFSET UNITYSDK_OFFSET(0x6BBE540)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x6BBE240)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x6BBF560)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x6BBF550)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x6BBF670)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x6BBF680)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x6BBF6E0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x6BBF740)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x6BBF7B0)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLodSubSystem_TypeDefinitionIndex = 70757;

	class NPCCrowdLodSubSystem : public ::NPCCrowd::NPCCrowdModuleSubSystemBase
	{
	public:
		static ::System::Collections::Generic::List_1<::NPCCrowd::CrowdTickControlInstance*>** StaticGet_AllTickControlInstances()
		{
			return (::System::Collections::Generic::List_1<::NPCCrowd::CrowdTickControlInstance*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0x2EF90);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_LODTickScaleList()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0x2EF98);
		}
		static ::NPCCrowd::CrowdTickControlInstance** StaticGet_LODTickControlInstance()
		{
			return (::NPCCrowd::CrowdTickControlInstance**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0x2EFA0);
		}
		static ::System::Single* StaticGet_lastUpdateDirectionalMeshTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0xB460);
		}
		static ::System::Single* StaticGet_UpdateDirectionalMeshIntervalTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem_TypeDefinitionIndex)->GetStaticField(0xB464);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM__CCTOR_OFFSET))();
		}

		::System::Void CreateFilters(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_CREATEFILTERS_OFFSET))(this, world);
		}

		static ::System::Void OnEntityReady(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ONENTITYREADY_OFFSET))(entityId);
		}

		static ::System::Void OnEntityRemove(::Nap::NapECS::EcsEntity* entity)
		{
			return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ONENTITYREMOVE_OFFSET))(entity);
		}

		static ::System::Int32 RegisterTickControlInstance(::NPCCrowd::CrowdTickControlInstance* instance)
		{
			return ((::System::Int32(*)(::NPCCrowd::CrowdTickControlInstance*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_REGISTERTICKCONTROLINSTANCE_OFFSET))(instance);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_INIT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_UPDATE_OFFSET))(this, deltaTime);
		}

		static ::System::Void UpdateNPCLOD(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_UPDATENPCLOD_OFFSET))(npcComp);
		}

		::System::Void PostLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_POSTLATEUPDATE_OFFSET))(this, deltaTime);
		}

		static ::System::Void SetNPCLOD(::Class_3_F2DAD7F45F518868* npcComp, ::NPCCrowd::Lod::ELODLevel oldLOD, ::NPCCrowd::Lod::ELODLevel newLOD, ::System::Boolean forceNoFade)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_SETNPCLOD_OFFSET))(npcComp, oldLOD, newLOD, forceNoFade);
		}

		static ::System::Void CheckLOD(::Class_3_F2DAD7F45F518868* npcComp, ::System::Boolean forceNoFade)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM_CHECKLOD_OFFSET))(npcComp, forceNoFade);
		}

		::System::Void __base_CreateFilters(::Nap::NapECS::EcsWorld* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_CREATEFILTERS_OFFSET))(this, P0);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_PostLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_POSTLATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
