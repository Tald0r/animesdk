#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/MoleMole/Timeline/ScreenEffectsBehaviour_Struct_2_52AD02145F5FCE3A_29.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/BlendModes.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ChannelMapping.h"
#include "unitysdk/UnityEngine/Rendering/Universal/UvModes.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class ScreenEffects; }

#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0xD37D6E0)
#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xD38A080)
#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0xD38A0A0)
#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_METHOD_4_80313B77C31AD02B_OFFSET UNITYSDK_OFFSET(0xD37F500)
#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_METHOD_4_987B21A80A47FE37_OFFSET UNITYSDK_OFFSET(0xD37E7D0)
#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0xD38A0B0)
#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0xD38A090)
#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xD37EB90)
#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xD386830)
#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0xD387220)
#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD389F20)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ScreenEffectsBehaviour_TypeDefinitionIndex = 75252;

	class ScreenEffectsBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::ScreenEffectsBehaviour_Struct_2_52AD02145F5FCE3A_29 _methodParm; // 0x18
		::System::Boolean behaviorEnabled; // 0x5F0
		::System::Boolean active_enabled; // 0x5F1
		::System::Boolean use_enabled; // 0x5F2
		::System::Boolean enabled; // 0x5F3
		::System::Boolean active_blendMode; // 0x5F4
		::System::Boolean use_blendMode; // 0x5F5
		::UnityEngine::Rendering::Universal::BlendModes blendMode; // 0x5F8
		::System::Boolean active_polarUVAspect; // 0x5FC
		::System::Boolean use_polarUVAspect; // 0x5FD
		::System::Single polarUVAspect; // 0x600
		::System::Boolean active_boundaryMode; // 0x604
		::System::Boolean use_boundaryMode; // 0x605
		::UnityEngine::Rendering::Universal::UvModes boundaryMode; // 0x608
		::System::Boolean active_boundaryUVAspect; // 0x60C
		::System::Boolean use_boundaryUVAspect; // 0x60D
		::System::Single boundaryUVAspect; // 0x610
		::System::Boolean active_boundary; // 0x614
		::System::Boolean use_boundary; // 0x615
		::System::Single boundary; // 0x618
		::System::Boolean active_feather; // 0x61C
		::System::Boolean use_feather; // 0x61D
		::System::Single feather; // 0x620
		::System::Boolean active_maxOpacity; // 0x624
		::System::Boolean use_maxOpacity; // 0x625
		::System::Single maxOpacity; // 0x628
		::System::Boolean active_invert; // 0x62C
		::System::Boolean use_invert; // 0x62D
		::System::Boolean invert; // 0x62E
		::System::Boolean active_mainTex; // 0x62F
		::System::Boolean use_mainTex; // 0x630
		::UnityEngine::Texture* mainTex; // 0x638
		::System::Boolean active_mainTexUvMode; // 0x640
		::System::Boolean use_mainTexUvMode; // 0x641
		::UnityEngine::Rendering::Universal::UvModes mainTexUvMode; // 0x644
		::System::Boolean active_mainTexScaleOffset; // 0x648
		::System::Boolean use_mainTexScaleOffset; // 0x649
		::UnityEngine::Vector4 mainTexScaleOffset; // 0x64C
		::System::Boolean active_useRGBColorChannelMapping; // 0x65C
		::System::Boolean use_useRGBColorChannelMapping; // 0x65D
		::System::Boolean useRGBColorChannelMapping; // 0x65E
		::System::Boolean active_colorChannelMapping; // 0x65F
		::System::Boolean use_colorChannelMapping; // 0x660
		::UnityEngine::Rendering::Universal::ChannelMapping colorChannelMapping; // 0x664
		::System::Boolean active_alphaChannelMapping; // 0x668
		::System::Boolean use_alphaChannelMapping; // 0x669
		::UnityEngine::Rendering::Universal::ChannelMapping alphaChannelMapping; // 0x66C
		::System::Boolean active_colorA; // 0x670
		::System::Boolean use_colorA; // 0x671
		::UnityEngine::Color colorA; // 0x674
		::System::Boolean active_colorB; // 0x684
		::System::Boolean use_colorB; // 0x685
		::UnityEngine::Color colorB; // 0x688
		::System::Boolean active_lerpBrightness; // 0x698
		::System::Boolean use_lerpBrightness; // 0x699
		::System::Single lerpBrightness; // 0x69C
		::System::Boolean active_uvMoveSpeed; // 0x6A0
		::System::Boolean use_uvMoveSpeed; // 0x6A1
		::UnityEngine::Vector2 uvMoveSpeed; // 0x6A4
		::System::Boolean active_maskTex; // 0x6AC
		::System::Boolean use_maskTex; // 0x6AD
		::UnityEngine::Texture* maskTex; // 0x6B0
		::System::Boolean active_maskTexUvMode; // 0x6B8
		::System::Boolean use_maskTexUvMode; // 0x6B9
		::UnityEngine::Rendering::Universal::UvModes maskTexUvMode; // 0x6BC
		::System::Boolean active_maskTexScaleOffset; // 0x6C0
		::System::Boolean use_maskTexScaleOffset; // 0x6C1
		::UnityEngine::Vector4 maskTexScaleOffset; // 0x6C4
		::System::Boolean active_maskChannelMapping; // 0x6D4
		::System::Boolean use_maskChannelMapping; // 0x6D5
		::UnityEngine::Rendering::Universal::ChannelMapping maskChannelMapping; // 0x6D8
		::System::Boolean active_maskUvMoveSpeed; // 0x6DC
		::System::Boolean use_maskUvMoveSpeed; // 0x6DD
		::UnityEngine::Vector2 maskUvMoveSpeed; // 0x6E0
		::System::Boolean active_dissolveTex; // 0x6E8
		::System::Boolean use_dissolveTex; // 0x6E9
		::UnityEngine::Texture* dissolveTex; // 0x6F0
		::System::Boolean active_dissolveTexUvMode; // 0x6F8
		::System::Boolean use_dissolveTexUvMode; // 0x6F9
		::UnityEngine::Rendering::Universal::UvModes dissolveTexUvMode; // 0x6FC
		::System::Boolean active_dissolveTexScaleOffset; // 0x700
		::System::Boolean use_dissolveTexScaleOffset; // 0x701
		::UnityEngine::Vector4 dissolveTexScaleOffset; // 0x704
		::System::Boolean active_dissolveChannel; // 0x714
		::System::Boolean use_dissolveChannel; // 0x715
		::UnityEngine::Rendering::Universal::ChannelMapping dissolveChannel; // 0x718
		::System::Boolean active_dissolveProgress; // 0x71C
		::System::Boolean use_dissolveProgress; // 0x71D
		::System::Single dissolveProgress; // 0x720
		::System::Boolean active_dissolveUVSpeed; // 0x724
		::System::Boolean use_dissolveUVSpeed; // 0x725
		::UnityEngine::Vector2 dissolveUVSpeed; // 0x728
		::System::Boolean active_dissolveRandomUV; // 0x730
		::System::Boolean use_dissolveRandomUV; // 0x731
		::System::Boolean dissolveRandomUV; // 0x732
		::System::Boolean active_dissolveAffects2Tone; // 0x733
		::System::Boolean use_dissolveAffects2Tone; // 0x734
		::System::Boolean dissolveAffects2Tone; // 0x735
		::System::Boolean active_distortionTex; // 0x736
		::System::Boolean use_distortionTex; // 0x737
		::UnityEngine::Texture* distortionTex; // 0x738
		::System::Boolean active_distortionTexUvMode; // 0x740
		::System::Boolean use_distortionTexUvMode; // 0x741
		::UnityEngine::Rendering::Universal::UvModes distortionTexUvMode; // 0x744
		::System::Boolean active_distortionTexScaleOffset; // 0x748
		::System::Boolean use_distortionTexScaleOffset; // 0x749
		::UnityEngine::Vector4 distortionTexScaleOffset; // 0x74C
		::System::Boolean active_distortionChannel; // 0x75C
		::System::Boolean use_distortionChannel; // 0x75D
		::UnityEngine::Rendering::Universal::ChannelMapping distortionChannel; // 0x760
		::System::Boolean active_distortionUVSpeed; // 0x764
		::System::Boolean use_distortionUVSpeed; // 0x765
		::UnityEngine::Vector2 distortionUVSpeed; // 0x768
		::System::Boolean active_distortionRandomUV; // 0x770
		::System::Boolean use_distortionRandomUV; // 0x771
		::System::Boolean distortionRandomUV; // 0x772
		::System::Boolean active_distortionIntensity; // 0x773
		::System::Boolean use_distortionIntensity; // 0x774
		::System::Single distortionIntensity; // 0x778
		::System::Boolean active_dissolveDistortionIntensity; // 0x77C
		::System::Boolean use_dissolveDistortionIntensity; // 0x77D
		::System::Single dissolveDistortionIntensity; // 0x780
		::System::Boolean active_softRange; // 0x784
		::System::Boolean use_softRange; // 0x785
		::System::Single softRange; // 0x788
		::System::Boolean active_alphaCutoff; // 0x78C
		::System::Boolean use_alphaCutoff; // 0x78D
		::System::Single alphaCutoff; // 0x790
		::System::Boolean active_screenDistortion; // 0x794
		::System::Boolean use_screenDistortion; // 0x795
		::System::Boolean screenDistortion; // 0x796
		::System::Boolean active_screenDistortionTex; // 0x797
		::System::Boolean use_screenDistortionTex; // 0x798
		::UnityEngine::Texture* screenDistortionTex; // 0x7A0
		::System::Boolean active_screenDistortionTexUvMode; // 0x7A8
		::System::Boolean use_screenDistortionTexUvMode; // 0x7A9
		::UnityEngine::Rendering::Universal::UvModes screenDistortionTexUvMode; // 0x7AC
		::System::Boolean active_screenDistortionTexScaleOffset; // 0x7B0
		::System::Boolean use_screenDistortionTexScaleOffset; // 0x7B1
		::UnityEngine::Vector4 screenDistortionTexScaleOffset; // 0x7B4
		::System::Boolean active_screenDistortionIntensity; // 0x7C4
		::System::Boolean use_screenDistortionIntensity; // 0x7C5
		::System::Single screenDistortionIntensity; // 0x7C8
		::System::Boolean active_screenDistortionUVSpeed; // 0x7CC
		::System::Boolean use_screenDistortionUVSpeed; // 0x7CD
		::UnityEngine::Vector2 screenDistortionUVSpeed; // 0x7D0
		::System::Boolean active_ignoreTimeScale; // 0x7D8
		::System::Boolean use_ignoreTimeScale; // 0x7D9
		::System::Boolean ignoreTimeScale; // 0x7DA
		::System::Boolean active_characterGhost; // 0x7DB
		::System::Boolean use_characterGhost; // 0x7DC
		::System::Boolean characterGhost; // 0x7DD
		::System::Boolean active_characterGhostBlitWithProxy; // 0x7DE
		::System::Boolean use_characterGhostBlitWithProxy; // 0x7DF
		::System::Boolean characterGhostBlitWithProxy; // 0x7E0
		::System::Boolean active_characterGhostDownSample; // 0x7E1
		::System::Boolean use_characterGhostDownSample; // 0x7E2
		::System::Int32 characterGhostDownSample; // 0x7E4
		::System::Boolean active_characterGhostDistortionTexture; // 0x7E8
		::System::Boolean use_characterGhostDistortionTexture; // 0x7E9
		::UnityEngine::Texture* characterGhostDistortionTexture; // 0x7F0
		::System::Boolean active_characterGhostDistortionUVScale; // 0x7F8
		::System::Boolean use_characterGhostDistortionUVScale; // 0x7F9
		::UnityEngine::Vector2 characterGhostDistortionUVScale; // 0x7FC
		::System::Boolean active_characterGhostDistortionUVSpeed; // 0x804
		::System::Boolean use_characterGhostDistortionUVSpeed; // 0x805
		::UnityEngine::Vector2 characterGhostDistortionUVSpeed; // 0x808
		::System::Boolean active_characterGhostRadius; // 0x810
		::System::Boolean use_characterGhostRadius; // 0x811
		::System::Single characterGhostRadius; // 0x814
		::System::Boolean active_characterGhostIntensity; // 0x818
		::System::Boolean use_characterGhostIntensity; // 0x819
		::System::Single characterGhostIntensity; // 0x81C
		::System::Boolean active_characterGhostSelfMask; // 0x820
		::System::Boolean use_characterGhostSelfMask; // 0x821
		::System::Boolean characterGhostSelfMask; // 0x822
		::System::Boolean active_useScreenSpaceRadius; // 0x823
		::System::Boolean use_useScreenSpaceRadius; // 0x824
		::System::Boolean useScreenSpaceRadius; // 0x825
		::System::Boolean active_characterGhostTargetPosition; // 0x826
		::System::Boolean use_characterGhostTargetPosition; // 0x827
		::UnityEngine::Vector3 characterGhostTargetPosition; // 0x828
		::System::Boolean active_characterGhostLayer; // 0x834
		::System::Boolean use_characterGhostLayer; // 0x835
		::System::Int32 characterGhostLayer; // 0x838
		::System::Boolean active_layer1Direction; // 0x83C
		::System::Boolean use_layer1Direction; // 0x83D
		::System::Single layer1Direction; // 0x840
		::System::Boolean active_layer1Radius; // 0x844
		::System::Boolean use_layer1Radius; // 0x845
		::System::Single layer1Radius; // 0x848
		::System::Boolean active_layer1Intensity; // 0x84C
		::System::Boolean use_layer1Intensity; // 0x84D
		::System::Single layer1Intensity; // 0x850
		::System::Boolean active_layer1Color; // 0x854
		::System::Boolean use_layer1Color; // 0x855
		::UnityEngine::Color layer1Color; // 0x858
		::System::Boolean active_layer2Direction; // 0x868
		::System::Boolean use_layer2Direction; // 0x869
		::System::Single layer2Direction; // 0x86C
		::System::Boolean active_layer2Radius; // 0x870
		::System::Boolean use_layer2Radius; // 0x871
		::System::Single layer2Radius; // 0x874
		::System::Boolean active_layer2Intensity; // 0x878
		::System::Boolean use_layer2Intensity; // 0x879
		::System::Single layer2Intensity; // 0x87C
		::System::Boolean active_layer2Color; // 0x880
		::System::Boolean use_layer2Color; // 0x881
		::UnityEngine::Color layer2Color; // 0x884
		::System::Boolean active_layer3Direction; // 0x894
		::System::Boolean use_layer3Direction; // 0x895
		::System::Single layer3Direction; // 0x898
		::System::Boolean active_layer3Radius; // 0x89C
		::System::Boolean use_layer3Radius; // 0x89D
		::System::Single layer3Radius; // 0x8A0
		::System::Boolean active_layer3Intensity; // 0x8A4
		::System::Boolean use_layer3Intensity; // 0x8A5
		::System::Single layer3Intensity; // 0x8A8
		::System::Boolean active_layer3Color; // 0x8AC
		::System::Boolean use_layer3Color; // 0x8AD
		::UnityEngine::Color layer3Color; // 0x8B0
		::System::Boolean active_layer4Direction; // 0x8C0
		::System::Boolean use_layer4Direction; // 0x8C1
		::System::Single layer4Direction; // 0x8C4
		::System::Boolean active_layer4Radius; // 0x8C8
		::System::Boolean use_layer4Radius; // 0x8C9
		::System::Single layer4Radius; // 0x8CC
		::System::Boolean active_layer4Intensity; // 0x8D0
		::System::Boolean use_layer4Intensity; // 0x8D1
		::System::Single layer4Intensity; // 0x8D4
		::System::Boolean active_layer4Color; // 0x8D8
		::System::Boolean use_layer4Color; // 0x8D9
		::UnityEngine::Color layer4Color; // 0x8DC
		::System::Boolean active_layer5Direction; // 0x8EC
		::System::Boolean use_layer5Direction; // 0x8ED
		::System::Single layer5Direction; // 0x8F0
		::System::Boolean active_layer5Radius; // 0x8F4
		::System::Boolean use_layer5Radius; // 0x8F5
		::System::Single layer5Radius; // 0x8F8
		::System::Boolean active_layer5Intensity; // 0x8FC
		::System::Boolean use_layer5Intensity; // 0x8FD
		::System::Single layer5Intensity; // 0x900
		::System::Boolean active_layer5Color; // 0x904
		::System::Boolean use_layer5Color; // 0x905
		::UnityEngine::Color layer5Color; // 0x908
		::System::Boolean active_characterGhostColor; // 0x918
		::System::Boolean use_characterGhostColor; // 0x919
		::UnityEngine::Color characterGhostColor; // 0x91C
		::System::Boolean active_characterGhostFresnel; // 0x92C
		::System::Boolean use_characterGhostFresnel; // 0x92D
		::System::Boolean characterGhostFresnel; // 0x92E
		::System::Boolean active_characterGhostFresnelPower; // 0x92F
		::System::Boolean use_characterGhostFresnelPower; // 0x930
		::System::Single characterGhostFresnelPower; // 0x934
		::System::Boolean active_characterGhostSingleColor; // 0x938
		::System::Boolean use_characterGhostSingleColor; // 0x939
		::System::Boolean characterGhostSingleColor; // 0x93A
		::System::Boolean active_characterGhostMinIntensity; // 0x93B
		::System::Boolean use_characterGhostMinIntensity; // 0x93C
		::System::Single characterGhostMinIntensity; // 0x940
		::UnityEngine::Rendering::Universal::ScreenEffects* _ScreenEffects; // 0x948

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::Universal::ScreenEffects* Method_4_987B21A80A47FE37(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::ScreenEffects*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_METHOD_4_987B21A80A47FE37_OFFSET))(this, a1);
		}

		::System::Void Method_4_80313B77C31AD02B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_METHOD_4_80313B77C31AD02B_OFFSET))(this);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}
	};
}
