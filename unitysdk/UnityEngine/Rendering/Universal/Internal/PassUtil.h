#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CommandBufferWrapper.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MaterialDebugMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SkyLutUtils_LinearGraidentColorKey.h"
#include "unitysdk/UnityEngine/Rendering/AsyncGPUReadbackRequest.h"
#include "unitysdk/UnityEngine/Rendering/DrawingSettings.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ForwardRenderer_ReadonlyRenderState.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class WeatherConfig;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class NapRenderContext_CurrentFrameRenderConfigs; }
namespace UnityEngine::Rendering::Universal { class VREffects; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYCHARSTYLIZATION_OFFSET UNITYSDK_OFFSET(0x17B789D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYDESATURATIONMASKFORSCENE_OFFSET UNITYSDK_OFFSET(0x17B7B710)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYFXFOG_OFFSET UNITYSDK_OFFSET(0x17B7AEA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYLIGHTSHAFTCONFIG_OFFSET UNITYSDK_OFFSET(0x17B7ABB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYRTXGI_OFFSET UNITYSDK_OFFSET(0x17B7B7F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYSCENEOUTLINE_OFFSET UNITYSDK_OFFSET(0x17B79850)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYSCENESCANLINE_OFFSET UNITYSDK_OFFSET(0x17B79630)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYVREFFECT_OFFSET UNITYSDK_OFFSET(0x17B78E20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_CALCULATEBLOOMPARAMS3_OFFSET UNITYSDK_OFFSET(0x17B78350)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_CHECKIFCAMERAISINDOOR_OFFSET UNITYSDK_OFFSET(0x17B77B00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_CHECKISRAINON_OFFSET UNITYSDK_OFFSET(0x17B768E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_CHECKLIGHTMAPSANDAREADIRECT_OFFSET UNITYSDK_OFFSET(0x17B84820)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_CONFIGGLOBALENVPARAMS_OFFSET UNITYSDK_OFFSET(0x17B78440)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_DISABLECHARSTYLIZATION_OFFSET UNITYSDK_OFFSET(0x17B78940)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_DRAWVREFFECTSOUTLINEDISTORTION_OFFSET UNITYSDK_OFFSET(0x17B79EE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_GETMESHCOLORS_OFFSET UNITYSDK_OFFSET(0x17B76420)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_GETMESHUVS_OFFSET UNITYSDK_OFFSET(0x17B76680)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_GETMESHVERTICES_OFFSET UNITYSDK_OFFSET(0x17B761C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_GET_S_IDENTITYCUBE_OFFSET UNITYSDK_OFFSET(0x17B75FB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_ONCAMERAISINDOORCOMPLETEREADBACK_OFFSET UNITYSDK_OFFSET(0x17B782A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_REFRESHENVIRONMENTCONFIG_OFFSET UNITYSDK_OFFSET(0x17B7D250)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETCHARACTERPARAMS_OFFSET UNITYSDK_OFFSET(0x17B769E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETCLOUDLIGHTPARAMS_OFFSET UNITYSDK_OFFSET(0x17B77790)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETCLOUDSHADOWPARAMS_OFFSET UNITYSDK_OFFSET(0x17B77090)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETOVERRIDEMATERIAL_OFFSET UNITYSDK_OFFSET(0x17B853E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETSHADERCONSTANTSPERCAMERA_OFFSET UNITYSDK_OFFSET(0x17B85430)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETSKYCOVER_OFFSET UNITYSDK_OFFSET(0x17B75BE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETSKYPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0x17B85260)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B85680)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PassUtil_TypeDefinitionIndex = 29039;

	class PassUtil : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*>** StaticGet__meshUvsMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*>**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x212B0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::SkyLutUtils_LinearGraidentColorKey>** StaticGet_s_SkyLutExtraFXGradientCPUData()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::SkyLutUtils_LinearGraidentColorKey>**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x212B8);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Color>*>** StaticGet__meshColorsMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x212C0);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_cameraIsIndoorrBuffer()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x212C8);
		}
		static ::UnityEngine::ComputeShader** StaticGet_cameraIsIndoorCS()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x212D0);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_s_SkyLutExtraFXGradientGPUData()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x212D8);
		}
		static ::UnityEngine::Mesh** StaticGet__IdentityCube()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x212E0);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_s_SkyLutExtraFXGradientCount()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x212E8);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector3>*>** StaticGet__meshVerticesMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector3>*>**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x212F0);
		}
		static ::UnityEngine::Matrix4x4* StaticGet__SceneWeatherParamsPart2()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5A80);
		}
		static ::UnityEngine::Matrix4x4* StaticGet__SceneWeatherParamsPart4()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5AC0);
		}
		static ::System::Single* StaticGet_screenRainDropGlobalIntensity()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5B00);
		}
		static ::System::Single* StaticGet_cloudRotOffset()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5B04);
		}
		static ::UnityEngine::Matrix4x4* StaticGet__SceneWeatherParamsPart5()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5B08);
		}
		static ::UnityEngine::Matrix4x4* StaticGet__SceneWeatherParamsPart6()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5B48);
		}
		static ::System::Int32* StaticGet_preTickTime()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5B88);
		}
		static ::UnityEngine::Matrix4x4* StaticGet__SceneWeatherParamsPart1()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5B8C);
		}
		static ::UnityEngine::Matrix4x4* StaticGet__SceneWeatherParamsPart3()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5BCC);
		}
		static ::UnityEngine::Matrix4x4* StaticGet__SceneWeatherParamsPart7()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5C0C);
		}
		static ::System::Single* StaticGet_cloudMoveOffset()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5C4C);
		}
		static ::System::Boolean* StaticGet_s_PreFrameFxFogIsTrue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5C50);
		}
		static ::System::Boolean* StaticGet_s_PreFrameFxFogForSkyBoxIsOn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5C51);
		}
		static ::System::Boolean* StaticGet_s_IsCameraIndoor()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5C52);
		}
		static ::System::Single* StaticGet_screenRainDropTimer()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5C54);
		}
		// static const ::System::Int32 maxDepthPyramid = 0xA; // 0x0
		// static const ::System::Single screenRainDropFadeTime; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL__CCTOR_OFFSET))();
		}

		static ::System::Void SetSkyCover(::WeatherConfig* config)
		{
			return ((::System::Void(*)(::WeatherConfig*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETSKYCOVER_OFFSET))(config);
		}

		static ::UnityEngine::Mesh* get_s_IdentityCube()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_GET_S_IDENTITYCUBE_OFFSET))();
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* GetMeshVertices(::UnityEngine::Mesh* mesh)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_GETMESHVERTICES_OFFSET))(mesh);
		}

		static ::Il2CppArray<::UnityEngine::Color>* GetMeshColors(::UnityEngine::Mesh* mesh)
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_GETMESHCOLORS_OFFSET))(mesh);
		}

		static ::Il2CppArray<::UnityEngine::Vector2>* GetMeshUvs(::UnityEngine::Mesh* mesh)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_GETMESHUVS_OFFSET))(mesh);
		}

		static ::System::Boolean CheckIsRainOn(::WeatherConfig* weatherConfig, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Boolean(*)(::WeatherConfig*, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_CHECKISRAINON_OFFSET))(weatherConfig, cameraData);
		}

		static ::System::Void SetCharacterParams(::UnityEngine::Rendering::CommandBuffer* cmd, ::WeatherConfig* weatherConfig)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::WeatherConfig*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETCHARACTERPARAMS_OFFSET))(cmd, weatherConfig);
		}

		static ::System::Void SetCloudShadowParams(::UnityEngine::Rendering::CommandBuffer* cmd, ::WeatherConfig* weatherConfig, ::System::Boolean isBlackCanvasOn)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::WeatherConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETCLOUDSHADOWPARAMS_OFFSET))(cmd, weatherConfig, isBlackCanvasOn);
		}

		static ::System::Void SetCloudLightParams(::UnityEngine::Rendering::CommandBuffer* cmd, ::WeatherConfig* weatherConfig)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::WeatherConfig*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETCLOUDLIGHTPARAMS_OFFSET))(cmd, weatherConfig);
		}

		static ::System::Boolean CheckIfCameraIsInDoor(::UnityEngine::Texture* heightMap, ::UnityEngine::Vector3 cameraPos, ::UnityEngine::Vector4 sceneBoundBox, ::System::Single heightMapYOffset)
		{
			return ((::System::Boolean(*)(::UnityEngine::Texture*, ::UnityEngine::Vector3, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_CHECKIFCAMERAISINDOOR_OFFSET))(heightMap, cameraPos, sceneBoundBox, heightMapYOffset);
		}

		static ::System::Void OnCameraIsInDoorCompleteReadBack(::UnityEngine::Rendering::AsyncGPUReadbackRequest request)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_ONCAMERAISINDOORCOMPLETEREADBACK_OFFSET))(request);
		}

		static ::UnityEngine::Vector2 CalculateBloomParams3(::UnityEngine::Vector4 params1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_CALCULATEBLOOMPARAMS3_OFFSET))(params1);
		}

		static ::System::Void ConfigGlobalEnvParams(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_CONFIGGLOBALENVPARAMS_OFFSET))(cmd, cameraData);
		}

		static ::System::Void DisableCharStylization(::UnityEngine::Material* deferredMat)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_DISABLECHARSTYLIZATION_OFFSET))(deferredMat);
		}

		static ::System::Void ApplyCharStylization(::UnityEngine::Rendering::ScriptableRenderContext context)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYCHARSTYLIZATION_OFFSET))(context);
		}

		static ::System::Void ApplyVREffect(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*& config)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYVREFFECT_OFFSET))(context, renderingData, config);
		}

		static ::System::Void ApplySceneScanline(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*& config)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYSCENESCANLINE_OFFSET))(cmd, renderingData, config);
		}

		static ::System::Void ApplySceneOutline(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*& config)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYSCENEOUTLINE_OFFSET))(cmd, renderingData, config);
		}

		static ::System::Void DrawVREffectsOutlineDistortion(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::VREffects* vrEffects, ::UnityEngine::Rendering::RenderTargetIdentifier& depthRTId, ::UnityEngine::Rendering::RenderTargetIdentifier& destination, ::System::Boolean isOffScreen)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::VREffects*, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_DRAWVREFFECTSOUTLINEDISTORTION_OFFSET))(cmdWrapper, renderingData, vrEffects, depthRTId, destination, isOffScreen);
		}

		static ::System::Void ApplyLightShaftConfig(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*& config)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYLIGHTSHAFTCONFIG_OFFSET))(cmd, renderingData, config);
		}

		static ::System::Void ApplyFxFog(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*& config, ::System::Boolean& fxFogForSkyIsOn)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYFXFOG_OFFSET))(context, cmd, renderingData, config, fxFogForSkyIsOn);
		}

		static ::System::Void ApplyDesaturationMaskForScene(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*& config)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYDESATURATIONMASKFORSCENE_OFFSET))(cmd, config);
		}

		static ::System::Void ApplyRTXGI(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*& config, ::System::Single indoorWeight)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYRTXGI_OFFSET))(context, cmd, renderingData, config, indoorWeight);
		}

		static ::System::Void RefreshEnvironmentConfig(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::Universal::ForwardRenderer_ReadonlyRenderState& renderState, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*& config, ::System::Boolean& fxFogForSkyIsOn)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::Universal::ForwardRenderer_ReadonlyRenderState&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_REFRESHENVIRONMENTCONFIG_OFFSET))(context, renderState, renderingData, config, fxFogForSkyIsOn);
		}

		static ::System::Boolean CheckLightmapsAndAreaDirect()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_CHECKLIGHTMAPSANDAREADIRECT_OFFSET))();
		}

		static ::System::Void SetSkyPostProcess()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETSKYPOSTPROCESS_OFFSET))();
		}

		static ::System::Void SetOverrideMaterial(::UnityEngine::NAPRenderPipeline0::MaterialDebugMode debugFeature, ::UnityEngine::Rendering::DrawingSettings& drawSettings, ::System::Boolean isTransparent)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::MaterialDebugMode, ::UnityEngine::Rendering::DrawingSettings&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETOVERRIDEMATERIAL_OFFSET))(debugFeature, drawSettings, isTransparent);
		}

		static ::System::Void SetShaderConstantsPerCamera(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETSHADERCONSTANTSPERCAMERA_OFFSET))(context, cameraData);
		}
	};
}
