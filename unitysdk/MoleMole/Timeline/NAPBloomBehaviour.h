#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/NAPBloomBehaviour_Struct_2_52AD02145F5FCE3A_14.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NapBloomQuality.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/BloomResolution.h"
#include "unitysdk/UnityEngine/Rendering/Universal/HQBloomMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/PP_Quality.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class FlareProfile_NativeSRP; }
namespace UnityEngine::Rendering::Universal { class NapBloom; }

#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x6B2AE80)
#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xD378260)
#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0xD377E90)
#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_METHOD_4_AA2DC8D4971CD696_OFFSET UNITYSDK_OFFSET(0xD377EA0)
#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0xD378280)
#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0xD378270)
#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_METHOD_4_EEED34E9AAC26D51_OFFSET UNITYSDK_OFFSET(0xD378290)
#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x6B2B920)
#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x6B2BF90)
#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x6B2C670)
#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD377C90)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int NAPBloomBehaviour_TypeDefinitionIndex = 56864;

	class NAPBloomBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::NAPBloomBehaviour_Struct_2_52AD02145F5FCE3A_14 _methodParm; // 0x18
		::System::Boolean enabled; // 0x1F0
		::System::Boolean active_hqBloomMode; // 0x1F1
		::System::Boolean use_hqBloomMode; // 0x1F2
		::UnityEngine::Rendering::Universal::HQBloomMode hqBloomMode; // 0x1F4
		::System::Boolean active_hqUESampleQuality; // 0x1F8
		::System::Boolean use_hqUESampleQuality; // 0x1F9
		::UnityEngine::Rendering::Universal::PP_Quality hqUESampleQuality; // 0x1FC
		::System::Boolean active_hqUEBloomThreshold; // 0x200
		::System::Boolean use_hqUEBloomThreshold; // 0x201
		::System::Single hqUEBloomThreshold; // 0x204
		::System::Boolean active_hqUEBloomThresholdChar; // 0x208
		::System::Boolean use_hqUEBloomThresholdChar; // 0x209
		::System::Single hqUEBloomThresholdChar; // 0x20C
		::System::Boolean active_hqUEBloomMaxThreshold; // 0x210
		::System::Boolean use_hqUEBloomMaxThreshold; // 0x211
		::System::Single hqUEBloomMaxThreshold; // 0x214
		::System::Boolean active_hqUEBloomMaxThresholdChar; // 0x218
		::System::Boolean use_hqUEBloomMaxThresholdChar; // 0x219
		::System::Single hqUEBloomMaxThresholdChar; // 0x21C
		::System::Boolean active_hqUEBloomIntensity; // 0x220
		::System::Boolean use_hqUEBloomIntensity; // 0x221
		::System::Single hqUEBloomIntensity; // 0x224
		::System::Boolean active_hqUEBloomIntensityChar; // 0x228
		::System::Boolean use_hqUEBloomIntensityChar; // 0x229
		::System::Single hqUEBloomIntensityChar; // 0x22C
		::System::Boolean active_glareIntensity; // 0x230
		::System::Boolean use_glareIntensity; // 0x231
		::System::Single glareIntensity; // 0x234
		::System::Boolean active_xBlurIntensity; // 0x238
		::System::Boolean use_xBlurIntensity; // 0x239
		::System::Single xBlurIntensity; // 0x23C
		::System::Boolean active_yBlurIntensity; // 0x240
		::System::Boolean use_yBlurIntensity; // 0x241
		::System::Single yBlurIntensity; // 0x244
		::System::Boolean active_hqBloomSize6; // 0x248
		::System::Boolean use_hqBloomSize6; // 0x249
		::System::Single hqBloomSize6; // 0x24C
		::System::Boolean active_hqBloomSize5; // 0x250
		::System::Boolean use_hqBloomSize5; // 0x251
		::System::Single hqBloomSize5; // 0x254
		::System::Boolean active_hqBloomSize4; // 0x258
		::System::Boolean use_hqBloomSize4; // 0x259
		::System::Single hqBloomSize4; // 0x25C
		::System::Boolean active_hqBloomSize3; // 0x260
		::System::Boolean use_hqBloomSize3; // 0x261
		::System::Single hqBloomSize3; // 0x264
		::System::Boolean active_hqBloomSize2; // 0x268
		::System::Boolean use_hqBloomSize2; // 0x269
		::System::Single hqBloomSize2; // 0x26C
		::System::Boolean active_hqBloomSize1; // 0x270
		::System::Boolean use_hqBloomSize1; // 0x271
		::System::Single hqBloomSize1; // 0x274
		::System::Boolean active_hqBloomTint6; // 0x278
		::System::Boolean use_hqBloomTint6; // 0x279
		::System::Single hqBloomTint6; // 0x27C
		::System::Boolean active_hqBloomTint5; // 0x280
		::System::Boolean use_hqBloomTint5; // 0x281
		::System::Single hqBloomTint5; // 0x284
		::System::Boolean active_hqBloomTint4; // 0x288
		::System::Boolean use_hqBloomTint4; // 0x289
		::System::Single hqBloomTint4; // 0x28C
		::System::Boolean active_hqBloomTint3; // 0x290
		::System::Boolean use_hqBloomTint3; // 0x291
		::System::Single hqBloomTint3; // 0x294
		::System::Boolean active_hqBloomTint2; // 0x298
		::System::Boolean use_hqBloomTint2; // 0x299
		::System::Single hqBloomTint2; // 0x29C
		::System::Boolean active_hqBloomTint1; // 0x2A0
		::System::Boolean use_hqBloomTint1; // 0x2A1
		::System::Single hqBloomTint1; // 0x2A4
		::System::Boolean active_hQBloomIntensity; // 0x2A8
		::System::Boolean use_hQBloomIntensity; // 0x2A9
		::System::Single hQBloomIntensity; // 0x2AC
		::System::Boolean active_hQBloomThreshold; // 0x2B0
		::System::Boolean use_hQBloomThreshold; // 0x2B1
		::System::Single hQBloomThreshold; // 0x2B4
		::System::Boolean active_hQBloomScatter; // 0x2B8
		::System::Boolean use_hQBloomScatter; // 0x2B9
		::System::Single hQBloomScatter; // 0x2BC
		::System::Boolean active_hQBloomTint; // 0x2C0
		::System::Boolean use_hQBloomTint; // 0x2C1
		::UnityEngine::Color hQBloomTint; // 0x2C4
		::System::Boolean active_hqBloomResolution; // 0x2D4
		::System::Boolean use_hqBloomResolution; // 0x2D5
		::UnityEngine::Rendering::Universal::BloomResolution hqBloomResolution; // 0x2D8
		::System::Boolean active_useRealDownSample; // 0x2DC
		::System::Boolean use_useRealDownSample; // 0x2DD
		::System::Boolean useRealDownSample; // 0x2DE
		::System::Boolean active_blurRadius; // 0x2DF
		::System::Boolean use_blurRadius; // 0x2E0
		::System::Single blurRadius; // 0x2E4
		::System::Boolean active_doBloomAfterTAA; // 0x2E8
		::System::Boolean use_doBloomAfterTAA; // 0x2E9
		::System::Boolean doBloomAfterTAA; // 0x2EA
		::System::Boolean active_useSourceLumaMask; // 0x2EB
		::System::Boolean use_useSourceLumaMask; // 0x2EC
		::System::Boolean useSourceLumaMask; // 0x2ED
		::System::Boolean active_glareThreshold; // 0x2EE
		::System::Boolean use_glareThreshold; // 0x2EF
		::System::Single glareThreshold; // 0x2F0
		::System::Boolean active_glareThresholdForHDR; // 0x2F4
		::System::Boolean use_glareThresholdForHDR; // 0x2F5
		::System::Single glareThresholdForHDR; // 0x2F8
		::System::Boolean active_glareScaler; // 0x2FC
		::System::Boolean use_glareScaler; // 0x2FD
		::System::Single glareScaler; // 0x300
		::System::Boolean active_glareScalerForHDR; // 0x304
		::System::Boolean use_glareScalerForHDR; // 0x305
		::System::Single glareScalerForHDR; // 0x308
		::System::Boolean active_blurLevelWeights; // 0x30C
		::System::Boolean use_blurLevelWeights; // 0x30D
		::UnityEngine::Vector4 blurLevelWeights; // 0x310
		::System::Boolean active_secondaryGlareThreshold; // 0x320
		::System::Boolean use_secondaryGlareThreshold; // 0x321
		::System::Single secondaryGlareThreshold; // 0x324
		::System::Boolean active_secondaryGlareContrast; // 0x328
		::System::Boolean use_secondaryGlareContrast; // 0x329
		::System::Single secondaryGlareContrast; // 0x32C
		::System::Boolean active_secondaryGlareWeight; // 0x330
		::System::Boolean use_secondaryGlareWeight; // 0x331
		::System::Single secondaryGlareWeight; // 0x334
		::System::Boolean active_secondaryBlurRadius; // 0x338
		::System::Boolean use_secondaryBlurRadius; // 0x339
		::System::Int32 secondaryBlurRadius; // 0x33C
		::System::Boolean active_quality; // 0x340
		::System::Boolean use_quality; // 0x341
		::UnityEngine::NAPRenderPipeline0::NapBloomQuality quality; // 0x344
		::System::Boolean active_blurLevelBufferHeights; // 0x348
		::System::Boolean use_blurLevelBufferHeights; // 0x349
		::UnityEngine::Vector4 blurLevelBufferHeights; // 0x34C
		::System::Boolean active_secondaryBlurLevelBufferHeight; // 0x35C
		::System::Boolean use_secondaryBlurLevelBufferHeight; // 0x35D
		::System::Int32 secondaryBlurLevelBufferHeight; // 0x360
		::System::Boolean active_dirtTexture; // 0x364
		::System::Boolean use_dirtTexture; // 0x365
		::UnityEngine::Texture* dirtTexture; // 0x368
		::System::Boolean active_dirtIntensity; // 0x370
		::System::Boolean use_dirtIntensity; // 0x371
		::System::Single dirtIntensity; // 0x374
		::System::Boolean active_HasExtraDownsample; // 0x378
		::System::Boolean use_HasExtraDownsample; // 0x379
		::System::Boolean HasExtraDownsample; // 0x37A
		::System::Boolean active_enableSpriteFlare; // 0x37B
		::System::Boolean use_enableSpriteFlare; // 0x37C
		::System::Boolean enableSpriteFlare; // 0x37D
		::System::Boolean active_flareThreshold; // 0x37E
		::System::Boolean use_flareThreshold; // 0x37F
		::System::Single flareThreshold; // 0x380
		::System::Boolean active_areaThreshold; // 0x384
		::System::Boolean use_areaThreshold; // 0x385
		::System::Single areaThreshold; // 0x388
		::System::Boolean active_saturate; // 0x38C
		::System::Boolean use_saturate; // 0x38D
		::System::Single saturate; // 0x390
		::System::Boolean active_randomize; // 0x394
		::System::Boolean use_randomize; // 0x395
		::System::Single randomize; // 0x398
		::System::Boolean active_sizeClamp; // 0x39C
		::System::Boolean use_sizeClamp; // 0x39D
		::System::Single sizeClamp; // 0x3A0
		::System::Boolean active_intensityClamp; // 0x3A4
		::System::Boolean use_intensityClamp; // 0x3A5
		::System::Single intensityClamp; // 0x3A8
		::System::Boolean active_iterationNum; // 0x3AC
		::System::Boolean use_iterationNum; // 0x3AD
		::System::Int32 iterationNum; // 0x3B0
		::System::Boolean active_flareProfile; // 0x3B4
		::System::Boolean use_flareProfile; // 0x3B5
		::UnityEngine::NAPRenderPipeline0::FlareProfile_NativeSRP* flareProfile; // 0x3B8
		::UnityEngine::Rendering::Universal::NapBloom* _NapBloom; // 0x3C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::Universal::NapBloom* Method_4_AA2DC8D4971CD696(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::NapBloom*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_METHOD_4_AA2DC8D4971CD696_OFFSET))(this, a1);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_EEED34E9AAC26D51()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_METHOD_4_EEED34E9AAC26D51_OFFSET))(this);
		}
	};
}
