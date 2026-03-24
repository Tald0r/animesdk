#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/MoleMole/Timeline/VREffectsBehaviour_Struct_2_52AD02145F5FCE3A_14.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VREffects_NativeSRP_ColorBlendMethod.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ChannelMapping.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DistanceDistortionBlendMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanMaskType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class VREffects; }

#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0xC7DFA40)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xC7F2C50)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0xC7F2C40)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_80313B77C31AD02B_OFFSET UNITYSDK_OFFSET(0xC7E2CC0)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_A96B23E2CF1654FE_OFFSET UNITYSDK_OFFSET(0xC7E1AE0)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0xC7F2C60)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0xC7F2C30)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xC7E1EA0)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xC7ED6A0)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0xC7EE540)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xC7F2920)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int VREffectsBehaviour_TypeDefinitionIndex = 49937;

	class VREffectsBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::VREffectsBehaviour_Struct_2_52AD02145F5FCE3A_14 _methodParm; // 0x18
		::System::Boolean enabled; // 0x528
		::System::Boolean active_useStencil; // 0x529
		::System::Boolean use_useStencil; // 0x52A
		::System::Boolean useStencil; // 0x52B
		::System::Boolean active_gridOn; // 0x52C
		::System::Boolean use_gridOn; // 0x52D
		::System::Boolean gridOn; // 0x52E
		::System::Boolean active_gridDistance; // 0x52F
		::System::Boolean use_gridDistance; // 0x530
		::System::Single gridDistance; // 0x534
		::System::Boolean active_gridBlendScanLine; // 0x538
		::System::Boolean use_gridBlendScanLine; // 0x539
		::System::Boolean gridBlendScanLine; // 0x53A
		::System::Boolean active_gridColor; // 0x53B
		::System::Boolean use_gridColor; // 0x53C
		::UnityEngine::Color gridColor; // 0x540
		::System::Boolean active_gridPower; // 0x550
		::System::Boolean use_gridPower; // 0x551
		::System::Single gridPower; // 0x554
		::System::Boolean active_groundYPos; // 0x558
		::System::Boolean use_groundYPos; // 0x559
		::System::Single groundYPos; // 0x55C
		::System::Boolean active_screenSpaceGrid; // 0x560
		::System::Boolean use_screenSpaceGrid; // 0x561
		::System::Boolean screenSpaceGrid; // 0x562
		::System::Boolean active_screenSpaceGridScale; // 0x563
		::System::Boolean use_screenSpaceGridScale; // 0x564
		::System::Single screenSpaceGridScale; // 0x568
		::System::Boolean active_screenSpaceGridWidth; // 0x56C
		::System::Boolean use_screenSpaceGridWidth; // 0x56D
		::System::Single screenSpaceGridWidth; // 0x570
		::System::Boolean active_outlineOn; // 0x574
		::System::Boolean use_outlineOn; // 0x575
		::System::Boolean outlineOn; // 0x576
		::System::Boolean active_outlineBlendScanLine; // 0x577
		::System::Boolean use_outlineBlendScanLine; // 0x578
		::System::Boolean outlineBlendScanLine; // 0x579
		::System::Boolean active_outlineOpacity; // 0x57A
		::System::Boolean use_outlineOpacity; // 0x57B
		::System::Single outlineOpacity; // 0x57C
		::System::Boolean active_outlineDiffOffset; // 0x580
		::System::Boolean use_outlineDiffOffset; // 0x581
		::System::Single outlineDiffOffset; // 0x584
		::System::Boolean active_outlineDepthThreshold; // 0x588
		::System::Boolean use_outlineDepthThreshold; // 0x589
		::System::Single outlineDepthThreshold; // 0x58C
		::System::Boolean active_outlineNormalThreshold; // 0x590
		::System::Boolean use_outlineNormalThreshold; // 0x591
		::System::Single outlineNormalThreshold; // 0x594
		::System::Boolean active_outlineNormalThresholdScale; // 0x598
		::System::Boolean use_outlineNormalThresholdScale; // 0x599
		::System::Single outlineNormalThresholdScale; // 0x59C
		::System::Boolean active_outlineColor; // 0x5A0
		::System::Boolean use_outlineColor; // 0x5A1
		::UnityEngine::Color outlineColor; // 0x5A4
		::System::Boolean active_textureSheetOn; // 0x5B4
		::System::Boolean use_textureSheetOn; // 0x5B5
		::System::Boolean textureSheetOn; // 0x5B6
		::System::Boolean active_textureSheetTex; // 0x5B7
		::System::Boolean use_textureSheetTex; // 0x5B8
		::UnityEngine::Texture* textureSheetTex; // 0x5C0
		::System::Boolean active_textureSheetXY; // 0x5C8
		::System::Boolean use_textureSheetXY; // 0x5C9
		::UnityEngine::Vector2 textureSheetXY; // 0x5CC
		::System::Boolean active_textureSheetIndex; // 0x5D4
		::System::Boolean use_textureSheetIndex; // 0x5D5
		::System::Int32 textureSheetIndex; // 0x5D8
		::System::Boolean active_textureSheetColor; // 0x5DC
		::System::Boolean use_textureSheetColor; // 0x5DD
		::UnityEngine::Color textureSheetColor; // 0x5E0
		::System::Boolean active_scanType; // 0x5F0
		::System::Boolean use_scanType; // 0x5F1
		::UnityEngine::Rendering::Universal::ScanType scanType; // 0x5F4
		::System::Boolean active_useCustomScanDirection; // 0x5F8
		::System::Boolean use_useCustomScanDirection; // 0x5F9
		::System::Boolean useCustomScanDirection; // 0x5FA
		::System::Boolean active_customScanDirection; // 0x5FB
		::System::Boolean use_customScanDirection; // 0x5FC
		::System::Single customScanDirection; // 0x600
		::System::Boolean active_scanColor0End; // 0x604
		::System::Boolean use_scanColor0End; // 0x605
		::UnityEngine::Color scanColor0End; // 0x608
		::System::Boolean active_scanColor1End; // 0x618
		::System::Boolean use_scanColor1End; // 0x619
		::UnityEngine::Color scanColor1End; // 0x61C
		::System::Boolean active_scanColor2End; // 0x62C
		::System::Boolean use_scanColor2End; // 0x62D
		::UnityEngine::Color scanColor2End; // 0x630
		::System::Boolean active_scanColor3End; // 0x640
		::System::Boolean use_scanColor3End; // 0x641
		::UnityEngine::Color scanColor3End; // 0x644
		::System::Boolean active_lensDistortionIntensity; // 0x654
		::System::Boolean use_lensDistortionIntensity; // 0x655
		::System::Single lensDistortionIntensity; // 0x658
		::System::Boolean active_lensDistortionXMultiplier; // 0x65C
		::System::Boolean use_lensDistortionXMultiplier; // 0x65D
		::System::Single lensDistortionXMultiplier; // 0x660
		::System::Boolean active_lensDistortionYMultiplier; // 0x664
		::System::Boolean use_lensDistortionYMultiplier; // 0x665
		::System::Single lensDistortionYMultiplier; // 0x668
		::System::Boolean active_lensDistortionCenter; // 0x66C
		::System::Boolean use_lensDistortionCenter; // 0x66D
		::UnityEngine::Vector2 lensDistortionCenter; // 0x670
		::System::Boolean active_lensDistortionScale; // 0x678
		::System::Boolean use_lensDistortionScale; // 0x679
		::System::Single lensDistortionScale; // 0x67C
		::System::Boolean active_enable; // 0x680
		::System::Boolean use_enable; // 0x681
		::System::Boolean enable; // 0x682
		::System::Boolean active_hue; // 0x683
		::System::Boolean use_hue; // 0x684
		::System::Single hue; // 0x688
		::System::Boolean active_saturation; // 0x68C
		::System::Boolean use_saturation; // 0x68D
		::System::Single saturation; // 0x690
		::System::Boolean active_brightness; // 0x694
		::System::Boolean use_brightness; // 0x695
		::System::Single brightness; // 0x698
		::System::Boolean active_contrast; // 0x69C
		::System::Boolean use_contrast; // 0x69D
		::System::Single contrast; // 0x6A0
		::System::Boolean active_contrastMiddlePoint; // 0x6A4
		::System::Boolean use_contrastMiddlePoint; // 0x6A5
		::System::Single contrastMiddlePoint; // 0x6A8
		::System::Boolean active_colorTintNear; // 0x6AC
		::System::Boolean use_colorTintNear; // 0x6AD
		::UnityEngine::Color colorTintNear; // 0x6B0
		::System::Boolean active_colorTintFar; // 0x6C0
		::System::Boolean use_colorTintFar; // 0x6C1
		::UnityEngine::Color colorTintFar; // 0x6C4
		::System::Boolean active_colorTintStart; // 0x6D4
		::System::Boolean use_colorTintStart; // 0x6D5
		::System::Single colorTintStart; // 0x6D8
		::System::Boolean active_colorTintEnd; // 0x6DC
		::System::Boolean use_colorTintEnd; // 0x6DD
		::System::Single colorTintEnd; // 0x6E0
		::System::Boolean active_scanlineWidth; // 0x6E4
		::System::Boolean use_scanlineWidth; // 0x6E5
		::System::Single scanlineWidth; // 0x6E8
		::System::Boolean active_scanlineContrast; // 0x6EC
		::System::Boolean use_scanlineContrast; // 0x6ED
		::System::Single scanlineContrast; // 0x6F0
		::System::Boolean active_scanlineDistortion; // 0x6F4
		::System::Boolean use_scanlineDistortion; // 0x6F5
		::System::Single scanlineDistortion; // 0x6F8
		::System::Boolean active_sliceWidth; // 0x6FC
		::System::Boolean use_sliceWidth; // 0x6FD
		::System::Single sliceWidth; // 0x700
		::System::Boolean active_sliceAngle; // 0x704
		::System::Boolean use_sliceAngle; // 0x705
		::System::Single sliceAngle; // 0x708
		::System::Boolean active_reverse; // 0x70C
		::System::Boolean use_reverse; // 0x70D
		::System::Boolean reverse; // 0x70E
		::System::Boolean active_sliceOffset; // 0x70F
		::System::Boolean use_sliceOffset; // 0x710
		::System::Single sliceOffset; // 0x714
		::System::Boolean active_sliceColorA; // 0x718
		::System::Boolean use_sliceColorA; // 0x719
		::UnityEngine::Color sliceColorA; // 0x71C
		::System::Boolean active_sliceColorAMode; // 0x72C
		::System::Boolean use_sliceColorAMode; // 0x72D
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod sliceColorAMode; // 0x730
		::System::Boolean active_sliceColorB; // 0x734
		::System::Boolean use_sliceColorB; // 0x735
		::UnityEngine::Color sliceColorB; // 0x738
		::System::Boolean active_sliceColorBMode; // 0x748
		::System::Boolean use_sliceColorBMode; // 0x749
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod sliceColorBMode; // 0x74C
		::System::Boolean active_scanStart0; // 0x750
		::System::Boolean use_scanStart0; // 0x751
		::System::Single scanStart0; // 0x754
		::System::Boolean active_scanEnd0; // 0x758
		::System::Boolean use_scanEnd0; // 0x759
		::System::Single scanEnd0; // 0x75C
		::System::Boolean active_scanStart0Soft; // 0x760
		::System::Boolean use_scanStart0Soft; // 0x761
		::System::Single scanStart0Soft; // 0x764
		::System::Boolean active_scanEnd0Soft; // 0x768
		::System::Boolean use_scanEnd0Soft; // 0x769
		::System::Single scanEnd0Soft; // 0x76C
		::System::Boolean active_scanColor0; // 0x770
		::System::Boolean use_scanColor0; // 0x771
		::UnityEngine::Color scanColor0; // 0x774
		::System::Boolean active_scanColor0Mode; // 0x784
		::System::Boolean use_scanColor0Mode; // 0x785
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod scanColor0Mode; // 0x788
		::System::Boolean active_scanStart1; // 0x78C
		::System::Boolean use_scanStart1; // 0x78D
		::System::Single scanStart1; // 0x790
		::System::Boolean active_scanEnd1; // 0x794
		::System::Boolean use_scanEnd1; // 0x795
		::System::Single scanEnd1; // 0x798
		::System::Boolean active_scanStart1Soft; // 0x79C
		::System::Boolean use_scanStart1Soft; // 0x79D
		::System::Single scanStart1Soft; // 0x7A0
		::System::Boolean active_scanEnd1Soft; // 0x7A4
		::System::Boolean use_scanEnd1Soft; // 0x7A5
		::System::Single scanEnd1Soft; // 0x7A8
		::System::Boolean active_scanColor1; // 0x7AC
		::System::Boolean use_scanColor1; // 0x7AD
		::UnityEngine::Color scanColor1; // 0x7B0
		::System::Boolean active_scanColor1Mode; // 0x7C0
		::System::Boolean use_scanColor1Mode; // 0x7C1
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod scanColor1Mode; // 0x7C4
		::System::Boolean active_scanStart2; // 0x7C8
		::System::Boolean use_scanStart2; // 0x7C9
		::System::Single scanStart2; // 0x7CC
		::System::Boolean active_scanEnd2; // 0x7D0
		::System::Boolean use_scanEnd2; // 0x7D1
		::System::Single scanEnd2; // 0x7D4
		::System::Boolean active_scanStart2Soft; // 0x7D8
		::System::Boolean use_scanStart2Soft; // 0x7D9
		::System::Single scanStart2Soft; // 0x7DC
		::System::Boolean active_scanEnd2Soft; // 0x7E0
		::System::Boolean use_scanEnd2Soft; // 0x7E1
		::System::Single scanEnd2Soft; // 0x7E4
		::System::Boolean active_scanColor2; // 0x7E8
		::System::Boolean use_scanColor2; // 0x7E9
		::UnityEngine::Color scanColor2; // 0x7EC
		::System::Boolean active_scanColor2Mode; // 0x7FC
		::System::Boolean use_scanColor2Mode; // 0x7FD
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod scanColor2Mode; // 0x800
		::System::Boolean active_scanStart3; // 0x804
		::System::Boolean use_scanStart3; // 0x805
		::System::Single scanStart3; // 0x808
		::System::Boolean active_scanEnd3; // 0x80C
		::System::Boolean use_scanEnd3; // 0x80D
		::System::Single scanEnd3; // 0x810
		::System::Boolean active_scanStart3Soft; // 0x814
		::System::Boolean use_scanStart3Soft; // 0x815
		::System::Single scanStart3Soft; // 0x818
		::System::Boolean active_scanEnd3Soft; // 0x81C
		::System::Boolean use_scanEnd3Soft; // 0x81D
		::System::Single scanEnd3Soft; // 0x820
		::System::Boolean active_scanColor3; // 0x824
		::System::Boolean use_scanColor3; // 0x825
		::UnityEngine::Color scanColor3; // 0x828
		::System::Boolean active_scanColor3Mode; // 0x838
		::System::Boolean use_scanColor3Mode; // 0x839
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod scanColor3Mode; // 0x83C
		::System::Boolean active_uvOffsetR; // 0x840
		::System::Boolean use_uvOffsetR; // 0x841
		::UnityEngine::Vector2 uvOffsetR; // 0x844
		::System::Boolean active_colorR; // 0x84C
		::System::Boolean use_colorR; // 0x84D
		::UnityEngine::Color colorR; // 0x850
		::System::Boolean active_uvOffsetG; // 0x860
		::System::Boolean use_uvOffsetG; // 0x861
		::UnityEngine::Vector2 uvOffsetG; // 0x864
		::System::Boolean active_colorG; // 0x86C
		::System::Boolean use_colorG; // 0x86D
		::UnityEngine::Color colorG; // 0x870
		::System::Boolean active_uvOffsetB; // 0x880
		::System::Boolean use_uvOffsetB; // 0x881
		::UnityEngine::Vector2 uvOffsetB; // 0x884
		::System::Boolean active_colorB; // 0x88C
		::System::Boolean use_colorB; // 0x88D
		::UnityEngine::Color colorB; // 0x890
		::System::Boolean active_fadeSourceImage; // 0x8A0
		::System::Boolean use_fadeSourceImage; // 0x8A1
		::System::Single fadeSourceImage; // 0x8A4
		::System::Boolean active_outlineDistortion; // 0x8A8
		::System::Boolean use_outlineDistortion; // 0x8A9
		::System::Boolean outlineDistortion; // 0x8AA
		::System::Boolean active_outlineDistortionTex; // 0x8AB
		::System::Boolean use_outlineDistortionTex; // 0x8AC
		::UnityEngine::Texture* outlineDistortionTex; // 0x8B0
		::System::Boolean active_outlineDistortionTexTiling; // 0x8B8
		::System::Boolean use_outlineDistortionTexTiling; // 0x8B9
		::UnityEngine::Vector2 outlineDistortionTexTiling; // 0x8BC
		::System::Boolean active_outlineDistortionTexOffset; // 0x8C4
		::System::Boolean use_outlineDistortionTexOffset; // 0x8C5
		::UnityEngine::Vector2 outlineDistortionTexOffset; // 0x8C8
		::System::Boolean active_outlineDistortionUVSpeed; // 0x8D0
		::System::Boolean use_outlineDistortionUVSpeed; // 0x8D1
		::UnityEngine::Vector2 outlineDistortionUVSpeed; // 0x8D4
		::System::Boolean active_outlineDistortionOffset; // 0x8DC
		::System::Boolean use_outlineDistortionOffset; // 0x8DD
		::UnityEngine::Vector2 outlineDistortionOffset; // 0x8E0
		::System::Boolean active_outlineDistortionIntensity; // 0x8E8
		::System::Boolean use_outlineDistortionIntensity; // 0x8E9
		::UnityEngine::Vector2 outlineDistortionIntensity; // 0x8EC
		::System::Boolean active_scanMaskType; // 0x8F4
		::System::Boolean use_scanMaskType; // 0x8F5
		::UnityEngine::Rendering::Universal::ScanMaskType scanMaskType; // 0x8F8
		::System::Boolean active_scanMaskTex; // 0x8FC
		::System::Boolean use_scanMaskTex; // 0x8FD
		::UnityEngine::Texture* scanMaskTex; // 0x900
		::System::Boolean active_scanMaskTexChannel; // 0x908
		::System::Boolean use_scanMaskTexChannel; // 0x909
		::UnityEngine::Rendering::Universal::ChannelMapping scanMaskTexChannel; // 0x90C
		::System::Boolean active_scanMaskTexTiling; // 0x910
		::System::Boolean use_scanMaskTexTiling; // 0x911
		::UnityEngine::Vector2 scanMaskTexTiling; // 0x914
		::System::Boolean active_scanMaskTexOffset; // 0x91C
		::System::Boolean use_scanMaskTexOffset; // 0x91D
		::UnityEngine::Vector2 scanMaskTexOffset; // 0x920
		::System::Boolean active_scanMaskTexUVSpeed; // 0x928
		::System::Boolean use_scanMaskTexUVSpeed; // 0x929
		::UnityEngine::Vector2 scanMaskTexUVSpeed; // 0x92C
		::System::Boolean active_scanMaskBaseY; // 0x934
		::System::Boolean use_scanMaskBaseY; // 0x935
		::System::Single scanMaskBaseY; // 0x938
		::System::Boolean active_scanMaskYRange; // 0x93C
		::System::Boolean use_scanMaskYRange; // 0x93D
		::System::Single scanMaskYRange; // 0x940
		::System::Boolean active_scanMaskIntensity0; // 0x944
		::System::Boolean use_scanMaskIntensity0; // 0x945
		::System::Single scanMaskIntensity0; // 0x948
		::System::Boolean active_scanMaskIntensity1; // 0x94C
		::System::Boolean use_scanMaskIntensity1; // 0x94D
		::System::Single scanMaskIntensity1; // 0x950
		::System::Boolean active_scanMaskIntensity2; // 0x954
		::System::Boolean use_scanMaskIntensity2; // 0x955
		::System::Single scanMaskIntensity2; // 0x958
		::System::Boolean active_scanMaskIntensity3; // 0x95C
		::System::Boolean use_scanMaskIntensity3; // 0x95D
		::System::Single scanMaskIntensity3; // 0x960
		::System::Boolean active_keepInFrontForUberPost; // 0x964
		::System::Boolean use_keepInFrontForUberPost; // 0x965
		::System::Boolean keepInFrontForUberPost; // 0x966
		::System::Boolean active_enableDistanceDistortionColorization; // 0x967
		::System::Boolean use_enableDistanceDistortionColorization; // 0x968
		::System::Boolean enableDistanceDistortionColorization; // 0x969
		::System::Boolean active_distanceDistortionTexture; // 0x96A
		::System::Boolean use_distanceDistortionTexture; // 0x96B
		::UnityEngine::Texture* distanceDistortionTexture; // 0x970
		::System::Boolean active_distanceColorizeTexture; // 0x978
		::System::Boolean use_distanceColorizeTexture; // 0x979
		::UnityEngine::Texture* distanceColorizeTexture; // 0x980
		::System::Boolean active_distanceDistortionColor; // 0x988
		::System::Boolean use_distanceDistortionColor; // 0x989
		::UnityEngine::Color distanceDistortionColor; // 0x98C
		::System::Boolean active_distanceDistortionStart; // 0x99C
		::System::Boolean use_distanceDistortionStart; // 0x99D
		::System::Single distanceDistortionStart; // 0x9A0
		::System::Boolean active_distanceDistortionEnd; // 0x9A4
		::System::Boolean use_distanceDistortionEnd; // 0x9A5
		::System::Single distanceDistortionEnd; // 0x9A8
		::System::Boolean active_distanceDistortionFadeRange; // 0x9AC
		::System::Boolean use_distanceDistortionFadeRange; // 0x9AD
		::System::Single distanceDistortionFadeRange; // 0x9B0
		::System::Boolean active_distanceDistortionOffsetSpeed; // 0x9B4
		::System::Boolean use_distanceDistortionOffsetSpeed; // 0x9B5
		::UnityEngine::Vector3 distanceDistortionOffsetSpeed; // 0x9B8
		::System::Boolean active_distanceDistortionTiling; // 0x9C4
		::System::Boolean use_distanceDistortionTiling; // 0x9C5
		::System::Single distanceDistortionTiling; // 0x9C8
		::System::Boolean active_distanceDistortionIntensity; // 0x9CC
		::System::Boolean use_distanceDistortionIntensity; // 0x9CD
		::System::Single distanceDistortionIntensity; // 0x9D0
		::System::Boolean active_distanceColorizationOffsetSpeed; // 0x9D4
		::System::Boolean use_distanceColorizationOffsetSpeed; // 0x9D5
		::UnityEngine::Vector3 distanceColorizationOffsetSpeed; // 0x9D8
		::System::Boolean active_distanceColorizationTiling; // 0x9E4
		::System::Boolean use_distanceColorizationTiling; // 0x9E5
		::System::Single distanceColorizationTiling; // 0x9E8
		::System::Boolean active_distanceDistortionHeightStart; // 0x9EC
		::System::Boolean use_distanceDistortionHeightStart; // 0x9ED
		::System::Single distanceDistortionHeightStart; // 0x9F0
		::System::Boolean active_distanceDistortionHeightEnd; // 0x9F4
		::System::Boolean use_distanceDistortionHeightEnd; // 0x9F5
		::System::Single distanceDistortionHeightEnd; // 0x9F8
		::System::Boolean active_distanceDistortionHeightFadeRange; // 0x9FC
		::System::Boolean use_distanceDistortionHeightFadeRange; // 0x9FD
		::System::Single distanceDistortionHeightFadeRange; // 0xA00
		::System::Boolean active_distanceDistortionBlendMode; // 0xA04
		::System::Boolean use_distanceDistortionBlendMode; // 0xA05
		::UnityEngine::Rendering::Universal::DistanceDistortionBlendMode distanceDistortionBlendMode; // 0xA08
		::System::Boolean active_distanceColorizationEffect; // 0xA0C
		::System::Boolean use_distanceColorizationEffect; // 0xA0D
		::System::Single distanceColorizationEffect; // 0xA10
		::System::Boolean active_scanCustomCenterPosition; // 0xA14
		::System::Boolean use_scanCustomCenterPosition; // 0xA15
		::UnityEngine::Vector3 scanCustomCenterPosition; // 0xA18
		::System::Boolean active_outlineInUberShader; // 0xA24
		::System::Boolean use_outlineInUberShader; // 0xA25
		::System::Boolean outlineInUberShader; // 0xA26
		::System::Boolean active_outlineScreenSpaceMaskTex; // 0xA27
		::System::Boolean use_outlineScreenSpaceMaskTex; // 0xA28
		::UnityEngine::Texture* outlineScreenSpaceMaskTex; // 0xA30
		::System::Boolean active_applyBeforeUberPost; // 0xA38
		::System::Boolean use_applyBeforeUberPost; // 0xA39
		::System::Boolean applyBeforeUberPost; // 0xA3A
		::UnityEngine::Rendering::Universal::VREffects* _VREffects; // 0xA40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_80313B77C31AD02B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_80313B77C31AD02B_OFFSET))(this);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Universal::VREffects* Method_4_A96B23E2CF1654FE(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::VREffects*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_A96B23E2CF1654FE_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}
	};
}
