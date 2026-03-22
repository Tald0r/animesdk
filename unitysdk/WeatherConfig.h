#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LazyLoadReference_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CharacterColorGradingParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DrawCloudParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DrawFakeLightVolumetricFogParam.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DrawLightShaftParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DrawRainDropParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DrawRainSplashParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DrawSkyCoverParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DrawVolumetricFogWeatherConfigParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EKodamaGIType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ESupportedGIType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RGBMaskType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/TextureChannel.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/UpdateKodamaLightingParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/WeatherConfigDrawSkyParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/WeatherConfigSkyLutGradParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/WindType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SceneColorGradingParams.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VisualEnvironmentE_WeatherType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/WeatherConfig_CapturedWeatherData.h"
#include "unitysdk/WeatherConfig_ResultMainLightParams.h"
#include "unitysdk/WeatherConfig_RuntimeUsedNightTextures.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureCurve; }
namespace UnityEngine::Profiling { class CustomSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class LensFlareDataSRP; }
namespace UnityEngine::Rendering::Universal { class DetailLayerConfig; }
namespace UnityEngine::Rendering::Universal { class ExpHeightFogConfig; }
namespace UnityEngine::Rendering::Universal { class FogMaskConfig; }
namespace UnityEngine::Rendering::Universal { class GIConfig; }
namespace UnityEngine::Rendering::Universal { class LensFlareConfig; }
namespace UnityEngine::Rendering::Universal { class LightShaftConfig; }
namespace UnityEngine::Rendering::Universal { class OceanConfig; }
namespace UnityEngine::Rendering::Universal { class OceanFFTBakeData; }
namespace UnityEngine::Rendering::Universal { class RTXGIConfig; }
namespace UnityEngine::Rendering::Universal { class RTXGIRoughnessConfig; }
namespace UnityEngine::Rendering::Universal { class SceneParticleConfig; }
namespace UnityEngine::Rendering::Universal { class ScenePostEffectConfig; }
namespace UnityEngine::Rendering::Universal { class ScreenRainDropConfig; }
namespace UnityEngine::Rendering::Universal { class SecondFogConfig; }
namespace UnityEngine::Rendering::Universal { class SingleWeatherConfigParticle; }
namespace UnityEngine::Rendering::Universal { class SingleWeatherConfigWater; }
namespace UnityEngine::Rendering::Universal { class SingleWeatherConfigWind; }
namespace UnityEngine::Rendering::Universal { class SkyCloudConfig; }
namespace UnityEngine::Rendering::Universal { class SkyGridConfig; }
namespace UnityEngine::Rendering::Universal { class VolumetricCloudConfig; }

