#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VREffects_NativeSRP_ColorBlendMethod.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ChannelMapping.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DistanceDistortionBlendMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanMaskType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::Config { class ConfigEntityVREffectsEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector3KeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class VREffects; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xA5D70D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xA5D71F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0xA5D71C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xA5D7340)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xA5CF660)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0xA5CF560)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_43069389B18F0936_OFFSET UNITYSDK_OFFSET(0xA5CF420)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0xA5CF940)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0xA5CF830)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0xA5CF7B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0xA5D72C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0xA5D70C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_581A5078A2F29034_OFFSET UNITYSDK_OFFSET(0xA5D7330)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_5BD973238595BF89_1_OFFSET UNITYSDK_OFFSET(0xA5C4840)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_5BD973238595BF89_OFFSET UNITYSDK_OFFSET(0xA5BC960)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_63D56313608AFE32_OFFSET UNITYSDK_OFFSET(0xA5CD2E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16BE35C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0xA5D0400)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x16BEEA80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_76ECC59BC7430042_1_OFFSET UNITYSDK_OFFSET(0xA5D36E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_76ECC59BC7430042_OFFSET UNITYSDK_OFFSET(0xA5CF9A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xA5D71B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0xA5CF6C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0xA5CF8B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xA5CF5D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_8D6879CAA76F6588_OFFSET UNITYSDK_OFFSET(0xA5CC720)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0xA5D7140)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xA5CF750)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x16BE46A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0xA5D73A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0xA5D71A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0xA5CD1D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0xA5D70E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0xA5D70F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_C422DE9CC617B43A_OFFSET UNITYSDK_OFFSET(0x16BF2E60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA5D72D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16BE4640)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0xA5CF4F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_D3694D678C874488_OFFSET UNITYSDK_OFFSET(0xA5B1540)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0xA5D71E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xA5D7260)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0xA5D71D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0xA5D7130)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_F53BAAE38A584428_OFFSET UNITYSDK_OFFSET(0x16BE5E70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS__CTOR_OFFSET UNITYSDK_OFFSET(0xA5D4140)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessVREffects_TypeDefinitionIndex = 58603;

	class ESPostProcessVREffects : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::VREffects*>
	{
	public:
		::MoleMole::Config::ConfigEntityVREffectsEffects* m_stAsset; // 0xB0
		::System::Boolean _VolDefault_enable; // 0xB8
		::System::Single _VolDefault_hue; // 0xBC
		::System::Single _VolDefault_saturation; // 0xC0
		::System::Single _VolDefault_brightness; // 0xC4
		::System::Single _VolDefault_contrast; // 0xC8
		::System::Single _VolDefault_contrastMiddlePoint; // 0xCC
		::System::Single _VolDefault_colorTintStart; // 0xD0
		::UnityEngine::Color _VolDefault_colorTintNear; // 0xD4
		::System::Single _VolDefault_colorTintEnd; // 0xE4
		::UnityEngine::Color _VolDefault_colorTintFar; // 0xE8
		::System::Single _VolDefault_scanlineWidth; // 0xF8
		::System::Single _VolDefault_scanlineContrast; // 0xFC
		::System::Single _VolDefault_scanlineDistortion; // 0x100
		::UnityEngine::Rendering::Universal::ScanType _VolDefault_scanType; // 0x104
		::System::Boolean _VolDefault_useCustomScanDirection; // 0x108
		::System::Single _VolDefault_customScanDirection; // 0x10C
		::UnityEngine::Rendering::Universal::ScanMaskType _VolDefault_scanMaskType; // 0x110
		::UnityEngine::Texture* _VolDefault_scanMaskTex; // 0x118
		::UnityEngine::Rendering::Universal::ChannelMapping _VolDefault_scanMaskTexChannel; // 0x120
		::UnityEngine::Vector2 _VolDefault_scanMaskTexTiling; // 0x124
		::UnityEngine::Vector2 _VolDefault_scanMaskTexOffset; // 0x12C
		::UnityEngine::Vector2 _VolDefault_scanMaskTexUVSpeed; // 0x134
		::System::Single _VolDefault_scanMaskBaseY; // 0x13C
		::System::Single _VolDefault_scanMaskYRange; // 0x140
		::System::Boolean _VolDefault_keepInFrontForUberPost; // 0x144
		::System::Single _VolDefault_scanStart0; // 0x148
		::System::Single _VolDefault_scanEnd0; // 0x14C
		::System::Single _VolDefault_scanStart0Soft; // 0x150
		::System::Single _VolDefault_scanEnd0Soft; // 0x154
		::UnityEngine::Color _VolDefault_scanColor0; // 0x158
		::UnityEngine::Color _VolDefault_scanColor0End; // 0x168
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolDefault_scanColor0Mode; // 0x178
		::System::Single _VolDefault_scanMaskIntensity0; // 0x17C
		::System::Single _VolDefault_scanStart1; // 0x180
		::System::Single _VolDefault_scanEnd1; // 0x184
		::System::Single _VolDefault_scanStart1Soft; // 0x188
		::System::Single _VolDefault_scanEnd1Soft; // 0x18C
		::UnityEngine::Color _VolDefault_scanColor1; // 0x190
		::UnityEngine::Color _VolDefault_scanColor1End; // 0x1A0
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolDefault_scanColor1Mode; // 0x1B0
		::System::Single _VolDefault_scanMaskIntensity1; // 0x1B4
		::System::Single _VolDefault_scanStart2; // 0x1B8
		::System::Single _VolDefault_scanEnd2; // 0x1BC
		::System::Single _VolDefault_scanStart2Soft; // 0x1C0
		::System::Single _VolDefault_scanEnd2Soft; // 0x1C4
		::UnityEngine::Color _VolDefault_scanColor2; // 0x1C8
		::UnityEngine::Color _VolDefault_scanColor2End; // 0x1D8
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolDefault_scanColor2Mode; // 0x1E8
		::System::Single _VolDefault_scanMaskIntensity2; // 0x1EC
		::System::Single _VolDefault_scanStart3; // 0x1F0
		::System::Single _VolDefault_scanEnd3; // 0x1F4
		::System::Single _VolDefault_scanStart3Soft; // 0x1F8
		::System::Single _VolDefault_scanEnd3Soft; // 0x1FC
		::UnityEngine::Color _VolDefault_scanColor3; // 0x200
		::UnityEngine::Color _VolDefault_scanColor3End; // 0x210
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolDefault_scanColor3Mode; // 0x220
		::System::Single _VolDefault_scanMaskIntensity3; // 0x224
		::UnityEngine::Vector2 _VolDefault_uvOffsetR; // 0x228
		::UnityEngine::Color _VolDefault_colorR; // 0x230
		::UnityEngine::Vector2 _VolDefault_uvOffsetG; // 0x240
		::UnityEngine::Color _VolDefault_colorG; // 0x248
		::UnityEngine::Vector2 _VolDefault_uvOffsetB; // 0x258
		::UnityEngine::Color _VolDefault_colorB; // 0x260
		::System::Single _VolDefault_fadeSourceImage; // 0x270
		::System::Single _VolDefault_sliceWidth; // 0x274
		::System::Single _VolDefault_sliceAngle; // 0x278
		::System::Boolean _VolDefault_reverse; // 0x27C
		::System::Single _VolDefault_sliceOffset; // 0x280
		::UnityEngine::Color _VolDefault_sliceColorA; // 0x284
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolDefault_sliceColorAMode; // 0x294
		::UnityEngine::Color _VolDefault_sliceColorB; // 0x298
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolDefault_sliceColorBMode; // 0x2A8
		::System::Boolean _VolDefault_gridOn; // 0x2AC
		::System::Single _VolDefault_gridDistance; // 0x2B0
		::System::Boolean _VolDefault_gridBlendScanLine; // 0x2B4
		::UnityEngine::Color _VolDefault_gridColor; // 0x2B8
		::System::Single _VolDefault_gridPower; // 0x2C8
		::System::Single _VolDefault_groundYPos; // 0x2CC
		::System::Single _VolDefault_screenSpaceGridScale; // 0x2D0
		::System::Single _VolDefault_screenSpaceGridWidth; // 0x2D4
		::System::Boolean _VolDefault_outlineOn; // 0x2D8
		::System::Boolean _VolDefault_outlineBlendScanLine; // 0x2D9
		::System::Single _VolDefault_outlineOpacity; // 0x2DC
		::System::Single _VolDefault_outlineDiffOffset; // 0x2E0
		::System::Single _VolDefault_outlineDepthThreshold; // 0x2E4
		::System::Single _VolDefault_outlineNormalThreshold; // 0x2E8
		::System::Single _VolDefault_outlineNormalThresholdScale; // 0x2EC
		::UnityEngine::Color _VolDefault_outlineColor; // 0x2F0
		::System::Boolean _VolDefault_outlineDistortion; // 0x300
		::UnityEngine::Texture* _VolDefault_outlineDistortionTex; // 0x308
		::UnityEngine::Vector2 _VolDefault_outlineDistortionTexTiling; // 0x310
		::UnityEngine::Vector2 _VolDefault_outlineDistortionTexOffset; // 0x318
		::UnityEngine::Vector2 _VolDefault_outlineDistortionUVSpeed; // 0x320
		::UnityEngine::Vector2 _VolDefault_outlineDistortionOffset; // 0x328
		::UnityEngine::Vector2 _VolDefault_outlineDistortionIntensity; // 0x330
		::System::Boolean _VolDefault_textureSheetOn; // 0x338
		::UnityEngine::Texture* _VolDefault_textureSheetTex; // 0x340
		::UnityEngine::Vector2 _VolDefault_textureSheetXY; // 0x348
		::System::Int32 _VolDefault_textureSheetIndex; // 0x350
		::UnityEngine::Color _VolDefault_textureSheetColor; // 0x354
		::System::Single _VolDefault_lensDistortionIntensity; // 0x364
		::System::Single _VolDefault_lensDistortionXMultiplier; // 0x368
		::System::Single _VolDefault_lensDistortionYMultiplier; // 0x36C
		::UnityEngine::Vector2 _VolDefault_lensDistortionCenter; // 0x370
		::System::Single _VolDefault_lensDistortionScale; // 0x378
		::System::Boolean _VolDefault_enableDistanceDistortionColorization; // 0x37C
		::System::Single _VolDefault_distanceColorizationEffect; // 0x380
		::UnityEngine::Texture* _VolDefault_distanceDistortionTexture; // 0x388
		::UnityEngine::Texture* _VolDefault_distanceColorizeTexture; // 0x390
		::System::Single _VolDefault_distanceDistortionStart; // 0x398
		::System::Single _VolDefault_distanceDistortionEnd; // 0x39C
		::System::Single _VolDefault_distanceDistortionFadeRange; // 0x3A0
		::System::Single _VolDefault_distanceDistortionHeightStart; // 0x3A4
		::System::Single _VolDefault_distanceDistortionHeightEnd; // 0x3A8
		::System::Single _VolDefault_distanceDistortionHeightFadeRange; // 0x3AC
		::UnityEngine::Vector3 _VolDefault_distanceDistortionOffsetSpeed; // 0x3B0
		::System::Single _VolDefault_distanceDistortionTiling; // 0x3BC
		::System::Single _VolDefault_distanceDistortionIntensity; // 0x3C0
		::UnityEngine::Vector3 _VolDefault_distanceColorizationOffsetSpeed; // 0x3C4
		::System::Single _VolDefault_distanceColorizationTiling; // 0x3D0
		::UnityEngine::Color _VolDefault_distanceDistortionColor; // 0x3D4
		::UnityEngine::Rendering::Universal::DistanceDistortionBlendMode _VolDefault_distanceDistortionBlendMode; // 0x3E4
		::System::Boolean _VolPreVal_enable_overrideState; // 0x3E8
		::System::Boolean _VolPreVal_enable; // 0x3E9
		::System::Boolean _VolPreVal_hue_overrideState; // 0x3EA
		::System::Single _VolPreVal_hue; // 0x3EC
		::System::Boolean _VolPreVal_saturation_overrideState; // 0x3F0
		::System::Single _VolPreVal_saturation; // 0x3F4
		::System::Boolean _VolPreVal_brightness_overrideState; // 0x3F8
		::System::Single _VolPreVal_brightness; // 0x3FC
		::System::Boolean _VolPreVal_contrast_overrideState; // 0x400
		::System::Single _VolPreVal_contrast; // 0x404
		::System::Boolean _VolPreVal_contrastMiddlePoint_overrideState; // 0x408
		::System::Single _VolPreVal_contrastMiddlePoint; // 0x40C
		::System::Boolean _VolPreVal_colorTintStart_overrideState; // 0x410
		::System::Single _VolPreVal_colorTintStart; // 0x414
		::System::Boolean _VolPreVal_colorTintNear_overrideState; // 0x418
		::UnityEngine::Color _VolPreVal_colorTintNear; // 0x41C
		::System::Boolean _VolPreVal_colorTintEnd_overrideState; // 0x42C
		::System::Single _VolPreVal_colorTintEnd; // 0x430
		::System::Boolean _VolPreVal_colorTintFar_overrideState; // 0x434
		::UnityEngine::Color _VolPreVal_colorTintFar; // 0x438
		::System::Boolean _VolPreVal_scanlineWidth_overrideState; // 0x448
		::System::Single _VolPreVal_scanlineWidth; // 0x44C
		::System::Boolean _VolPreVal_scanlineContrast_overrideState; // 0x450
		::System::Single _VolPreVal_scanlineContrast; // 0x454
		::System::Boolean _VolPreVal_scanlineDistortion_overrideState; // 0x458
		::System::Single _VolPreVal_scanlineDistortion; // 0x45C
		::System::Boolean _VolPreVal_scanType_overrideState; // 0x460
		::UnityEngine::Rendering::Universal::ScanType _VolPreVal_scanType; // 0x464
		::System::Boolean _VolPreVal_useCustomScanDirection_overrideState; // 0x468
		::System::Boolean _VolPreVal_useCustomScanDirection; // 0x469
		::System::Boolean _VolPreVal_customScanDirection_overrideState; // 0x46A
		::System::Single _VolPreVal_customScanDirection; // 0x46C
		::System::Boolean _VolPreVal_scanMaskType_overrideState; // 0x470
		::UnityEngine::Rendering::Universal::ScanMaskType _VolPreVal_scanMaskType; // 0x474
		::System::Boolean _VolPreVal_scanMaskTex_overrideState; // 0x478
		::UnityEngine::Texture* _VolPreVal_scanMaskTex; // 0x480
		::System::Boolean _VolPreVal_scanMaskTexChannel_overrideState; // 0x488
		::UnityEngine::Rendering::Universal::ChannelMapping _VolPreVal_scanMaskTexChannel; // 0x48C
		::System::Boolean _VolPreVal_scanMaskTexTiling_overrideState; // 0x490
		::UnityEngine::Vector2 _VolPreVal_scanMaskTexTiling; // 0x494
		::System::Boolean _VolPreVal_scanMaskTexOffset_overrideState; // 0x49C
		::UnityEngine::Vector2 _VolPreVal_scanMaskTexOffset; // 0x4A0
		::System::Boolean _VolPreVal_scanMaskTexUVSpeed_overrideState; // 0x4A8
		::UnityEngine::Vector2 _VolPreVal_scanMaskTexUVSpeed; // 0x4AC
		::System::Boolean _VolPreVal_scanMaskBaseY_overrideState; // 0x4B4
		::System::Single _VolPreVal_scanMaskBaseY; // 0x4B8
		::System::Boolean _VolPreVal_scanMaskYRange_overrideState; // 0x4BC
		::System::Single _VolPreVal_scanMaskYRange; // 0x4C0
		::System::Boolean _VolPreVal_keepInFrontForUberPost_overrideState; // 0x4C4
		::System::Boolean _VolPreVal_keepInFrontForUberPost; // 0x4C5
		::System::Boolean _VolPreVal_scanStart0_overrideState; // 0x4C6
		::System::Single _VolPreVal_scanStart0; // 0x4C8
		::System::Boolean _VolPreVal_scanEnd0_overrideState; // 0x4CC
		::System::Single _VolPreVal_scanEnd0; // 0x4D0
		::System::Boolean _VolPreVal_scanStart0Soft_overrideState; // 0x4D4
		::System::Single _VolPreVal_scanStart0Soft; // 0x4D8
		::System::Boolean _VolPreVal_scanEnd0Soft_overrideState; // 0x4DC
		::System::Single _VolPreVal_scanEnd0Soft; // 0x4E0
		::System::Boolean _VolPreVal_scanColor0_overrideState; // 0x4E4
		::UnityEngine::Color _VolPreVal_scanColor0; // 0x4E8
		::System::Boolean _VolPreVal_scanColor0End_overrideState; // 0x4F8
		::UnityEngine::Color _VolPreVal_scanColor0End; // 0x4FC
		::System::Boolean _VolPreVal_scanColor0Mode_overrideState; // 0x50C
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolPreVal_scanColor0Mode; // 0x510
		::System::Boolean _VolPreVal_scanMaskIntensity0_overrideState; // 0x514
		::System::Single _VolPreVal_scanMaskIntensity0; // 0x518
		::System::Boolean _VolPreVal_scanStart1_overrideState; // 0x51C
		::System::Single _VolPreVal_scanStart1; // 0x520
		::System::Boolean _VolPreVal_scanEnd1_overrideState; // 0x524
		::System::Single _VolPreVal_scanEnd1; // 0x528
		::System::Boolean _VolPreVal_scanStart1Soft_overrideState; // 0x52C
		::System::Single _VolPreVal_scanStart1Soft; // 0x530
		::System::Boolean _VolPreVal_scanEnd1Soft_overrideState; // 0x534
		::System::Single _VolPreVal_scanEnd1Soft; // 0x538
		::System::Boolean _VolPreVal_scanColor1_overrideState; // 0x53C
		::UnityEngine::Color _VolPreVal_scanColor1; // 0x540
		::System::Boolean _VolPreVal_scanColor1End_overrideState; // 0x550
		::UnityEngine::Color _VolPreVal_scanColor1End; // 0x554
		::System::Boolean _VolPreVal_scanColor1Mode_overrideState; // 0x564
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolPreVal_scanColor1Mode; // 0x568
		::System::Boolean _VolPreVal_scanMaskIntensity1_overrideState; // 0x56C
		::System::Single _VolPreVal_scanMaskIntensity1; // 0x570
		::System::Boolean _VolPreVal_scanStart2_overrideState; // 0x574
		::System::Single _VolPreVal_scanStart2; // 0x578
		::System::Boolean _VolPreVal_scanEnd2_overrideState; // 0x57C
		::System::Single _VolPreVal_scanEnd2; // 0x580
		::System::Boolean _VolPreVal_scanStart2Soft_overrideState; // 0x584
		::System::Single _VolPreVal_scanStart2Soft; // 0x588
		::System::Boolean _VolPreVal_scanEnd2Soft_overrideState; // 0x58C
		::System::Single _VolPreVal_scanEnd2Soft; // 0x590
		::System::Boolean _VolPreVal_scanColor2_overrideState; // 0x594
		::UnityEngine::Color _VolPreVal_scanColor2; // 0x598
		::System::Boolean _VolPreVal_scanColor2End_overrideState; // 0x5A8
		::UnityEngine::Color _VolPreVal_scanColor2End; // 0x5AC
		::System::Boolean _VolPreVal_scanColor2Mode_overrideState; // 0x5BC
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolPreVal_scanColor2Mode; // 0x5C0
		::System::Boolean _VolPreVal_scanMaskIntensity2_overrideState; // 0x5C4
		::System::Single _VolPreVal_scanMaskIntensity2; // 0x5C8
		::System::Boolean _VolPreVal_scanStart3_overrideState; // 0x5CC
		::System::Single _VolPreVal_scanStart3; // 0x5D0
		::System::Boolean _VolPreVal_scanEnd3_overrideState; // 0x5D4
		::System::Single _VolPreVal_scanEnd3; // 0x5D8
		::System::Boolean _VolPreVal_scanStart3Soft_overrideState; // 0x5DC
		::System::Single _VolPreVal_scanStart3Soft; // 0x5E0
		::System::Boolean _VolPreVal_scanEnd3Soft_overrideState; // 0x5E4
		::System::Single _VolPreVal_scanEnd3Soft; // 0x5E8
		::System::Boolean _VolPreVal_scanColor3_overrideState; // 0x5EC
		::UnityEngine::Color _VolPreVal_scanColor3; // 0x5F0
		::System::Boolean _VolPreVal_scanColor3End_overrideState; // 0x600
		::UnityEngine::Color _VolPreVal_scanColor3End; // 0x604
		::System::Boolean _VolPreVal_scanColor3Mode_overrideState; // 0x614
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolPreVal_scanColor3Mode; // 0x618
		::System::Boolean _VolPreVal_scanMaskIntensity3_overrideState; // 0x61C
		::System::Single _VolPreVal_scanMaskIntensity3; // 0x620
		::System::Boolean _VolPreVal_uvOffsetR_overrideState; // 0x624
		::UnityEngine::Vector2 _VolPreVal_uvOffsetR; // 0x628
		::System::Boolean _VolPreVal_colorR_overrideState; // 0x630
		::UnityEngine::Color _VolPreVal_colorR; // 0x634
		::System::Boolean _VolPreVal_uvOffsetG_overrideState; // 0x644
		::UnityEngine::Vector2 _VolPreVal_uvOffsetG; // 0x648
		::System::Boolean _VolPreVal_colorG_overrideState; // 0x650
		::UnityEngine::Color _VolPreVal_colorG; // 0x654
		::System::Boolean _VolPreVal_uvOffsetB_overrideState; // 0x664
		::UnityEngine::Vector2 _VolPreVal_uvOffsetB; // 0x668
		::System::Boolean _VolPreVal_colorB_overrideState; // 0x670
		::UnityEngine::Color _VolPreVal_colorB; // 0x674
		::System::Boolean _VolPreVal_fadeSourceImage_overrideState; // 0x684
		::System::Single _VolPreVal_fadeSourceImage; // 0x688
		::System::Boolean _VolPreVal_sliceWidth_overrideState; // 0x68C
		::System::Single _VolPreVal_sliceWidth; // 0x690
		::System::Boolean _VolPreVal_sliceAngle_overrideState; // 0x694
		::System::Single _VolPreVal_sliceAngle; // 0x698
		::System::Boolean _VolPreVal_reverse_overrideState; // 0x69C
		::System::Boolean _VolPreVal_reverse; // 0x69D
		::System::Boolean _VolPreVal_sliceOffset_overrideState; // 0x69E
		::System::Single _VolPreVal_sliceOffset; // 0x6A0
		::System::Boolean _VolPreVal_sliceColorA_overrideState; // 0x6A4
		::UnityEngine::Color _VolPreVal_sliceColorA; // 0x6A8
		::System::Boolean _VolPreVal_sliceColorAMode_overrideState; // 0x6B8
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolPreVal_sliceColorAMode; // 0x6BC
		::System::Boolean _VolPreVal_sliceColorB_overrideState; // 0x6C0
		::UnityEngine::Color _VolPreVal_sliceColorB; // 0x6C4
		::System::Boolean _VolPreVal_sliceColorBMode_overrideState; // 0x6D4
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolPreVal_sliceColorBMode; // 0x6D8
		::System::Boolean _VolPreVal_gridOn_overrideState; // 0x6DC
		::System::Boolean _VolPreVal_gridOn; // 0x6DD
		::System::Boolean _VolPreVal_gridDistance_overrideState; // 0x6DE
		::System::Single _VolPreVal_gridDistance; // 0x6E0
		::System::Boolean _VolPreVal_gridBlendScanLine_overrideState; // 0x6E4
		::System::Boolean _VolPreVal_gridBlendScanLine; // 0x6E5
		::System::Boolean _VolPreVal_gridColor_overrideState; // 0x6E6
		::UnityEngine::Color _VolPreVal_gridColor; // 0x6E8
		::System::Boolean _VolPreVal_gridPower_overrideState; // 0x6F8
		::System::Single _VolPreVal_gridPower; // 0x6FC
		::System::Boolean _VolPreVal_groundYPos_overrideState; // 0x700
		::System::Single _VolPreVal_groundYPos; // 0x704
		::System::Boolean _VolPreVal_screenSpaceGridScale_overrideState; // 0x708
		::System::Single _VolPreVal_screenSpaceGridScale; // 0x70C
		::System::Boolean _VolPreVal_screenSpaceGridWidth_overrideState; // 0x710
		::System::Single _VolPreVal_screenSpaceGridWidth; // 0x714
		::System::Boolean _VolPreVal_outlineOn_overrideState; // 0x718
		::System::Boolean _VolPreVal_outlineOn; // 0x719
		::System::Boolean _VolPreVal_outlineBlendScanLine_overrideState; // 0x71A
		::System::Boolean _VolPreVal_outlineBlendScanLine; // 0x71B
		::System::Boolean _VolPreVal_outlineOpacity_overrideState; // 0x71C
		::System::Single _VolPreVal_outlineOpacity; // 0x720
		::System::Boolean _VolPreVal_outlineDiffOffset_overrideState; // 0x724
		::System::Single _VolPreVal_outlineDiffOffset; // 0x728
		::System::Boolean _VolPreVal_outlineDepthThreshold_overrideState; // 0x72C
		::System::Single _VolPreVal_outlineDepthThreshold; // 0x730
		::System::Boolean _VolPreVal_outlineNormalThreshold_overrideState; // 0x734
		::System::Single _VolPreVal_outlineNormalThreshold; // 0x738
		::System::Boolean _VolPreVal_outlineNormalThresholdScale_overrideState; // 0x73C
		::System::Single _VolPreVal_outlineNormalThresholdScale; // 0x740
		::System::Boolean _VolPreVal_outlineColor_overrideState; // 0x744
		::UnityEngine::Color _VolPreVal_outlineColor; // 0x748
		::System::Boolean _VolPreVal_outlineDistortion_overrideState; // 0x758
		::System::Boolean _VolPreVal_outlineDistortion; // 0x759
		::System::Boolean _VolPreVal_outlineDistortionTex_overrideState; // 0x75A
		::UnityEngine::Texture* _VolPreVal_outlineDistortionTex; // 0x760
		::System::Boolean _VolPreVal_outlineDistortionTexTiling_overrideState; // 0x768
		::UnityEngine::Vector2 _VolPreVal_outlineDistortionTexTiling; // 0x76C
		::System::Boolean _VolPreVal_outlineDistortionTexOffset_overrideState; // 0x774
		::UnityEngine::Vector2 _VolPreVal_outlineDistortionTexOffset; // 0x778
		::System::Boolean _VolPreVal_outlineDistortionUVSpeed_overrideState; // 0x780
		::UnityEngine::Vector2 _VolPreVal_outlineDistortionUVSpeed; // 0x784
		::System::Boolean _VolPreVal_outlineDistortionOffset_overrideState; // 0x78C
		::UnityEngine::Vector2 _VolPreVal_outlineDistortionOffset; // 0x790
		::System::Boolean _VolPreVal_outlineDistortionIntensity_overrideState; // 0x798
		::UnityEngine::Vector2 _VolPreVal_outlineDistortionIntensity; // 0x79C
		::System::Boolean _VolPreVal_textureSheetOn_overrideState; // 0x7A4
		::System::Boolean _VolPreVal_textureSheetOn; // 0x7A5
		::System::Boolean _VolPreVal_textureSheetTex_overrideState; // 0x7A6
		::UnityEngine::Texture* _VolPreVal_textureSheetTex; // 0x7A8
		::System::Boolean _VolPreVal_textureSheetXY_overrideState; // 0x7B0
		::UnityEngine::Vector2 _VolPreVal_textureSheetXY; // 0x7B4
		::System::Boolean _VolPreVal_textureSheetIndex_overrideState; // 0x7BC
		::System::Int32 _VolPreVal_textureSheetIndex; // 0x7C0
		::System::Boolean _VolPreVal_textureSheetColor_overrideState; // 0x7C4
		::UnityEngine::Color _VolPreVal_textureSheetColor; // 0x7C8
		::System::Boolean _VolPreVal_lensDistortionIntensity_overrideState; // 0x7D8
		::System::Single _VolPreVal_lensDistortionIntensity; // 0x7DC
		::System::Boolean _VolPreVal_lensDistortionXMultiplier_overrideState; // 0x7E0
		::System::Single _VolPreVal_lensDistortionXMultiplier; // 0x7E4
		::System::Boolean _VolPreVal_lensDistortionYMultiplier_overrideState; // 0x7E8
		::System::Single _VolPreVal_lensDistortionYMultiplier; // 0x7EC
		::System::Boolean _VolPreVal_lensDistortionCenter_overrideState; // 0x7F0
		::UnityEngine::Vector2 _VolPreVal_lensDistortionCenter; // 0x7F4
		::System::Boolean _VolPreVal_lensDistortionScale_overrideState; // 0x7FC
		::System::Single _VolPreVal_lensDistortionScale; // 0x800
		::System::Boolean _VolPreVal_enableDistanceDistortionColorization_overrideState; // 0x804
		::System::Boolean _VolPreVal_enableDistanceDistortionColorization; // 0x805
		::System::Boolean _VolPreVal_distanceColorizationEffect_overrideState; // 0x806
		::System::Single _VolPreVal_distanceColorizationEffect; // 0x808
		::System::Boolean _VolPreVal_distanceDistortionTexture_overrideState; // 0x80C
		::UnityEngine::Texture* _VolPreVal_distanceDistortionTexture; // 0x810
		::System::Boolean _VolPreVal_distanceColorizeTexture_overrideState; // 0x818
		::UnityEngine::Texture* _VolPreVal_distanceColorizeTexture; // 0x820
		::System::Boolean _VolPreVal_distanceDistortionStart_overrideState; // 0x828
		::System::Single _VolPreVal_distanceDistortionStart; // 0x82C
		::System::Boolean _VolPreVal_distanceDistortionEnd_overrideState; // 0x830
		::System::Single _VolPreVal_distanceDistortionEnd; // 0x834
		::System::Boolean _VolPreVal_distanceDistortionFadeRange_overrideState; // 0x838
		::System::Single _VolPreVal_distanceDistortionFadeRange; // 0x83C
		::System::Boolean _VolPreVal_distanceDistortionHeightStart_overrideState; // 0x840
		::System::Single _VolPreVal_distanceDistortionHeightStart; // 0x844
		::System::Boolean _VolPreVal_distanceDistortionHeightEnd_overrideState; // 0x848
		::System::Single _VolPreVal_distanceDistortionHeightEnd; // 0x84C
		::System::Boolean _VolPreVal_distanceDistortionHeightFadeRange_overrideState; // 0x850
		::System::Single _VolPreVal_distanceDistortionHeightFadeRange; // 0x854
		::System::Boolean _VolPreVal_distanceDistortionOffsetSpeed_overrideState; // 0x858
		::UnityEngine::Vector3 _VolPreVal_distanceDistortionOffsetSpeed; // 0x85C
		::System::Boolean _VolPreVal_distanceDistortionTiling_overrideState; // 0x868
		::System::Single _VolPreVal_distanceDistortionTiling; // 0x86C
		::System::Boolean _VolPreVal_distanceDistortionIntensity_overrideState; // 0x870
		::System::Single _VolPreVal_distanceDistortionIntensity; // 0x874
		::System::Boolean _VolPreVal_distanceColorizationOffsetSpeed_overrideState; // 0x878
		::UnityEngine::Vector3 _VolPreVal_distanceColorizationOffsetSpeed; // 0x87C
		::System::Boolean _VolPreVal_distanceColorizationTiling_overrideState; // 0x888
		::System::Single _VolPreVal_distanceColorizationTiling; // 0x88C
		::System::Boolean _VolPreVal_distanceDistortionColor_overrideState; // 0x890
		::UnityEngine::Color _VolPreVal_distanceDistortionColor; // 0x894
		::System::Boolean _VolPreVal_distanceDistortionBlendMode_overrideState; // 0x8A4
		::UnityEngine::Rendering::Universal::DistanceDistortionBlendMode _VolPreVal_distanceDistortionBlendMode; // 0x8A8
		::System::Single _TimelineCurveFirstVal_hue; // 0x8AC
		::System::Single _TimelineCurveLastVal_hue; // 0x8B0
		::System::Single _TimelineCurveFirstVal_saturation; // 0x8B4
		::System::Single _TimelineCurveLastVal_saturation; // 0x8B8
		::System::Single _TimelineCurveFirstVal_brightness; // 0x8BC
		::System::Single _TimelineCurveLastVal_brightness; // 0x8C0
		::System::Single _TimelineCurveFirstVal_contrast; // 0x8C4
		::System::Single _TimelineCurveLastVal_contrast; // 0x8C8
		::System::Single _TimelineCurveFirstVal_contrastMiddlePoint; // 0x8CC
		::System::Single _TimelineCurveLastVal_contrastMiddlePoint; // 0x8D0
		::System::Single _TimelineCurveFirstVal_colorTintStart; // 0x8D4
		::System::Single _TimelineCurveLastVal_colorTintStart; // 0x8D8
		::UnityEngine::Color _TimelineCurveFirstVal_colorTintNear; // 0x8DC
		::UnityEngine::Color _TimelineCurveLastVal_colorTintNear; // 0x8EC
		::System::Single _TimelineCurveFirstVal_colorTintEnd; // 0x8FC
		::System::Single _TimelineCurveLastVal_colorTintEnd; // 0x900
		::UnityEngine::Color _TimelineCurveFirstVal_colorTintFar; // 0x904
		::UnityEngine::Color _TimelineCurveLastVal_colorTintFar; // 0x914
		::System::Single _TimelineCurveFirstVal_scanlineContrast; // 0x924
		::System::Single _TimelineCurveLastVal_scanlineContrast; // 0x928
		::System::Single _TimelineCurveFirstVal_scanlineDistortion; // 0x92C
		::System::Single _TimelineCurveLastVal_scanlineDistortion; // 0x930
		::System::Boolean _TimelineCurveFirstVal_useCustomScanDirection; // 0x934
		::System::Boolean _TimelineCurveLastVal_useCustomScanDirection; // 0x935
		::System::Single _TimelineCurveFirstVal_customScanDirection; // 0x938
		::System::Single _TimelineCurveLastVal_customScanDirection; // 0x93C
		::UnityEngine::Vector2 _TimelineCurveFirstVal_scanMaskTexTiling; // 0x940
		::UnityEngine::Vector2 _TimelineCurveLastVal_scanMaskTexTiling; // 0x948
		::UnityEngine::Vector2 _TimelineCurveFirstVal_scanMaskTexOffset; // 0x950
		::UnityEngine::Vector2 _TimelineCurveLastVal_scanMaskTexOffset; // 0x958
		::UnityEngine::Vector2 _TimelineCurveFirstVal_scanMaskTexUVSpeed; // 0x960
		::UnityEngine::Vector2 _TimelineCurveLastVal_scanMaskTexUVSpeed; // 0x968
		::System::Single _TimelineCurveFirstVal_scanMaskBaseY; // 0x970
		::System::Single _TimelineCurveLastVal_scanMaskBaseY; // 0x974
		::System::Single _TimelineCurveFirstVal_scanMaskYRange; // 0x978
		::System::Single _TimelineCurveLastVal_scanMaskYRange; // 0x97C
		::System::Boolean _TimelineCurveFirstVal_keepInFrontForUberPost; // 0x980
		::System::Boolean _TimelineCurveLastVal_keepInFrontForUberPost; // 0x981
		::System::Single _TimelineCurveFirstVal_scanStart0; // 0x984
		::System::Single _TimelineCurveLastVal_scanStart0; // 0x988
		::System::Single _TimelineCurveFirstVal_scanEnd0; // 0x98C
		::System::Single _TimelineCurveLastVal_scanEnd0; // 0x990
		::UnityEngine::Color _TimelineCurveFirstVal_scanColor0; // 0x994
		::UnityEngine::Color _TimelineCurveLastVal_scanColor0; // 0x9A4
		::UnityEngine::Color _TimelineCurveFirstVal_scanColor0End; // 0x9B4
		::UnityEngine::Color _TimelineCurveLastVal_scanColor0End; // 0x9C4
		::System::Single _TimelineCurveFirstVal_scanMaskIntensity0; // 0x9D4
		::System::Single _TimelineCurveLastVal_scanMaskIntensity0; // 0x9D8
		::System::Single _TimelineCurveFirstVal_scanStart1; // 0x9DC
		::System::Single _TimelineCurveLastVal_scanStart1; // 0x9E0
		::System::Single _TimelineCurveFirstVal_scanEnd1; // 0x9E4
		::System::Single _TimelineCurveLastVal_scanEnd1; // 0x9E8
		::UnityEngine::Color _TimelineCurveFirstVal_scanColor1; // 0x9EC
		::UnityEngine::Color _TimelineCurveLastVal_scanColor1; // 0x9FC
		::UnityEngine::Color _TimelineCurveFirstVal_scanColor1End; // 0xA0C
		::UnityEngine::Color _TimelineCurveLastVal_scanColor1End; // 0xA1C
		::System::Single _TimelineCurveFirstVal_scanMaskIntensity1; // 0xA2C
		::System::Single _TimelineCurveLastVal_scanMaskIntensity1; // 0xA30
		::System::Single _TimelineCurveFirstVal_scanStart2; // 0xA34
		::System::Single _TimelineCurveLastVal_scanStart2; // 0xA38
		::System::Single _TimelineCurveFirstVal_scanEnd2; // 0xA3C
		::System::Single _TimelineCurveLastVal_scanEnd2; // 0xA40
		::UnityEngine::Color _TimelineCurveFirstVal_scanColor2; // 0xA44
		::UnityEngine::Color _TimelineCurveLastVal_scanColor2; // 0xA54
		::UnityEngine::Color _TimelineCurveFirstVal_scanColor2End; // 0xA64
		::UnityEngine::Color _TimelineCurveLastVal_scanColor2End; // 0xA74
		::System::Single _TimelineCurveFirstVal_scanMaskIntensity2; // 0xA84
		::System::Single _TimelineCurveLastVal_scanMaskIntensity2; // 0xA88
		::System::Single _TimelineCurveFirstVal_scanStart3; // 0xA8C
		::System::Single _TimelineCurveLastVal_scanStart3; // 0xA90
		::System::Single _TimelineCurveFirstVal_scanEnd3; // 0xA94
		::System::Single _TimelineCurveLastVal_scanEnd3; // 0xA98
		::UnityEngine::Color _TimelineCurveFirstVal_scanColor3; // 0xA9C
		::UnityEngine::Color _TimelineCurveLastVal_scanColor3; // 0xAAC
		::UnityEngine::Color _TimelineCurveFirstVal_scanColor3End; // 0xABC
		::UnityEngine::Color _TimelineCurveLastVal_scanColor3End; // 0xACC
		::System::Single _TimelineCurveFirstVal_scanMaskIntensity3; // 0xADC
		::System::Single _TimelineCurveLastVal_scanMaskIntensity3; // 0xAE0
		::UnityEngine::Vector2 _TimelineCurveFirstVal_uvOffsetR; // 0xAE4
		::UnityEngine::Vector2 _TimelineCurveLastVal_uvOffsetR; // 0xAEC
		::UnityEngine::Color _TimelineCurveFirstVal_colorR; // 0xAF4
		::UnityEngine::Color _TimelineCurveLastVal_colorR; // 0xB04
		::UnityEngine::Vector2 _TimelineCurveFirstVal_uvOffsetG; // 0xB14
		::UnityEngine::Vector2 _TimelineCurveLastVal_uvOffsetG; // 0xB1C
		::UnityEngine::Color _TimelineCurveFirstVal_colorG; // 0xB24
		::UnityEngine::Color _TimelineCurveLastVal_colorG; // 0xB34
		::UnityEngine::Vector2 _TimelineCurveFirstVal_uvOffsetB; // 0xB44
		::UnityEngine::Vector2 _TimelineCurveLastVal_uvOffsetB; // 0xB4C
		::UnityEngine::Color _TimelineCurveFirstVal_colorB; // 0xB54
		::UnityEngine::Color _TimelineCurveLastVal_colorB; // 0xB64
		::System::Single _TimelineCurveFirstVal_fadeSourceImage; // 0xB74
		::System::Single _TimelineCurveLastVal_fadeSourceImage; // 0xB78
		::System::Single _TimelineCurveFirstVal_sliceWidth; // 0xB7C
		::System::Single _TimelineCurveLastVal_sliceWidth; // 0xB80
		::System::Single _TimelineCurveFirstVal_sliceAngle; // 0xB84
		::System::Single _TimelineCurveLastVal_sliceAngle; // 0xB88
		::System::Boolean _TimelineCurveFirstVal_reverse; // 0xB8C
		::System::Boolean _TimelineCurveLastVal_reverse; // 0xB8D
		::System::Single _TimelineCurveFirstVal_sliceOffset; // 0xB90
		::System::Single _TimelineCurveLastVal_sliceOffset; // 0xB94
		::UnityEngine::Color _TimelineCurveFirstVal_sliceColorA; // 0xB98
		::UnityEngine::Color _TimelineCurveLastVal_sliceColorA; // 0xBA8
		::UnityEngine::Color _TimelineCurveFirstVal_sliceColorB; // 0xBB8
		::UnityEngine::Color _TimelineCurveLastVal_sliceColorB; // 0xBC8
		::System::Boolean _TimelineCurveFirstVal_gridOn; // 0xBD8
		::System::Boolean _TimelineCurveLastVal_gridOn; // 0xBD9
		::UnityEngine::Color _TimelineCurveFirstVal_gridColor; // 0xBDC
		::UnityEngine::Color _TimelineCurveLastVal_gridColor; // 0xBEC
		::System::Single _TimelineCurveFirstVal_groundYPos; // 0xBFC
		::System::Single _TimelineCurveLastVal_groundYPos; // 0xC00
		::System::Single _TimelineCurveFirstVal_screenSpaceGridScale; // 0xC04
		::System::Single _TimelineCurveLastVal_screenSpaceGridScale; // 0xC08
		::System::Single _TimelineCurveFirstVal_screenSpaceGridWidth; // 0xC0C
		::System::Single _TimelineCurveLastVal_screenSpaceGridWidth; // 0xC10
		::System::Boolean _TimelineCurveFirstVal_outlineOn; // 0xC14
		::System::Boolean _TimelineCurveLastVal_outlineOn; // 0xC15
		::System::Single _TimelineCurveFirstVal_outlineOpacity; // 0xC18
		::System::Single _TimelineCurveLastVal_outlineOpacity; // 0xC1C
		::UnityEngine::Color _TimelineCurveFirstVal_outlineColor; // 0xC20
		::UnityEngine::Color _TimelineCurveLastVal_outlineColor; // 0xC30
		::System::Boolean _TimelineCurveFirstVal_outlineDistortion; // 0xC40
		::System::Boolean _TimelineCurveLastVal_outlineDistortion; // 0xC41
		::UnityEngine::Vector2 _TimelineCurveFirstVal_outlineDistortionTexTiling; // 0xC44
		::UnityEngine::Vector2 _TimelineCurveLastVal_outlineDistortionTexTiling; // 0xC4C
		::UnityEngine::Vector2 _TimelineCurveFirstVal_outlineDistortionTexOffset; // 0xC54
		::UnityEngine::Vector2 _TimelineCurveLastVal_outlineDistortionTexOffset; // 0xC5C
		::UnityEngine::Vector2 _TimelineCurveFirstVal_outlineDistortionUVSpeed; // 0xC64
		::UnityEngine::Vector2 _TimelineCurveLastVal_outlineDistortionUVSpeed; // 0xC6C
		::UnityEngine::Vector2 _TimelineCurveFirstVal_outlineDistortionOffset; // 0xC74
		::UnityEngine::Vector2 _TimelineCurveLastVal_outlineDistortionOffset; // 0xC7C
		::UnityEngine::Vector2 _TimelineCurveFirstVal_outlineDistortionIntensity; // 0xC84
		::UnityEngine::Vector2 _TimelineCurveLastVal_outlineDistortionIntensity; // 0xC8C
		::System::Int32 _TimelineCurveFirstVal_textureSheetIndex; // 0xC94
		::System::Int32 _TimelineCurveLastVal_textureSheetIndex; // 0xC98
		::UnityEngine::Color _TimelineCurveFirstVal_textureSheetColor; // 0xC9C
		::UnityEngine::Color _TimelineCurveLastVal_textureSheetColor; // 0xCAC
		::System::Single _TimelineCurveFirstVal_lensDistortionIntensity; // 0xCBC
		::System::Single _TimelineCurveLastVal_lensDistortionIntensity; // 0xCC0
		::System::Single _TimelineCurveFirstVal_lensDistortionXMultiplier; // 0xCC4
		::System::Single _TimelineCurveLastVal_lensDistortionXMultiplier; // 0xCC8
		::System::Single _TimelineCurveFirstVal_lensDistortionYMultiplier; // 0xCCC
		::System::Single _TimelineCurveLastVal_lensDistortionYMultiplier; // 0xCD0
		::UnityEngine::Vector2 _TimelineCurveFirstVal_lensDistortionCenter; // 0xCD4
		::UnityEngine::Vector2 _TimelineCurveLastVal_lensDistortionCenter; // 0xCDC
		::System::Single _TimelineCurveFirstVal_lensDistortionScale; // 0xCE4
		::System::Single _TimelineCurveLastVal_lensDistortionScale; // 0xCE8
		::System::Boolean _TimelineCurveFirstVal_enableDistanceDistortionColorization; // 0xCEC
		::System::Boolean _TimelineCurveLastVal_enableDistanceDistortionColorization; // 0xCED
		::System::Single _TimelineCurveFirstVal_distanceColorizationEffect; // 0xCF0
		::System::Single _TimelineCurveLastVal_distanceColorizationEffect; // 0xCF4
		::System::Single _TimelineCurveFirstVal_distanceDistortionStart; // 0xCF8
		::System::Single _TimelineCurveLastVal_distanceDistortionStart; // 0xCFC
		::System::Single _TimelineCurveFirstVal_distanceDistortionEnd; // 0xD00
		::System::Single _TimelineCurveLastVal_distanceDistortionEnd; // 0xD04
		::System::Single _TimelineCurveFirstVal_distanceDistortionFadeRange; // 0xD08
		::System::Single _TimelineCurveLastVal_distanceDistortionFadeRange; // 0xD0C
		::System::Single _TimelineCurveFirstVal_distanceDistortionHeightStart; // 0xD10
		::System::Single _TimelineCurveLastVal_distanceDistortionHeightStart; // 0xD14
		::System::Single _TimelineCurveFirstVal_distanceDistortionHeightEnd; // 0xD18
		::System::Single _TimelineCurveLastVal_distanceDistortionHeightEnd; // 0xD1C
		::System::Single _TimelineCurveFirstVal_distanceDistortionHeightFadeRange; // 0xD20
		::System::Single _TimelineCurveLastVal_distanceDistortionHeightFadeRange; // 0xD24
		::UnityEngine::Vector3 _TimelineCurveFirstVal_distanceDistortionOffsetSpeed; // 0xD28
		::UnityEngine::Vector3 _TimelineCurveLastVal_distanceDistortionOffsetSpeed; // 0xD34
		::System::Single _TimelineCurveFirstVal_distanceDistortionTiling; // 0xD40
		::System::Single _TimelineCurveLastVal_distanceDistortionTiling; // 0xD44
		::System::Single _TimelineCurveFirstVal_distanceDistortionIntensity; // 0xD48
		::System::Single _TimelineCurveLastVal_distanceDistortionIntensity; // 0xD4C
		::UnityEngine::Vector3 _TimelineCurveFirstVal_distanceColorizationOffsetSpeed; // 0xD50
		::UnityEngine::Vector3 _TimelineCurveLastVal_distanceColorizationOffsetSpeed; // 0xD5C
		::System::Single _TimelineCurveFirstVal_distanceColorizationTiling; // 0xD68
		::System::Single _TimelineCurveLastVal_distanceColorizationTiling; // 0xD6C
		::UnityEngine::Color _TimelineCurveFirstVal_distanceDistortionColor; // 0xD70
		::UnityEngine::Color _TimelineCurveLastVal_distanceDistortionColor; // 0xD80
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enable_FieldHandleType; // 0xD90
		::System::Boolean ESPP_enable; // 0xD94
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hue_FieldHandleType; // 0xD98
		::System::Boolean ESPP_hue_UseIt; // 0xD9C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hue; // 0xDA0
		::System::Boolean ESPP_hue_EnableFade; // 0xDA8
		::System::Boolean ESPP_hue_EnableOverrideDefaultValue; // 0xDA9
		::System::Single ESPP_hue_OverrideDefaultValue; // 0xDAC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_saturation_FieldHandleType; // 0xDB0
		::System::Boolean ESPP_saturation_UseIt; // 0xDB4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_saturation; // 0xDB8
		::System::Boolean ESPP_saturation_EnableFade; // 0xDC0
		::System::Boolean ESPP_saturation_EnableOverrideDefaultValue; // 0xDC1
		::System::Single ESPP_saturation_OverrideDefaultValue; // 0xDC4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_brightness_FieldHandleType; // 0xDC8
		::System::Boolean ESPP_brightness_UseIt; // 0xDCC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_brightness; // 0xDD0
		::System::Boolean ESPP_brightness_EnableFade; // 0xDD8
		::System::Boolean ESPP_brightness_EnableOverrideDefaultValue; // 0xDD9
		::System::Single ESPP_brightness_OverrideDefaultValue; // 0xDDC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_contrast_FieldHandleType; // 0xDE0
		::System::Boolean ESPP_contrast_UseIt; // 0xDE4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_contrast; // 0xDE8
		::System::Boolean ESPP_contrast_EnableFade; // 0xDF0
		::System::Boolean ESPP_contrast_EnableOverrideDefaultValue; // 0xDF1
		::System::Single ESPP_contrast_OverrideDefaultValue; // 0xDF4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_contrastMiddlePoint_FieldHandleType; // 0xDF8
		::System::Boolean ESPP_contrastMiddlePoint_UseIt; // 0xDFC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_contrastMiddlePoint; // 0xE00
		::System::Boolean ESPP_contrastMiddlePoint_EnableFade; // 0xE08
		::System::Boolean ESPP_contrastMiddlePoint_EnableOverrideDefaultValue; // 0xE09
		::System::Single ESPP_contrastMiddlePoint_OverrideDefaultValue; // 0xE0C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_colorTintStart_FieldHandleType; // 0xE10
		::System::Boolean ESPP_colorTintStart_UseIt; // 0xE14
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_colorTintStart; // 0xE18
		::System::Boolean ESPP_colorTintStart_EnableFade; // 0xE20
		::System::Boolean ESPP_colorTintStart_EnableOverrideDefaultValue; // 0xE21
		::System::Single ESPP_colorTintStart_OverrideDefaultValue; // 0xE24
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_colorTintNear_FieldHandleType; // 0xE28
		::System::Boolean ESPP_colorTintNear_UseIt; // 0xE2C
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_colorTintNear; // 0xE30
		::System::Boolean ESPP_colorTintNear_EnableFade; // 0xE38
		::System::Boolean ESPP_colorTintNear_EnableOverrideDefaultValue; // 0xE39
		::UnityEngine::Color ESPP_colorTintNear_OverrideDefaultValue; // 0xE3C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_colorTintEnd_FieldHandleType; // 0xE4C
		::System::Boolean ESPP_colorTintEnd_UseIt; // 0xE50
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_colorTintEnd; // 0xE58
		::System::Boolean ESPP_colorTintEnd_EnableFade; // 0xE60
		::System::Boolean ESPP_colorTintEnd_EnableOverrideDefaultValue; // 0xE61
		::System::Single ESPP_colorTintEnd_OverrideDefaultValue; // 0xE64
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_colorTintFar_FieldHandleType; // 0xE68
		::System::Boolean ESPP_colorTintFar_UseIt; // 0xE6C
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_colorTintFar; // 0xE70
		::System::Boolean ESPP_colorTintFar_EnableFade; // 0xE78
		::System::Boolean ESPP_colorTintFar_EnableOverrideDefaultValue; // 0xE79
		::UnityEngine::Color ESPP_colorTintFar_OverrideDefaultValue; // 0xE7C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanlineWidth_FieldHandleType; // 0xE8C
		::System::Single ESPP_scanlineWidth; // 0xE90
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanlineContrast_FieldHandleType; // 0xE94
		::System::Boolean ESPP_scanlineContrast_UseIt; // 0xE98
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanlineContrast; // 0xEA0
		::System::Boolean ESPP_scanlineContrast_EnableFade; // 0xEA8
		::System::Boolean ESPP_scanlineContrast_EnableOverrideDefaultValue; // 0xEA9
		::System::Single ESPP_scanlineContrast_OverrideDefaultValue; // 0xEAC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanlineDistortion_FieldHandleType; // 0xEB0
		::System::Boolean ESPP_scanlineDistortion_UseIt; // 0xEB4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanlineDistortion; // 0xEB8
		::System::Boolean ESPP_scanlineDistortion_EnableFade; // 0xEC0
		::System::Boolean ESPP_scanlineDistortion_EnableOverrideDefaultValue; // 0xEC1
		::System::Single ESPP_scanlineDistortion_OverrideDefaultValue; // 0xEC4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanType_FieldHandleType; // 0xEC8
		::UnityEngine::Rendering::Universal::ScanType ESPP_scanType; // 0xECC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_useCustomScanDirection_FieldHandleType; // 0xED0
		::System::Boolean ESPP_useCustomScanDirection_UseIt; // 0xED4
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_useCustomScanDirection; // 0xED8
		::System::Boolean ESPP_useCustomScanDirection_EnableFade; // 0xEE0
		::System::Boolean ESPP_useCustomScanDirection_EnableOverrideDefaultValue; // 0xEE1
		::System::Boolean ESPP_useCustomScanDirection_OverrideDefaultValue; // 0xEE2
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_customScanDirection_FieldHandleType; // 0xEE4
		::System::Boolean ESPP_customScanDirection_UseIt; // 0xEE8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_customScanDirection; // 0xEF0
		::System::Boolean ESPP_customScanDirection_EnableFade; // 0xEF8
		::System::Boolean ESPP_customScanDirection_EnableOverrideDefaultValue; // 0xEF9
		::System::Single ESPP_customScanDirection_OverrideDefaultValue; // 0xEFC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskType_FieldHandleType; // 0xF00
		::UnityEngine::Rendering::Universal::ScanMaskType ESPP_scanMaskType; // 0xF04
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskTex_FieldHandleType; // 0xF08
		::UnityEngine::Texture* ESPP_scanMaskTex; // 0xF10
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskTexChannel_FieldHandleType; // 0xF18
		::UnityEngine::Rendering::Universal::ChannelMapping ESPP_scanMaskTexChannel; // 0xF1C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskTexTiling_FieldHandleType; // 0xF20
		::System::Boolean ESPP_scanMaskTexTiling_UseIt; // 0xF24
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_scanMaskTexTiling; // 0xF28
		::System::Boolean ESPP_scanMaskTexTiling_EnableFade; // 0xF30
		::System::Boolean ESPP_scanMaskTexTiling_EnableOverrideDefaultValue; // 0xF31
		::UnityEngine::Vector2 ESPP_scanMaskTexTiling_OverrideDefaultValue; // 0xF34
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskTexOffset_FieldHandleType; // 0xF3C
		::System::Boolean ESPP_scanMaskTexOffset_UseIt; // 0xF40
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_scanMaskTexOffset; // 0xF48
		::System::Boolean ESPP_scanMaskTexOffset_EnableFade; // 0xF50
		::System::Boolean ESPP_scanMaskTexOffset_EnableOverrideDefaultValue; // 0xF51
		::UnityEngine::Vector2 ESPP_scanMaskTexOffset_OverrideDefaultValue; // 0xF54
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskTexUVSpeed_FieldHandleType; // 0xF5C
		::System::Boolean ESPP_scanMaskTexUVSpeed_UseIt; // 0xF60
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_scanMaskTexUVSpeed; // 0xF68
		::System::Boolean ESPP_scanMaskTexUVSpeed_EnableFade; // 0xF70
		::System::Boolean ESPP_scanMaskTexUVSpeed_EnableOverrideDefaultValue; // 0xF71
		::UnityEngine::Vector2 ESPP_scanMaskTexUVSpeed_OverrideDefaultValue; // 0xF74
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskBaseY_FieldHandleType; // 0xF7C
		::System::Boolean ESPP_scanMaskBaseY_UseIt; // 0xF80
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanMaskBaseY; // 0xF88
		::System::Boolean ESPP_scanMaskBaseY_EnableFade; // 0xF90
		::System::Boolean ESPP_scanMaskBaseY_EnableOverrideDefaultValue; // 0xF91
		::System::Single ESPP_scanMaskBaseY_OverrideDefaultValue; // 0xF94
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskYRange_FieldHandleType; // 0xF98
		::System::Boolean ESPP_scanMaskYRange_UseIt; // 0xF9C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanMaskYRange; // 0xFA0
		::System::Boolean ESPP_scanMaskYRange_EnableFade; // 0xFA8
		::System::Boolean ESPP_scanMaskYRange_EnableOverrideDefaultValue; // 0xFA9
		::System::Single ESPP_scanMaskYRange_OverrideDefaultValue; // 0xFAC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_keepInFrontForUberPost_FieldHandleType; // 0xFB0
		::System::Boolean ESPP_keepInFrontForUberPost_UseIt; // 0xFB4
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_keepInFrontForUberPost; // 0xFB8
		::System::Boolean ESPP_keepInFrontForUberPost_EnableFade; // 0xFC0
		::System::Boolean ESPP_keepInFrontForUberPost_EnableOverrideDefaultValue; // 0xFC1
		::System::Boolean ESPP_keepInFrontForUberPost_OverrideDefaultValue; // 0xFC2
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart0_FieldHandleType; // 0xFC4
		::System::Boolean ESPP_scanStart0_UseIt; // 0xFC8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanStart0; // 0xFD0
		::System::Boolean ESPP_scanStart0_EnableFade; // 0xFD8
		::System::Boolean ESPP_scanStart0_EnableOverrideDefaultValue; // 0xFD9
		::System::Single ESPP_scanStart0_OverrideDefaultValue; // 0xFDC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd0_FieldHandleType; // 0xFE0
		::System::Boolean ESPP_scanEnd0_UseIt; // 0xFE4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanEnd0; // 0xFE8
		::System::Boolean ESPP_scanEnd0_EnableFade; // 0xFF0
		::System::Boolean ESPP_scanEnd0_EnableOverrideDefaultValue; // 0xFF1
		::System::Single ESPP_scanEnd0_OverrideDefaultValue; // 0xFF4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart0Soft_FieldHandleType; // 0xFF8
		::System::Single ESPP_scanStart0Soft; // 0xFFC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd0Soft_FieldHandleType; // 0x1000
		::System::Single ESPP_scanEnd0Soft; // 0x1004
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor0_FieldHandleType; // 0x1008
		::System::Boolean ESPP_scanColor0_UseIt; // 0x100C
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_scanColor0; // 0x1010
		::System::Boolean ESPP_scanColor0_EnableFade; // 0x1018
		::System::Boolean ESPP_scanColor0_EnableOverrideDefaultValue; // 0x1019
		::UnityEngine::Color ESPP_scanColor0_OverrideDefaultValue; // 0x101C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor0End_FieldHandleType; // 0x102C
		::System::Boolean ESPP_scanColor0End_UseIt; // 0x1030
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_scanColor0End; // 0x1038
		::System::Boolean ESPP_scanColor0End_EnableFade; // 0x1040
		::System::Boolean ESPP_scanColor0End_EnableOverrideDefaultValue; // 0x1041
		::UnityEngine::Color ESPP_scanColor0End_OverrideDefaultValue; // 0x1044
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor0Mode_FieldHandleType; // 0x1054
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod ESPP_scanColor0Mode; // 0x1058
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskIntensity0_FieldHandleType; // 0x105C
		::System::Boolean ESPP_scanMaskIntensity0_UseIt; // 0x1060
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanMaskIntensity0; // 0x1068
		::System::Boolean ESPP_scanMaskIntensity0_EnableFade; // 0x1070
		::System::Boolean ESPP_scanMaskIntensity0_EnableOverrideDefaultValue; // 0x1071
		::System::Single ESPP_scanMaskIntensity0_OverrideDefaultValue; // 0x1074
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart1_FieldHandleType; // 0x1078
		::System::Boolean ESPP_scanStart1_UseIt; // 0x107C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanStart1; // 0x1080
		::System::Boolean ESPP_scanStart1_EnableFade; // 0x1088
		::System::Boolean ESPP_scanStart1_EnableOverrideDefaultValue; // 0x1089
		::System::Single ESPP_scanStart1_OverrideDefaultValue; // 0x108C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd1_FieldHandleType; // 0x1090
		::System::Boolean ESPP_scanEnd1_UseIt; // 0x1094
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanEnd1; // 0x1098
		::System::Boolean ESPP_scanEnd1_EnableFade; // 0x10A0
		::System::Boolean ESPP_scanEnd1_EnableOverrideDefaultValue; // 0x10A1
		::System::Single ESPP_scanEnd1_OverrideDefaultValue; // 0x10A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart1Soft_FieldHandleType; // 0x10A8
		::System::Single ESPP_scanStart1Soft; // 0x10AC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd1Soft_FieldHandleType; // 0x10B0
		::System::Single ESPP_scanEnd1Soft; // 0x10B4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor1_FieldHandleType; // 0x10B8
		::System::Boolean ESPP_scanColor1_UseIt; // 0x10BC
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_scanColor1; // 0x10C0
		::System::Boolean ESPP_scanColor1_EnableFade; // 0x10C8
		::System::Boolean ESPP_scanColor1_EnableOverrideDefaultValue; // 0x10C9
		::UnityEngine::Color ESPP_scanColor1_OverrideDefaultValue; // 0x10CC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor1End_FieldHandleType; // 0x10DC
		::System::Boolean ESPP_scanColor1End_UseIt; // 0x10E0
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_scanColor1End; // 0x10E8
		::System::Boolean ESPP_scanColor1End_EnableFade; // 0x10F0
		::System::Boolean ESPP_scanColor1End_EnableOverrideDefaultValue; // 0x10F1
		::UnityEngine::Color ESPP_scanColor1End_OverrideDefaultValue; // 0x10F4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor1Mode_FieldHandleType; // 0x1104
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod ESPP_scanColor1Mode; // 0x1108
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskIntensity1_FieldHandleType; // 0x110C
		::System::Boolean ESPP_scanMaskIntensity1_UseIt; // 0x1110
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanMaskIntensity1; // 0x1118
		::System::Boolean ESPP_scanMaskIntensity1_EnableFade; // 0x1120
		::System::Boolean ESPP_scanMaskIntensity1_EnableOverrideDefaultValue; // 0x1121
		::System::Single ESPP_scanMaskIntensity1_OverrideDefaultValue; // 0x1124
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart2_FieldHandleType; // 0x1128
		::System::Boolean ESPP_scanStart2_UseIt; // 0x112C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanStart2; // 0x1130
		::System::Boolean ESPP_scanStart2_EnableFade; // 0x1138
		::System::Boolean ESPP_scanStart2_EnableOverrideDefaultValue; // 0x1139
		::System::Single ESPP_scanStart2_OverrideDefaultValue; // 0x113C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd2_FieldHandleType; // 0x1140
		::System::Boolean ESPP_scanEnd2_UseIt; // 0x1144
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanEnd2; // 0x1148
		::System::Boolean ESPP_scanEnd2_EnableFade; // 0x1150
		::System::Boolean ESPP_scanEnd2_EnableOverrideDefaultValue; // 0x1151
		::System::Single ESPP_scanEnd2_OverrideDefaultValue; // 0x1154
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart2Soft_FieldHandleType; // 0x1158
		::System::Single ESPP_scanStart2Soft; // 0x115C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd2Soft_FieldHandleType; // 0x1160
		::System::Single ESPP_scanEnd2Soft; // 0x1164
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor2_FieldHandleType; // 0x1168
		::System::Boolean ESPP_scanColor2_UseIt; // 0x116C
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_scanColor2; // 0x1170
		::System::Boolean ESPP_scanColor2_EnableFade; // 0x1178
		::System::Boolean ESPP_scanColor2_EnableOverrideDefaultValue; // 0x1179
		::UnityEngine::Color ESPP_scanColor2_OverrideDefaultValue; // 0x117C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor2End_FieldHandleType; // 0x118C
		::System::Boolean ESPP_scanColor2End_UseIt; // 0x1190
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_scanColor2End; // 0x1198
		::System::Boolean ESPP_scanColor2End_EnableFade; // 0x11A0
		::System::Boolean ESPP_scanColor2End_EnableOverrideDefaultValue; // 0x11A1
		::UnityEngine::Color ESPP_scanColor2End_OverrideDefaultValue; // 0x11A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor2Mode_FieldHandleType; // 0x11B4
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod ESPP_scanColor2Mode; // 0x11B8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskIntensity2_FieldHandleType; // 0x11BC
		::System::Boolean ESPP_scanMaskIntensity2_UseIt; // 0x11C0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanMaskIntensity2; // 0x11C8
		::System::Boolean ESPP_scanMaskIntensity2_EnableFade; // 0x11D0
		::System::Boolean ESPP_scanMaskIntensity2_EnableOverrideDefaultValue; // 0x11D1
		::System::Single ESPP_scanMaskIntensity2_OverrideDefaultValue; // 0x11D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart3_FieldHandleType; // 0x11D8
		::System::Boolean ESPP_scanStart3_UseIt; // 0x11DC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanStart3; // 0x11E0
		::System::Boolean ESPP_scanStart3_EnableFade; // 0x11E8
		::System::Boolean ESPP_scanStart3_EnableOverrideDefaultValue; // 0x11E9
		::System::Single ESPP_scanStart3_OverrideDefaultValue; // 0x11EC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd3_FieldHandleType; // 0x11F0
		::System::Boolean ESPP_scanEnd3_UseIt; // 0x11F4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanEnd3; // 0x11F8
		::System::Boolean ESPP_scanEnd3_EnableFade; // 0x1200
		::System::Boolean ESPP_scanEnd3_EnableOverrideDefaultValue; // 0x1201
		::System::Single ESPP_scanEnd3_OverrideDefaultValue; // 0x1204
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart3Soft_FieldHandleType; // 0x1208
		::System::Single ESPP_scanStart3Soft; // 0x120C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd3Soft_FieldHandleType; // 0x1210
		::System::Single ESPP_scanEnd3Soft; // 0x1214
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor3_FieldHandleType; // 0x1218
		::System::Boolean ESPP_scanColor3_UseIt; // 0x121C
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_scanColor3; // 0x1220
		::System::Boolean ESPP_scanColor3_EnableFade; // 0x1228
		::System::Boolean ESPP_scanColor3_EnableOverrideDefaultValue; // 0x1229
		::UnityEngine::Color ESPP_scanColor3_OverrideDefaultValue; // 0x122C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor3End_FieldHandleType; // 0x123C
		::System::Boolean ESPP_scanColor3End_UseIt; // 0x1240
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_scanColor3End; // 0x1248
		::System::Boolean ESPP_scanColor3End_EnableFade; // 0x1250
		::System::Boolean ESPP_scanColor3End_EnableOverrideDefaultValue; // 0x1251
		::UnityEngine::Color ESPP_scanColor3End_OverrideDefaultValue; // 0x1254
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor3Mode_FieldHandleType; // 0x1264
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod ESPP_scanColor3Mode; // 0x1268
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskIntensity3_FieldHandleType; // 0x126C
		::System::Boolean ESPP_scanMaskIntensity3_UseIt; // 0x1270
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanMaskIntensity3; // 0x1278
		::System::Boolean ESPP_scanMaskIntensity3_EnableFade; // 0x1280
		::System::Boolean ESPP_scanMaskIntensity3_EnableOverrideDefaultValue; // 0x1281
		::System::Single ESPP_scanMaskIntensity3_OverrideDefaultValue; // 0x1284
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_uvOffsetR_FieldHandleType; // 0x1288
		::System::Boolean ESPP_uvOffsetR_UseIt; // 0x128C
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_uvOffsetR; // 0x1290
		::System::Boolean ESPP_uvOffsetR_EnableFade; // 0x1298
		::System::Boolean ESPP_uvOffsetR_EnableOverrideDefaultValue; // 0x1299
		::UnityEngine::Vector2 ESPP_uvOffsetR_OverrideDefaultValue; // 0x129C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_colorR_FieldHandleType; // 0x12A4
		::System::Boolean ESPP_colorR_UseIt; // 0x12A8
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_colorR; // 0x12B0
		::System::Boolean ESPP_colorR_EnableFade; // 0x12B8
		::System::Boolean ESPP_colorR_EnableOverrideDefaultValue; // 0x12B9
		::UnityEngine::Color ESPP_colorR_OverrideDefaultValue; // 0x12BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_uvOffsetG_FieldHandleType; // 0x12CC
		::System::Boolean ESPP_uvOffsetG_UseIt; // 0x12D0
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_uvOffsetG; // 0x12D8
		::System::Boolean ESPP_uvOffsetG_EnableFade; // 0x12E0
		::System::Boolean ESPP_uvOffsetG_EnableOverrideDefaultValue; // 0x12E1
		::UnityEngine::Vector2 ESPP_uvOffsetG_OverrideDefaultValue; // 0x12E4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_colorG_FieldHandleType; // 0x12EC
		::System::Boolean ESPP_colorG_UseIt; // 0x12F0
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_colorG; // 0x12F8
		::System::Boolean ESPP_colorG_EnableFade; // 0x1300
		::System::Boolean ESPP_colorG_EnableOverrideDefaultValue; // 0x1301
		::UnityEngine::Color ESPP_colorG_OverrideDefaultValue; // 0x1304
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_uvOffsetB_FieldHandleType; // 0x1314
		::System::Boolean ESPP_uvOffsetB_UseIt; // 0x1318
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_uvOffsetB; // 0x1320
		::System::Boolean ESPP_uvOffsetB_EnableFade; // 0x1328
		::System::Boolean ESPP_uvOffsetB_EnableOverrideDefaultValue; // 0x1329
		::UnityEngine::Vector2 ESPP_uvOffsetB_OverrideDefaultValue; // 0x132C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_colorB_FieldHandleType; // 0x1334
		::System::Boolean ESPP_colorB_UseIt; // 0x1338
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_colorB; // 0x1340
		::System::Boolean ESPP_colorB_EnableFade; // 0x1348
		::System::Boolean ESPP_colorB_EnableOverrideDefaultValue; // 0x1349
		::UnityEngine::Color ESPP_colorB_OverrideDefaultValue; // 0x134C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fadeSourceImage_FieldHandleType; // 0x135C
		::System::Boolean ESPP_fadeSourceImage_UseIt; // 0x1360
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_fadeSourceImage; // 0x1368
		::System::Boolean ESPP_fadeSourceImage_EnableFade; // 0x1370
		::System::Boolean ESPP_fadeSourceImage_EnableOverrideDefaultValue; // 0x1371
		::System::Single ESPP_fadeSourceImage_OverrideDefaultValue; // 0x1374
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sliceWidth_FieldHandleType; // 0x1378
		::System::Boolean ESPP_sliceWidth_UseIt; // 0x137C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_sliceWidth; // 0x1380
		::System::Boolean ESPP_sliceWidth_EnableFade; // 0x1388
		::System::Boolean ESPP_sliceWidth_EnableOverrideDefaultValue; // 0x1389
		::System::Single ESPP_sliceWidth_OverrideDefaultValue; // 0x138C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sliceAngle_FieldHandleType; // 0x1390
		::System::Boolean ESPP_sliceAngle_UseIt; // 0x1394
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_sliceAngle; // 0x1398
		::System::Boolean ESPP_sliceAngle_EnableFade; // 0x13A0
		::System::Boolean ESPP_sliceAngle_EnableOverrideDefaultValue; // 0x13A1
		::System::Single ESPP_sliceAngle_OverrideDefaultValue; // 0x13A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_reverse_FieldHandleType; // 0x13A8
		::System::Boolean ESPP_reverse_UseIt; // 0x13AC
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_reverse; // 0x13B0
		::System::Boolean ESPP_reverse_EnableFade; // 0x13B8
		::System::Boolean ESPP_reverse_EnableOverrideDefaultValue; // 0x13B9
		::System::Boolean ESPP_reverse_OverrideDefaultValue; // 0x13BA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sliceOffset_FieldHandleType; // 0x13BC
		::System::Boolean ESPP_sliceOffset_UseIt; // 0x13C0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_sliceOffset; // 0x13C8
		::System::Boolean ESPP_sliceOffset_EnableFade; // 0x13D0
		::System::Boolean ESPP_sliceOffset_EnableOverrideDefaultValue; // 0x13D1
		::System::Single ESPP_sliceOffset_OverrideDefaultValue; // 0x13D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sliceColorA_FieldHandleType; // 0x13D8
		::System::Boolean ESPP_sliceColorA_UseIt; // 0x13DC
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_sliceColorA; // 0x13E0
		::System::Boolean ESPP_sliceColorA_EnableFade; // 0x13E8
		::System::Boolean ESPP_sliceColorA_EnableOverrideDefaultValue; // 0x13E9
		::UnityEngine::Color ESPP_sliceColorA_OverrideDefaultValue; // 0x13EC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sliceColorAMode_FieldHandleType; // 0x13FC
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod ESPP_sliceColorAMode; // 0x1400
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sliceColorB_FieldHandleType; // 0x1404
		::System::Boolean ESPP_sliceColorB_UseIt; // 0x1408
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_sliceColorB; // 0x1410
		::System::Boolean ESPP_sliceColorB_EnableFade; // 0x1418
		::System::Boolean ESPP_sliceColorB_EnableOverrideDefaultValue; // 0x1419
		::UnityEngine::Color ESPP_sliceColorB_OverrideDefaultValue; // 0x141C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sliceColorBMode_FieldHandleType; // 0x142C
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod ESPP_sliceColorBMode; // 0x1430
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gridOn_FieldHandleType; // 0x1434
		::System::Boolean ESPP_gridOn_UseIt; // 0x1438
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_gridOn; // 0x1440
		::System::Boolean ESPP_gridOn_EnableFade; // 0x1448
		::System::Boolean ESPP_gridOn_EnableOverrideDefaultValue; // 0x1449
		::System::Boolean ESPP_gridOn_OverrideDefaultValue; // 0x144A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gridDistance_FieldHandleType; // 0x144C
		::System::Single ESPP_gridDistance; // 0x1450
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gridBlendScanLine_FieldHandleType; // 0x1454
		::System::Boolean ESPP_gridBlendScanLine; // 0x1458
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gridColor_FieldHandleType; // 0x145C
		::System::Boolean ESPP_gridColor_UseIt; // 0x1460
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_gridColor; // 0x1468
		::System::Boolean ESPP_gridColor_EnableFade; // 0x1470
		::System::Boolean ESPP_gridColor_EnableOverrideDefaultValue; // 0x1471
		::UnityEngine::Color ESPP_gridColor_OverrideDefaultValue; // 0x1474
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gridPower_FieldHandleType; // 0x1484
		::System::Single ESPP_gridPower; // 0x1488
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_groundYPos_FieldHandleType; // 0x148C
		::System::Boolean ESPP_groundYPos_UseIt; // 0x1490
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_groundYPos; // 0x1498
		::System::Boolean ESPP_groundYPos_EnableFade; // 0x14A0
		::System::Boolean ESPP_groundYPos_EnableOverrideDefaultValue; // 0x14A1
		::System::Single ESPP_groundYPos_OverrideDefaultValue; // 0x14A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_screenSpaceGridScale_FieldHandleType; // 0x14A8
		::System::Boolean ESPP_screenSpaceGridScale_UseIt; // 0x14AC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_screenSpaceGridScale; // 0x14B0
		::System::Boolean ESPP_screenSpaceGridScale_EnableFade; // 0x14B8
		::System::Boolean ESPP_screenSpaceGridScale_EnableOverrideDefaultValue; // 0x14B9
		::System::Single ESPP_screenSpaceGridScale_OverrideDefaultValue; // 0x14BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_screenSpaceGridWidth_FieldHandleType; // 0x14C0
		::System::Boolean ESPP_screenSpaceGridWidth_UseIt; // 0x14C4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_screenSpaceGridWidth; // 0x14C8
		::System::Boolean ESPP_screenSpaceGridWidth_EnableFade; // 0x14D0
		::System::Boolean ESPP_screenSpaceGridWidth_EnableOverrideDefaultValue; // 0x14D1
		::System::Single ESPP_screenSpaceGridWidth_OverrideDefaultValue; // 0x14D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineOn_FieldHandleType; // 0x14D8
		::System::Boolean ESPP_outlineOn_UseIt; // 0x14DC
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_outlineOn; // 0x14E0
		::System::Boolean ESPP_outlineOn_EnableFade; // 0x14E8
		::System::Boolean ESPP_outlineOn_EnableOverrideDefaultValue; // 0x14E9
		::System::Boolean ESPP_outlineOn_OverrideDefaultValue; // 0x14EA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineBlendScanLine_FieldHandleType; // 0x14EC
		::System::Boolean ESPP_outlineBlendScanLine; // 0x14F0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineOpacity_FieldHandleType; // 0x14F4
		::System::Boolean ESPP_outlineOpacity_UseIt; // 0x14F8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_outlineOpacity; // 0x1500
		::System::Boolean ESPP_outlineOpacity_EnableFade; // 0x1508
		::System::Boolean ESPP_outlineOpacity_EnableOverrideDefaultValue; // 0x1509
		::System::Single ESPP_outlineOpacity_OverrideDefaultValue; // 0x150C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineDiffOffset_FieldHandleType; // 0x1510
		::System::Single ESPP_outlineDiffOffset; // 0x1514
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineDepthThreshold_FieldHandleType; // 0x1518
		::System::Single ESPP_outlineDepthThreshold; // 0x151C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineNormalThreshold_FieldHandleType; // 0x1520
		::System::Single ESPP_outlineNormalThreshold; // 0x1524
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineNormalThresholdScale_FieldHandleType; // 0x1528
		::System::Single ESPP_outlineNormalThresholdScale; // 0x152C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineColor_FieldHandleType; // 0x1530
		::System::Boolean ESPP_outlineColor_UseIt; // 0x1534
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_outlineColor; // 0x1538
		::System::Boolean ESPP_outlineColor_EnableFade; // 0x1540
		::System::Boolean ESPP_outlineColor_EnableOverrideDefaultValue; // 0x1541
		::UnityEngine::Color ESPP_outlineColor_OverrideDefaultValue; // 0x1544
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineDistortion_FieldHandleType; // 0x1554
		::System::Boolean ESPP_outlineDistortion_UseIt; // 0x1558
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_outlineDistortion; // 0x1560
		::System::Boolean ESPP_outlineDistortion_EnableFade; // 0x1568
		::System::Boolean ESPP_outlineDistortion_EnableOverrideDefaultValue; // 0x1569
		::System::Boolean ESPP_outlineDistortion_OverrideDefaultValue; // 0x156A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineDistortionTex_FieldHandleType; // 0x156C
		::UnityEngine::Texture* ESPP_outlineDistortionTex; // 0x1570
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineDistortionTexTiling_FieldHandleType; // 0x1578
		::System::Boolean ESPP_outlineDistortionTexTiling_UseIt; // 0x157C
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_outlineDistortionTexTiling; // 0x1580
		::System::Boolean ESPP_outlineDistortionTexTiling_EnableFade; // 0x1588
		::System::Boolean ESPP_outlineDistortionTexTiling_EnableOverrideDefaultValue; // 0x1589
		::UnityEngine::Vector2 ESPP_outlineDistortionTexTiling_OverrideDefaultValue; // 0x158C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineDistortionTexOffset_FieldHandleType; // 0x1594
		::System::Boolean ESPP_outlineDistortionTexOffset_UseIt; // 0x1598
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_outlineDistortionTexOffset; // 0x15A0
		::System::Boolean ESPP_outlineDistortionTexOffset_EnableFade; // 0x15A8
		::System::Boolean ESPP_outlineDistortionTexOffset_EnableOverrideDefaultValue; // 0x15A9
		::UnityEngine::Vector2 ESPP_outlineDistortionTexOffset_OverrideDefaultValue; // 0x15AC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineDistortionUVSpeed_FieldHandleType; // 0x15B4
		::System::Boolean ESPP_outlineDistortionUVSpeed_UseIt; // 0x15B8
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_outlineDistortionUVSpeed; // 0x15C0
		::System::Boolean ESPP_outlineDistortionUVSpeed_EnableFade; // 0x15C8
		::System::Boolean ESPP_outlineDistortionUVSpeed_EnableOverrideDefaultValue; // 0x15C9
		::UnityEngine::Vector2 ESPP_outlineDistortionUVSpeed_OverrideDefaultValue; // 0x15CC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineDistortionOffset_FieldHandleType; // 0x15D4
		::System::Boolean ESPP_outlineDistortionOffset_UseIt; // 0x15D8
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_outlineDistortionOffset; // 0x15E0
		::System::Boolean ESPP_outlineDistortionOffset_EnableFade; // 0x15E8
		::System::Boolean ESPP_outlineDistortionOffset_EnableOverrideDefaultValue; // 0x15E9
		::UnityEngine::Vector2 ESPP_outlineDistortionOffset_OverrideDefaultValue; // 0x15EC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineDistortionIntensity_FieldHandleType; // 0x15F4
		::System::Boolean ESPP_outlineDistortionIntensity_UseIt; // 0x15F8
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_outlineDistortionIntensity; // 0x1600
		::System::Boolean ESPP_outlineDistortionIntensity_EnableFade; // 0x1608
		::System::Boolean ESPP_outlineDistortionIntensity_EnableOverrideDefaultValue; // 0x1609
		::UnityEngine::Vector2 ESPP_outlineDistortionIntensity_OverrideDefaultValue; // 0x160C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_textureSheetOn_FieldHandleType; // 0x1614
		::System::Boolean ESPP_textureSheetOn; // 0x1618
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_textureSheetTex_FieldHandleType; // 0x161C
		::UnityEngine::Texture* ESPP_textureSheetTex; // 0x1620
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_textureSheetXY_FieldHandleType; // 0x1628
		::UnityEngine::Vector2 ESPP_textureSheetXY; // 0x162C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_textureSheetIndex_FieldHandleType; // 0x1634
		::System::Boolean ESPP_textureSheetIndex_UseIt; // 0x1638
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_textureSheetIndex; // 0x1640
		::System::Boolean ESPP_textureSheetIndex_EnableFade; // 0x1648
		::System::Boolean ESPP_textureSheetIndex_EnableOverrideDefaultValue; // 0x1649
		::System::Int32 ESPP_textureSheetIndex_OverrideDefaultValue; // 0x164C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_textureSheetColor_FieldHandleType; // 0x1650
		::System::Boolean ESPP_textureSheetColor_UseIt; // 0x1654
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_textureSheetColor; // 0x1658
		::System::Boolean ESPP_textureSheetColor_EnableFade; // 0x1660
		::System::Boolean ESPP_textureSheetColor_EnableOverrideDefaultValue; // 0x1661
		::UnityEngine::Color ESPP_textureSheetColor_OverrideDefaultValue; // 0x1664
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lensDistortionIntensity_FieldHandleType; // 0x1674
		::System::Boolean ESPP_lensDistortionIntensity_UseIt; // 0x1678
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lensDistortionIntensity; // 0x1680
		::System::Boolean ESPP_lensDistortionIntensity_EnableFade; // 0x1688
		::System::Boolean ESPP_lensDistortionIntensity_EnableOverrideDefaultValue; // 0x1689
		::System::Single ESPP_lensDistortionIntensity_OverrideDefaultValue; // 0x168C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lensDistortionXMultiplier_FieldHandleType; // 0x1690
		::System::Boolean ESPP_lensDistortionXMultiplier_UseIt; // 0x1694
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lensDistortionXMultiplier; // 0x1698
		::System::Boolean ESPP_lensDistortionXMultiplier_EnableFade; // 0x16A0
		::System::Boolean ESPP_lensDistortionXMultiplier_EnableOverrideDefaultValue; // 0x16A1
		::System::Single ESPP_lensDistortionXMultiplier_OverrideDefaultValue; // 0x16A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lensDistortionYMultiplier_FieldHandleType; // 0x16A8
		::System::Boolean ESPP_lensDistortionYMultiplier_UseIt; // 0x16AC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lensDistortionYMultiplier; // 0x16B0
		::System::Boolean ESPP_lensDistortionYMultiplier_EnableFade; // 0x16B8
		::System::Boolean ESPP_lensDistortionYMultiplier_EnableOverrideDefaultValue; // 0x16B9
		::System::Single ESPP_lensDistortionYMultiplier_OverrideDefaultValue; // 0x16BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lensDistortionCenter_FieldHandleType; // 0x16C0
		::System::Boolean ESPP_lensDistortionCenter_UseIt; // 0x16C4
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_lensDistortionCenter; // 0x16C8
		::System::Boolean ESPP_lensDistortionCenter_EnableFade; // 0x16D0
		::System::Boolean ESPP_lensDistortionCenter_EnableOverrideDefaultValue; // 0x16D1
		::UnityEngine::Vector2 ESPP_lensDistortionCenter_OverrideDefaultValue; // 0x16D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lensDistortionScale_FieldHandleType; // 0x16DC
		::System::Boolean ESPP_lensDistortionScale_UseIt; // 0x16E0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lensDistortionScale; // 0x16E8
		::System::Boolean ESPP_lensDistortionScale_EnableFade; // 0x16F0
		::System::Boolean ESPP_lensDistortionScale_EnableOverrideDefaultValue; // 0x16F1
		::System::Single ESPP_lensDistortionScale_OverrideDefaultValue; // 0x16F4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enableDistanceDistortionColorization_FieldHandleType; // 0x16F8
		::System::Boolean ESPP_enableDistanceDistortionColorization_UseIt; // 0x16FC
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_enableDistanceDistortionColorization; // 0x1700
		::System::Boolean ESPP_enableDistanceDistortionColorization_EnableFade; // 0x1708
		::System::Boolean ESPP_enableDistanceDistortionColorization_EnableOverrideDefaultValue; // 0x1709
		::System::Boolean ESPP_enableDistanceDistortionColorization_OverrideDefaultValue; // 0x170A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceColorizationEffect_FieldHandleType; // 0x170C
		::System::Boolean ESPP_distanceColorizationEffect_UseIt; // 0x1710
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distanceColorizationEffect; // 0x1718
		::System::Boolean ESPP_distanceColorizationEffect_EnableFade; // 0x1720
		::System::Boolean ESPP_distanceColorizationEffect_EnableOverrideDefaultValue; // 0x1721
		::System::Single ESPP_distanceColorizationEffect_OverrideDefaultValue; // 0x1724
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionTexture_FieldHandleType; // 0x1728
		::UnityEngine::Texture* ESPP_distanceDistortionTexture; // 0x1730
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceColorizeTexture_FieldHandleType; // 0x1738
		::UnityEngine::Texture* ESPP_distanceColorizeTexture; // 0x1740
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionStart_FieldHandleType; // 0x1748
		::System::Boolean ESPP_distanceDistortionStart_UseIt; // 0x174C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distanceDistortionStart; // 0x1750
		::System::Boolean ESPP_distanceDistortionStart_EnableFade; // 0x1758
		::System::Boolean ESPP_distanceDistortionStart_EnableOverrideDefaultValue; // 0x1759
		::System::Single ESPP_distanceDistortionStart_OverrideDefaultValue; // 0x175C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionEnd_FieldHandleType; // 0x1760
		::System::Boolean ESPP_distanceDistortionEnd_UseIt; // 0x1764
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distanceDistortionEnd; // 0x1768
		::System::Boolean ESPP_distanceDistortionEnd_EnableFade; // 0x1770
		::System::Boolean ESPP_distanceDistortionEnd_EnableOverrideDefaultValue; // 0x1771
		::System::Single ESPP_distanceDistortionEnd_OverrideDefaultValue; // 0x1774
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionFadeRange_FieldHandleType; // 0x1778
		::System::Boolean ESPP_distanceDistortionFadeRange_UseIt; // 0x177C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distanceDistortionFadeRange; // 0x1780
		::System::Boolean ESPP_distanceDistortionFadeRange_EnableFade; // 0x1788
		::System::Boolean ESPP_distanceDistortionFadeRange_EnableOverrideDefaultValue; // 0x1789
		::System::Single ESPP_distanceDistortionFadeRange_OverrideDefaultValue; // 0x178C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionHeightStart_FieldHandleType; // 0x1790
		::System::Boolean ESPP_distanceDistortionHeightStart_UseIt; // 0x1794
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distanceDistortionHeightStart; // 0x1798
		::System::Boolean ESPP_distanceDistortionHeightStart_EnableFade; // 0x17A0
		::System::Boolean ESPP_distanceDistortionHeightStart_EnableOverrideDefaultValue; // 0x17A1
		::System::Single ESPP_distanceDistortionHeightStart_OverrideDefaultValue; // 0x17A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionHeightEnd_FieldHandleType; // 0x17A8
		::System::Boolean ESPP_distanceDistortionHeightEnd_UseIt; // 0x17AC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distanceDistortionHeightEnd; // 0x17B0
		::System::Boolean ESPP_distanceDistortionHeightEnd_EnableFade; // 0x17B8
		::System::Boolean ESPP_distanceDistortionHeightEnd_EnableOverrideDefaultValue; // 0x17B9
		::System::Single ESPP_distanceDistortionHeightEnd_OverrideDefaultValue; // 0x17BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionHeightFadeRange_FieldHandleType; // 0x17C0
		::System::Boolean ESPP_distanceDistortionHeightFadeRange_UseIt; // 0x17C4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distanceDistortionHeightFadeRange; // 0x17C8
		::System::Boolean ESPP_distanceDistortionHeightFadeRange_EnableFade; // 0x17D0
		::System::Boolean ESPP_distanceDistortionHeightFadeRange_EnableOverrideDefaultValue; // 0x17D1
		::System::Single ESPP_distanceDistortionHeightFadeRange_OverrideDefaultValue; // 0x17D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionOffsetSpeed_FieldHandleType; // 0x17D8
		::System::Boolean ESPP_distanceDistortionOffsetSpeed_UseIt; // 0x17DC
		::MoleMole::EffectSimulate::Vector3KeyframeCurve* ESPP_distanceDistortionOffsetSpeed; // 0x17E0
		::System::Boolean ESPP_distanceDistortionOffsetSpeed_EnableFade; // 0x17E8
		::System::Boolean ESPP_distanceDistortionOffsetSpeed_EnableOverrideDefaultValue; // 0x17E9
		::UnityEngine::Vector3 ESPP_distanceDistortionOffsetSpeed_OverrideDefaultValue; // 0x17EC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionTiling_FieldHandleType; // 0x17F8
		::System::Boolean ESPP_distanceDistortionTiling_UseIt; // 0x17FC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distanceDistortionTiling; // 0x1800
		::System::Boolean ESPP_distanceDistortionTiling_EnableFade; // 0x1808
		::System::Boolean ESPP_distanceDistortionTiling_EnableOverrideDefaultValue; // 0x1809
		::System::Single ESPP_distanceDistortionTiling_OverrideDefaultValue; // 0x180C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionIntensity_FieldHandleType; // 0x1810
		::System::Boolean ESPP_distanceDistortionIntensity_UseIt; // 0x1814
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distanceDistortionIntensity; // 0x1818
		::System::Boolean ESPP_distanceDistortionIntensity_EnableFade; // 0x1820
		::System::Boolean ESPP_distanceDistortionIntensity_EnableOverrideDefaultValue; // 0x1821
		::System::Single ESPP_distanceDistortionIntensity_OverrideDefaultValue; // 0x1824
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceColorizationOffsetSpeed_FieldHandleType; // 0x1828
		::System::Boolean ESPP_distanceColorizationOffsetSpeed_UseIt; // 0x182C
		::MoleMole::EffectSimulate::Vector3KeyframeCurve* ESPP_distanceColorizationOffsetSpeed; // 0x1830
		::System::Boolean ESPP_distanceColorizationOffsetSpeed_EnableFade; // 0x1838
		::System::Boolean ESPP_distanceColorizationOffsetSpeed_EnableOverrideDefaultValue; // 0x1839
		::UnityEngine::Vector3 ESPP_distanceColorizationOffsetSpeed_OverrideDefaultValue; // 0x183C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceColorizationTiling_FieldHandleType; // 0x1848
		::System::Boolean ESPP_distanceColorizationTiling_UseIt; // 0x184C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distanceColorizationTiling; // 0x1850
		::System::Boolean ESPP_distanceColorizationTiling_EnableFade; // 0x1858
		::System::Boolean ESPP_distanceColorizationTiling_EnableOverrideDefaultValue; // 0x1859
		::System::Single ESPP_distanceColorizationTiling_OverrideDefaultValue; // 0x185C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionColor_FieldHandleType; // 0x1860
		::System::Boolean ESPP_distanceDistortionColor_UseIt; // 0x1864
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_distanceDistortionColor; // 0x1868
		::System::Boolean ESPP_distanceDistortionColor_EnableFade; // 0x1870
		::System::Boolean ESPP_distanceDistortionColor_EnableOverrideDefaultValue; // 0x1871
		::UnityEngine::Color ESPP_distanceDistortionColor_OverrideDefaultValue; // 0x1874
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionBlendMode_FieldHandleType; // 0x1884
		::UnityEngine::Rendering::Universal::DistanceDistortionBlendMode ESPP_distanceDistortionBlendMode; // 0x1888

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_6B72D4EE8C6E907F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_6B72D4EE8C6E907F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_A6544B958241856F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_A6544B958241856F_OFFSET))(this);
		}

		::System::Void Method_5_F53BAAE38A584428()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_F53BAAE38A584428_OFFSET))(this);
		}

		::System::Void Method_5_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Void Method_5_C422DE9CC617B43A(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_C422DE9CC617B43A_OFFSET))(this, a1);
		}

		::System::Void Method_5_D3694D678C874488(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_D3694D678C874488_OFFSET))(this, a1);
		}

		::System::Void Method_5_5BD973238595BF89(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_5BD973238595BF89_OFFSET))(this, a1);
		}

		::System::Void Method_5_5BD973238595BF89_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_5BD973238595BF89_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_8D6879CAA76F6588()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_8D6879CAA76F6588_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_63D56313608AFE32(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_63D56313608AFE32_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_43069389B18F0936()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_43069389B18F0936_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_76ECC59BC7430042(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_76ECC59BC7430042_OFFSET))(this, a1);
		}

		::System::Void Method_5_6BA7BB45F0BA72F4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_6BA7BB45F0BA72F4_OFFSET))(this);
		}

		::System::Void Method_5_76ECC59BC7430042_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_76ECC59BC7430042_1_OFFSET))(this, a1);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::String* Method_5_581A5078A2F29034()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_581A5078A2F29034_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}
	};
}
