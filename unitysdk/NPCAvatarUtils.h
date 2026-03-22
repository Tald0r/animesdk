#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/NPCAvatarMeshAssetsSO_FNPCAvatarCapsuleCollider.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/NPCCrowd/Lod/NPCLODRendererItem.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_3_9AE843FF905C0BDB;
class Class_3_F2DAD7F45F518868;
class Class_3_F35B080B137ECC46;
class NPCAvatarMeshAssetsSO;
class NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets;
class NPCAvatarRuntimeData;
class NPCCrowdMaterialOverrideParamsInfo;
namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace NPCCrowd::Animation { class NPCCrowdAnimationData; }
namespace NPCCrowd::Animation { class NPCCrowdAnimationInstancerRuntimeData; }
namespace NPCCrowd::Animation { class NPCUnionAnimator; }
namespace NPCCrowd::Avatar { class NPCAvatarGOReference; }
namespace NPCCrowd::CrowdPhysics { class NPCPhysicsRuntimeData; }
namespace NPCCrowd::Lod { class NPCCrowdLodRuntimeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }
template <typename T> class NPCSoftAssetPath_1;

#define NPCAVATARUTILS_CHECKORSETUPNPCCOLLIDERSIZE_OFFSET UNITYSDK_OFFSET(0x6483990)
#define NPCAVATARUTILS_COLLECTALLRENDERERITEMS_OFFSET UNITYSDK_OFFSET(0x6484C10)
#define NPCAVATARUTILS_CREATELODRENDERERITEM_OFFSET UNITYSDK_OFFSET(0x6484520)
#define NPCAVATARUTILS_DISABLEAVATARCOLLIDER_OFFSET UNITYSDK_OFFSET(0x6483860)
#define NPCAVATARUTILS_ENABLEAVATARCOLLIDER_1_OFFSET UNITYSDK_OFFSET(0x6483730)
#define NPCAVATARUTILS_ENABLEAVATARCOLLIDER_OFFSET UNITYSDK_OFFSET(0x64832D0)
#define NPCAVATARUTILS_ENABLEGPULOD_OFFSET UNITYSDK_OFFSET(0x6480A60)
#define NPCAVATARUTILS_GETFADETAG_OFFSET UNITYSDK_OFFSET(0x6480210)
#define NPCAVATARUTILS_GETLODMATERIALS_OFFSET UNITYSDK_OFFSET(0x64842E0)
#define NPCAVATARUTILS_GETPARTCPUMESHASYNC_OFFSET UNITYSDK_OFFSET(0x6482D30)
#define NPCAVATARUTILS_GETPARTGPUMESHASYNC_OFFSET UNITYSDK_OFFSET(0x6482E40)
#define NPCAVATARUTILS_GETPARTRENDERER_OFFSET UNITYSDK_OFFSET(0x6484A20)
#define NPCAVATARUTILS_GETREALVALIDLODLEVEL_OFFSET UNITYSDK_OFFSET(0x6481CD0)
#define NPCAVATARUTILS_ISLODRESVALID_OFFSET UNITYSDK_OFFSET(0x6481DD0)
#define NPCAVATARUTILS_LOADMESHCPULODASYNC_OFFSET UNITYSDK_OFFSET(0x6480850)
#define NPCAVATARUTILS_LOADMESHGPULODASYNC_OFFSET UNITYSDK_OFFSET(0x6480950)
#define NPCAVATARUTILS_LOADNEWLODASSET_OFFSET UNITYSDK_OFFSET(0x6485220)
#define NPCAVATARUTILS_OVERRIDEPARTRENDERERMATERIAL_OFFSET UNITYSDK_OFFSET(0x6482810)
#define NPCAVATARUTILS_POSTFADE_OFFSET UNITYSDK_OFFSET(0x64854C0)
#define NPCAVATARUTILS_POSTSETLODMESH_OFFSET UNITYSDK_OFFSET(0x6481980)
#define NPCAVATARUTILS_REFRESHDITHERTASK_OFFSET UNITYSDK_OFFSET(0x6480280)
#define NPCAVATARUTILS_REMOVETASK_OFFSET UNITYSDK_OFFSET(0x6480750)
#define NPCAVATARUTILS_RENDERERFADEOPERATIONASYNC_OFFSET UNITYSDK_OFFSET(0x6480400)
#define NPCAVATARUTILS_SETAUDIOEMITTER_OFFSET UNITYSDK_OFFSET(0x647F440)
#define NPCAVATARUTILS_SETAUDIOLOD_OFFSET UNITYSDK_OFFSET(0x647F120)
#define NPCAVATARUTILS_SETCPUPARTENABLE_OFFSET UNITYSDK_OFFSET(0x6481310)
#define NPCAVATARUTILS_SETGPUPARTENABLE_OFFSET UNITYSDK_OFFSET(0x6480DE0)
#define NPCAVATARUTILS_SETLODCHANGESTATE_OFFSET UNITYSDK_OFFSET(0x6484450)
#define NPCAVATARUTILS_SETLODMESH_OFFSET UNITYSDK_OFFSET(0x6480B40)
#define NPCAVATARUTILS_SETMESHGPULODANIM_OFFSET UNITYSDK_OFFSET(0x6482290)
#define NPCAVATARUTILS_SETPARENT_OFFSET UNITYSDK_OFFSET(0x647EDB0)
#define NPCAVATARUTILS_SETPHYSICLOD_OFFSET UNITYSDK_OFFSET(0x647EEF0)
#define NPCAVATARUTILS_SETRENDERERLODENABLE_OFFSET UNITYSDK_OFFSET(0x6481C20)
#define NPCAVATARUTILS_SETUPAVATARCOLLIDER_OFFSET UNITYSDK_OFFSET(0x6482F50)
#define NPCAVATARUTILS_SETUPNPCAVATARANIMATORSLOTTRANSFORMEXPOSE_OFFSET UNITYSDK_OFFSET(0x6483CD0)
#define NPCAVATARUTILS_STARTCHANGEMESHLOD_OFFSET UNITYSDK_OFFSET(0x6484350)
#define NPCAVATARUTILS_UPDATEGPULODSIMPLEMODELMESH_OFFSET UNITYSDK_OFFSET(0x6480060)
#define NPCAVATARUTILS_UPDATERENDERENTITYFLAG_OFFSET UNITYSDK_OFFSET(0x64853D0)
#define NPCAVATARUTILS_UPDATESHADOWPROXYLODCOMMON_OFFSET UNITYSDK_OFFSET(0x647FF90)
#define NPCAVATARUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x6485A90)
#define NPCAVATARUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x6485A80)

