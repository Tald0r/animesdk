#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ExtractBoneInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeHashMap_2.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NapLightData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightFilter.h"
#include "unitysdk/UnityEngine/Rendering/Universal/NapCBProperty.h"
#include "unitysdk/UnityEngine/Rendering/Universal/NapRenderEntityManager_CachedCameraData.h"
#include "unitysdk/UnityEngine/Rendering/Universal/NapRenderEntityManager___c__DisplayClass93_0.h"
#include "unitysdk/UnityEngine/Rendering/Universal/NapRenderEntityManager___c__DisplayClass93_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/NapRenderEntityManager___c__DisplayClass93_2.h"
#include "unitysdk/UnityEngine/Rendering/Universal/NapRenderEntityPrepareInput1.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class NapRenderEntity;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Profiling { class CustomSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_ADD_OFFSET UNITYSDK_OFFSET(0x17787120)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0x17787CF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_CONTAINS_OFFSET UNITYSDK_OFFSET(0x17787C90)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17786780)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_ENSUREMAPCAPACITY_OFFSET UNITYSDK_OFFSET(0x1778E200)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_FINDENTITY_OFFSET UNITYSDK_OFFSET(0x17787AA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GETBONEINFOMAP_OFFSET UNITYSDK_OFFSET(0x1778E0D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GETCHARACTERGPUDATAPREPARED_OFFSET UNITYSDK_OFFSET(0x17786710)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GETDUMMYGPUDATASIZE_OFFSET UNITYSDK_OFFSET(0x177870B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GETENTITY_OFFSET UNITYSDK_OFFSET(0x17787D60)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GET_CHARACTERGPUDATAPREPARED_OFFSET UNITYSDK_OFFSET(0x177866A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x17786670)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_MARKPRIORITYDIRTY_OFFSET UNITYSDK_OFFSET(0x17787E00)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_PREPAREAFTERCULLING_OFFSET UNITYSDK_OFFSET(0x17789830)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_PREPAREAFTERLIGHTLOOP_OFFSET UNITYSDK_OFFSET(0x1778A9A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x17787A00)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_REMOVE_OFFSET UNITYSDK_OFFSET(0x17787620)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_SETASSETS_OFFSET UNITYSDK_OFFSET(0x17786A50)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_SETUPDUMMYDATA_OFFSET UNITYSDK_OFFSET(0x17786AA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_SET_CHARACTERGPUDATAPREPARED_OFFSET UNITYSDK_OFFSET(0x177866E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_SYNCNAPCB_OFFSET UNITYSDK_OFFSET(0x1778D310)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_UPDATEBONETRANSFORMSFORNATIVE_OFFSET UNITYSDK_OFFSET(0x17789550)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_UPDATELIGHTDATA_OFFSET UNITYSDK_OFFSET(0x1778AA40)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_UPDATEPERFRAME_OFFSET UNITYSDK_OFFSET(0x17787E50)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1778E690)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1778E490)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__PREPAREAFTERCULLING_G__GETLIGHTDIRECTION_90_0_OFFSET UNITYSDK_OFFSET(0x1778A7F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__ANGLEATTENUATION_93_10_OFFSET UNITYSDK_OFFSET(0x17790400)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__CALCULATELIGHTWEIGHT_93_3_OFFSET UNITYSDK_OFFSET(0x177900B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__CHECKDISTANCEOFAXIS_93_7_OFFSET UNITYSDK_OFFSET(0x1778D6F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__DISTANCEATTENUATIONB_93_9_OFFSET UNITYSDK_OFFSET(0x17790360)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__GETKERNEL_93_4_OFFSET UNITYSDK_OFFSET(0x1778DF60)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__GETPUNCTUALLIGHTDATAFROMCOMPONENT_93_2_OFFSET UNITYSDK_OFFSET(0x1778D720)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__GETPUNCTUALLIGHTDATAFROMNAPLIGHTDATA_93_1_OFFSET UNITYSDK_OFFSET(0x1778DEF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__ISBLACKCURTAIN_93_6_OFFSET UNITYSDK_OFFSET(0x177900A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__SETPUNCTUALLIGHT_93_0_OFFSET UNITYSDK_OFFSET(0x1778DA00)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__SORTLIGHTSIFNEEDED_93_5_OFFSET UNITYSDK_OFFSET(0x1778DAF0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapRenderEntityManager_TypeDefinitionIndex = 29548;

	class NapRenderEntityManager : public ::System::Object
	{
	public:
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_syncNapCB()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x224E0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CopyLightDataToNapCB()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x224E8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_SortLights()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x224F0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CheckValidAndActive()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x224F8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_AddIndicatedLightsForPreview()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22500);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CullingResults_GetRenderVisibleInCurrentCam()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22508);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_BatchQueryIsAlive0()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22510);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_BatchUpdateVisibility_CollectRenderers()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22518);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_LightFilterCull()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22520);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_GlobalKeywordAndFields()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22528);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_GetHeadBoneTransform()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22530);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_UpdateStencil()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22538);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_BatchUpdateVisibility()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22540);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_ResizeBoneInfoMap()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22548);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CacheLights()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22550);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CharacterRendering()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22558);
		}
		static ::System::Collections::Generic::List_1<::NapRenderEntity*>** StaticGet_avatarParticleArray()
		{
			return (::System::Collections::Generic::List_1<::NapRenderEntity*>**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22560);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_LightFilterTileLights()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22568);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_SetNapCBProperties()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22570);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_SortEntitiesByPriority()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22578);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_FixShadowCoverageOutOfFrustum()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22580);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_PrepareCharacterGiSampleData()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22588);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_UpdateRamp()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22590);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_BatchUpdateVisibility_ResizeNativeList()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22598);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CalculateCullingSphereCenter()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x225A0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_DispatchCompute()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x225A8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_UpdateVisibilities()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x225B0);
		}
		static ::UnityEngine::Rendering::Universal::NapRenderEntityManager** StaticGet__instance_k__BackingField()
		{
			return (::UnityEngine::Rendering::Universal::NapRenderEntityManager**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x225B8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_PrepareSharedVariables()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x225C0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_EditorRebindBuffers()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x225C8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_LightCulling()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x225D0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_prepareAfterLightLoop()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x225D8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CollectLightDataAndComputeInputs()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x225E0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_ReleaseTemp()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x225E8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_BatchQueryIsAlive1()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x225F0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CacheIsRendererAlive()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x225F8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CollectInputs()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22600);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_UpdateMainLightsData()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22608);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_PrepareAfterCulling()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22610);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_UpdatePerFrame()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22618);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CollectLights()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22620);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CacheCameraFields()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22628);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_updateLightGradient()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22630);
		}
		static ::UnityEngine::Rendering::Universal::LightFilter* StaticGet_lightFilter()
		{
			return (::UnityEngine::Rendering::Universal::LightFilter*)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x22638);
		}
		static ::System::Int32* StaticGet__StencilShadowBlendDst()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x5950);
		}
		static ::System::Boolean* StaticGet_skipRenderLoopLogic()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x5954);
		}
		static ::System::Boolean* StaticGet__CharacterGPUDataPrepared_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x5955);
		}
		static ::System::Boolean* StaticGet_wasArrayPropertiesOn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x5956);
		}
		static ::System::Int32* StaticGet__StencilShadowBlendDebugMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x5958);
		}
		static ::System::Int32* StaticGet__StencilShadowBlendSrc()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x595C);
		}
		::UnityEngine::ComputeBuffer* characterLights; // 0x10
		::UnityEngine::ComputeBuffer* prepareInputBuffer; // 0x18
		::UnityEngine::ComputeBuffer* debugBlendLightsBuffer; // 0x20
		::UnityEngine::ComputeBuffer* blendLightBuffer; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::NapRenderEntityPrepareInput1>* prepareInput; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* aliveQueryData; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::NapRenderEntityManager_CachedCameraData>* cachedCameraDatas; // 0x40
		::UnityEngine::ComputeBuffer* entityGpuDataBuffer; // 0x48
		::System::Collections::Generic::List_1<::NapRenderEntity*>* Entities; // 0x50
		::UnityEngine::ComputeBuffer* gpuLightDatasForChar; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* visibilityQueryData; // 0x60
		::UnityEngine::ComputeShader* computeShader; // 0x68
		::UnityEngine::ComputeBuffer* dummyGpuDataBuffer; // 0x70
		::Unity::Collections::NativeList_1<::System::Boolean> queryResult1; // 0x78
		::System::Boolean m_PreviousFrameGradientLightActive; // 0x88
		::System::Boolean priorityDirty; // 0x89
		::System::Int32 previousCheckVisibilityFrameIndex; // 0x8C
		::Unity::Collections::NativeHashMap_2<::System::UInt32, ::ExtractBoneInfo> _boneInfoMap; // 0x90
		::Unity::Collections::NativeList_1<::System::Boolean> queryResult0; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::Universal::NapRenderEntityManager* get_instance()
		{
			return ((::UnityEngine::Rendering::Universal::NapRenderEntityManager*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Boolean get_CharacterGPUDataPrepared()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GET_CHARACTERGPUDATAPREPARED_OFFSET))();
		}

		static ::System::Void set_CharacterGPUDataPrepared(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_SET_CHARACTERGPUDATAPREPARED_OFFSET))(value);
		}

		::System::Boolean GetCharacterGPUDataPrepared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GETCHARACTERGPUDATAPREPARED_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void SetAssets(::UnityEngine::ComputeShader* computeShader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_SETASSETS_OFFSET))(this, computeShader);
		}

		::System::Void SetupDummyData(::UnityEngine::Rendering::ScriptableRenderContext& context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_SETUPDUMMYDATA_OFFSET))(this, context);
		}

		::System::Int32 GetDummyGPUDataSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GETDUMMYGPUDATASIZE_OFFSET))(this);
		}

		::System::Void Add(::NapRenderEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::NapRenderEntity*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_ADD_OFFSET))(this, entity);
		}

		::System::Void Remove(::NapRenderEntity* entity, ::System::Boolean passiveRelease, ::System::Boolean doNotRelease)
		{
			return ((::System::Void(*)(::PVOID, ::NapRenderEntity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_REMOVE_OFFSET))(this, entity, passiveRelease, doNotRelease);
		}

		::System::Void Remove_1(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_REMOVE_1_OFFSET))(this, go);
		}

		::System::Boolean Contains(::UnityEngine::GameObject* go)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_CONTAINS_OFFSET))(this, go);
		}

		::System::Boolean Contains_1(::NapRenderEntity* napRenderEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::NapRenderEntity*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_CONTAINS_1_OFFSET))(this, napRenderEntity);
		}

		::System::Boolean FindEntity(::UnityEngine::GameObject* go, ::System::Int32& index)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_FINDENTITY_OFFSET))(this, go, index);
		}

		::System::Boolean GetEntity(::UnityEngine::GameObject* root, ::NapRenderEntity*& entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::NapRenderEntity*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GETENTITY_OFFSET))(this, root, entity);
		}

		::System::Void MarkPriorityDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_MARKPRIORITYDIRTY_OFFSET))(this);
		}

		::System::Void UpdatePerFrame(::Il2CppArray<::UnityEngine::Camera*>* cameras)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Camera*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_UPDATEPERFRAME_OFFSET))(this, cameras);
		}

		::System::Void UpdateBoneTransformsForNative(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* asset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_UPDATEBONETRANSFORMSFORNATIVE_OFFSET))(this, asset);
		}

		::System::Void PrepareAfterCulling(::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingdata, ::System::Boolean isPlanarReflectionCamera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_PREPAREAFTERCULLING_OFFSET))(this, postCullRenderingData, renderingdata, isPlanarReflectionCamera);
		}

		::System::Void PrepareAfterLightLoop(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRendering)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_PREPAREAFTERLIGHTLOOP_OFFSET))(this, cmd, renderingData, postCullRendering);
		}

		::System::Void SyncNapCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_SYNCNAPCB_OFFSET))(this);
		}

		::System::Void UpdateLightData(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_UPDATELIGHTDATA_OFFSET))(this, cmd, renderingData, postCullRenderingData);
		}

		::Unity::Collections::NativeHashMap_2<::System::UInt32, ::ExtractBoneInfo> GetBoneInfoMap()
		{
			return ((::Unity::Collections::NativeHashMap_2<::System::UInt32, ::ExtractBoneInfo>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GETBONEINFOMAP_OFFSET))(this);
		}

		::System::Void EnsureMapCapacity(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_ENSUREMAPCAPACITY_OFFSET))(this, size);
		}

		static ::System::Boolean _PrepareAfterCulling_g__GetLightDirection_90_0(::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& data, ::UnityEngine::Vector3& direction)
		{
			return ((::System::Boolean(*)(::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__PREPAREAFTERCULLING_G__GETLIGHTDIRECTION_90_0_OFFSET))(data, direction);
		}

		static ::System::Boolean _UpdateLightData_g__IsBlackCurtain_93_6(::System::UInt32 renderingLayerMask)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__ISBLACKCURTAIN_93_6_OFFSET))(renderingLayerMask);
		}

		static ::System::Boolean _UpdateLightData_g__CheckDistanceOfAxis_93_7(::System::Single a, ::System::Single b, ::System::Single extent, ::UnityEngine::Rendering::Universal::NapRenderEntityManager___c__DisplayClass93_1& a4)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Rendering::Universal::NapRenderEntityManager___c__DisplayClass93_1&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__CHECKDISTANCEOFAXIS_93_7_OFFSET))(a, b, extent, a4);
		}

		static ::System::Void _UpdateLightData_g__SortLightsIfNeeded_93_5(::System::Collections::Generic::List_1<::System::Int32>* lights, ::System::Int32 maxCount, ::UnityEngine::Rendering::Universal::NapRenderEntityManager___c__DisplayClass93_0& a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::UnityEngine::Rendering::Universal::NapRenderEntityManager___c__DisplayClass93_0&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__SORTLIGHTSIFNEEDED_93_5_OFFSET))(lights, maxCount, a3);
		}

		static ::System::Void _UpdateLightData_g__SetPunctualLight_93_0(::NapRenderEntity* entity, ::UnityEngine::Rendering::Universal::NapCBProperty& offset, ::UnityEngine::Vector4& positionWS_halfInvSmoothness, ::UnityEngine::Vector3& forward, ::UnityEngine::Vector4& distanceAndSpotAttenuation, ::UnityEngine::Color& colorForCharacter)
		{
			return ((::System::Void(*)(::NapRenderEntity*, ::UnityEngine::Rendering::Universal::NapCBProperty&, ::UnityEngine::Vector4&, ::UnityEngine::Vector3&, ::UnityEngine::Vector4&, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__SETPUNCTUALLIGHT_93_0_OFFSET))(entity, offset, positionWS_halfInvSmoothness, forward, distanceAndSpotAttenuation, colorForCharacter);
		}

		static ::UnityEngine::NAPRenderPipeline0::NapLightData& _UpdateLightData_g__GetPunctualLightDataFromNapLightData_93_1(::System::Int32 lightIndex, ::UnityEngine::Vector4& positionWS_halfInvSmoothness)
		{
			return ((::UnityEngine::NAPRenderPipeline0::NapLightData&(*)(::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__GETPUNCTUALLIGHTDATAFROMNAPLIGHTDATA_93_1_OFFSET))(lightIndex, positionWS_halfInvSmoothness);
		}

		static ::UnityEngine::Color _UpdateLightData_g__GetPunctualLightDataFromComponent_93_2(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* uald, ::UnityEngine::Light* light, ::System::Single punctualLightFade, ::UnityEngine::Vector4& positionWS_halfInvSmoothness, ::UnityEngine::Vector3& forward, ::UnityEngine::Vector4& distanceAndSpotAttenuation, ::UnityEngine::Color& colorForCharacter)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*, ::UnityEngine::Light*, ::System::Single, ::UnityEngine::Vector4&, ::UnityEngine::Vector3&, ::UnityEngine::Vector4&, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__GETPUNCTUALLIGHTDATAFROMCOMPONENT_93_2_OFFSET))(uald, light, punctualLightFade, positionWS_halfInvSmoothness, forward, distanceAndSpotAttenuation, colorForCharacter);
		}

		static ::System::Single _UpdateLightData_g__CalculateLightWeight_93_3(::UnityEngine::NAPRenderPipeline0::NapLightData lightData, ::NapRenderEntity* entity)
		{
			return ((::System::Single(*)(::UnityEngine::NAPRenderPipeline0::NapLightData, ::NapRenderEntity*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__CALCULATELIGHTWEIGHT_93_3_OFFSET))(lightData, entity);
		}

		static ::System::Single _UpdateLightData_g__DistanceAttenuationB_93_9(::System::Single distanceSquare, ::UnityEngine::Rendering::Universal::NapRenderEntityManager___c__DisplayClass93_2& a2)
		{
			return ((::System::Single(*)(::System::Single, ::UnityEngine::Rendering::Universal::NapRenderEntityManager___c__DisplayClass93_2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__DISTANCEATTENUATIONB_93_9_OFFSET))(distanceSquare, a2);
		}

		static ::System::Single _UpdateLightData_g__AngleAttenuation_93_10(::UnityEngine::Rendering::Universal::NapRenderEntityManager___c__DisplayClass93_2& a1)
		{
			return ((::System::Single(*)(::UnityEngine::Rendering::Universal::NapRenderEntityManager___c__DisplayClass93_2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__ANGLEATTENUATION_93_10_OFFSET))(a1);
		}

		static ::System::Int32 _UpdateLightData_g__GetKernel_93_4()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__GETKERNEL_93_4_OFFSET))();
		}
	};
}
