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
#include "unitysdk/UnityEngine/Rendering/Universal/NapRenderEntityManager___c__DisplayClass92_0.h"
#include "unitysdk/UnityEngine/Rendering/Universal/NapRenderEntityManager___c__DisplayClass92_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/NapRenderEntityManager___c__DisplayClass92_2.h"
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

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_ADD_OFFSET UNITYSDK_OFFSET(0x1795F400)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0x1795FFD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1795FF70)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1795EA60)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_ENSUREMAPCAPACITY_OFFSET UNITYSDK_OFFSET(0x179661C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_FINDENTITY_OFFSET UNITYSDK_OFFSET(0x1795FD80)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GETBONEINFOMAP_OFFSET UNITYSDK_OFFSET(0x17966090)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GETCHARACTERGPUDATAPREPARED_OFFSET UNITYSDK_OFFSET(0x1795E9F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GETDUMMYGPUDATASIZE_OFFSET UNITYSDK_OFFSET(0x1795F390)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GETENTITY_OFFSET UNITYSDK_OFFSET(0x17960040)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GET_CHARACTERGPUDATAPREPARED_OFFSET UNITYSDK_OFFSET(0x1795E980)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1795E950)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_MARKPRIORITYDIRTY_OFFSET UNITYSDK_OFFSET(0x179600E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_PREPAREAFTERCULLING_OFFSET UNITYSDK_OFFSET(0x17961800)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_PREPAREAFTERLIGHTLOOP_OFFSET UNITYSDK_OFFSET(0x17962960)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1795FCE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_REMOVE_OFFSET UNITYSDK_OFFSET(0x1795F900)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_SETASSETS_OFFSET UNITYSDK_OFFSET(0x1795ED30)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_SETUPDUMMYDATA_OFFSET UNITYSDK_OFFSET(0x1795ED80)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_SET_CHARACTERGPUDATAPREPARED_OFFSET UNITYSDK_OFFSET(0x1795E9C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_SYNCNAPCB_OFFSET UNITYSDK_OFFSET(0x179652D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_UPDATELIGHTDATA_OFFSET UNITYSDK_OFFSET(0x17962A00)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_UPDATEPERFRAME_OFFSET UNITYSDK_OFFSET(0x17960130)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17966650)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x17966450)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__PREPAREAFTERCULLING_G__GETLIGHTDIRECTION_89_0_OFFSET UNITYSDK_OFFSET(0x179627B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__ANGLEATTENUATION_92_10_OFFSET UNITYSDK_OFFSET(0x179683C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__CALCULATELIGHTWEIGHT_92_3_OFFSET UNITYSDK_OFFSET(0x17968070)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__CHECKDISTANCEOFAXIS_92_7_OFFSET UNITYSDK_OFFSET(0x179656B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__DISTANCEATTENUATIONB_92_9_OFFSET UNITYSDK_OFFSET(0x17968320)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__GETKERNEL_92_4_OFFSET UNITYSDK_OFFSET(0x17965F20)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__GETPUNCTUALLIGHTDATAFROMCOMPONENT_92_2_OFFSET UNITYSDK_OFFSET(0x179656E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__GETPUNCTUALLIGHTDATAFROMNAPLIGHTDATA_92_1_OFFSET UNITYSDK_OFFSET(0x17965EB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__ISBLACKCURTAIN_92_6_OFFSET UNITYSDK_OFFSET(0x17968060)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__SETPUNCTUALLIGHT_92_0_OFFSET UNITYSDK_OFFSET(0x179659C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__SORTLIGHTSIFNEEDED_92_5_OFFSET UNITYSDK_OFFSET(0x17965AB0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapRenderEntityManager_TypeDefinitionIndex = 28605;

	class NapRenderEntityManager : public ::System::Object
	{
	public:
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_UpdateStencil()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20E70);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CacheIsRendererAlive()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20E78);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_BatchUpdateVisibility()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20E80);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_PrepareAfterCulling()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20E88);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CalculateCullingSphereCenter()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20E90);
		}
		static ::UnityEngine::Rendering::Universal::NapRenderEntityManager** StaticGet__instance_k__BackingField()
		{
			return (::UnityEngine::Rendering::Universal::NapRenderEntityManager**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20E98);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_ReleaseTemp()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20EA0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_SortEntitiesByPriority()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20EA8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CacheCameraFields()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20EB0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_BatchUpdateVisibility_ResizeNativeList()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20EB8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_ResizeBoneInfoMap()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20EC0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_prepareAfterLightLoop()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20EC8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_UpdatePerFrame()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20ED0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_BatchQueryIsAlive1()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20ED8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_syncNapCB()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20EE0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_GetHeadBoneTransform()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20EE8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_EditorRebindBuffers()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20EF0);
		}
		static ::UnityEngine::Rendering::Universal::LightFilter* StaticGet_lightFilter()
		{
			return (::UnityEngine::Rendering::Universal::LightFilter*)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20EF8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_updateLightGradient()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20F68);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CollectInputs()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20F70);
		}
		static ::System::Collections::Generic::List_1<::NapRenderEntity*>** StaticGet_avatarParticleArray()
		{
			return (::System::Collections::Generic::List_1<::NapRenderEntity*>**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20F78);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CacheLights()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20F80);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_DispatchCompute()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20F88);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_BatchQueryIsAlive0()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20F90);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CopyLightDataToNapCB()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20F98);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_LightFilterTileLights()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20FA0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CullingResults_GetRenderVisibleInCurrentCam()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20FA8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_UpdateVisibilities()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20FB0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CollectLightDataAndComputeInputs()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20FB8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_PrepareSharedVariables()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20FC0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_FixShadowCoverageOutOfFrustum()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20FC8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_SortLights()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20FD0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_PrepareCharacterGiSampleData()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20FD8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CharacterRendering()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20FE0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_LightFilterCull()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20FE8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_SetNapCBProperties()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20FF0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_LightCulling()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x20FF8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CheckValidAndActive()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21000);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_UpdateRamp()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21008);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_UpdateMainLightsData()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21010);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_GlobalKeywordAndFields()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21018);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_BatchUpdateVisibility_CollectRenderers()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21020);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CollectLights()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21028);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_AddIndicatedLightsForPreview()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21030);
		}
		static ::System::Boolean* StaticGet_wasArrayPropertiesOn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x5870);
		}
		static ::System::Boolean* StaticGet_skipRenderLoopLogic()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x5871);
		}
		static ::System::Boolean* StaticGet__CharacterGPUDataPrepared_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x5872);
		}
		static ::System::Int32* StaticGet__StencilShadowBlendSrc()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x5874);
		}
		static ::System::Int32* StaticGet__StencilShadowBlendDebugMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x5878);
		}
		static ::System::Int32* StaticGet__StencilShadowBlendDst()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x587C);
		}
		::UnityEngine::ComputeBuffer* debugBlendLightsBuffer; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* aliveQueryData; // 0x18
		::System::Collections::Generic::List_1<::NapRenderEntity*>* Entities; // 0x20
		::UnityEngine::ComputeBuffer* blendLightBuffer; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* visibilityQueryData; // 0x30
		::UnityEngine::ComputeBuffer* characterLights; // 0x38
		::UnityEngine::ComputeBuffer* entityGpuDataBuffer; // 0x40
		::UnityEngine::ComputeShader* computeShader; // 0x48
		::UnityEngine::ComputeBuffer* prepareInputBuffer; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::NapRenderEntityManager_CachedCameraData>* cachedCameraDatas; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::NapRenderEntityPrepareInput1>* prepareInput; // 0x60
		::UnityEngine::ComputeBuffer* dummyGpuDataBuffer; // 0x68
		::UnityEngine::ComputeBuffer* gpuLightDatasForChar; // 0x70
		::Unity::Collections::NativeList_1<::System::Boolean> queryResult0; // 0x78
		::Unity::Collections::NativeList_1<::System::Boolean> queryResult1; // 0x88
		::Unity::Collections::NativeHashMap_2<::System::UInt32, ::ExtractBoneInfo> _boneInfoMap; // 0x98
		::System::Boolean m_PreviousFrameGradientLightActive; // 0xA8
		::System::Boolean priorityDirty; // 0xA9
		::System::Int32 previousCheckVisibilityFrameIndex; // 0xAC

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

		static ::System::Boolean _PrepareAfterCulling_g__GetLightDirection_89_0(::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& data, ::UnityEngine::Vector3& direction)
		{
			return ((::System::Boolean(*)(::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__PREPAREAFTERCULLING_G__GETLIGHTDIRECTION_89_0_OFFSET))(data, direction);
		}

		static ::System::Boolean _UpdateLightData_g__IsBlackCurtain_92_6(::System::UInt32 renderingLayerMask)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__ISBLACKCURTAIN_92_6_OFFSET))(renderingLayerMask);
		}

		static ::System::Boolean _UpdateLightData_g__CheckDistanceOfAxis_92_7(::System::Single a, ::System::Single b, ::System::Single extent, ::UnityEngine::Rendering::Universal::NapRenderEntityManager___c__DisplayClass92_1& a4)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Rendering::Universal::NapRenderEntityManager___c__DisplayClass92_1&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__CHECKDISTANCEOFAXIS_92_7_OFFSET))(a, b, extent, a4);
		}

		static ::System::Void _UpdateLightData_g__SortLightsIfNeeded_92_5(::System::Collections::Generic::List_1<::System::Int32>* lights, ::System::Int32 maxCount, ::UnityEngine::Rendering::Universal::NapRenderEntityManager___c__DisplayClass92_0& a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::UnityEngine::Rendering::Universal::NapRenderEntityManager___c__DisplayClass92_0&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__SORTLIGHTSIFNEEDED_92_5_OFFSET))(lights, maxCount, a3);
		}

		static ::System::Void _UpdateLightData_g__SetPunctualLight_92_0(::NapRenderEntity* entity, ::UnityEngine::Rendering::Universal::NapCBProperty& offset, ::UnityEngine::Vector4& positionWS_halfInvSmoothness, ::UnityEngine::Vector3& forward, ::UnityEngine::Vector4& distanceAndSpotAttenuation, ::UnityEngine::Color& colorForCharacter)
		{
			return ((::System::Void(*)(::NapRenderEntity*, ::UnityEngine::Rendering::Universal::NapCBProperty&, ::UnityEngine::Vector4&, ::UnityEngine::Vector3&, ::UnityEngine::Vector4&, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__SETPUNCTUALLIGHT_92_0_OFFSET))(entity, offset, positionWS_halfInvSmoothness, forward, distanceAndSpotAttenuation, colorForCharacter);
		}

		static ::UnityEngine::NAPRenderPipeline0::NapLightData& _UpdateLightData_g__GetPunctualLightDataFromNapLightData_92_1(::System::Int32 lightIndex, ::UnityEngine::Vector4& positionWS_halfInvSmoothness)
		{
			return ((::UnityEngine::NAPRenderPipeline0::NapLightData&(*)(::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__GETPUNCTUALLIGHTDATAFROMNAPLIGHTDATA_92_1_OFFSET))(lightIndex, positionWS_halfInvSmoothness);
		}

		static ::UnityEngine::Color _UpdateLightData_g__GetPunctualLightDataFromComponent_92_2(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* uald, ::UnityEngine::Light* light, ::System::Single punctualLightFade, ::UnityEngine::Vector4& positionWS_halfInvSmoothness, ::UnityEngine::Vector3& forward, ::UnityEngine::Vector4& distanceAndSpotAttenuation, ::UnityEngine::Color& colorForCharacter)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*, ::UnityEngine::Light*, ::System::Single, ::UnityEngine::Vector4&, ::UnityEngine::Vector3&, ::UnityEngine::Vector4&, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__GETPUNCTUALLIGHTDATAFROMCOMPONENT_92_2_OFFSET))(uald, light, punctualLightFade, positionWS_halfInvSmoothness, forward, distanceAndSpotAttenuation, colorForCharacter);
		}

		static ::System::Single _UpdateLightData_g__CalculateLightWeight_92_3(::UnityEngine::NAPRenderPipeline0::NapLightData lightData, ::NapRenderEntity* entity)
		{
			return ((::System::Single(*)(::UnityEngine::NAPRenderPipeline0::NapLightData, ::NapRenderEntity*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__CALCULATELIGHTWEIGHT_92_3_OFFSET))(lightData, entity);
		}

		static ::System::Single _UpdateLightData_g__DistanceAttenuationB_92_9(::System::Single distanceSquare, ::UnityEngine::Rendering::Universal::NapRenderEntityManager___c__DisplayClass92_2& a2)
		{
			return ((::System::Single(*)(::System::Single, ::UnityEngine::Rendering::Universal::NapRenderEntityManager___c__DisplayClass92_2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__DISTANCEATTENUATIONB_92_9_OFFSET))(distanceSquare, a2);
		}

		static ::System::Single _UpdateLightData_g__AngleAttenuation_92_10(::UnityEngine::Rendering::Universal::NapRenderEntityManager___c__DisplayClass92_2& a1)
		{
			return ((::System::Single(*)(::UnityEngine::Rendering::Universal::NapRenderEntityManager___c__DisplayClass92_2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__ANGLEATTENUATION_92_10_OFFSET))(a1);
		}

		static ::System::Int32 _UpdateLightData_g__GetKernel_92_4()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__GETKERNEL_92_4_OFFSET))();
		}
	};
}
