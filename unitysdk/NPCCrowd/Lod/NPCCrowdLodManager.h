#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Lod/CrowdLODDistanceSetting.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/NPCCrowd/Lod/NPCCrowdLodManager_LodParam.h"
#include "unitysdk/NPCCrowd/Lod/NPCCrowdLodManager_LodType.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"

namespace NPCCrowd { class NPCIDGeneratorInt; }
namespace NPCCrowd::Lod { class INPCCrowdDistanceCheckInterface; }
namespace NPCCrowd::Lod { class NPCCrowdLODInstance; }
namespace NPCCrowd::Lod { class NPCCrowdLodRuntimeData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define NPCCROWD_LOD_NPCCROWDLODMANAGER_CALNPCAVATARNEXTLODPHYSICS_OFFSET UNITYSDK_OFFSET(0x74527A0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_CALNPCAVATARNEXTLOD_OFFSET UNITYSDK_OFFSET(0x7452350)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_GETCAMERAFOV_OFFSET UNITYSDK_OFFSET(0x7451DB0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_GETDEFAULTFOV_OFFSET UNITYSDK_OFFSET(0x7451F70)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_GETREFPOINT_OFFSET UNITYSDK_OFFSET(0x7451820)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_GETVALIDLODPARAM_OFFSET UNITYSDK_OFFSET(0x74518B0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_GETVALIDREFPOINT_OFFSET UNITYSDK_OFFSET(0x7451CB0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_GET_CURRENTNPCLODTYPE_OFFSET UNITYSDK_OFFSET(0x7451D60)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x7451250)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_INITPHYSICS_OFFSET UNITYSDK_OFFSET(0x7451A70)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x74513C0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_ISCPULOD_OFFSET UNITYSDK_OFFSET(0x742FEC0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_ISGPULOD_OFFSET UNITYSDK_OFFSET(0x742FF80)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_ISGPUSIMPLEMODELLOD_OFFSET UNITYSDK_OFFSET(0x7440810)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_ISHIDELOD_OFFSET UNITYSDK_OFFSET(0x74407B0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_ONBIASCHANGED_OFFSET UNITYSDK_OFFSET(0x7452730)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_POPNPCLODTYPE_1_OFFSET UNITYSDK_OFFSET(0x7452280)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_POPNPCLODTYPE_OFFSET UNITYSDK_OFFSET(0x74521D0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_PUSHNPCLODTYPE_OFFSET UNITYSDK_OFFSET(0x7452120)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_RESETPHYSICSLOD0DISTANCE_OFFSET UNITYSDK_OFFSET(0x7452C60)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_SETGLOBALCROWDVISIBLE_OFFSET UNITYSDK_OFFSET(0x74520A0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_SETPHYSICSLOD0DISTANCE_OFFSET UNITYSDK_OFFSET(0x7452930)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_UPDATEMODEPHYSICS_OFFSET UNITYSDK_OFFSET(0x7452600)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_UPDATEMODES_OFFSET UNITYSDK_OFFSET(0x74524C0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x7452E20)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x7452D40)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x7452E40)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLodManager_TypeDefinitionIndex = 68709;

	class NPCCrowdLodManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::System::Boolean* StaticGet_GlobalCrowdVisible()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodManager_TypeDefinitionIndex)->GetStaticField(0xBB70);
		}
		static ::System::Single* StaticGet_Debug_LODSoftArea()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodManager_TypeDefinitionIndex)->GetStaticField(0xBB74);
		}
		::NPCCrowd::NPCIDGeneratorInt* IDGen; // 0x18
		::NPCCrowd::Lod::CrowdLODDistanceSetting cameraDistanceLodSetting; // 0x20
		::NPCCrowd::Lod::NPCCrowdLODInstance* lodInstance; // 0x38
		::NPCCrowd::Lod::CrowdLODDistanceSetting avatarDistanceLodSetting; // 0x40
		::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* lodRefPoint; // 0x58
		::NPCCrowd::Lod::NPCCrowdLODInstance* lodInstancePhysics; // 0x60
		::System::Collections::Generic::Stack_1<::NPCCrowd::Lod::NPCCrowdLodManager_LodType>* _typeStack; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Int32>* distance2Idx; // 0x70
		::System::Boolean customLod0Dist; // 0x78
		::System::Boolean bInited; // 0x79

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::Lod::NPCCrowdLodManager* Get()
		{
			return ((::NPCCrowd::Lod::NPCCrowdLodManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_GET_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_INIT_OFFSET))(this);
		}

		::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* GetRefPoint()
		{
			return ((::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_GETREFPOINT_OFFSET))(this);
		}

		::NPCCrowd::Lod::NPCCrowdLodManager_LodParam GetValidRefPoint()
		{
			return ((::NPCCrowd::Lod::NPCCrowdLodManager_LodParam(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_GETVALIDREFPOINT_OFFSET))(this);
		}

		::NPCCrowd::Lod::NPCCrowdLodManager_LodParam GetValidLodParam()
		{
			return ((::NPCCrowd::Lod::NPCCrowdLodManager_LodParam(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_GETVALIDLODPARAM_OFFSET))(this);
		}

		::NPCCrowd::Lod::NPCCrowdLodManager_LodType get_CurrentNpcLodType()
		{
			return ((::NPCCrowd::Lod::NPCCrowdLodManager_LodType(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_GET_CURRENTNPCLODTYPE_OFFSET))(this);
		}

		::System::Void SetGlobalCrowdVisible(::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_SETGLOBALCROWDVISIBLE_OFFSET))(this, visible);
		}

		::System::Void PushNpcLodType(::NPCCrowd::Lod::NPCCrowdLodManager_LodType type)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::NPCCrowdLodManager_LodType))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_PUSHNPCLODTYPE_OFFSET))(this, type);
		}

		::System::Void PopNpcLodType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_POPNPCLODTYPE_OFFSET))(this);
		}

		::System::Void PopNpcLodType_1(::NPCCrowd::Lod::NPCCrowdLodManager_LodType npcLodType)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::NPCCrowdLodManager_LodType))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_POPNPCLODTYPE_1_OFFSET))(this, npcLodType);
		}

		::System::Boolean CalNPCAvatarNextLod(::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData, ::NPCCrowd::Lod::ELODLevel& newLevel, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* npcAbility)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*, ::NPCCrowd::Lod::ELODLevel&, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_CALNPCAVATARNEXTLOD_OFFSET))(this, lodRuntimeData, newLevel, npcAbility);
		}

		::System::Void UpdateModes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_UPDATEMODES_OFFSET))(this);
		}

		::System::Void OnBiasChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_ONBIASCHANGED_OFFSET))(this);
		}

		static ::System::Boolean IsGPULOD(::NPCCrowd::Lod::ELODLevel lodLevel)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_ISGPULOD_OFFSET))(lodLevel);
		}

		static ::System::Boolean IsCPULOD(::NPCCrowd::Lod::ELODLevel lodLevel)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_ISCPULOD_OFFSET))(lodLevel);
		}

		static ::System::Boolean IsHideLOD(::NPCCrowd::Lod::ELODLevel lodLevel)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_ISHIDELOD_OFFSET))(lodLevel);
		}

		static ::System::Boolean IsGPUSimpleModelLod(::NPCCrowd::Lod::ELODLevel lodLevel)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_ISGPUSIMPLEMODELLOD_OFFSET))(lodLevel);
		}

		static ::System::Single GetCameraFov()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_GETCAMERAFOV_OFFSET))();
		}

		static ::System::Single GetDefaultFov()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_GETDEFAULTFOV_OFFSET))();
		}

		::System::Void InitPhysics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_INITPHYSICS_OFFSET))(this);
		}

		::System::Boolean CalNPCAvatarNextLodPhysics(::NPCCrowd::Lod::ELODLevel oldLevel, ::NPCCrowd::Lod::ELODLevel& newLevel, ::System::Boolean bOverrideShow, ::System::Boolean bOverrideHide, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* npcAbility)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel&, ::System::Boolean, ::System::Boolean, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_CALNPCAVATARNEXTLODPHYSICS_OFFSET))(this, oldLevel, newLevel, bOverrideShow, bOverrideHide, npcAbility);
		}

		::System::Void SetPhysicsLOD0Distance(::System::Single distance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_SETPHYSICSLOD0DISTANCE_OFFSET))(this, distance);
		}

		::System::Void ResetPhysicsLOD0Distance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_RESETPHYSICSLOD0DISTANCE_OFFSET))(this);
		}

		::System::Void UpdateModePhysics(::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* curRefPoint, ::System::Int32 paramIdx)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_UPDATEMODEPHYSICS_OFFSET))(this, curRefPoint, paramIdx);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER___BASE_INIT_OFFSET))(this);
		}
	};
}
