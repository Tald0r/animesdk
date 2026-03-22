#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/MoleMole/Timeline/VREffectsBehaviour_Struct_2_52AD02145F5FCE3A_17.h"
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

#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x994C330)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xB5AFA30)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0xB5BA350)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_80313B77C31AD02B_OFFSET UNITYSDK_OFFSET(0xB5AFA60)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_A96B23E2CF1654FE_OFFSET UNITYSDK_OFFSET(0xB5B9F90)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0xB5AFA50)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0xB5AFA40)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x994E360)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x994F130)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x994FF80)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB5AF720)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int VREffectsBehaviour_TypeDefinitionIndex = 57904;

	class VREffectsBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::VREffectsBehaviour_Struct_2_52AD02145F5FCE3A_17 _methodParm; // 0x18
		::System::Boolean enabled; // 0x510
		::System::Boolean active_useStencil; // 0x511
		::System::Boolean use_useStencil; // 0x512
		::System::Boolean useStencil; // 0x513
		::System::Boolean active_gridOn; // 0x514
		::System::Boolean use_gridOn; // 0x515
		::System::Boolean gridOn; // 0x516
		::System::Boolean active_gridDistance; // 0x517
		::System::Boolean use_gridDistance; // 0x518
		::System::Single gridDistance; // 0x51C
		::System::Boolean active_gridBlendScanLine; // 0x520
		::System::Boolean use_gridBlendScanLine; // 0x521
		::System::Boolean gridBlendScanLine; // 0x522
		::System::Boolean active_gridColor; // 0x523
		::System::Boolean use_gridColor; // 0x524
		::UnityEngine::Color gridColor; // 0x528
		::System::Boolean active_gridPower; // 0x538
		::System::Boolean use_gridPower; // 0x539
		::System::Single gridPower; // 0x53C
		::System::Boolean active_groundYPos; // 0x540
		::System::Boolean use_groundYPos; // 0x541
		::System::Single groundYPos; // 0x544
		::System::Boolean active_screenSpaceGrid; // 0x548
		::System::Boolean use_screenSpaceGrid; // 0x549
		::System::Boolean screenSpaceGrid; // 0x54A
		::System::Boolean active_screenSpaceGridScale; // 0x54B
		::System::Boolean use_screenSpaceGridScale; // 0x54C
		::System::Single screenSpaceGridScale; // 0x550
		::System::Boolean active_screenSpaceGridWidth; // 0x554
		::System::Boolean use_screenSpaceGridWidth; // 0x555
		::System::Single screenSpaceGridWidth; // 0x558
		::System::Boolean active_outlineOn; // 0x55C
		::System::Boolean use_outlineOn; // 0x55D
		::System::Boolean outlineOn; // 0x55E
		::System::Boolean active_outlineBlendScanLine; // 0x55F
		::System::Boolean use_outlineBlendScanLine; // 0x560
		::System::Boolean outlineBlendScanLine; // 0x561
		::System::Boolean active_outlineOpacity; // 0x562
		::System::Boolean use_outlineOpacity; // 0x563
		::System::Single outlineOpacity; // 0x564
		::System::Boolean active_outlineDiffOffset; // 0x568
		::System::Boolean use_outlineDiffOffset; // 0x569
		::System::Single outlineDiffOffset; // 0x56C
		::System::Boolean active_outlineDepthThreshold; // 0x570
		::System::Boolean use_outlineDepthThreshold; // 0x571
		::System::Single outlineDepthThreshold; // 0x574
		::System::Boolean active_outlineNormalThreshold; // 0x578
		::System::Boolean use_outlineNormalThreshold; // 0x579
		::System::Single outlineNormalThreshold; // 0x57C
		::System::Boolean active_outlineNormalThresholdScale; // 0x580
		::System::Boolean use_outlineNormalThresholdScale; // 0x581
		::System::Single outlineNormalThresholdScale; // 0x584
		::System::Boolean active_outlineColor; // 0x588
		::System::Boolean use_outlineColor; // 0x589
		::UnityEngine::Color outlineColor; // 0x58C
		::System::Boolean active_textureSheetOn; // 0x59C
		::System::Boolean use_textureSheetOn; // 0x59D
		::System::Boolean textureSheetOn; // 0x59E
		::System::Boolean active_textureSheetTex; // 0x59F
		::System::Boolean use_textureSheetTex; // 0x5A0
		::UnityEngine::Texture* textureSheetTex; // 0x5A8
		::System::Boolean active_textureSheetXY; // 0x5B0
		::System::Boolean use_textureSheetXY; // 0x5B1
		::UnityEngine::Vector2 textureSheetXY; // 0x5B4
		::System::Boolean active_textureSheetIndex; // 0x5BC
		::System::Boolean use_textureSheetIndex; // 0x5BD
		::System::Int32 textureSheetIndex; // 0x5C0
		::System::Boolean active_textureSheetColor; // 0x5C4
		::System::Boolean use_textureSheetColor; // 0x5C5
		::UnityEngine::Color textureSheetColor; // 0x5C8
		::System::Boolean active_scanType; // 0x5D8
		::System::Boolean use_scanType; // 0x5D9
		::UnityEngine::Rendering::Universal::ScanType scanType; // 0x5DC
		::System::Boolean active_useCustomScanDirection; // 0x5E0
		::System::Boolean use_useCustomScanDirection; // 0x5E1
		::System::Boolean useCustomScanDirection; // 0x5E2
		::System::Boolean active_customScanDirection; // 0x5E3
		::System::Boolean use_customScanDirection; // 0x5E4
		::System::Single customScanDirection; // 0x5E8
		::System::Boolean active_scanColor0End; // 0x5EC
		::System::Boolean use_scanColor0End; // 0x5ED
		::UnityEngine::Color scanColor0End; // 0x5F0
		::System::Boolean active_scanColor1End; // 0x600
		::System::Boolean use_scanColor1End; // 0x601
		::UnityEngine::Color scanColor1End; // 0x604
		::System::Boolean active_scanColor2End; // 0x614
		::System::Boolean use_scanColor2End; // 0x615
		::UnityEngine::Color scanColor2End; // 0x618
		::System::Boolean active_scanColor3End; // 0x628
		::System::Boolean use_scanColor3End; // 0x629
		::UnityEngine::Color scanColor3End; // 0x62C
		::System::Boolean active_lensDistortionIntensity; // 0x63C
		::System::Boolean use_lensDistortionIntensity; // 0x63D
		::System::Single lensDistortionIntensity; // 0x640
		::System::Boolean active_lensDistortionXMultiplier; // 0x644
		::System::Boolean use_lensDistortionXMultiplier; // 0x645
		::System::Single lensDistortionXMultiplier; // 0x648
		::System::Boolean active_lensDistortionYMultiplier; // 0x64C
		::System::Boolean use_lensDistortionYMultiplier; // 0x64D
		::System::Single lensDistortionYMultiplier; // 0x650
		::System::Boolean active_lensDistortionCenter; // 0x654
		::System::Boolean use_lensDistortionCenter; // 0x655
		::UnityEngine::Vector2 lensDistortionCenter; // 0x658
		::System::Boolean active_lensDistortionScale; // 0x660
		::System::Boolean use_lensDistortionScale; // 0x661
		::System::Single lensDistortionScale; // 0x664
		::System::Boolean active_enable; // 0x668
		::System::Boolean use_enable; // 0x669
		::System::Boolean enable; // 0x66A
		::System::Boolean active_hue; // 0x66B
		::System::Boolean use_hue; // 0x66C
		::System::Single hue; // 0x670
		::System::Boolean active_saturation; // 0x674
		::System::Boolean use_saturation; // 0x675
		::System::Single saturation; // 0x678
		::System::Boolean active_brightness; // 0x67C
		::System::Boolean use_brightness; // 0x67D
		::System::Single brightness; // 0x680
		::System::Boolean active_contrast; // 0x684
		::System::Boolean use_contrast; // 0x685
		::System::Single contrast; // 0x688
		::System::Boolean active_contrastMiddlePoint; // 0x68C
		::System::Boolean use_contrastMiddlePoint; // 0x68D
		::System::Single contrastMiddlePoint; // 0x690
		::System::Boolean active_colorTintNear; // 0x694
		::System::Boolean use_colorTintNear; // 0x695
		::UnityEngine::Color colorTintNear; // 0x698
		::System::Boolean active_colorTintFar; // 0x6A8
		::System::Boolean use_colorTintFar; // 0x6A9
		::UnityEngine::Color colorTintFar; // 0x6AC
		::System::Boolean active_colorTintStart; // 0x6BC
		::System::Boolean use_colorTintStart; // 0x6BD
		::System::Single colorTintStart; // 0x6C0
		::System::Boolean active_colorTintEnd; // 0x6C4
		::System::Boolean use_colorTintEnd; // 0x6C5
		::System::Single colorTintEnd; // 0x6C8
		::System::Boolean active_scanlineWidth; // 0x6CC
		::System::Boolean use_scanlineWidth; // 0x6CD
		::System::Single scanlineWidth; // 0x6D0
		::System::Boolean active_scanlineContrast; // 0x6D4
		::System::Boolean use_scanlineContrast; // 0x6D5
		::System::Single scanlineContrast; // 0x6D8
		::System::Boolean active_scanlineDistortion; // 0x6DC
		::System::Boolean use_scanlineDistortion; // 0x6DD
		::System::Single scanlineDistortion; // 0x6E0
		::System::Boolean active_sliceWidth; // 0x6E4
		::System::Boolean use_sliceWidth; // 0x6E5
		::System::Single sliceWidth; // 0x6E8
		::System::Boolean active_sliceAngle; // 0x6EC
		::System::Boolean use_sliceAngle; // 0x6ED
		::System::Single sliceAngle; // 0x6F0
		::System::Boolean active_reverse; // 0x6F4
		::System::Boolean use_reverse; // 0x6F5
		::System::Boolean reverse; // 0x6F6
		::System::Boolean active_sliceOffset; // 0x6F7
		::System::Boolean use_sliceOffset; // 0x6F8
		::System::Single sliceOffset; // 0x6FC
		::System::Boolean active_sliceColorA; // 0x700
		::System::Boolean use_sliceColorA; // 0x701
		::UnityEngine::Color sliceColorA; // 0x704
		::System::Boolean active_sliceColorAMode; // 0x714
		::System::Boolean use_sliceColorAMode; // 0x715
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod sliceColorAMode; // 0x718
		::System::Boolean active_sliceColorB; // 0x71C
		::System::Boolean use_sliceColorB; // 0x71D
		::UnityEngine::Color sliceColorB; // 0x720
		::System::Boolean active_sliceColorBMode; // 0x730
		::System::Boolean use_sliceColorBMode; // 0x731
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod sliceColorBMode; // 0x734
		::System::Boolean active_scanStart0; // 0x738
		::System::Boolean use_scanStart0; // 0x739
		::System::Single scanStart0; // 0x73C
		::System::Boolean active_scanEnd0; // 0x740
		::System::Boolean use_scanEnd0; // 0x741
		::System::Single scanEnd0; // 0x744
		::System::Boolean active_scanStart0Soft; // 0x748
		::System::Boolean use_scanStart0Soft; // 0x749
		::System::Single scanStart0Soft; // 0x74C
		::System::Boolean active_scanEnd0Soft; // 0x750
		::System::Boolean use_scanEnd0Soft; // 0x751
		::System::Single scanEnd0Soft; // 0x754
		::System::Boolean active_scanColor0; // 0x758
		::System::Boolean use_scanColor0; // 0x759
		::UnityEngine::Color scanColor0; // 0x75C
		::System::Boolean active_scanColor0Mode; // 0x76C
		::System::Boolean use_scanColor0Mode; // 0x76D
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod scanColor0Mode; // 0x770
		::System::Boolean active_scanStart1; // 0x774
		::System::Boolean use_scanStart1; // 0x775
		::System::Single scanStart1; // 0x778
		::System::Boolean active_scanEnd1; // 0x77C
		::System::Boolean use_scanEnd1; // 0x77D
		::System::Single scanEnd1; // 0x780
		::System::Boolean active_scanStart1Soft; // 0x784
		::System::Boolean use_scanStart1Soft; // 0x785
		::System::Single scanStart1Soft; // 0x788
		::System::Boolean active_scanEnd1Soft; // 0x78C
		::System::Boolean use_scanEnd1Soft; // 0x78D
		::System::Single scanEnd1Soft; // 0x790
		::System::Boolean active_scanColor1; // 0x794
		::System::Boolean use_scanColor1; // 0x795
		::UnityEngine::Color scanColor1; // 0x798
		::System::Boolean active_scanColor1Mode; // 0x7A8
		::System::Boolean use_scanColor1Mode; // 0x7A9
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod scanColor1Mode; // 0x7AC
		::System::Boolean active_scanStart2; // 0x7B0
		::System::Boolean use_scanStart2; // 0x7B1
		::System::Single scanStart2; // 0x7B4
		::System::Boolean active_scanEnd2; // 0x7B8
		::System::Boolean use_scanEnd2; // 0x7B9
		::System::Single scanEnd2; // 0x7BC
		::System::Boolean active_scanStart2Soft; // 0x7C0
		::System::Boolean use_scanStart2Soft; // 0x7C1
		::System::Single scanStart2Soft; // 0x7C4
		::System::Boolean active_scanEnd2Soft; // 0x7C8
		::System::Boolean use_scanEnd2Soft; // 0x7C9
		::System::Single scanEnd2Soft; // 0x7CC
		::System::Boolean active_scanColor2; // 0x7D0
		::System::Boolean use_scanColor2; // 0x7D1
		::UnityEngine::Color scanColor2; // 0x7D4
		::System::Boolean active_scanColor2Mode; // 0x7E4
		::System::Boolean use_scanColor2Mode; // 0x7E5
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod scanColor2Mode; // 0x7E8
		::System::Boolean active_scanStart3; // 0x7EC
		::System::Boolean use_scanStart3; // 0x7ED
		::System::Single scanStart3; // 0x7F0
		::System::Boolean active_scanEnd3; // 0x7F4
		::System::Boolean use_scanEnd3; // 0x7F5
		::System::Single scanEnd3; // 0x7F8
		::System::Boolean active_scanStart3Soft; // 0x7FC
		::System::Boolean use_scanStart3Soft; // 0x7FD
		::System::Single scanStart3Soft; // 0x800
		::System::Boolean active_scanEnd3Soft; // 0x804
		::System::Boolean use_scanEnd3Soft; // 0x805
		::System::Single scanEnd3Soft; // 0x808
		::System::Boolean active_scanColor3; // 0x80C
		::System::Boolean use_scanColor3; // 0x80D
		::UnityEngine::Color scanColor3; // 0x810
		::System::Boolean active_scanColor3Mode; // 0x820
		::System::Boolean use_scanColor3Mode; // 0x821
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod scanColor3Mode; // 0x824
		::System::Boolean active_uvOffsetR; // 0x828
		::System::Boolean use_uvOffsetR; // 0x829
		::UnityEngine::Vector2 uvOffsetR; // 0x82C
		::System::Boolean active_colorR; // 0x834
		::System::Boolean use_colorR; // 0x835
		::UnityEngine::Color colorR; // 0x838
		::System::Boolean active_uvOffsetG; // 0x848
		::System::Boolean use_uvOffsetG; // 0x849
		::UnityEngine::Vector2 uvOffsetG; // 0x84C
		::System::Boolean active_colorG; // 0x854
		::System::Boolean use_colorG; // 0x855
		::UnityEngine::Color colorG; // 0x858
		::System::Boolean active_uvOffsetB; // 0x868
		::System::Boolean use_uvOffsetB; // 0x869
		::UnityEngine::Vector2 uvOffsetB; // 0x86C
		::System::Boolean active_colorB; // 0x874
		::System::Boolean use_colorB; // 0x875
		::UnityEngine::Color colorB; // 0x878
		::System::Boolean active_fadeSourceImage; // 0x888
		::System::Boolean use_fadeSourceImage; // 0x889
		::System::Single fadeSourceImage; // 0x88C
		::System::Boolean active_outlineDistortion; // 0x890
		::System::Boolean use_outlineDistortion; // 0x891
		::System::Boolean outlineDistortion; // 0x892
		::System::Boolean active_outlineDistortionTex; // 0x893
		::System::Boolean use_outlineDistortionTex; // 0x894
		::UnityEngine::Texture* outlineDistortionTex; // 0x898
		::System::Boolean active_outlineDistortionTexTiling; // 0x8A0
		::System::Boolean use_outlineDistortionTexTiling; // 0x8A1
		::UnityEngine::Vector2 outlineDistortionTexTiling; // 0x8A4
		::System::Boolean active_outlineDistortionTexOffset; // 0x8AC
		::System::Boolean use_outlineDistortionTexOffset; // 0x8AD
		::UnityEngine::Vector2 outlineDistortionTexOffset; // 0x8B0
		::System::Boolean active_outlineDistortionUVSpeed; // 0x8B8
		::System::Boolean use_outlineDistortionUVSpeed; // 0x8B9
		::UnityEngine::Vector2 outlineDistortionUVSpeed; // 0x8BC
		::System::Boolean active_outlineDistortionOffset; // 0x8C4
		::System::Boolean use_outlineDistortionOffset; // 0x8C5
		::UnityEngine::Vector2 outlineDistortionOffset; // 0x8C8
		::System::Boolean active_outlineDistortionIntensity; // 0x8D0
		::System::Boolean use_outlineDistortionIntensity; // 0x8D1
		::UnityEngine::Vector2 outlineDistortionIntensity; // 0x8D4
		::System::Boolean active_scanMaskType; // 0x8DC
		::System::Boolean use_scanMaskType; // 0x8DD
		::UnityEngine::Rendering::Universal::ScanMaskType scanMaskType; // 0x8E0
		::System::Boolean active_scanMaskTex; // 0x8E4
		::System::Boolean use_scanMaskTex; // 0x8E5
		::UnityEngine::Texture* scanMaskTex; // 0x8E8
		::System::Boolean active_scanMaskTexChannel; // 0x8F0
		::System::Boolean use_scanMaskTexChannel; // 0x8F1
		::UnityEngine::Rendering::Universal::ChannelMapping scanMaskTexChannel; // 0x8F4
		::System::Boolean active_scanMaskTexTiling; // 0x8F8
		::System::Boolean use_scanMaskTexTiling; // 0x8F9
		::UnityEngine::Vector2 scanMaskTexTiling; // 0x8FC
		::System::Boolean active_scanMaskTexOffset; // 0x904
		::System::Boolean use_scanMaskTexOffset; // 0x905
		::UnityEngine::Vector2 scanMaskTexOffset; // 0x908
		::System::Boolean active_scanMaskTexUVSpeed; // 0x910
		::System::Boolean use_scanMaskTexUVSpeed; // 0x911
		::UnityEngine::Vector2 scanMaskTexUVSpeed; // 0x914
		::System::Boolean active_scanMaskBaseY; // 0x91C
		::System::Boolean use_scanMaskBaseY; // 0x91D
		::System::Single scanMaskBaseY; // 0x920
		::System::Boolean active_scanMaskYRange; // 0x924
		::System::Boolean use_scanMaskYRange; // 0x925
		::System::Single scanMaskYRange; // 0x928
		::System::Boolean active_scanMaskIntensity0; // 0x92C
		::System::Boolean use_scanMaskIntensity0; // 0x92D
		::System::Single scanMaskIntensity0; // 0x930
		::System::Boolean active_scanMaskIntensity1; // 0x934
		::System::Boolean use_scanMaskIntensity1; // 0x935
		::System::Single scanMaskIntensity1; // 0x938
		::System::Boolean active_scanMaskIntensity2; // 0x93C
		::System::Boolean use_scanMaskIntensity2; // 0x93D
		::System::Single scanMaskIntensity2; // 0x940
		::System::Boolean active_scanMaskIntensity3; // 0x944
		::System::Boolean use_scanMaskIntensity3; // 0x945
		::System::Single scanMaskIntensity3; // 0x948
		::System::Boolean active_keepInFrontForUberPost; // 0x94C
		::System::Boolean use_keepInFrontForUberPost; // 0x94D
		::System::Boolean keepInFrontForUberPost; // 0x94E
		::System::Boolean active_enableDistanceDistortionColorization; // 0x94F
		::System::Boolean use_enableDistanceDistortionColorization; // 0x950
		::System::Boolean enableDistanceDistortionColorization; // 0x951
		::System::Boolean active_distanceDistortionTexture; // 0x952
		::System::Boolean use_distanceDistortionTexture; // 0x953
		::UnityEngine::Texture* distanceDistortionTexture; // 0x958
		::System::Boolean active_distanceColorizeTexture; // 0x960
		::System::Boolean use_distanceColorizeTexture; // 0x961
		::UnityEngine::Texture* distanceColorizeTexture; // 0x968
		::System::Boolean active_distanceDistortionColor; // 0x970
		::System::Boolean use_distanceDistortionColor; // 0x971
		::UnityEngine::Color distanceDistortionColor; // 0x974
		::System::Boolean active_distanceDistortionStart; // 0x984
		::System::Boolean use_distanceDistortionStart; // 0x985
		::System::Single distanceDistortionStart; // 0x988
		::System::Boolean active_distanceDistortionEnd; // 0x98C
		::System::Boolean use_distanceDistortionEnd; // 0x98D
		::System::Single distanceDistortionEnd; // 0x990
		::System::Boolean active_distanceDistortionFadeRange; // 0x994
		::System::Boolean use_distanceDistortionFadeRange; // 0x995
		::System::Single distanceDistortionFadeRange; // 0x998
		::System::Boolean active_distanceDistortionOffsetSpeed; // 0x99C
		::System::Boolean use_distanceDistortionOffsetSpeed; // 0x99D
		::UnityEngine::Vector3 distanceDistortionOffsetSpeed; // 0x9A0
		::System::Boolean active_distanceDistortionTiling; // 0x9AC
		::System::Boolean use_distanceDistortionTiling; // 0x9AD
		::System::Single distanceDistortionTiling; // 0x9B0
		::System::Boolean active_distanceDistortionIntensity; // 0x9B4
		::System::Boolean use_distanceDistortionIntensity; // 0x9B5
		::System::Single distanceDistortionIntensity; // 0x9B8
		::System::Boolean active_distanceColorizationOffsetSpeed; // 0x9BC
		::System::Boolean use_distanceColorizationOffsetSpeed; // 0x9BD
		::UnityEngine::Vector3 distanceColorizationOffsetSpeed; // 0x9C0
		::System::Boolean active_distanceColorizationTiling; // 0x9CC
		::System::Boolean use_distanceColorizationTiling; // 0x9CD
		::System::Single distanceColorizationTiling; // 0x9D0
		::System::Boolean active_distanceDistortionHeightStart; // 0x9D4
		::System::Boolean use_distanceDistortionHeightStart; // 0x9D5
		::System::Single distanceDistortionHeightStart; // 0x9D8
		::System::Boolean active_distanceDistortionHeightEnd; // 0x9DC
		::System::Boolean use_distanceDistortionHeightEnd; // 0x9DD
		::System::Single distanceDistortionHeightEnd; // 0x9E0
		::System::Boolean active_distanceDistortionHeightFadeRange; // 0x9E4
		::System::Boolean use_distanceDistortionHeightFadeRange; // 0x9E5
		::System::Single distanceDistortionHeightFadeRange; // 0x9E8
		::System::Boolean active_distanceDistortionBlendMode; // 0x9EC
		::System::Boolean use_distanceDistortionBlendMode; // 0x9ED
		::UnityEngine::Rendering::Universal::DistanceDistortionBlendMode distanceDistortionBlendMode; // 0x9F0
		::System::Boolean active_distanceColorizationEffect; // 0x9F4
		::System::Boolean use_distanceColorizationEffect; // 0x9F5
		::System::Single distanceColorizationEffect; // 0x9F8
		::System::Boolean active_scanCustomCenterPosition; // 0x9FC
		::System::Boolean use_scanCustomCenterPosition; // 0x9FD
		::UnityEngine::Vector3 scanCustomCenterPosition; // 0xA00
		::UnityEngine::Rendering::Universal::VREffects* _VREffects; // 0xA10

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

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_80313B77C31AD02B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_80313B77C31AD02B_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::VREffects* Method_4_A96B23E2CF1654FE(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::VREffects*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_A96B23E2CF1654FE_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}
	};
}