inline static constexpr unsigned int NPCAvatarUtils_TypeDefinitionIndex = 50615;

class NPCAvatarUtils : public ::System::Object
{
public:
	static ::System::String** StaticGet_Avatar_InLevel_Name()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarUtils_TypeDefinitionIndex)->GetStaticField(0x3AD80);
	}
	static ::System::String** StaticGet_Avatar_Crowd_GPU_SimpleModel_Name()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarUtils_TypeDefinitionIndex)->GetStaticField(0x3AD88);
	}
	static ::System::String** StaticGet_Avatar_Name()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarUtils_TypeDefinitionIndex)->GetStaticField(0x3AD90);
	}
	static ::System::String** StaticGet_Avatar_Crowd_Static_ShadowProxy_Name()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarUtils_TypeDefinitionIndex)->GetStaticField(0x3AD98);
	}
	static ::System::String** StaticGet_Avatar_Crowd_Name()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarUtils_TypeDefinitionIndex)->GetStaticField(0x3ADA0);
	}
	static ::System::String** StaticGet_Avatar_Galgame_Name()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarUtils_TypeDefinitionIndex)->GetStaticField(0x3ADA8);
	}
	static ::System::String** StaticGet_Avatar_Crowd_Skinned_ShadowProxy_Name()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarUtils_TypeDefinitionIndex)->GetStaticField(0x3ADB0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARUTILS__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCAVATARUTILS__CCTOR_OFFSET))();
	}

	static ::System::Void SetParent(::UnityEngine::GameObject* child, ::UnityEngine::Transform* parent)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_SETPARENT_OFFSET))(child, parent);
	}

	static ::System::Void SetPhysicLOD(::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo, ::NPCAvatarMeshAssetsSO* assetSo, ::NPCCrowd::CrowdPhysics::NPCPhysicsRuntimeData* physicsRuntimeData, ::NPCCrowd::Lod::ELODLevel oldLod, ::NPCCrowd::Lod::ELODLevel newLod)
	{
		return ((::System::Void(*)(::NPCCrowd::Avatar::NPCAvatarGOReference*, ::NPCAvatarMeshAssetsSO*, ::NPCCrowd::CrowdPhysics::NPCPhysicsRuntimeData*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_SETPHYSICLOD_OFFSET))(goInfo, assetSo, physicsRuntimeData, oldLod, newLod);
	}

	static ::System::Void SetAudioLOD(::Class_3_F2DAD7F45F518868* npcComp, ::System::UInt32 entityID, ::NPCCrowd::Lod::ELODLevel oldLod, ::NPCCrowd::Lod::ELODLevel newLod, ::System::Boolean isPathNPC)
	{
		return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*, ::System::UInt32, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_SETAUDIOLOD_OFFSET))(npcComp, entityID, oldLod, newLod, isPathNPC);
	}

	static ::System::Void SetAudioEmitter(::Class_3_F2DAD7F45F518868* npcComp, ::System::Boolean enabled)
	{
		return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_SETAUDIOEMITTER_OFFSET))(npcComp, enabled);
	}

	static ::Cysharp::Threading::Tasks::UniTaskVoid UpdateShadowProxyLodCommon(::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo, ::NPCAvatarMeshAssetsSO* assetSo, ::NPCCrowd::Lod::ELODLevel oldLod, ::NPCCrowd::Lod::ELODLevel lod, ::System::Threading::CancellationToken cancellationToken)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::NPCCrowd::Avatar::NPCAvatarGOReference*, ::NPCAvatarMeshAssetsSO*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_UPDATESHADOWPROXYLODCOMMON_OFFSET))(goInfo, assetSo, oldLod, lod, cancellationToken);
	}

	static ::System::Void UpdateGPULodSimpleModelMesh(::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo, ::NPCAvatarMeshAssetsSO* assetSo, ::NPCCrowd::Lod::ELODLevel lod)
	{
		return ((::System::Void(*)(::NPCCrowd::Avatar::NPCAvatarGOReference*, ::NPCAvatarMeshAssetsSO*, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_UPDATEGPULODSIMPLEMODELMESH_OFFSET))(goInfo, assetSo, lod);
	}

	static ::System::Int32 GetFadeTag(::System::Int32 entityID, ::NPCCrowd::Lod::ELODLevel lod)
	{
		return ((::System::Int32(*)(::System::Int32, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_GETFADETAG_OFFSET))(entityID, lod);
	}

	static ::System::Void RefreshDitherTask(::System::UInt32 entityID, ::NPCCrowd::Lod::ELODLevel lod, ::Il2CppArray<::NPCCrowd::Lod::NPCLODRendererItem>* renderers, ::Class_3_9AE843FF905C0BDB* materialComponent, ::System::Boolean fadein, ::NPCCrowd::Animation::NPCUnionAnimator* unionAnimator)
	{
		return ((::System::Void(*)(::System::UInt32, ::NPCCrowd::Lod::ELODLevel, ::Il2CppArray<::NPCCrowd::Lod::NPCLODRendererItem>*, ::Class_3_9AE843FF905C0BDB*, ::System::Boolean, ::NPCCrowd::Animation::NPCUnionAnimator*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_REFRESHDITHERTASK_OFFSET))(entityID, lod, renderers, materialComponent, fadein, unionAnimator);
	}

	static ::Cysharp::Threading::Tasks::UniTask RendererFadeOperationAsync(::System::Int32 entityID, ::NPCCrowd::Lod::ELODLevel lod, ::Il2CppArray<::NPCCrowd::Lod::NPCLODRendererItem>* renderers, ::System::Single fadeTime, ::System::Boolean bFadeIn, ::System::Threading::CancellationToken token, ::Class_3_9AE843FF905C0BDB* materialComponent, ::NPCCrowd::Animation::NPCUnionAnimator* unionAnimator)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Int32, ::NPCCrowd::Lod::ELODLevel, ::Il2CppArray<::NPCCrowd::Lod::NPCLODRendererItem>*, ::System::Single, ::System::Boolean, ::System::Threading::CancellationToken, ::Class_3_9AE843FF905C0BDB*, ::NPCCrowd::Animation::NPCUnionAnimator*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_RENDERERFADEOPERATIONASYNC_OFFSET))(entityID, lod, renderers, fadeTime, bFadeIn, token, materialComponent, unionAnimator);
	}

	static ::System::Void RemoveTask(::System::Int32 entityID, ::NPCCrowd::Lod::ELODLevel lod)
	{
		return ((::System::Void(*)(::System::Int32, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_REMOVETASK_OFFSET))(entityID, lod);
	}

	static ::Cysharp::Threading::Tasks::UniTask LoadMeshCPULODAsync(::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo, ::NPCAvatarMeshAssetsSO* assetSo, ::NPCCrowd::Lod::ELODLevel oldLod, ::NPCCrowd::Lod::ELODLevel lod, ::System::Threading::CancellationToken cancellationToken)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::NPCCrowd::Avatar::NPCAvatarGOReference*, ::NPCAvatarMeshAssetsSO*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_LOADMESHCPULODASYNC_OFFSET))(goInfo, assetSo, oldLod, lod, cancellationToken);
	}

	static ::Cysharp::Threading::Tasks::UniTask LoadMeshGPULODAsync(::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo, ::NPCAvatarMeshAssetsSO* assetSo, ::NPCCrowd::Lod::ELODLevel oldLod, ::NPCCrowd::Lod::ELODLevel lod, ::System::Threading::CancellationToken cancellationToken)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::NPCCrowd::Avatar::NPCAvatarGOReference*, ::NPCAvatarMeshAssetsSO*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_LOADMESHGPULODASYNC_OFFSET))(goInfo, assetSo, oldLod, lod, cancellationToken);
	}

	static ::System::Boolean EnableGpuLod(::NPCAvatarMeshAssetsSO* assetSo)
	{
		return ((::System::Boolean(*)(::NPCAvatarMeshAssetsSO*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_ENABLEGPULOD_OFFSET))(assetSo);
	}

	static ::System::Void SetLODMesh(::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo, ::NPCAvatarMeshAssetsSO* assetSo, ::NPCCrowd::Lod::ELODLevel oldLod, ::NPCCrowd::Lod::ELODLevel lod, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData)
	{
		return ((::System::Void(*)(::NPCCrowd::Avatar::NPCAvatarGOReference*, ::NPCAvatarMeshAssetsSO*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_SETLODMESH_OFFSET))(goInfo, assetSo, oldLod, lod, lodRuntimeData);
	}

	static ::System::Void PostSetLODMesh(::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo, ::NPCAvatarMeshAssetsSO* assetSo, ::NPCCrowd::Lod::ELODLevel oldLod, ::NPCCrowd::Lod::ELODLevel lod)
	{
		return ((::System::Void(*)(::NPCCrowd::Avatar::NPCAvatarGOReference*, ::NPCAvatarMeshAssetsSO*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_POSTSETLODMESH_OFFSET))(goInfo, assetSo, oldLod, lod);
	}

	static ::System::Void SetCPUPartEnable(::System::Boolean enable, ::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo, ::NPCAvatarMeshAssetsSO* assetSo, ::NPCCrowd::Lod::ELODLevel lod, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData)
	{
		return ((::System::Void(*)(::System::Boolean, ::NPCCrowd::Avatar::NPCAvatarGOReference*, ::NPCAvatarMeshAssetsSO*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_SETCPUPARTENABLE_OFFSET))(enable, goInfo, assetSo, lod, lodRuntimeData);
	}

	static ::System::Void SetGPUPartEnable(::System::Boolean enable, ::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData)
	{
		return ((::System::Void(*)(::System::Boolean, ::NPCCrowd::Avatar::NPCAvatarGOReference*, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_SETGPUPARTENABLE_OFFSET))(enable, goInfo, lodRuntimeData);
	}

	static ::NPCCrowd::Lod::ELODLevel GetRealValidLODLevel(::NPCCrowd::Lod::ELODLevel curLod, ::Class_3_F2DAD7F45F518868* npcComp, ::System::Boolean useHighLevel)
	{
		return ((::NPCCrowd::Lod::ELODLevel(*)(::NPCCrowd::Lod::ELODLevel, ::Class_3_F2DAD7F45F518868*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_GETREALVALIDLODLEVEL_OFFSET))(curLod, npcComp, useHighLevel);
	}

	static ::System::Boolean IsLODResValid(::Class_3_F2DAD7F45F518868* npcComp, ::NPCCrowd::Lod::ELODLevel lod)
	{
		return ((::System::Boolean(*)(::Class_3_F2DAD7F45F518868*, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_ISLODRESVALID_OFFSET))(npcComp, lod);
	}

	static ::System::Void SetMeshGPULODAnim(::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo, ::Il2CppArray<::UnityEngine::Material*>* gpumats, ::UnityEngine::MeshRenderer* mr, ::NPCCrowd::Animation::NPCCrowdAnimationData* animationData, ::System::Int32 gpuAnimIndex, ::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* runtimeData)
	{
		return ((::System::Void(*)(::NPCCrowd::Avatar::NPCAvatarGOReference*, ::Il2CppArray<::UnityEngine::Material*>*, ::UnityEngine::MeshRenderer*, ::NPCCrowd::Animation::NPCCrowdAnimationData*, ::System::Int32, ::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_SETMESHGPULODANIM_OFFSET))(goInfo, gpumats, mr, animationData, gpuAnimIndex, runtimeData);
	}

	static ::System::Void OverridePartRendererMaterial(::UnityEngine::Renderer* renderer, ::NPCCrowdMaterialOverrideParamsInfo* partOverrideInfo, ::System::UInt16 matIndex)
	{
		return ((::System::Void(*)(::UnityEngine::Renderer*, ::NPCCrowdMaterialOverrideParamsInfo*, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_OVERRIDEPARTRENDERERMATERIAL_OFFSET))(renderer, partOverrideInfo, matIndex);
	}

	static ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Mesh*> GetPartCPUMeshAsync(::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets* meshAss, ::NPCCrowd::Lod::ELODLevel lodLevel, ::NPCSoftAssetPath_1<::UnityEngine::Mesh*>* assetRef, ::System::Threading::CancellationToken cancellationToken)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Mesh*>(*)(::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets*, ::NPCCrowd::Lod::ELODLevel, ::NPCSoftAssetPath_1<::UnityEngine::Mesh*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_GETPARTCPUMESHASYNC_OFFSET))(meshAss, lodLevel, assetRef, cancellationToken);
	}

	static ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Mesh*> GetPartGPUMeshAsync(::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets* meshAss, ::NPCCrowd::Lod::ELODLevel lodLevel, ::NPCSoftAssetPath_1<::UnityEngine::Mesh*>* assetRef, ::System::Threading::CancellationToken cancellationToken)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Mesh*>(*)(::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets*, ::NPCCrowd::Lod::ELODLevel, ::NPCSoftAssetPath_1<::UnityEngine::Mesh*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_GETPARTGPUMESHASYNC_OFFSET))(meshAss, lodLevel, assetRef, cancellationToken);
	}

	static ::System::Void SetupAvatarCollider(::UnityEngine::Collider* cap, ::NPCAvatarMeshAssetsSO_FNPCAvatarCapsuleCollider collider)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::NPCAvatarMeshAssetsSO_FNPCAvatarCapsuleCollider))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_SETUPAVATARCOLLIDER_OFFSET))(cap, collider);
	}

	static ::System::Void EnableAvatarCollider(::Class_3_F2DAD7F45F518868* npcComponent, ::System::String* colliderKey)
	{
		return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*, ::System::String*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_ENABLEAVATARCOLLIDER_OFFSET))(npcComponent, colliderKey);
	}

	static ::System::Void EnableAvatarCollider_1(::Class_3_F2DAD7F45F518868* npcComponent)
	{
		return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_ENABLEAVATARCOLLIDER_1_OFFSET))(npcComponent);
	}

	static ::System::Void DisableAvatarCollider(::Class_3_F2DAD7F45F518868* npcComponent)
	{
		return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_DISABLEAVATARCOLLIDER_OFFSET))(npcComponent);
	}

	static ::System::Void CheckOrSetupNPCColliderSize(::Class_3_F35B080B137ECC46* modelComponent)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_CHECKORSETUPNPCCOLLIDERSIZE_OFFSET))(modelComponent);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>* SetupNPCAvatarAnimatorSlotTransformExpose(::UnityEngine::Animator* animator, ::UnityEngine::GameObject* avatarGo, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::String*>>* slotInfos)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>*(*)(::UnityEngine::Animator*, ::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::String*>>*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_SETUPNPCAVATARANIMATORSLOTTRANSFORMEXPOSE_OFFSET))(animator, avatarGo, slotInfos);
	}

	static ::System::Void GetLODMaterials(::Class_3_F2DAD7F45F518868* npcComp, ::Il2CppArray<::UnityEngine::Material*>*& materials)
	{
		return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*, ::Il2CppArray<::UnityEngine::Material*>*&))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_GETLODMATERIALS_OFFSET))(npcComp, materials);
	}

	static ::Cysharp::Threading::Tasks::UniTaskVoid StartChangeMeshLOD(::Class_3_F2DAD7F45F518868* npcComp, ::Class_3_9AE843FF905C0BDB* materialComponent, ::NPCCrowd::Lod::ELODLevel oldLod, ::NPCCrowd::Lod::ELODLevel lod, ::System::Boolean forceNoFade, ::System::Threading::CancellationToken cancellationToken)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::Class_3_F2DAD7F45F518868*, ::Class_3_9AE843FF905C0BDB*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_STARTCHANGEMESHLOD_OFFSET))(npcComp, materialComponent, oldLod, lod, forceNoFade, cancellationToken);
	}

	static ::System::Void SetLODChangeState(::Class_3_F2DAD7F45F518868* npcComp, ::System::Boolean changing)
	{
		return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_SETLODCHANGESTATE_OFFSET))(npcComp, changing);
	}

	static ::NPCCrowd::Lod::NPCLODRendererItem CreateLODRendererItem(::UnityEngine::Renderer* r, ::System::Boolean matInstanced)
	{
		return ((::NPCCrowd::Lod::NPCLODRendererItem(*)(::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_CREATELODRENDERERITEM_OFFSET))(r, matInstanced);
	}

	static ::UnityEngine::Renderer* GetPartRenderer(::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo, ::System::Int32 index, ::NPCCrowd::Lod::ELODLevel lod, ::System::Boolean getGPU)
	{
		return ((::UnityEngine::Renderer*(*)(::NPCCrowd::Avatar::NPCAvatarGOReference*, ::System::Int32, ::NPCCrowd::Lod::ELODLevel, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_GETPARTRENDERER_OFFSET))(goInfo, index, lod, getGPU);
	}

	static ::System::Void CollectAllRendererItems(::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData, ::NPCAvatarRuntimeData* avatarRuntimeData, ::NPCCrowd::Lod::ELODLevel oldLod, ::NPCCrowd::Lod::ELODLevel lod, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>* accessories)
	{
		return ((::System::Void(*)(::NPCCrowd::Lod::NPCCrowdLodRuntimeData*, ::NPCAvatarRuntimeData*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_COLLECTALLRENDERERITEMS_OFFSET))(lodRuntimeData, avatarRuntimeData, oldLod, lod, accessories);
	}

	static ::Cysharp::Threading::Tasks::UniTask LoadNewLODAsset(::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData, ::NPCAvatarRuntimeData* avatarRuntimeData, ::Class_3_9AE843FF905C0BDB* materialComponent, ::NPCCrowd::Lod::ELODLevel oldLod, ::NPCCrowd::Lod::ELODLevel lod, ::System::Threading::CancellationToken cancellationToken, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>* accessories, ::System::Boolean useGpuLod, ::Class_3_F2DAD7F45F518868* npcCmp)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::NPCCrowd::Lod::NPCCrowdLodRuntimeData*, ::NPCAvatarRuntimeData*, ::Class_3_9AE843FF905C0BDB*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::System::Threading::CancellationToken, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>*, ::System::Boolean, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_LOADNEWLODASSET_OFFSET))(lodRuntimeData, avatarRuntimeData, materialComponent, oldLod, lod, cancellationToken, accessories, useGpuLod, npcCmp);
	}

	static ::System::Void UpdateRenderEntityFlag(::UnityEngine::Renderer* renderer, ::System::Boolean isSimpleModel)
	{
		return ((::System::Void(*)(::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_UPDATERENDERENTITYFLAG_OFFSET))(renderer, isSimpleModel);
	}

	static ::System::Void PostFade(::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo, ::NPCAvatarMeshAssetsSO* assetSo, ::NPCCrowd::Lod::ELODLevel oldLod, ::NPCCrowd::Lod::ELODLevel lod, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>* accessories, ::Class_3_9AE843FF905C0BDB* materialComponent, ::System::Boolean useGpuLod)
	{
		return ((::System::Void(*)(::NPCCrowd::Avatar::NPCAvatarGOReference*, ::NPCAvatarMeshAssetsSO*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>*, ::Class_3_9AE843FF905C0BDB*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_POSTFADE_OFFSET))(goInfo, assetSo, oldLod, lod, accessories, materialComponent, useGpuLod);
	}

	static ::System::Void SetRendererLODEnable(::UnityEngine::Renderer* renderer, ::System::Boolean enable, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData)
	{
		return ((::System::Void(*)(::UnityEngine::Renderer*, ::System::Boolean, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS_SETRENDERERLODENABLE_OFFSET))(renderer, enable, lodRuntimeData);
	}
};