#define WEATHERCONFIG_BINDMAINLIGHTDATA_OFFSET UNITYSDK_OFFSET(0x18047F80)
#define WEATHERCONFIG_BINDNIGHTTEXTURES_OFFSET UNITYSDK_OFFSET(0x18048360)
#define WEATHERCONFIG_CAPTUREDATAFORRENDER_OFFSET UNITYSDK_OFFSET(0x18048C60)
#define WEATHERCONFIG_COPYCHARACTERCONFIG_OFFSET UNITYSDK_OFFSET(0x1804E2F0)
#define WEATHERCONFIG_CREATETONECURVETEXTURE_OFFSET UNITYSDK_OFFSET(0x1804DFE0)
#define WEATHERCONFIG_DEFAULTWEATHERCONFIG_OFFSET UNITYSDK_OFFSET(0x180455D0)
#define WEATHERCONFIG_EVALUATEMAINLIGHTINTENSITY_OFFSET UNITYSDK_OFFSET(0x180484D0)
#define WEATHERCONFIG_EVALUATESUNDISK_OFFSET UNITYSDK_OFFSET(0x18048450)
#define WEATHERCONFIG_GETCHARACTERCOLORGRADINGENABLED_OFFSET UNITYSDK_OFFSET(0x180495D0)
#define WEATHERCONFIG_GETDRAWCLOUDPARAMS_OFFSET UNITYSDK_OFFSET(0x1804A000)
#define WEATHERCONFIG_GETDRAWFAKELIGHTVOLUMETRICFOGPARAM_OFFSET UNITYSDK_OFFSET(0x1804C2A0)
#define WEATHERCONFIG_GETDRAWRAINDROPPARAMS_OFFSET UNITYSDK_OFFSET(0x1804B580)
#define WEATHERCONFIG_GETDRAWRAINSPLASHPARAMS_OFFSET UNITYSDK_OFFSET(0x1804B830)
#define WEATHERCONFIG_GETDRAWSKYCOVERPARAMS_OFFSET UNITYSDK_OFFSET(0x1804B500)
#define WEATHERCONFIG_GETDRAWVOLUMETRICFOGWEATHERCONFIGPARAMS_OFFSET UNITYSDK_OFFSET(0x1804C1C0)
#define WEATHERCONFIG_GETDYNAMICOBJECTGIINTENSITY_OFFSET UNITYSDK_OFFSET(0x180494F0)
#define WEATHERCONFIG_GETGROUNDPOS_OFFSET UNITYSDK_OFFSET(0x1804A1E0)
#define WEATHERCONFIG_GETIBLREFLECTIONPARAM_OFFSET UNITYSDK_OFFSET(0x1804A110)
#define WEATHERCONFIG_GETKODAMAGIPARAMS_OFFSET UNITYSDK_OFFSET(0x18049550)
#define WEATHERCONFIG_GETKODAMAGITYPE_OFFSET UNITYSDK_OFFSET(0x1804A060)
#define WEATHERCONFIG_GETLIGHTSHAFTDRAWPARAMS_OFFSET UNITYSDK_OFFSET(0x1804BD80)
#define WEATHERCONFIG_GETLOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0x1804CA20)
#define WEATHERCONFIG_GETMAINLIGHTDIR_OFFSET UNITYSDK_OFFSET(0x1804C670)
#define WEATHERCONFIG_GETPOSTEXPOSURE_OFFSET UNITYSDK_OFFSET(0x1804A190)
#define WEATHERCONFIG_GETPREVIEWSKYBOXFORBAKE_OFFSET UNITYSDK_OFFSET(0x18049FB0)
#define WEATHERCONFIG_GETREPLACESKYBOXMAT_OFFSET UNITYSDK_OFFSET(0x1804A260)
#define WEATHERCONFIG_GETSCENECOLORGRADINGPARAMS_OFFSET UNITYSDK_OFFSET(0x1804CA70)
#define WEATHERCONFIG_GETSUPPORTEDGITYPE_OFFSET UNITYSDK_OFFSET(0x1804A0C0)
#define WEATHERCONFIG_GETTINTSHADOWBLURRADIUS_OFFSET UNITYSDK_OFFSET(0x1804C0F0)
#define WEATHERCONFIG_GETUPDATEKODAMAGILIGHTINGPARAMS_OFFSET UNITYSDK_OFFSET(0x1804BA60)
#define WEATHERCONFIG_GETUSEANIMATION_OFFSET UNITYSDK_OFFSET(0x18049F60)
#define WEATHERCONFIG_GETUSECLOUDMIDDLECOLOR_OFFSET UNITYSDK_OFFSET(0x18049F20)
#define WEATHERCONFIG_GETUSERLOGLUTPARAMS_OFFSET UNITYSDK_OFFSET(0x18049B80)
#define WEATHERCONFIG_GETUSERLOOKUPTABLEPARAMS_OFFSET UNITYSDK_OFFSET(0x180499E0)
#define WEATHERCONFIG_GETWEATHERCONFIGDRAWSKYPARAMS_OFFSET UNITYSDK_OFFSET(0x1804A360)
#define WEATHERCONFIG_GETWEATHERCONFIGSKYLUTGRADPARAMS_OFFSET UNITYSDK_OFFSET(0x1804C360)
#define WEATHERCONFIG_GETWEATHERCONFIGSKYLUTHASHES_OFFSET UNITYSDK_OFFSET(0x1804C6E0)
#define WEATHERCONFIG_GET_CLOUDLERPALPHA_OFFSET UNITYSDK_OFFSET(0x18045930)
#define WEATHERCONFIG_GET_CUSTOMSKYBOXMESH_OFFSET UNITYSDK_OFFSET(0x18045830)
#define WEATHERCONFIG_GET_DISABLESSPR_OFFSET UNITYSDK_OFFSET(0x180456E0)
#define WEATHERCONFIG_GET_ENABLELOCALHEIGHTMAP_OFFSET UNITYSDK_OFFSET(0x18045970)
#define WEATHERCONFIG_GET_ENABLEOCEAN_OFFSET UNITYSDK_OFFSET(0x18045630)
#define WEATHERCONFIG_GET_GLOBALDECALBLENDPARAMS_OFFSET UNITYSDK_OFFSET(0x18045AB0)
#define WEATHERCONFIG_GET_GROUNDPOS_OFFSET UNITYSDK_OFFSET(0x18045CF0)
#define WEATHERCONFIG_GET_HASTRIGGERSPECIALCLOUDLAYER_OFFSET UNITYSDK_OFFSET(0x180458F0)
#define WEATHERCONFIG_GET_HEIGHTMAP2_OFFSET UNITYSDK_OFFSET(0x18045A90)
#define WEATHERCONFIG_GET_HEIGHTMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x18045B30)
#define WEATHERCONFIG_GET_HEIGHTMAP_OFFSET UNITYSDK_OFFSET(0x18045950)
#define WEATHERCONFIG_GET_HOLLOWCOVERMESH_OFFSET UNITYSDK_OFFSET(0x18045890)
#define WEATHERCONFIG_GET_HOLLOWCOVERSIZE_OFFSET UNITYSDK_OFFSET(0x18045870)
#define WEATHERCONFIG_GET_ISOPTIMIZEDSCENEBOUNDBOXVALUE_OFFSET UNITYSDK_OFFSET(0x18045CB0)
#define WEATHERCONFIG_GET_LERPVALUE_OFFSET UNITYSDK_OFFSET(0x18045910)
#define WEATHERCONFIG_GET_NAVMESHBOUNDBOX_OFFSET UNITYSDK_OFFSET(0x18045CD0)
#define WEATHERCONFIG_GET_OCEANCENTER_OFFSET UNITYSDK_OFFSET(0x18045A30)
#define WEATHERCONFIG_GET_OCEANDEPTHOFFSET_OFFSET UNITYSDK_OFFSET(0x18045A70)
#define WEATHERCONFIG_GET_OCEANFFTBAKEDATA_OFFSET UNITYSDK_OFFSET(0x18045A10)
#define WEATHERCONFIG_GET_OCEANMASKHEIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0x180459F0)
#define WEATHERCONFIG_GET_OCEANMASKMAPRECT_OFFSET UNITYSDK_OFFSET(0x180459B0)
#define WEATHERCONFIG_GET_OCEANMASKMAP_OFFSET UNITYSDK_OFFSET(0x18045990)
#define WEATHERCONFIG_GET_OVERRIDELOWCLOUDDARKCOLOR_OFFSET UNITYSDK_OFFSET(0x180457D0)
#define WEATHERCONFIG_GET_OVERRIDELOWCLOUDLIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x180457B0)
#define WEATHERCONFIG_GET_OVERRIDESKYBTNCOLOR_OFFSET UNITYSDK_OFFSET(0x18045770)
#define WEATHERCONFIG_GET_OVERRIDESKYTOPCOLOR_OFFSET UNITYSDK_OFFSET(0x18045790)
#define WEATHERCONFIG_GET_OVERRIDESKYWEIGHT_OFFSET UNITYSDK_OFFSET(0x18045750)
#define WEATHERCONFIG_GET_PARTICLECONFIG_OFFSET UNITYSDK_OFFSET(0x18045D10)
#define WEATHERCONFIG_GET_SCENEBOUNDBOX_OFFSET UNITYSDK_OFFSET(0x18045C70)
#define WEATHERCONFIG_GET_SCENECLIPPLANEY_OFFSET UNITYSDK_OFFSET(0x18045810)
#define WEATHERCONFIG_GET_SCENEETHERCOVEREFFECTMAT_OFFSET UNITYSDK_OFFSET(0x18045850)
#define WEATHERCONFIG_GET_SCENEHEIGHTMAPYOFFSET_OFFSET UNITYSDK_OFFSET(0x18045C90)
#define WEATHERCONFIG_GET_SCENEWATERPOOLBOUNDBOX_OFFSET UNITYSDK_OFFSET(0x18045AF0)
#define WEATHERCONFIG_GET_SCENEWATERPOOLMAP_OFFSET UNITYSDK_OFFSET(0x18045AD0)
#define WEATHERCONFIG_GET_SCENEWATERPOOLMINMAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x18045B10)
#define WEATHERCONFIG_GET_SEALEVELHEIGHT_OFFSET UNITYSDK_OFFSET(0x180459D0)
#define WEATHERCONFIG_GET_SPECULARTONEMAPPINGCURVETEXTURE_OFFSET UNITYSDK_OFFSET(0x18045740)
#define WEATHERCONFIG_GET_SUPPORTEDGITYPE_OFFSET UNITYSDK_OFFSET(0x180457F0)
#define WEATHERCONFIG_GET_WATERCONFIG_OFFSET UNITYSDK_OFFSET(0x18045D30)
#define WEATHERCONFIG_GET_WATERHEIGHT_OFFSET UNITYSDK_OFFSET(0x180458D0)
#define WEATHERCONFIG_GET_WATERMATERIALS_OFFSET UNITYSDK_OFFSET(0x180458B0)
#define WEATHERCONFIG_GET_WINDCONFIG_OFFSET UNITYSDK_OFFSET(0x18045D50)
#define WEATHERCONFIG_HASGLOBALVOLUMETRICFOG_OFFSET UNITYSDK_OFFSET(0x1804C170)
#define WEATHERCONFIG_HASLIGHTFOGPROXY_OFFSET UNITYSDK_OFFSET(0x1804C310)
#define WEATHERCONFIG_ISAMBIENTACTIVE_OFFSET UNITYSDK_OFFSET(0x18048550)
#define WEATHERCONFIG_ISLIGHTSHAFTON_OFFSET UNITYSDK_OFFSET(0x18047DC0)
#define WEATHERCONFIG_ISSKYBOXFORBAKE_OFFSET UNITYSDK_OFFSET(0x1804A2B0)
#define WEATHERCONFIG_LEARPCHARACTERCOLORGRADINGPARAMS_OFFSET UNITYSDK_OFFSET(0x18049620)
#define WEATHERCONFIG_LERPWEATHERNEW_OFFSET UNITYSDK_OFFSET(0x18047640)
#define WEATHERCONFIG_RELEASE_OFFSET UNITYSDK_OFFSET(0x18047160)
#define WEATHERCONFIG_REPLACESKINRAMPCOLORSWITHOTHERRAMP_OFFSET UNITYSDK_OFFSET(0x1804E780)
#define WEATHERCONFIG_SETDEFAULTVALUES_OFFSET UNITYSDK_OFFSET(0x1804E680)
#define WEATHERCONFIG_SETFOG_OFFSET UNITYSDK_OFFSET(0x18047D60)
#define WEATHERCONFIG_SETUPCHROMATICABERRATION_OFFSET UNITYSDK_OFFSET(0x1804AF90)
#define WEATHERCONFIG_SETUPSPECULARTONEMAPPING_OFFSET UNITYSDK_OFFSET(0x1804E0A0)
#define WEATHERCONFIG_SETVISUALENVDATA_OFFSET UNITYSDK_OFFSET(0x18047F40)
#define WEATHERCONFIG_SET_CLOUDLERPALPHA_OFFSET UNITYSDK_OFFSET(0x18045940)
#define WEATHERCONFIG_SET_CUSTOMSKYBOXMESH_OFFSET UNITYSDK_OFFSET(0x18045840)
#define WEATHERCONFIG_SET_ENABLELOCALHEIGHTMAP_OFFSET UNITYSDK_OFFSET(0x18045980)
#define WEATHERCONFIG_SET_GLOBALDECALBLENDPARAMS_OFFSET UNITYSDK_OFFSET(0x18045AC0)
#define WEATHERCONFIG_SET_GROUNDPOS_OFFSET UNITYSDK_OFFSET(0x18045D00)
#define WEATHERCONFIG_SET_HASTRIGGERSPECIALCLOUDLAYER_OFFSET UNITYSDK_OFFSET(0x18045900)
#define WEATHERCONFIG_SET_HEIGHTMAP2_OFFSET UNITYSDK_OFFSET(0x18045AA0)
#define WEATHERCONFIG_SET_HEIGHTMAP_OFFSET UNITYSDK_OFFSET(0x18045960)
#define WEATHERCONFIG_SET_HOLLOWCOVERMESH_OFFSET UNITYSDK_OFFSET(0x180458A0)
#define WEATHERCONFIG_SET_HOLLOWCOVERSIZE_OFFSET UNITYSDK_OFFSET(0x18045880)
#define WEATHERCONFIG_SET_ISOPTIMIZEDSCENEBOUNDBOXVALUE_OFFSET UNITYSDK_OFFSET(0x18045CC0)
#define WEATHERCONFIG_SET_LERPVALUE_OFFSET UNITYSDK_OFFSET(0x18045920)
#define WEATHERCONFIG_SET_NAVMESHBOUNDBOX_OFFSET UNITYSDK_OFFSET(0x18045CE0)
#define WEATHERCONFIG_SET_OCEANCENTER_OFFSET UNITYSDK_OFFSET(0x18045A50)
#define WEATHERCONFIG_SET_OCEANDEPTHOFFSET_OFFSET UNITYSDK_OFFSET(0x18045A80)
#define WEATHERCONFIG_SET_OCEANFFTBAKEDATA_OFFSET UNITYSDK_OFFSET(0x18045A20)
#define WEATHERCONFIG_SET_OCEANMASKHEIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0x18045A00)
#define WEATHERCONFIG_SET_OCEANMASKMAPRECT_OFFSET UNITYSDK_OFFSET(0x180459C0)
#define WEATHERCONFIG_SET_OCEANMASKMAP_OFFSET UNITYSDK_OFFSET(0x180459A0)
#define WEATHERCONFIG_SET_OVERRIDELOWCLOUDDARKCOLOR_OFFSET UNITYSDK_OFFSET(0x180457E0)
#define WEATHERCONFIG_SET_OVERRIDELOWCLOUDLIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x180457C0)
#define WEATHERCONFIG_SET_OVERRIDESKYBTNCOLOR_OFFSET UNITYSDK_OFFSET(0x18045780)
#define WEATHERCONFIG_SET_OVERRIDESKYTOPCOLOR_OFFSET UNITYSDK_OFFSET(0x180457A0)
#define WEATHERCONFIG_SET_OVERRIDESKYWEIGHT_OFFSET UNITYSDK_OFFSET(0x18045760)
#define WEATHERCONFIG_SET_PARTICLECONFIG_OFFSET UNITYSDK_OFFSET(0x18045D20)
#define WEATHERCONFIG_SET_SCENEBOUNDBOX_OFFSET UNITYSDK_OFFSET(0x18045C80)
#define WEATHERCONFIG_SET_SCENECLIPPLANEY_OFFSET UNITYSDK_OFFSET(0x18045820)
#define WEATHERCONFIG_SET_SCENEETHERCOVEREFFECTMAT_OFFSET UNITYSDK_OFFSET(0x18045860)
#define WEATHERCONFIG_SET_SCENEHEIGHTMAPYOFFSET_OFFSET UNITYSDK_OFFSET(0x18045CA0)
#define WEATHERCONFIG_SET_SCENEWATERPOOLBOUNDBOX_OFFSET UNITYSDK_OFFSET(0x18045B00)
#define WEATHERCONFIG_SET_SCENEWATERPOOLMAP_OFFSET UNITYSDK_OFFSET(0x18045AE0)
#define WEATHERCONFIG_SET_SCENEWATERPOOLMINMAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x18045B20)
#define WEATHERCONFIG_SET_SEALEVELHEIGHT_OFFSET UNITYSDK_OFFSET(0x180459E0)
#define WEATHERCONFIG_SET_SUPPORTEDGITYPE_OFFSET UNITYSDK_OFFSET(0x18045800)
#define WEATHERCONFIG_SET_WATERCONFIG_OFFSET UNITYSDK_OFFSET(0x18045D40)
#define WEATHERCONFIG_SET_WATERHEIGHT_OFFSET UNITYSDK_OFFSET(0x180458E0)
#define WEATHERCONFIG_SET_WATERMATERIALS_OFFSET UNITYSDK_OFFSET(0x180458C0)
#define WEATHERCONFIG_SET_WINDCONFIG_OFFSET UNITYSDK_OFFSET(0x18045D60)
#define WEATHERCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1804E870)
#define WEATHERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18045D70)

