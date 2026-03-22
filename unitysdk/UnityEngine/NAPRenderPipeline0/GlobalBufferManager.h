#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/FilterMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CommandBufferWrapper.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DebugViewType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EGlobalRTType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MirrorReflectionQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderTargetHandle.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::NAPRenderPipeline0 { class GlobalBufferManager_CameraDataForShadowMap; }
namespace UnityEngine::NAPRenderPipeline0 { class GlobalBufferManager_CameraShadowCacheData; }
namespace UnityEngine::NAPRenderPipeline0 { class GlobalBufferManager_GlobalRTWrap; }
namespace UnityEngine::NAPRenderPipeline0 { class GlobalBufferManager_HistoryBufferDatas; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandle; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_CLEARCAMERABOUNDEDBUFFER_OFFSET UNITYSDK_OFFSET(0x198054F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_CREATEAOHISTORYBUFFERS_OFFSET UNITYSDK_OFFSET(0x19800FB0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_CREATECHARCOLORGRADINGLUTTEXTURE_OFFSET UNITYSDK_OFFSET(0x19800B50)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_CREATECOLORGRADINGLUTTEXTURE_OFFSET UNITYSDK_OFFSET(0x197FFCC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_CREATEGLOBALSKYLUTTEXTURE_OFFSET UNITYSDK_OFFSET(0x197FFFE0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_CREATEGLOBALTEMPBUFFER_1_OFFSET UNITYSDK_OFFSET(0x197FF7F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_CREATEGLOBALTEMPBUFFER_2_OFFSET UNITYSDK_OFFSET(0x197FF890)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_CREATEGLOBALTEMPBUFFER_OFFSET UNITYSDK_OFFSET(0x197FF740)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_CREATEPLANNERREFLECTIONBUFFER_OFFSET UNITYSDK_OFFSET(0x197FF610)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_CREATESCENECOLORGRADINGLUTTEXTURE_OFFSET UNITYSDK_OFFSET(0x197FFE50)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_CREATETEMPBUFFER_OFFSET UNITYSDK_OFFSET(0x198088B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_DISPOSELEAKINGBUFFERS_OFFSET UNITYSDK_OFFSET(0x19805230)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x197FE230)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETBEFOREUIBLURTEXDESC_OFFSET UNITYSDK_OFFSET(0x19805840)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETCAMERAFROZENTEXTURE_OFFSET UNITYSDK_OFFSET(0x198002C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETCHARCOLORGRADINGLUTTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x19800FA0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETCHARCOLORGRADINGLUTTEXTURE_OFFSET UNITYSDK_OFFSET(0x19800CE0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETCLOUDHISTORYBUFFER_OFFSET UNITYSDK_OFFSET(0x19802BC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETCOLORGRADINGLUTTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x19800870)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETCOLORGRADINGLUTTEXTURE_OFFSET UNITYSDK_OFFSET(0x198005B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETFSRHISTORYCOLORBUFFER_OFFSET UNITYSDK_OFFSET(0x19801D20)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETFSRHISTORYSTATUSBUFFER_OFFSET UNITYSDK_OFFSET(0x19802310)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETGLOBALSKYANGLELUTTEXTURE_OFFSET UNITYSDK_OFFSET(0x198005A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETGLOBALSKYLUTTEXTURE_OFFSET UNITYSDK_OFFSET(0x19800590)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETGLOBALTEMPBUFFERHANDLE_OFFSET UNITYSDK_OFFSET(0x197FFB00)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETGLOBALTEMPBUFFER_OFFSET UNITYSDK_OFFSET(0x197FFAA0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETPLANARREFLECTIONRTSIZE_OFFSET UNITYSDK_OFFSET(0x197FF990)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETPLANNERREFLECTIONBUFFER_OFFSET UNITYSDK_OFFSET(0x197FF530)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETSCENECOLORGRADINGLUTTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x19800B40)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETSCENECOLORGRADINGLUTTEXTURE_OFFSET UNITYSDK_OFFSET(0x19800880)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETTAAHISTORYBUFFER2_OFFSET UNITYSDK_OFFSET(0x198013B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETTAAHISTORYIDBUFFER_OFFSET UNITYSDK_OFFSET(0x198015B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x197FE140)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GET_S_DEBUGVIEWTYPE_OFFSET UNITYSDK_OFFSET(0x197FDB20)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GET_S_DISABLEHIZCULLING_OFFSET UNITYSDK_OFFSET(0x197FDB40)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GET_S_DRAWDEFERREDCHARACTER_OFFSET UNITYSDK_OFFSET(0x197FDB00)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GET_S_ENABLEHIZDEBUG_OFFSET UNITYSDK_OFFSET(0x197FDBA0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GET_S_ENABLEHIZLIGHTCULL_OFFSET UNITYSDK_OFFSET(0x197FDB70)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GET_S_ENABLERENDERSHADOWCASTERAFTERGBUFFER_OFFSET UNITYSDK_OFFSET(0x197FDA80)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GET_S_LOCALLIGHTDRAWENABLE_OFFSET UNITYSDK_OFFSET(0x197FDAC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GET_S_LOCALLIGHTENABLE_OFFSET UNITYSDK_OFFSET(0x197FDAB0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GET_S_OPAQUEDISTORTIONWITHSTENCILMASK_OFFSET UNITYSDK_OFFSET(0x197FDBB0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GET_S_PPSDISTORTIONREADY_OFFSET UNITYSDK_OFFSET(0x197FDA90)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GET_S_REFLECTIONPROBEENABLE_OFFSET UNITYSDK_OFFSET(0x197FDAD0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GET_S_SHADOWMASKSAMPLELOD_OFFSET UNITYSDK_OFFSET(0x197FDB30)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GET_S_UIBLURDEPTHSTENCIL_OFFSET UNITYSDK_OFFSET(0x197FDAE0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GET_S_UIBLURSTENCILWITHOUTDEPTH_OFFSET UNITYSDK_OFFSET(0x197FDAF0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x19805910)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_ISGLOBALBUFFEREXIST_OFFSET UNITYSDK_OFFSET(0x197FFB50)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_QUEUELEAKEDBUFFERFORDISPOSEFROMANYTHREAD_OFFSET UNITYSDK_OFFSET(0x19808920)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_RELEASEBEFORERENDER_OFFSET UNITYSDK_OFFSET(0x19803730)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_RELEASECAMERAFROZENTEXTURE_OFFSET UNITYSDK_OFFSET(0x197FF510)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_RELEASEFSRHISTORYCOLORBUFFER_OFFSET UNITYSDK_OFFSET(0x19802900)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_RELEASEFSRHISTORYSTATUSBUFFER_OFFSET UNITYSDK_OFFSET(0x19802A60)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_RELEASEGLOBALTEMPBUFFER_OFFSET UNITYSDK_OFFSET(0x197FFBE0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_RELEASETAAHISTORYBUFFER_OFFSET UNITYSDK_OFFSET(0x19801450)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_RELEASETAAHISTORYIDBUFFER_OFFSET UNITYSDK_OFFSET(0x19801BC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_SETGLOBALTEMPBUFFERFORMAT_OFFSET UNITYSDK_OFFSET(0x197FF940)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_SET_S_DISABLEHIZCULLING_OFFSET UNITYSDK_OFFSET(0x197FDB50)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_SET_S_DRAWPARTICLEDECAL_OFFSET UNITYSDK_OFFSET(0x197FDB10)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_SET_S_ENABLEHIZLIGHTCULL_OFFSET UNITYSDK_OFFSET(0x197FDB80)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_SET_S_HASSHADOWMAPCACHE_OFFSET UNITYSDK_OFFSET(0x197FDA70)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_SET_S_PPSDISTORTIONREADY_OFFSET UNITYSDK_OFFSET(0x197FDAA0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_TRIMCAMERABOUNDRT_OFFSET UNITYSDK_OFFSET(0x19803780)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x198089F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x197FDBC0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int GlobalBufferManager_TypeDefinitionIndex = 6008;

	class GlobalBufferManager : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_k_ShadowSlice2Loop()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GlobalBufferManager_TypeDefinitionIndex)->GetStaticField(0x5040);
		}
		static ::System::String** StaticGet_s_CameraList()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GlobalBufferManager_TypeDefinitionIndex)->GetStaticField(0x5048);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_k_ShadowSlice4Loop()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GlobalBufferManager_TypeDefinitionIndex)->GetStaticField(0x5050);
		}
		static ::UnityEngine::NAPRenderPipeline0::GlobalBufferManager** StaticGet__instance()
		{
			return (::UnityEngine::NAPRenderPipeline0::GlobalBufferManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalBufferManager_TypeDefinitionIndex)->GetStaticField(0x5058);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_k_ShadowSlice3Loop()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GlobalBufferManager_TypeDefinitionIndex)->GetStaticField(0x5060);
		}
		static ::UnityEngine::Experimental::Rendering::GraphicsFormat* StaticGet_kPlanarReflectionRTFormat()
		{
			return (::UnityEngine::Experimental::Rendering::GraphicsFormat*)Il2CppClass::FromTypeDefinitionIndex(GlobalBufferManager_TypeDefinitionIndex)->GetStaticField(0x28E0);
		}
		static ::System::Boolean* StaticGet_s_BlurUIEnabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalBufferManager_TypeDefinitionIndex)->GetStaticField(0x28E4);
		}
		static ::System::Boolean* StaticGet_s_EnablePreloadAssets()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalBufferManager_TypeDefinitionIndex)->GetStaticField(0x28E5);
		}
		static ::System::Boolean* StaticGet_s_DitherOpt()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalBufferManager_TypeDefinitionIndex)->GetStaticField(0x28E6);
		}
		static ::System::Boolean* StaticGet_s_TestDeferredCharacter()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalBufferManager_TypeDefinitionIndex)->GetStaticField(0x28E7);
		}
		static ::System::Int64* StaticGet_s_PostVolumeMask()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(GlobalBufferManager_TypeDefinitionIndex)->GetStaticField(0x28E8);
		}
		static ::System::Boolean* StaticGet_s_RenderDebugInfo()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalBufferManager_TypeDefinitionIndex)->GetStaticField(0x28F0);
		}
		static ::System::Boolean* StaticGet_s_HasEffectFrameLimit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalBufferManager_TypeDefinitionIndex)->GetStaticField(0x28F1);
		}
		static ::System::Boolean* StaticGet_s_PassOpt()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalBufferManager_TypeDefinitionIndex)->GetStaticField(0x28F2);
		}
		static ::System::Boolean* StaticGet_s_PPSDofReady()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalBufferManager_TypeDefinitionIndex)->GetStaticField(0x28F3);
		}
		static ::System::Boolean* StaticGet_s_SkipCSMUpdate()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalBufferManager_TypeDefinitionIndex)->GetStaticField(0x28F4);
		}
		static ::System::Boolean* StaticGet_s_RenderToFinalTargetEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalBufferManager_TypeDefinitionIndex)->GetStaticField(0x28F5);
		}
		static ::System::Boolean* StaticGet_s_DrawLensflare()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalBufferManager_TypeDefinitionIndex)->GetStaticField(0x28F6);
		}
		static ::System::Int32* StaticGet_s_EffectFrameLimitCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GlobalBufferManager_TypeDefinitionIndex)->GetStaticField(0x28F8);
		}
		static ::System::Boolean* StaticGet_s_ForceUpdateLut()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalBufferManager_TypeDefinitionIndex)->GetStaticField(0x28FC);
		}
		static ::System::Boolean* StaticGet_s_DebugPostProcessValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalBufferManager_TypeDefinitionIndex)->GetStaticField(0x28FD);
		}
		static ::System::Boolean* StaticGet_s_EnablePVS()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalBufferManager_TypeDefinitionIndex)->GetStaticField(0x28FE);
		}
		static ::System::Boolean* StaticGet_s_DisableCachedAdditionalLightData()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalBufferManager_TypeDefinitionIndex)->GetStaticField(0x28FF);
		}
		static ::System::Boolean* StaticGet_s_PPSMotionBlurReady()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalBufferManager_TypeDefinitionIndex)->GetStaticField(0x2900);
		}
		static ::System::Boolean* StaticGet_s_HasPostprocessPass()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalBufferManager_TypeDefinitionIndex)->GetStaticField(0x2901);
		}
		::System::Collections::Generic::List_1<::UnityEngine::ComputeBuffer*>* cachedComputeBuffer; // 0x10
		::UnityEngine::NAPRenderPipeline0::RTHandle* charColorGradingLutTexture; // 0x18
		::UnityEngine::NAPRenderPipeline0::RTHandle* colorGradingLutTexture; // 0x20
		::UnityEngine::NAPRenderPipeline0::RTHandle* sceneColorGradingLutTexture; // 0x28
		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::GlobalBufferManager_GlobalRTWrap*>* globalRTs; // 0x30
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::RTHandle*>*>* m_TaaHistoryColorBufferWithCameraAttach; // 0x38
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::RTHandle*>*>* m_TaaHistoryIDBufferWithCameraAttach; // 0x40
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::RTHandle*>*>* m_FSRHistoryColorBufferWithCameraAttach; // 0x48
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::RTHandle*>*>* m_FSRHistoryStatusBufferWithCameraAttach; // 0x50
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::UnityEngine::NAPRenderPipeline0::GlobalBufferManager_CameraShadowCacheData*>* mCameraShadowCache; // 0x58
		::UnityEngine::Vector2Int packedHistoryTexSize; // 0x60
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::UnityEngine::NAPRenderPipeline0::GlobalBufferManager_HistoryBufferDatas*>* m_HistoryData; // 0x68
		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::RTHandle*>* packedHistoryTexture; // 0x70
		::UnityEngine::NAPRenderPipeline0::RTHandle* skyLutTexture; // 0x78
		::UnityEngine::NAPRenderPipeline0::RTHandle* skyAngleLutTexture; // 0x80
		::UnityEngine::NAPRenderPipeline0::RTHandle* cameraFrozenTexture; // 0x88
		::System::Collections::Generic::List_1<::UnityEngine::ComputeBuffer*>* leakedBuffers; // 0x90
		::System::Collections::Generic::List_1<::UnityEngine::ComputeBuffer*>* tmpCleanupBuffers; // 0x98
		::System::Collections::Generic::List_1<::UnityEngine::Camera*>* tmpCameras; // 0xA0
		::UnityEngine::ComputeBuffer* m_MirrorArrayDataForGPU; // 0xA8
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::UnityEngine::NAPRenderPipeline0::GlobalBufferManager_CameraDataForShadowMap*>* m_PreFrameCameraDataList; // 0xB0
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::RTHandle*>*>* m_CloudHistoryColorBuffer; // 0xB8
		::UnityEngine::RenderTexture* m_PunctualLightShadowAtlas; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void set_s_HasShadowMapCache(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_SET_S_HASSHADOWMAPCACHE_OFFSET))(value);
		}

		static ::System::Boolean get_s_EnableRenderShadowCasterAfterGBuffer()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GET_S_ENABLERENDERSHADOWCASTERAFTERGBUFFER_OFFSET))();
		}

		static ::System::Boolean get_s_PPSDistortionReady()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GET_S_PPSDISTORTIONREADY_OFFSET))();
		}

		static ::System::Void set_s_PPSDistortionReady(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_SET_S_PPSDISTORTIONREADY_OFFSET))(value);
		}

		static ::System::Boolean get_s_LocalLightEnable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GET_S_LOCALLIGHTENABLE_OFFSET))();
		}

		static ::System::Boolean get_s_LocalLightDrawEnable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GET_S_LOCALLIGHTDRAWENABLE_OFFSET))();
		}

		static ::System::Boolean get_s_ReflectionProbeEnable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GET_S_REFLECTIONPROBEENABLE_OFFSET))();
		}

		static ::System::Boolean get_s_UiBlurDepthStencil()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GET_S_UIBLURDEPTHSTENCIL_OFFSET))();
		}

		static ::System::Boolean get_s_UiBlurStencilWithoutDepth()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GET_S_UIBLURSTENCILWITHOUTDEPTH_OFFSET))();
		}

		static ::System::Boolean get_s_DrawDeferredCharacter()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GET_S_DRAWDEFERREDCHARACTER_OFFSET))();
		}

		static ::System::Void set_s_DrawParticleDecal(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_SET_S_DRAWPARTICLEDECAL_OFFSET))(value);
		}

		static ::UnityEngine::NAPRenderPipeline0::DebugViewType get_s_DebugViewType()
		{
			return ((::UnityEngine::NAPRenderPipeline0::DebugViewType(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GET_S_DEBUGVIEWTYPE_OFFSET))();
		}

		static ::System::Boolean get_s_ShadowMaskSampleLOD()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GET_S_SHADOWMASKSAMPLELOD_OFFSET))();
		}

		static ::System::Boolean get_s_DisableHizCulling()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GET_S_DISABLEHIZCULLING_OFFSET))();
		}

		static ::System::Void set_s_DisableHizCulling(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_SET_S_DISABLEHIZCULLING_OFFSET))(value);
		}

		static ::System::Boolean get_s_EnableHizLightCull()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GET_S_ENABLEHIZLIGHTCULL_OFFSET))();
		}

		static ::System::Void set_s_EnableHizLightCull(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_SET_S_ENABLEHIZLIGHTCULL_OFFSET))(value);
		}

		static ::System::Boolean get_s_EnableHizDebug()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GET_S_ENABLEHIZDEBUG_OFFSET))();
		}

		static ::System::Boolean get_s_OpaqueDistortionWithStencilMask()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GET_S_OPAQUEDISTORTIONWITHSTENCILMASK_OFFSET))();
		}

		static ::UnityEngine::NAPRenderPipeline0::GlobalBufferManager* get_instance()
		{
			return ((::UnityEngine::NAPRenderPipeline0::GlobalBufferManager*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* GetPlannerReflectionBuffer()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETPLANNERREFLECTIONBUFFER_OFFSET))(this);
		}

		::System::Void CreatePlannerReflectionBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_CREATEPLANNERREFLECTIONBUFFER_OFFSET))(this);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier CreateGlobalTempBuffer(::UnityEngine::NAPRenderPipeline0::EGlobalRTType e, ::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 width, ::System::Int32 height, ::UnityEngine::Experimental::Rendering::GraphicsFormat graphicsFormat, ::UnityEngine::FilterMode filterMode)
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::EGlobalRTType, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_CREATEGLOBALTEMPBUFFER_OFFSET))(this, e, cmd, width, height, graphicsFormat, filterMode);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier CreateGlobalTempBuffer_1(::UnityEngine::NAPRenderPipeline0::EGlobalRTType e, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor& rtDescTemplate, ::UnityEngine::FilterMode filterMode)
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::EGlobalRTType, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor&, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_CREATEGLOBALTEMPBUFFER_1_OFFSET))(this, e, cmd, rtDescTemplate, filterMode);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier CreateGlobalTempBuffer_2(::UnityEngine::NAPRenderPipeline0::EGlobalRTType e, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper wrapper, ::UnityEngine::RenderTextureDescriptor& rtDescTemplate, ::UnityEngine::FilterMode filterMode)
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::EGlobalRTType, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::UnityEngine::RenderTextureDescriptor&, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_CREATEGLOBALTEMPBUFFER_2_OFFSET))(this, e, wrapper, rtDescTemplate, filterMode);
		}

		::System::Void SetGlobalTempBufferFormat(::UnityEngine::NAPRenderPipeline0::EGlobalRTType e, ::UnityEngine::Experimental::Rendering::GraphicsFormat format)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::EGlobalRTType, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_SETGLOBALTEMPBUFFERFORMAT_OFFSET))(this, e, format);
		}

		::UnityEngine::Vector2Int GetPlanarReflectionRTSize(::UnityEngine::NAPRenderPipeline0::MirrorReflectionQuality quality, ::System::Int32& lodSteps, ::System::Int32& mipCount)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::MirrorReflectionQuality, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETPLANARREFLECTIONRTSIZE_OFFSET))(this, quality, lodSteps, mipCount);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier GetGlobalTempBuffer(::UnityEngine::NAPRenderPipeline0::EGlobalRTType e)
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::EGlobalRTType))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETGLOBALTEMPBUFFER_OFFSET))(this, e);
		}

		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle GetGlobalTempBufferHandle(::UnityEngine::NAPRenderPipeline0::EGlobalRTType e)
		{
			return ((::UnityEngine::NAPRenderPipeline0::RenderTargetHandle(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::EGlobalRTType))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETGLOBALTEMPBUFFERHANDLE_OFFSET))(this, e);
		}

		::System::Boolean IsGlobalBufferExist(::UnityEngine::NAPRenderPipeline0::EGlobalRTType e)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::EGlobalRTType))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_ISGLOBALBUFFEREXIST_OFFSET))(this, e);
		}

		::System::Void ReleaseGlobalTempBuffer(::UnityEngine::NAPRenderPipeline0::EGlobalRTType e, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::EGlobalRTType, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_RELEASEGLOBALTEMPBUFFER_OFFSET))(this, e, cmd);
		}

		::System::Void CreateColorGradingLutTexture(::UnityEngine::Experimental::Rendering::GraphicsFormat graphicsFormat, ::UnityEngine::FilterMode filterMode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_CREATECOLORGRADINGLUTTEXTURE_OFFSET))(this, graphicsFormat, filterMode);
		}

		::System::Void CreateSceneColorGradingLutTexture(::UnityEngine::Experimental::Rendering::GraphicsFormat graphicsFormat, ::UnityEngine::FilterMode filterMode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_CREATESCENECOLORGRADINGLUTTEXTURE_OFFSET))(this, graphicsFormat, filterMode);
		}

		::System::Void CreateGlobalSkyLutTexture(::UnityEngine::Experimental::Rendering::GraphicsFormat graphicsFormat, ::UnityEngine::FilterMode filterMode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_CREATEGLOBALSKYLUTTEXTURE_OFFSET))(this, graphicsFormat, filterMode);
		}

		::System::Void ReleaseCameraFrozenTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_RELEASECAMERAFROZENTEXTURE_OFFSET))(this);
		}

		::UnityEngine::NAPRenderPipeline0::RTHandle* GetCameraFrozenTexture(::UnityEngine::RenderTextureDescriptor descriptor)
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandle*(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETCAMERAFROZENTEXTURE_OFFSET))(this, descriptor);
		}

		::UnityEngine::NAPRenderPipeline0::RTHandle* GetGlobalSkyLutTexture()
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETGLOBALSKYLUTTEXTURE_OFFSET))(this);
		}

		::UnityEngine::NAPRenderPipeline0::RTHandle* GetGlobalSkyAngleLutTexture()
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETGLOBALSKYANGLELUTTEXTURE_OFFSET))(this);
		}

		::UnityEngine::NAPRenderPipeline0::RTHandle* GetColorGradingLutTexture(::System::Int32 width, ::System::Int32 height, ::UnityEngine::Experimental::Rendering::GraphicsFormat graphicsFormat)
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandle*(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETCOLORGRADINGLUTTEXTURE_OFFSET))(this, width, height, graphicsFormat);
		}

		::UnityEngine::NAPRenderPipeline0::RTHandle* GetColorGradingLutTexture_1()
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETCOLORGRADINGLUTTEXTURE_1_OFFSET))(this);
		}

		::UnityEngine::NAPRenderPipeline0::RTHandle* GetSceneColorGradingLutTexture(::System::Int32 width, ::System::Int32 height, ::UnityEngine::Experimental::Rendering::GraphicsFormat graphicsFormat)
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandle*(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETSCENECOLORGRADINGLUTTEXTURE_OFFSET))(this, width, height, graphicsFormat);
		}

		::UnityEngine::NAPRenderPipeline0::RTHandle* GetSceneColorGradingLutTexture_1()
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETSCENECOLORGRADINGLUTTEXTURE_1_OFFSET))(this);
		}

		::System::Void CreateCharColorGradingLutTexture(::UnityEngine::Experimental::Rendering::GraphicsFormat graphicsFormat, ::UnityEngine::FilterMode filterMode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_CREATECHARCOLORGRADINGLUTTEXTURE_OFFSET))(this, graphicsFormat, filterMode);
		}

		::UnityEngine::NAPRenderPipeline0::RTHandle* GetCharColorGradingLutTexture(::System::Int32 width, ::System::Int32 height, ::UnityEngine::Experimental::Rendering::GraphicsFormat graphicsFormat)
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandle*(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETCHARCOLORGRADINGLUTTEXTURE_OFFSET))(this, width, height, graphicsFormat);
		}

		::UnityEngine::NAPRenderPipeline0::RTHandle* GetCharColorGradingLutTexture_1()
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETCHARCOLORGRADINGLUTTEXTURE_1_OFFSET))(this);
		}

		::System::Void CreateAOHistoryBuffers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_CREATEAOHISTORYBUFFERS_OFFSET))(this);
		}

		::System::Void GetTaaHistoryBuffer2(::UnityEngine::Camera* camera, ::UnityEngine::RenderTextureDescriptor& descriptor, ::System::Boolean& isFirstFrame, ::Il2CppArray<::UnityEngine::RenderTexture*>* outRTs)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::RenderTextureDescriptor&, ::System::Boolean&, ::Il2CppArray<::UnityEngine::RenderTexture*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETTAAHISTORYBUFFER2_OFFSET))(this, camera, descriptor, isFirstFrame, outRTs);
		}

		::System::Void ReleaseTAAHistoryBuffer(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_RELEASETAAHISTORYBUFFER_OFFSET))(this, camera);
		}

		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::RTHandle*>* GetTaaHistoryIDBuffer(::UnityEngine::Camera* camera, ::UnityEngine::RenderTextureDescriptor& descriptor, ::System::Boolean& isFirstFrame)
		{
			return ((::Il2CppArray<::UnityEngine::NAPRenderPipeline0::RTHandle*>*(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::RenderTextureDescriptor&, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETTAAHISTORYIDBUFFER_OFFSET))(this, camera, descriptor, isFirstFrame);
		}

		::System::Void ReleaseTAAHistoryIDBuffer(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_RELEASETAAHISTORYIDBUFFER_OFFSET))(this, camera);
		}

		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::RTHandle*>* GetFSRHistoryColorBuffer(::UnityEngine::Camera* camera, ::UnityEngine::RenderTextureDescriptor& descriptor, ::System::Boolean& isFirstFrame)
		{
			return ((::Il2CppArray<::UnityEngine::NAPRenderPipeline0::RTHandle*>*(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::RenderTextureDescriptor&, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETFSRHISTORYCOLORBUFFER_OFFSET))(this, camera, descriptor, isFirstFrame);
		}

		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::RTHandle*>* GetFSRHistoryStatusBuffer(::UnityEngine::Camera* camera, ::UnityEngine::RenderTextureDescriptor& descriptor, ::System::Boolean& isFirstFrame)
		{
			return ((::Il2CppArray<::UnityEngine::NAPRenderPipeline0::RTHandle*>*(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::RenderTextureDescriptor&, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETFSRHISTORYSTATUSBUFFER_OFFSET))(this, camera, descriptor, isFirstFrame);
		}

		::System::Void ReleaseFSRHistoryColorBuffer(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_RELEASEFSRHISTORYCOLORBUFFER_OFFSET))(this, camera);
		}

		::System::Void ReleaseFSRHistoryStatusBuffer(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_RELEASEFSRHISTORYSTATUSBUFFER_OFFSET))(this, camera);
		}

		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::RTHandle*>* GetCloudHistoryBuffer(::UnityEngine::Camera* camera, ::UnityEngine::RenderTextureDescriptor& descriptor, ::System::Boolean& isFirstFrame)
		{
			return ((::Il2CppArray<::UnityEngine::NAPRenderPipeline0::RTHandle*>*(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::RenderTextureDescriptor&, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETCLOUDHISTORYBUFFER_OFFSET))(this, camera, descriptor, isFirstFrame);
		}

		::System::Void ReleaseBeforeRender()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_RELEASEBEFORERENDER_OFFSET))(this);
		}

		::System::Void TrimCameraBoundRT()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_TRIMCAMERABOUNDRT_OFFSET))(this);
		}

		::System::Void ClearCameraBoundedBuffer(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_CLEARCAMERABOUNDEDBUFFER_OFFSET))(this, camera);
		}

		::System::Void GetBeforeUiBlurTexDesc(::UnityEngine::RenderTextureDescriptor& desc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GETBEFOREUIBLURTEXDESC_OFFSET))(this, desc);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_INITIALIZE_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* CreateTempBuffer(::System::Int32 count, ::System::Type* type)
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_CREATETEMPBUFFER_OFFSET))(this, count, type);
		}

		::System::Void QueueLeakedBufferForDisposeFromAnyThread(::UnityEngine::ComputeBuffer* computeBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_QUEUELEAKEDBUFFERFORDISPOSEFROMANYTHREAD_OFFSET))(this, computeBuffer);
		}

		::System::Void DisposeLeakingBuffers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_DISPOSELEAKINGBUFFERS_OFFSET))(this);
		}
	};
}