inline static constexpr unsigned int WeatherConfig_TypeDefinitionIndex = 28063;

class WeatherConfig : public ::System::Object
{
public:
	static ::UnityEngine::Gradient** StaticGet_defaultGradient()
	{
		return (::UnityEngine::Gradient**)Il2CppClass::FromTypeDefinitionIndex(WeatherConfig_TypeDefinitionIndex)->GetStaticField(0x224E0);
	}
	static ::WeatherConfig** StaticGet_s_CachedConfig()
	{
		return (::WeatherConfig**)Il2CppClass::FromTypeDefinitionIndex(WeatherConfig_TypeDefinitionIndex)->GetStaticField(0x224E8);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_rgbMaskType()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(WeatherConfig_TypeDefinitionIndex)->GetStaticField(0x224F0);
	}
	static ::WeatherConfig** StaticGet_s_DefaultConfig()
	{
		return (::WeatherConfig**)Il2CppClass::FromTypeDefinitionIndex(WeatherConfig_TypeDefinitionIndex)->GetStaticField(0x224F8);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sampler_LerpWeatherNew()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(WeatherConfig_TypeDefinitionIndex)->GetStaticField(0x22500);
	}
	static ::System::Boolean* StaticGet_s_EnableStaticLighting()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(WeatherConfig_TypeDefinitionIndex)->GetStaticField(0x6F10);
	}
	static ::System::Boolean* StaticGet_s_RefreshLocalLight()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(WeatherConfig_TypeDefinitionIndex)->GetStaticField(0x6F11);
	}
	static ::System::Single* StaticGet_lastLerpValue()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(WeatherConfig_TypeDefinitionIndex)->GetStaticField(0x6F14);
	}
	::System::Boolean overrideGiConfig; // 0x10
	::UnityEngine::Rendering::Universal::GIConfig* giConfig; // 0x18
	::System::Single mainLightKodamaGIIndirectMultiplier; // 0x20
	::System::Boolean overrideLyraConfig; // 0x24
	::System::Single mainLightLyraGIIndirectMultiplier; // 0x28
	::System::Single lyraSkyPassThrough; // 0x2C
	::System::Boolean overrideSkyOnlyGI; // 0x30
	::UnityEngine::Color skyOnlyGIColorAndIntensityInDoor; // 0x34
	::UnityEngine::Color skyOnlyGIColorAndIntensityOutDoor; // 0x44
	::System::Boolean overrideExtraGiConfig; // 0x54
	::System::Single GIIntensity; // 0x58
	::System::Single IBLIntensity; // 0x5C
	::UnityEngine::Color GIColorOffset; // 0x60
	::UnityEngine::Color GISpecularColorOffset; // 0x70
	::System::Single EmissionIntensity; // 0x80
	::System::Boolean overrideReflectionCubeId; // 0x84
	::System::Int32 ReflectionCubeId; // 0x88
	::System::Boolean overrideRTXConfig; // 0x8C
	::UnityEngine::Rendering::Universal::RTXGIConfig* rtxGIConfig; // 0x90
	::UnityEngine::Rendering::Universal::RTXGIRoughnessConfig* rtxGIRoughnessConfig; // 0x98
	::System::Boolean overrideWeatherControlAnimationConfig; // 0xA0
	::System::Single weatherControlAnimationProgress; // 0xA4
	::System::Boolean overrideWindConfig; // 0xA8
	::System::Single SpeedTreeWindIntensity; // 0xAC
	::System::Single SpeedTreeWindDirection; // 0xB0
	::UnityEngine::NAPRenderPipeline0::WindType windType; // 0xB4
	::UnityEngine::Material* skyboxForBake; // 0xB8
	::System::Boolean previewSkyboxForBake; // 0xC0
	::System::Single rotateSkyboxForBake; // 0xC4
	::System::Boolean overrideFakeInterior; // 0xC8
	::System::Single interiorDayAndNight; // 0xCC
	::System::Single interiorSmoothnessScale; // 0xD0
	::System::Boolean overrideSceneTwist; // 0xD4
	::System::Boolean mainCameraAsPivot; // 0xD5
	::UnityEngine::GameObject* worldTwistPivot; // 0xD8
	::System::Single worldTwistBendSize; // 0xE0
	::System::Single worldTwistRotationSpeed; // 0xE4
	::System::Single worldTwistSafeDistance; // 0xE8
	::System::Single worldTwistFadeDistance; // 0xEC
	::UnityEngine::Texture* worldTwistAdditionalNoiseMap; // 0xF0
	::System::Single worldTwistNoise1Tiling; // 0xF8
	::UnityEngine::Vector2 worldTwistNoise1Speed; // 0xFC
	::System::Single worldTwistNoise1Intensity; // 0x104
	::System::Single worldTwistNoise2Tiling; // 0x108
	::UnityEngine::Vector2 worldTwistNoise2Speed; // 0x10C
	::System::Single worldTwistNoise2Intensity; // 0x114
	::System::Boolean worldTwistEnableCustomDirection; // 0x118
	::System::Single worldTwistCustomDirection; // 0x11C
	::System::Boolean overrideHotTwist; // 0x120
	::System::Boolean enableHotTwist; // 0x121
	::System::Single hotTwistStrength; // 0x124
	::System::Single hotTwistNoiseScale; // 0x128
	::UnityEngine::Vector2 hotTwistSpeed; // 0x12C
	::UnityEngine::Vector2 hotTwistRepeatX; // 0x134
	::UnityEngine::Vector2 hotTwistRepeatZ; // 0x13C
	::System::Single hotTwistDepthDistance; // 0x144
	::System::Single hotTwistDepthFade; // 0x148
	::System::Boolean hotTwistHeightMaskDebugView; // 0x14C
	::System::Single hotTwistHeightMaskStrength; // 0x150
	::System::Single hotTwistHeightMaskOffset; // 0x154
	::System::Single hotTwistHeightMaskPower; // 0x158
	::System::Boolean overrideSceneSceneEffect; // 0x15C
	::System::Boolean ScanlineOn; // 0x15D
	::System::Single SceneScanlineWidth; // 0x160
	::System::Single SceneScanlineContrast; // 0x164
	::System::Single SceneScanlineAngle; // 0x168
	::System::Single SceneScanlineLerpBrightness; // 0x16C
	::System::Single outlineOpacity; // 0x170
	::System::Single outlineDiffOffset; // 0x174
	::System::Single outlineDepthThreshold; // 0x178
	::System::Single outlineNormalThreshold; // 0x17C
	::System::Single outlineNormalThresholdScale; // 0x180
	::UnityEngine::Color outlineColor; // 0x184
	::System::Single Heightfade; // 0x194
	::System::Single Depthfade; // 0x198
	::System::Single DepthfadeHardness; // 0x19C
	::System::Boolean overrideExpHeightFog; // 0x1A0
	::UnityEngine::Rendering::Universal::ExpHeightFogConfig* expHeightFogConfig; // 0x1A8
	::System::Boolean overrideSecondFog; // 0x1B0
	::UnityEngine::Rendering::Universal::SecondFogConfig* secondFogConfig; // 0x1B8
	::System::Boolean overrideFogMask; // 0x1C0
	::UnityEngine::Rendering::Universal::FogMaskConfig* fogMaskConfig; // 0x1C8
	::System::Boolean overrideVolumetricFog; // 0x1D0
	::System::Boolean hasGlobalVolumetricFog; // 0x1D1
	::System::Boolean volumetricFogDisableFogShadow; // 0x1D2
	::System::Single volumetricFogSize; // 0x1D4
	::System::Single volumetricFog_Jittering; // 0x1D8
	::System::Single volumetricFog_Dithering; // 0x1DC
	::System::Single volumetricFog_IntensityTowardLight; // 0x1E0
	::System::Single volumetricFog_DustIntensity; // 0x1E4
	::System::Single volumetricFog_MaxIntensity; // 0x1E8
	::System::Single volumetricFog_Step; // 0x1EC
	::UnityEngine::Color volumetricFog_Color; // 0x1F0
	::System::Single volumetricFog_PunctualLightMultiplier; // 0x200
	::System::Single volumetricFog_PunctualLightFadePower; // 0x204
	::System::Single volumetricFog_ExtraBlurValue; // 0x208
	::System::Boolean VolumetricFogBlitBeforeEffect; // 0x20C
	::System::Boolean overrideLightFog; // 0x20D
	::System::Boolean hasLightFogProxy; // 0x20E
	::System::Single lightFogMaxDensity; // 0x210
	::System::Single lightFogSoftParticleStartFadeDistance; // 0x214
	::System::Single lightFogSoftParticleFadeFactor; // 0x218
	::System::Boolean useSimpleFakeLightFogProxy; // 0x21C
	::System::Boolean overrideSceneFogCard; // 0x21D
	::System::Boolean overrideSceneFogCardColor; // 0x21E
	::UnityEngine::Color sceneFogCardAmbientScatteringColor; // 0x220
	::System::Boolean useRevertVolumetricFog; // 0x230
	::System::Boolean overrideSkyCloud; // 0x231
	::UnityEngine::Rendering::Universal::SkyCloudConfig* skyCloudConfig; // 0x238
	::System::Boolean overrideSkyCloudLighting; // 0x240
	::System::Boolean CloudLightEnabled; // 0x241
	::System::Single cloudLightWidth; // 0x244
	::System::Single cloudLightStrength; // 0x248
	::System::Single cloudLightMaxIntervalTime; // 0x24C
	::System::Single cloudLightMinIntervalTime; // 0x250
	::System::Single cloudLightDurationTime; // 0x254
	::System::Single cloudLightMaxLength; // 0x258
	::System::Single cloudLightMinLength; // 0x25C
	::System::Single cloudLightLocalTime; // 0x260
	::System::Single cloudLightRandom; // 0x264
	::System::Boolean overrideCloudShadow; // 0x268
	::System::Single cloudShadowIntensity; // 0x26C
	::UnityEngine::Texture* cloudShadow; // 0x270
	::UnityEngine::Vector4 cloudShadowTileAndOffset; // 0x278
	::System::Boolean cloudGodRay; // 0x288
	::UnityEngine::Vector2 cloudShadowMoveSpeed; // 0x28C
	::UnityEngine::Vector3 cloudShadowRotation; // 0x294
	::System::Boolean overrideVolumetricCloud; // 0x2A0
	::UnityEngine::Rendering::Universal::VolumetricCloudConfig* volumetricCloudConfig; // 0x2A8
	::System::Boolean mistBlitAfterColorGrading; // 0x2B0
	::System::Boolean mistBlitAfterParticleDecal; // 0x2B1
	::System::Boolean overrideCloudChromaAmount; // 0x2B2
	::UnityEngine::Color cloudChromaAmountIntensity; // 0x2B4
	::UnityEngine::Vector2 cloudChromaAmount; // 0x2C4
	::UnityEngine::NAPRenderPipeline0::RGBMaskType cloudChromaType; // 0x2CC
	::UnityEngine::Texture2D* cloudChromaAmountIntensityMask; // 0x2D0
	::UnityEngine::Texture2D* cloudChromaAmountMask; // 0x2D8
	::UnityEngine::Vector2 cloudChromaAmountMaskTiling; // 0x2E0
	::UnityEngine::Vector2 cloudChromaAmountMaskSpeed; // 0x2E8
	::UnityEngine::NAPRenderPipeline0::TextureChannel cloudChromaAmountMaskChannel; // 0x2F0
	::System::Boolean overrideSkyCover; // 0x2F4
	::System::Single SkyCoverMoveSpeed; // 0x2F8
	::UnityEngine::Color SkyCoverColor; // 0x2FC
	::System::Boolean useAnimatedSkyCover; // 0x30C
	::System::Single skyCoverAnimationDeltaTime; // 0x310
	::UnityEngine::AnimationCurve* skyCoverAlphaAnimation; // 0x318
	::System::Boolean overrideSceneParticle; // 0x320
	::UnityEngine::Rendering::Universal::SceneParticleConfig* sceneParticleConfig; // 0x328
	::System::Boolean overrideEtherFX; // 0x330
	::System::Single etherFXWaveAngle; // 0x334
	::System::Single etherFXWaveSpeed; // 0x338
	::System::Single etherFXWaveSpacing; // 0x33C
	::System::Single etherEffectDirection; // 0x340
	::System::Single etherEffectSpeed; // 0x344
	::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType particleConfigWeatherType; // 0x348
	::System::Single weatherEffectFoggyIntensity; // 0x34C
	::System::Single weatherEffectSpecialRedIntensity; // 0x350
	::System::Boolean overrideSkyColor; // 0x354
	::UnityEngine::Gradient* skyVerticalGradient; // 0x358
	::System::Single skyVerticalGradientMinRange; // 0x360
	::System::Boolean overrideSunLight; // 0x364
	::UnityEngine::Vector3 mainLightDir; // 0x368
	::System::Boolean overrideSunLightColor; // 0x374
	::UnityEngine::Color mainLightColor; // 0x378
	::System::Single mainLightIntensity; // 0x388
	::System::Boolean overrideSkySun; // 0x38C
	::UnityEngine::Color sunDiskColor; // 0x390
	::System::Single SunDiskSize; // 0x3A0
	::System::Single SunDiskIntensity; // 0x3A4
	::System::Boolean useSingleSunDiskPosition; // 0x3A8
	::UnityEngine::Vector3 sunDiskPosition; // 0x3AC
	::System::Single customSunHardness; // 0x3B8
	::System::Boolean useSunAnimation; // 0x3BC
	::System::Single SunanimationLifeTime; // 0x3C0
	::UnityEngine::AnimationCurve* SunDiskCurve; // 0x3C8
	::System::Boolean overrideSunPost; // 0x3D0
	::System::Boolean enableLensFlareForSun; // 0x3D1
	::UnityEngine::Rendering::LensFlareDataSRP* lensFlareDataSrp; // 0x3D8
	::UnityEngine::Rendering::Universal::LensFlareConfig* lensFlareConfigForSun; // 0x3E0
	::UnityEngine::Rendering::Universal::LightShaftConfig* lightShaftConfigForSun; // 0x3E8
	::System::Boolean overrideMoonLight; // 0x3F0
	::UnityEngine::Vector3 moonDir; // 0x3F4
	::System::Boolean overrideMoonLightColor; // 0x400
	::UnityEngine::Color MoonLightColor; // 0x404
	::System::Single MoonLightIntensity; // 0x414
	::System::Boolean overrideSkyMoon; // 0x418
	::UnityEngine::LazyLoadReference_1<::UnityEngine::Texture*> moonOnSky; // 0x41C
	::UnityEngine::Color MoonColor; // 0x420
	::System::Single moonSize; // 0x430
	::System::Single moonPhaseAlphaBlend; // 0x434
	::UnityEngine::Color MoonGlowColor; // 0x438
	::System::Boolean overrideMoonPost; // 0x448
	::System::Boolean enableLensFlareForMoon; // 0x449
	::UnityEngine::Rendering::LensFlareDataSRP* lensFlareDataSrpForMoon; // 0x450
	::UnityEngine::Rendering::Universal::LensFlareConfig* lensFlareConfigForMoon; // 0x458
	::UnityEngine::Rendering::Universal::LightShaftConfig* lightShaftConfigForMoon; // 0x460
	::System::Boolean overrideSkyStar; // 0x468
	::System::Boolean isNight; // 0x469
	::UnityEngine::LazyLoadReference_1<::UnityEngine::Texture*> starMapOnSky; // 0x46C
	::UnityEngine::LazyLoadReference_1<::UnityEngine::Texture*> starMaskOnSky; // 0x470
	::System::Single starsTwinklingRate; // 0x474
	::System::Single StarsIntensity; // 0x478
	::UnityEngine::LazyLoadReference_1<::UnityEngine::Texture*> galaxyOnSky; // 0x47C
	::UnityEngine::Vector3 galaxyDir; // 0x480
	::UnityEngine::Vector3 galaxyAngleSpeed; // 0x48C
	::System::Single GalaxyIntensity; // 0x498
	::System::Boolean overrideShadowTint; // 0x49C
	::System::Boolean mainLightShadowTint; // 0x49D
	::UnityEngine::Color mainLightShadowTintColor; // 0x4A0
	::System::Single mainLightShadowTintSourceAngle; // 0x4B0
	::System::Single mainLightShadowTintPower; // 0x4B4
	::System::Single mainLightShadowTintRadius; // 0x4B8
	::System::Single mainLightShadowTintRadiusPower; // 0x4BC
	::System::Single mainLightShadowTintDepthBias; // 0x4C0
	::System::Boolean overrideCustomSkyBox; // 0x4C4
	::System::Boolean controlMainLightParam; // 0x4C5
	::UnityEngine::Material* replaceSkybox; // 0x4C8
	::UnityEngine::Material* hollowCoverMat; // 0x4D0
	::UnityEngine::Gradient* cloudOnSkyColor; // 0x4D8
	::System::Single cloudRotateAngle; // 0x4E0
	::System::Boolean overrideWetness; // 0x4E4
	::System::Single wetness; // 0x4E8
	::System::Boolean ignoreHeightMap; // 0x4EC
	::System::Boolean ignoreNoiseMap; // 0x4ED
	::UnityEngine::Texture* wetnessNoise; // 0x4F0
	::System::Single wetnessNoiseTilling; // 0x4F8
	::UnityEngine::Vector2 wetnessNoiseClampRange; // 0x4FC
	::System::Boolean wetnessNoiseForHeight; // 0x504
	::UnityEngine::Vector2 porosity; // 0x508
	::System::Boolean overrideRainConfig; // 0x510
	::System::Boolean isRaining; // 0x511
	::UnityEngine::Texture* rainDropTexture; // 0x518
	::UnityEngine::Color rainDropColor; // 0x520
	::System::Single rainDropMultiplyLightColor; // 0x530
	::System::Int32 rainDropBatchCount; // 0x534
	::System::Single rainDropSpeed; // 0x538
	::System::Single rainDropMaxHeight; // 0x53C
	::System::Single rainDropMinHeight; // 0x540
	::UnityEngine::Vector2 rainDropSizeX; // 0x544
	::UnityEngine::Vector2 rainDropSizeY; // 0x54C
	::System::Single rainDropAngle; // 0x554
	::System::Single rainDropAngleIntensity; // 0x558
	::System::Single rainDropOuterCircleRadius; // 0x55C
	::System::Single rainDropInnerCircleRadius; // 0x560
	::UnityEngine::Rendering::Universal::ScreenRainDropConfig* screenRainDropConfig; // 0x568
	::UnityEngine::Texture* rainFlowTexture; // 0x570
	::System::Single rainFlowTilling; // 0x578
	::System::Single rainFlowSpeed; // 0x57C
	::System::Single rainFlowIntensity; // 0x580
	::UnityEngine::Texture* rainFlowNoise; // 0x588
	::UnityEngine::Texture* rainTexture2; // 0x590
	::System::Single rippleTextureTilling; // 0x598
	::System::Single rippleSpeed; // 0x59C
	::System::Single rippleDensity; // 0x5A0
	::System::Single rippleFoamIntensity; // 0x5A4
	::UnityEngine::Texture* rainSplashTexture; // 0x5A8
	::UnityEngine::Texture* rainSplashTexture2; // 0x5B0
	::UnityEngine::Texture* rainSplashTexture3; // 0x5B8
	::UnityEngine::Color rainSplashColor; // 0x5C0
	::UnityEngine::Vector2 rainSplashIntensityRange; // 0x5D0
	::UnityEngine::Vector2 rainSplashSizeRange; // 0x5D8
	::System::Single rainSplashPlayTime; // 0x5E0
	::System::Int32 rainSplashCount; // 0x5E4
	::System::Single rainSplashRange; // 0x5E8
	::System::Boolean overrideLightning; // 0x5EC
	::System::Boolean useAnimation; // 0x5ED
	::System::Single animationLifeTime; // 0x5F0
	::UnityEngine::AnimationCurve* mainLightIntensityCurve; // 0x5F8
	::System::Boolean useLightningFx; // 0x600
	::UnityEngine::ParticleSystem* lightningFxPrefab; // 0x608
	::UnityEngine::Vector2 lightningFxDistanceRange; // 0x610
	::UnityEngine::Vector2 lightningFxHeightRange; // 0x618
	::UnityEngine::Vector2 lightningFxInterval; // 0x620
	::System::Boolean overrideDetailLayerConfig; // 0x628
	::UnityEngine::Rendering::Universal::DetailLayerConfig* detailLayerConfig; // 0x630
	::System::Boolean overrideSkyGridConfig; // 0x638
	::UnityEngine::Rendering::Universal::SkyGridConfig* skyGridConfig; // 0x640
	::System::Boolean overrideCharacterToneMapping; // 0x648
	::System::Single characterLightTonemapStart; // 0x64C
	::System::Single characterLightTonemapMax; // 0x650
	::System::Single characterLightTonemapFaceAdd; // 0x654
	::System::Single characterLightTonemapFaceEnd; // 0x658
	::System::Single characterGiWeight; // 0x65C
	::System::Single toeStrength; // 0x660
	::System::Single toeLength; // 0x664
	::System::Single shoulderStrength; // 0x668
	::System::Single shoulderLength; // 0x66C
	::System::Single shoulderAngle; // 0x670
	::System::Single customGamma; // 0x674
	::System::Boolean characterEditorIsIndoor; // 0x678
	::System::Boolean overrideCharacterLight; // 0x679
	::UnityEngine::Color mainLightColorForChara; // 0x67C
	::System::Single mainLightIntensityForChara; // 0x68C
	::System::Single mainLightShadowStrengthForChara; // 0x690
	::System::Single rimGlowIntensityForChara; // 0x694
	::UnityEngine::Color MoonLightColorForChar; // 0x698
	::System::Single MoonLightIntensityForChar; // 0x6A8
	::System::Single moonLightShadowStrengthForChara; // 0x6AC
	::System::Single moonRimGlowIntensityForChara; // 0x6B0
	::UnityEngine::Color ambient; // 0x6B4
	::UnityEngine::Color mainLightColorForCharaIndoor; // 0x6C4
	::System::Single mainLightIntensityForCharaIndoor; // 0x6D4
	::System::Single mainLightShadowStrengthForCharaIndoor; // 0x6D8
	::System::Single rimGlowIntensityForCharaIndoor; // 0x6DC
	::UnityEngine::Color MoonLightColorForCharIndoor; // 0x6E0
	::System::Single MoonLightIntensityForCharIndoor; // 0x6F0
	::System::Single moonLightShadowStrengthForCharaIndoor; // 0x6F4
	::System::Single moonRimGlowIntensityForCharaIndoor; // 0x6F8
	::UnityEngine::Color ambientIndoor; // 0x6FC
	::System::Boolean overrideCharacterRamp; // 0x70C
	::UnityEngine::Color skinFrontTint; // 0x710
	::UnityEngine::Color frontTint; // 0x720
	::UnityEngine::Color skinSssTint; // 0x730
	::UnityEngine::Color sssTint; // 0x740
	::UnityEngine::Color skinShallowTint; // 0x750
	::UnityEngine::Color shallowTint; // 0x760
	::UnityEngine::Color skinShallowFadeTint; // 0x770
	::UnityEngine::Color shallowFadeTint; // 0x780
	::UnityEngine::Color skinShadowTint; // 0x790
	::UnityEngine::Color shadowTint; // 0x7A0
	::UnityEngine::Color skinShadowFadeTint; // 0x7B0
	::UnityEngine::Color shadowFadeTint; // 0x7C0
	::UnityEngine::Color ambientGradient; // 0x7D0
	::UnityEngine::Color outlineTint; // 0x7E0
	::System::Boolean useShadowTintAsOutline; // 0x7F0
	::UnityEngine::Color skinFrontTintIndoor; // 0x7F4
	::UnityEngine::Color frontTintIndoor; // 0x804
	::UnityEngine::Color skinSssTintIndoor; // 0x814
	::UnityEngine::Color sssTintIndoor; // 0x824
	::UnityEngine::Color skinShallowTintIndoor; // 0x834
	::UnityEngine::Color shallowTintIndoor; // 0x844
	::UnityEngine::Color skinShallowFadeTintIndoor; // 0x854
	::UnityEngine::Color shallowFadeTintIndoor; // 0x864
	::UnityEngine::Color skinShadowTintIndoor; // 0x874
	::UnityEngine::Color shadowTintIndoor; // 0x884
	::UnityEngine::Color skinShadowFadeTintIndoor; // 0x894
	::UnityEngine::Color shadowFadeTintIndoor; // 0x8A4
	::UnityEngine::Color ambientGradientIndoor; // 0x8B4
	::UnityEngine::Color outlineTintIndoor; // 0x8C4
	::System::Boolean useShadowTintAsOutlineIndoor; // 0x8D4
	::System::Boolean overrideCharacterPost; // 0x8D5
	::System::Boolean characterColorGradingEnabled; // 0x8D6
	::System::Single characterPostExposure; // 0x8D8
	::System::Single contrast; // 0x8DC
	::System::Single saturation; // 0x8E0
	::UnityEngine::Vector4 lift; // 0x8E4
	::UnityEngine::Vector4 gamma; // 0x8F4
	::UnityEngine::Vector4 gain; // 0x904
	::System::Single characterPostExposureIndoor; // 0x914
	::System::Single contrastIndoor; // 0x918
	::System::Single saturationIndoor; // 0x91C
	::UnityEngine::Vector4 liftIndoor; // 0x920
	::UnityEngine::Vector4 gammaIndoor; // 0x930
	::UnityEngine::Vector4 gainIndoor; // 0x940
	::System::Boolean skinColorsInitialized; // 0x950
	::System::Boolean overrideWaterConfig; // 0x951
	::System::Boolean useGlobalWaterConfig; // 0x952
	::UnityEngine::Rendering::Universal::SingleWeatherConfigWater* localWaterConfig; // 0x958
	::System::Boolean overrideOceanConfig; // 0x960
	::UnityEngine::Rendering::Universal::OceanConfig* oceanConfig; // 0x968
	::System::Boolean trackControlScenePost; // 0x970
	::System::Boolean overrideOldSceneLut; // 0x971
	::System::Boolean useCustomLookupTable; // 0x972
	::UnityEngine::Texture* lookupTable; // 0x978
	::System::Single lutContribution; // 0x980
	::System::Single postExposure; // 0x984
	::UnityEngine::Rendering::Universal::ScenePostEffectConfig* scenePostEffectConfig; // 0x988
	::System::Boolean overrideSceneLut; // 0x990
	::System::Boolean useLogLookupTable; // 0x991
	::UnityEngine::Texture* LogLutTex; // 0x998
	::System::Single loglutContribution; // 0x9A0
	::UnityEngine::Texture* PreLogLutTex; // 0x9A8
	::System::Single preLoglutContribution; // 0x9B0
	::System::Boolean overrideSceneBloom; // 0x9B4
	::System::Boolean useSceneBloom; // 0x9B5
	::System::Single bloomThreshold; // 0x9B8
	::System::Single bloomMaxThreshold; // 0x9BC
	::System::Single bloomIntensity; // 0x9C0
	::System::Boolean overrideSpecularTonemapping; // 0x9C4
	::System::Boolean enableSpecularTonemapping; // 0x9C5
	::System::Boolean previewSpecularLutTexture; // 0x9C6
	::UnityEngine::Texture2D* specularTonemappingLut; // 0x9C8
	::UnityEngine::NAPRenderPipeline0::TextureCurve* specularToneCurve_master; // 0x9D0
	::UnityEngine::NAPRenderPipeline0::TextureCurve* specularToneCurve_red; // 0x9D8
	::UnityEngine::NAPRenderPipeline0::TextureCurve* specularToneCurve_green; // 0x9E0
	::UnityEngine::NAPRenderPipeline0::TextureCurve* specularToneCurve_blue; // 0x9E8
	::UnityEngine::RenderTexture* specularToneMappingCurveTexture; // 0x9F0
	::UnityEngine::Texture2D* specularCurveTexMaster; // 0x9F8
	::UnityEngine::Texture2D* specularCurveTexR; // 0xA00
	::UnityEngine::Texture2D* specularCurveTexG; // 0xA08
	::UnityEngine::Texture2D* specularCurveTexB; // 0xA10
	::UnityEngine::Material* specularLUTMat; // 0xA18
	::UnityEngine::Vector2 specularDistanceFade; // 0xA20
	::UnityEngine::Vector2 specularDistanceFadeValue; // 0xA28
	::UnityEngine::Vector2 specularAngleFade; // 0xA30
	::UnityEngine::Vector2 specularAngleFadeValue; // 0xA38
	::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType WeatherType; // 0xA40
	::System::Boolean isSerializedData; // 0xA44
	::WeatherConfig_ResultMainLightParams resultMainLightParams; // 0xA48
	::System::Single _CachedMainLightIntensity; // 0xAA0
	::System::Single _AnimationSunDisk; // 0xAA4
	::WeatherConfig_CapturedWeatherData capturedData; // 0xAA8
	::WeatherConfig_RuntimeUsedNightTextures nightTextures; // 0xB18
	::System::Single _OverrideSkyWeight_k__BackingField; // 0xB38
	::UnityEngine::Color _OverrideSkyBtnColor_k__BackingField; // 0xB3C
	::UnityEngine::Color _OverrideSkyTopColor_k__BackingField; // 0xB4C
	::UnityEngine::Color _OverrideLowCloudLightColor_k__BackingField; // 0xB5C
	::UnityEngine::Color _OverrideLowCloudDarkColor_k__BackingField; // 0xB6C
	::UnityEngine::NAPRenderPipeline0::ESupportedGIType _SupportedGIType_k__BackingField; // 0xB7C
	::System::Single _SceneClipPlaneY_k__BackingField; // 0xB80
	::UnityEngine::Mesh* _customSkyboxMesh_k__BackingField; // 0xB88
	::UnityEngine::Material* _sceneEtherCoverEffectMat_k__BackingField; // 0xB90
	::System::Single _hollowCoverSize_k__BackingField; // 0xB98
	::UnityEngine::Mesh* _hollowCoverMesh_k__BackingField; // 0xBA0
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* _waterMaterials_k__BackingField; // 0xBA8
	::System::Single _waterHeight_k__BackingField; // 0xBB0
	::System::Boolean _hasTriggerSpecialCloudLayer_k__BackingField; // 0xBB4
	::System::Single cloudLerpAlpha; // 0xBB8
	::System::Single lerpValue; // 0xBBC
	::UnityEngine::Texture* _HeightMap_k__BackingField; // 0xBC0
	::System::Boolean _enableLocalHeightMap_k__BackingField; // 0xBC8
	::UnityEngine::Texture* _OceanMaskMap_k__BackingField; // 0xBD0
	::UnityEngine::Vector4 _OceanMaskMapRect_k__BackingField; // 0xBD8
	::System::Single _SeaLevelHeight_k__BackingField; // 0xBE8
	::System::Single _OceanMaskHeightOffset_k__BackingField; // 0xBEC
	::UnityEngine::Rendering::Universal::OceanFFTBakeData* _OceanFFTBakeData_k__BackingField; // 0xBF0
	::UnityEngine::Vector3 _OceanCenter_k__BackingField; // 0xBF8
	::System::Single _OceanDepthOffset_k__BackingField; // 0xC04
	::UnityEngine::Texture* _HeightMap2_k__BackingField; // 0xC08
	::UnityEngine::Vector4 _GlobalDecalBlendParams_k__BackingField; // 0xC10
	::UnityEngine::Texture* _SceneWaterPoolMap_k__BackingField; // 0xC20
	::UnityEngine::Vector4 _SceneWaterPoolBoundBox_k__BackingField; // 0xC28
	::UnityEngine::Vector2 _SceneWaterPoolMinMaxHeight_k__BackingField; // 0xC38
	::UnityEngine::Vector4 _SceneBoundBox_k__BackingField; // 0xC40
	::System::Single _sceneHeightMapYOffset_k__BackingField; // 0xC50
	::System::Boolean _isOptimizedSceneBoundBoxValue_k__BackingField; // 0xC54
	::UnityEngine::Vector4 _NavMeshBoundBox_k__BackingField; // 0xC58
	::UnityEngine::Vector4 _GroundPos_k__BackingField; // 0xC68
	::UnityEngine::Rendering::Universal::SingleWeatherConfigParticle* _particleConfig_k__BackingField; // 0xC78
	::UnityEngine::Rendering::Universal::SingleWeatherConfigWater* _waterConfig_k__BackingField; // 0xC80
	::UnityEngine::Rendering::Universal::SingleWeatherConfigWind* _windConfig_k__BackingField; // 0xC88
	::System::Single preFrameDaytime; // 0xC90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + WEATHERCONFIG__CCTOR_OFFSET))();
	}

	static ::WeatherConfig* DefaultWeatherConfig()
	{
		return ((::WeatherConfig*(*)())((::PBYTE)hIl2Cpp + WEATHERCONFIG_DEFAULTWEATHERCONFIG_OFFSET))();
	}

	::System::Boolean get_EnableOcean()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_ENABLEOCEAN_OFFSET))(this);
	}

	::System::Boolean get_DisableSSPR()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_DISABLESSPR_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* get_SpecularToneMappingCurveTexture()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_SPECULARTONEMAPPINGCURVETEXTURE_OFFSET))(this);
	}

	::System::Single get_OverrideSkyWeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_OVERRIDESKYWEIGHT_OFFSET))(this);
	}

	::System::Void set_OverrideSkyWeight(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_OVERRIDESKYWEIGHT_OFFSET))(this, value);
	}

	::UnityEngine::Color get_OverrideSkyBtnColor()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_OVERRIDESKYBTNCOLOR_OFFSET))(this);
	}

	::System::Void set_OverrideSkyBtnColor(::UnityEngine::Color value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_OVERRIDESKYBTNCOLOR_OFFSET))(this, value);
	}

	::UnityEngine::Color get_OverrideSkyTopColor()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_OVERRIDESKYTOPCOLOR_OFFSET))(this);
	}

	::System::Void set_OverrideSkyTopColor(::UnityEngine::Color value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_OVERRIDESKYTOPCOLOR_OFFSET))(this, value);
	}

	::UnityEngine::Color get_OverrideLowCloudLightColor()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_OVERRIDELOWCLOUDLIGHTCOLOR_OFFSET))(this);
	}

	::System::Void set_OverrideLowCloudLightColor(::UnityEngine::Color value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_OVERRIDELOWCLOUDLIGHTCOLOR_OFFSET))(this, value);
	}

	::UnityEngine::Color get_OverrideLowCloudDarkColor()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_OVERRIDELOWCLOUDDARKCOLOR_OFFSET))(this);
	}

	::System::Void set_OverrideLowCloudDarkColor(::UnityEngine::Color value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_OVERRIDELOWCLOUDDARKCOLOR_OFFSET))(this, value);
	}

	::UnityEngine::NAPRenderPipeline0::ESupportedGIType get_SupportedGIType()
	{
		return ((::UnityEngine::NAPRenderPipeline0::ESupportedGIType(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_SUPPORTEDGITYPE_OFFSET))(this);
	}

	::System::Void set_SupportedGIType(::UnityEngine::NAPRenderPipeline0::ESupportedGIType value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::ESupportedGIType))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_SUPPORTEDGITYPE_OFFSET))(this, value);
	}

	::System::Single get_SceneClipPlaneY()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_SCENECLIPPLANEY_OFFSET))(this);
	}

	::System::Void set_SceneClipPlaneY(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_SCENECLIPPLANEY_OFFSET))(this, value);
	}

	::UnityEngine::Mesh* get_customSkyboxMesh()
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_CUSTOMSKYBOXMESH_OFFSET))(this);
	}

	::System::Void set_customSkyboxMesh(::UnityEngine::Mesh* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_CUSTOMSKYBOXMESH_OFFSET))(this, value);
	}

	::UnityEngine::Material* get_sceneEtherCoverEffectMat()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_SCENEETHERCOVEREFFECTMAT_OFFSET))(this);
	}

	::System::Void set_sceneEtherCoverEffectMat(::UnityEngine::Material* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_SCENEETHERCOVEREFFECTMAT_OFFSET))(this, value);
	}

	::System::Single get_hollowCoverSize()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_HOLLOWCOVERSIZE_OFFSET))(this);
	}

	::System::Void set_hollowCoverSize(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_HOLLOWCOVERSIZE_OFFSET))(this, value);
	}

	::UnityEngine::Mesh* get_hollowCoverMesh()
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_HOLLOWCOVERMESH_OFFSET))(this);
	}

	::System::Void set_hollowCoverMesh(::UnityEngine::Mesh* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_HOLLOWCOVERMESH_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Material*>* get_waterMaterials()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_WATERMATERIALS_OFFSET))(this);
	}

	::System::Void set_waterMaterials(::System::Collections::Generic::List_1<::UnityEngine::Material*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_WATERMATERIALS_OFFSET))(this, value);
	}

	::System::Single get_waterHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_WATERHEIGHT_OFFSET))(this);
	}

	::System::Void set_waterHeight(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_WATERHEIGHT_OFFSET))(this, value);
	}

	::System::Boolean get_hasTriggerSpecialCloudLayer()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_HASTRIGGERSPECIALCLOUDLAYER_OFFSET))(this);
	}

	::System::Void set_hasTriggerSpecialCloudLayer(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_HASTRIGGERSPECIALCLOUDLAYER_OFFSET))(this, value);
	}

	::System::Single get_LerpValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_LERPVALUE_OFFSET))(this);
	}

	::System::Void set_LerpValue(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_LERPVALUE_OFFSET))(this, value);
	}

	::System::Single get_CloudLerpAlpha()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_CLOUDLERPALPHA_OFFSET))(this);
	}

	::System::Void set_CloudLerpAlpha(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_CLOUDLERPALPHA_OFFSET))(this, value);
	}

	::UnityEngine::Texture* get_HeightMap()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_HEIGHTMAP_OFFSET))(this);
	}

	::System::Void set_HeightMap(::UnityEngine::Texture* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_HEIGHTMAP_OFFSET))(this, value);
	}

	::System::Boolean get_enableLocalHeightMap()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_ENABLELOCALHEIGHTMAP_OFFSET))(this);
	}

	::System::Void set_enableLocalHeightMap(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_ENABLELOCALHEIGHTMAP_OFFSET))(this, value);
	}

	::UnityEngine::Texture* get_OceanMaskMap()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_OCEANMASKMAP_OFFSET))(this);
	}

	::System::Void set_OceanMaskMap(::UnityEngine::Texture* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_OCEANMASKMAP_OFFSET))(this, value);
	}

	::UnityEngine::Vector4 get_OceanMaskMapRect()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_OCEANMASKMAPRECT_OFFSET))(this);
	}

	::System::Void set_OceanMaskMapRect(::UnityEngine::Vector4 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_OCEANMASKMAPRECT_OFFSET))(this, value);
	}

	::System::Single get_SeaLevelHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_SEALEVELHEIGHT_OFFSET))(this);
	}

	::System::Void set_SeaLevelHeight(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_SEALEVELHEIGHT_OFFSET))(this, value);
	}

	::System::Single get_OceanMaskHeightOffset()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_OCEANMASKHEIGHTOFFSET_OFFSET))(this);
	}

	::System::Void set_OceanMaskHeightOffset(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_OCEANMASKHEIGHTOFFSET_OFFSET))(this, value);
	}

	::UnityEngine::Rendering::Universal::OceanFFTBakeData* get_OceanFFTBakeData()
	{
		return ((::UnityEngine::Rendering::Universal::OceanFFTBakeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_OCEANFFTBAKEDATA_OFFSET))(this);
	}

	::System::Void set_OceanFFTBakeData(::UnityEngine::Rendering::Universal::OceanFFTBakeData* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::OceanFFTBakeData*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_OCEANFFTBAKEDATA_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_OceanCenter()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_OCEANCENTER_OFFSET))(this);
	}

	::System::Void set_OceanCenter(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_OCEANCENTER_OFFSET))(this, value);
	}

	::System::Single get_OceanDepthOffset()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_OCEANDEPTHOFFSET_OFFSET))(this);
	}

	::System::Void set_OceanDepthOffset(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_OCEANDEPTHOFFSET_OFFSET))(this, value);
	}

	::UnityEngine::Texture* get_HeightMap2()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_HEIGHTMAP2_OFFSET))(this);
	}

	::System::Void set_HeightMap2(::UnityEngine::Texture* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_HEIGHTMAP2_OFFSET))(this, value);
	}

	::UnityEngine::Vector4 get_GlobalDecalBlendParams()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_GLOBALDECALBLENDPARAMS_OFFSET))(this);
	}

	::System::Void set_GlobalDecalBlendParams(::UnityEngine::Vector4 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_GLOBALDECALBLENDPARAMS_OFFSET))(this, value);
	}

	::UnityEngine::Texture* get_SceneWaterPoolMap()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_SCENEWATERPOOLMAP_OFFSET))(this);
	}

	::System::Void set_SceneWaterPoolMap(::UnityEngine::Texture* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_SCENEWATERPOOLMAP_OFFSET))(this, value);
	}

	::UnityEngine::Vector4 get_SceneWaterPoolBoundBox()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_SCENEWATERPOOLBOUNDBOX_OFFSET))(this);
	}

	::System::Void set_SceneWaterPoolBoundBox(::UnityEngine::Vector4 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_SCENEWATERPOOLBOUNDBOX_OFFSET))(this, value);
	}

	::UnityEngine::Vector2 get_SceneWaterPoolMinMaxHeight()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_SCENEWATERPOOLMINMAXHEIGHT_OFFSET))(this);
	}

	::System::Void set_SceneWaterPoolMinMaxHeight(::UnityEngine::Vector2 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_SCENEWATERPOOLMINMAXHEIGHT_OFFSET))(this, value);
	}

	::UnityEngine::Vector4 get_HeightMapResolution()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_HEIGHTMAPRESOLUTION_OFFSET))(this);
	}

	::UnityEngine::Vector4 get_SceneBoundBox()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_SCENEBOUNDBOX_OFFSET))(this);
	}

	::System::Void set_SceneBoundBox(::UnityEngine::Vector4 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_SCENEBOUNDBOX_OFFSET))(this, value);
	}

	::System::Single get_sceneHeightMapYOffset()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_SCENEHEIGHTMAPYOFFSET_OFFSET))(this);
	}

	::System::Void set_sceneHeightMapYOffset(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_SCENEHEIGHTMAPYOFFSET_OFFSET))(this, value);
	}

	::System::Boolean get_isOptimizedSceneBoundBoxValue()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_ISOPTIMIZEDSCENEBOUNDBOXVALUE_OFFSET))(this);
	}

	::System::Void set_isOptimizedSceneBoundBoxValue(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_ISOPTIMIZEDSCENEBOUNDBOXVALUE_OFFSET))(this, value);
	}

	::UnityEngine::Vector4 get_NavMeshBoundBox()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_NAVMESHBOUNDBOX_OFFSET))(this);
	}

	::System::Void set_NavMeshBoundBox(::UnityEngine::Vector4 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_NAVMESHBOUNDBOX_OFFSET))(this, value);
	}

	::UnityEngine::Vector4 get_GroundPos()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_GROUNDPOS_OFFSET))(this);
	}

	::System::Void set_GroundPos(::UnityEngine::Vector4 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_GROUNDPOS_OFFSET))(this, value);
	}

	::UnityEngine::Rendering::Universal::SingleWeatherConfigParticle* get_particleConfig()
	{
		return ((::UnityEngine::Rendering::Universal::SingleWeatherConfigParticle*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_PARTICLECONFIG_OFFSET))(this);
	}

	::System::Void set_particleConfig(::UnityEngine::Rendering::Universal::SingleWeatherConfigParticle* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::SingleWeatherConfigParticle*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_PARTICLECONFIG_OFFSET))(this, value);
	}

	::UnityEngine::Rendering::Universal::SingleWeatherConfigWater* get_waterConfig()
	{
		return ((::UnityEngine::Rendering::Universal::SingleWeatherConfigWater*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_WATERCONFIG_OFFSET))(this);
	}

	::System::Void set_waterConfig(::UnityEngine::Rendering::Universal::SingleWeatherConfigWater* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::SingleWeatherConfigWater*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_WATERCONFIG_OFFSET))(this, value);
	}

	::UnityEngine::Rendering::Universal::SingleWeatherConfigWind* get_windConfig()
	{
		return ((::UnityEngine::Rendering::Universal::SingleWeatherConfigWind*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_WINDCONFIG_OFFSET))(this);
	}

	::System::Void set_windConfig(::UnityEngine::Rendering::Universal::SingleWeatherConfigWind* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::SingleWeatherConfigWind*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_WINDCONFIG_OFFSET))(this, value);
	}

	::System::Void Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_RELEASE_OFFSET))(this);
	}

	static ::WeatherConfig* LerpWeatherNew(::WeatherConfig* from, ::WeatherConfig* to, ::System::Single lerpV, ::System::Boolean isPartial)
	{
		return ((::WeatherConfig*(*)(::WeatherConfig*, ::WeatherConfig*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + WEATHERCONFIG_LERPWEATHERNEW_OFFSET))(from, to, lerpV, isPartial);
	}

	::System::Void SetFog(::UnityEngine::Rendering::Universal::ExpHeightFogConfig* fogConfig)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ExpHeightFogConfig*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SETFOG_OFFSET))(this, fogConfig);
	}

	::System::Boolean IsLightShaftOn()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_ISLIGHTSHAFTON_OFFSET))(this);
	}

	::System::Void SetVisualEnvData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SETVISUALENVDATA_OFFSET))(this);
	}

	::System::Void BindMainLightData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_BINDMAINLIGHTDATA_OFFSET))(this);
	}

	::System::Void BindNightTextures(::WeatherConfig* weatherConfig, ::System::Boolean asNight)
	{
		return ((::System::Void(*)(::PVOID, ::WeatherConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + WEATHERCONFIG_BINDNIGHTTEXTURES_OFFSET))(this, weatherConfig, asNight);
	}

	::System::Single EvaluateSunDisk(::System::Single time)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WEATHERCONFIG_EVALUATESUNDISK_OFFSET))(this, time);
	}

	::System::Single EvaluateMainLightIntensity(::System::Single time)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WEATHERCONFIG_EVALUATEMAINLIGHTINTENSITY_OFFSET))(this, time);
	}

	::System::Boolean IsAmbientActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_ISAMBIENTACTIVE_OFFSET))(this);
	}

	::System::Void CaptureDataForRender()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_CAPTUREDATAFORRENDER_OFFSET))(this);
	}

	::System::Single GetDynamicObjectGIIntensity()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETDYNAMICOBJECTGIINTENSITY_OFFSET))(this);
	}

	::UnityEngine::Vector4 GetKodamaGIParams()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETKODAMAGIPARAMS_OFFSET))(this);
	}

	::System::Boolean GetCharacterColorGradingEnabled()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETCHARACTERCOLORGRADINGENABLED_OFFSET))(this);
	}

	::System::Void LearpCharacterColorGradingParams(::UnityEngine::NAPRenderPipeline0::CharacterColorGradingParams& param, ::System::Single indoorWeight)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CharacterColorGradingParams&, ::System::Single))((::PBYTE)hIl2Cpp + WEATHERCONFIG_LEARPCHARACTERCOLORGRADINGPARAMS_OFFSET))(this, param, indoorWeight);
	}

	::System::Void GetUserLookupTableParams(::UnityEngine::Texture*& userLutTex, ::UnityEngine::Vector4& userLutParam)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETUSERLOOKUPTABLEPARAMS_OFFSET))(this, userLutTex, userLutParam);
	}

	::System::Void GetUserLogLutParams(::UnityEngine::Texture*& userLutTex, ::UnityEngine::Vector4& userLutParam, ::UnityEngine::Texture*& userPreLogLut, ::System::Single& lerpAlpha)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*&, ::UnityEngine::Vector4&, ::UnityEngine::Texture*&, ::System::Single&))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETUSERLOGLUTPARAMS_OFFSET))(this, userLutTex, userLutParam, userPreLogLut, lerpAlpha);
	}

	::System::Boolean GetUseCloudMiddleColor()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETUSECLOUDMIDDLECOLOR_OFFSET))(this);
	}

	::System::Boolean GetUseAnimation()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETUSEANIMATION_OFFSET))(this);
	}

	::System::Boolean GetPreviewSkyboxForBake()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETPREVIEWSKYBOXFORBAKE_OFFSET))(this);
	}

	::System::Void GetDrawCloudParams(::UnityEngine::NAPRenderPipeline0::DrawCloudParams& parameters)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::DrawCloudParams&))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETDRAWCLOUDPARAMS_OFFSET))(this, parameters);
	}

	::UnityEngine::NAPRenderPipeline0::EKodamaGIType GetKodamaGIType()
	{
		return ((::UnityEngine::NAPRenderPipeline0::EKodamaGIType(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETKODAMAGITYPE_OFFSET))(this);
	}

	::UnityEngine::NAPRenderPipeline0::ESupportedGIType GetSupportedGIType()
	{
		return ((::UnityEngine::NAPRenderPipeline0::ESupportedGIType(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETSUPPORTEDGITYPE_OFFSET))(this);
	}

	::UnityEngine::Vector3 GetIBLReflectionParam()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETIBLREFLECTIONPARAM_OFFSET))(this);
	}

	::System::Single GetPostExposure()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETPOSTEXPOSURE_OFFSET))(this);
	}

	::UnityEngine::Vector3 GetGroundPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETGROUNDPOS_OFFSET))(this);
	}

	::UnityEngine::Material* GetReplaceSkyBoxMat()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETREPLACESKYBOXMAT_OFFSET))(this);
	}

	::System::Boolean IsSkyBoxForBake()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_ISSKYBOXFORBAKE_OFFSET))(this);
	}

	::System::Void GetWeatherConfigDrawSkyParams(::UnityEngine::NAPRenderPipeline0::WeatherConfigDrawSkyParams& skyParam)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::WeatherConfigDrawSkyParams&))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETWEATHERCONFIGDRAWSKYPARAMS_OFFSET))(this, skyParam);
	}

	::System::Boolean SetupChromaticAberration(::UnityEngine::Rendering::CommandBuffer* cmd)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SETUPCHROMATICABERRATION_OFFSET))(this, cmd);
	}

	::System::Void GetDrawSkyCoverParams(::UnityEngine::NAPRenderPipeline0::DrawSkyCoverParams& parameters)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::DrawSkyCoverParams&))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETDRAWSKYCOVERPARAMS_OFFSET))(this, parameters);
	}

	::System::Void GetDrawRainDropParams(::UnityEngine::NAPRenderPipeline0::DrawRainDropParams& p)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::DrawRainDropParams&))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETDRAWRAINDROPPARAMS_OFFSET))(this, p);
	}

	::System::Void GetDrawRainSplashParams(::UnityEngine::NAPRenderPipeline0::DrawRainSplashParams& p)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::DrawRainSplashParams&))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETDRAWRAINSPLASHPARAMS_OFFSET))(this, p);
	}

	::System::Void GetUpdateKodamaGILightingParams(::UnityEngine::NAPRenderPipeline0::UpdateKodamaLightingParams& p)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::UpdateKodamaLightingParams&))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETUPDATEKODAMAGILIGHTINGPARAMS_OFFSET))(this, p);
	}

	::System::Void GetLightShaftDrawParams(::UnityEngine::NAPRenderPipeline0::DrawLightShaftParams& p)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::DrawLightShaftParams&))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETLIGHTSHAFTDRAWPARAMS_OFFSET))(this, p);
	}

	::UnityEngine::Vector4 GetTintShadowBlurRadius()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETTINTSHADOWBLURRADIUS_OFFSET))(this);
	}

	::System::Boolean HasGlobalVolumetricFog()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_HASGLOBALVOLUMETRICFOG_OFFSET))(this);
	}

	::System::Void GetDrawVolumetricFogWeatherConfigParams(::UnityEngine::NAPRenderPipeline0::DrawVolumetricFogWeatherConfigParams& p, ::System::Single globalFogIntensity)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::DrawVolumetricFogWeatherConfigParams&, ::System::Single))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETDRAWVOLUMETRICFOGWEATHERCONFIGPARAMS_OFFSET))(this, p, globalFogIntensity);
	}

	::System::Void GetDrawFakeLightVolumetricFogParam(::UnityEngine::NAPRenderPipeline0::DrawFakeLightVolumetricFogParam& p)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::DrawFakeLightVolumetricFogParam&))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETDRAWFAKELIGHTVOLUMETRICFOGPARAM_OFFSET))(this, p);
	}

	::System::Boolean HasLightFogProxy()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_HASLIGHTFOGPROXY_OFFSET))(this);
	}

	::System::Void GetWeatherConfigSkyLutGradParams(::UnityEngine::NAPRenderPipeline0::WeatherConfigSkyLutGradParams& p)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::WeatherConfigSkyLutGradParams&))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETWEATHERCONFIGSKYLUTGRADPARAMS_OFFSET))(this, p);
	}

	::UnityEngine::Vector3 GetMainLightDir()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETMAINLIGHTDIR_OFFSET))(this);
	}

	::System::Int32 GetWeatherConfigSkyLutHashes(::Il2CppArray<::System::Int32>* hashes)
	{
		return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETWEATHERCONFIGSKYLUTHASHES_OFFSET))(this, hashes);
	}

	::UnityEngine::Texture* GetLookupTable()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETLOOKUPTABLE_OFFSET))(this);
	}

	::UnityEngine::Rendering::Universal::SceneColorGradingParams GetSceneColorGradingParams(::System::Boolean applyLutAfterEverything)
	{
		return ((::UnityEngine::Rendering::Universal::SceneColorGradingParams(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETSCENECOLORGRADINGPARAMS_OFFSET))(this, applyLutAfterEverything);
	}

	::UnityEngine::Texture2D* CreateToneCurveTexture()
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_CREATETONECURVETEXTURE_OFFSET))(this);
	}

	::System::Void SetupSpecularTonemapping(::UnityEngine::Rendering::CommandBuffer* cmd)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SETUPSPECULARTONEMAPPING_OFFSET))(this, cmd);
	}

	::System::Void CopyCharacterConfig(::WeatherConfig* target, ::System::Boolean copyCharLightData)
	{
		return ((::System::Void(*)(::PVOID, ::WeatherConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + WEATHERCONFIG_COPYCHARACTERCONFIG_OFFSET))(this, target, copyCharLightData);
	}

	::System::Void SetDefaultValues()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SETDEFAULTVALUES_OFFSET))(this);
	}

	::System::Void ReplaceSkinRampColorsWithOtherRamp()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_REPLACESKINRAMPCOLORSWITHOTHERRAMP_OFFSET))(this);
	}
};
