#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_20577CF7FC6B1263.h"
#include "unitysdk/Class_4_CE10D09BD1801DE0_13_Struct_2_52AD02145F5FCE3A_15.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VREffects_NativeSRP_ColorBlendMethod.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ChannelMapping.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DistanceDistortionBlendMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanMaskType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Timeline { class VREffectsBehaviour; }
namespace System { class Object; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class VREffects; }

#define CLASS_4_CE10D09BD1801DE0_13_METHOD_4_045F1AAB54606068_OFFSET UNITYSDK_OFFSET(0x126058B0)
#define CLASS_4_CE10D09BD1801DE0_13_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x12619A70)
#define CLASS_4_CE10D09BD1801DE0_13_METHOD_4_336B51EF746572BB_OFFSET UNITYSDK_OFFSET(0x12608950)
#define CLASS_4_CE10D09BD1801DE0_13_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x12619A80)
#define CLASS_4_CE10D09BD1801DE0_13_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x12619A60)
#define CLASS_4_CE10D09BD1801DE0_13_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x126077E0)
#define CLASS_4_CE10D09BD1801DE0_13_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x12613050)
#define CLASS_4_CE10D09BD1801DE0_13__CTOR_OFFSET UNITYSDK_OFFSET(0x12619760)

inline static constexpr unsigned int Class_4_CE10D09BD1801DE0_13_TypeDefinitionIndex = 57578;

class Class_4_CE10D09BD1801DE0_13 : public ::Class_3_20577CF7FC6B1263<::UnityEngine::Rendering::Universal::VREffects*, ::MoleMole::Timeline::VREffectsBehaviour*>
{
public:
	::UnityEngine::Texture* Field_4_218; // 0x38
	::UnityEngine::Texture* Field_4_178; // 0x40
	::UnityEngine::Texture* Field_4_40; // 0x48
	::Class_4_CE10D09BD1801DE0_13_Struct_2_52AD02145F5FCE3A_15 Field_4_0; // 0x50
	::UnityEngine::Texture* Field_4_192; // 0x548
	::UnityEngine::Texture* Field_4_220; // 0x550
	::System::Boolean Field_4_216; // 0x558
	::System::Boolean Field_4_195; // 0x559
	::System::Boolean Field_4_191; // 0x55A
	::System::Boolean Field_4_171; // 0x55B
	::System::Single Field_4_234; // 0x55C
	::System::Boolean Field_4_101; // 0x560
	::System::Boolean Field_4_72; // 0x561
	::System::Boolean Field_4_243; // 0x562
	::System::Boolean Field_4_153; // 0x563
	::UnityEngine::Color Field_4_222; // 0x564
	::System::Single Field_4_78; // 0x574
	::System::Boolean Field_4_55; // 0x578
	::System::Boolean Field_4_179; // 0x579
	::System::Boolean Field_4_50; // 0x57A
	::System::Boolean Field_4_73; // 0x57B
	::UnityEngine::Rendering::Universal::ChannelMapping Field_4_194; // 0x57C
	::System::Boolean Field_4_209; // 0x580
	::System::Boolean Field_4_59; // 0x581
	::System::Boolean Field_4_129; // 0x582
	::System::Boolean Field_4_137; // 0x583
	::System::Boolean Field_4_225; // 0x584
	::System::Boolean Field_4_159; // 0x585
	::System::Boolean Field_4_131; // 0x586
	::System::Boolean Field_4_145; // 0x587
	::System::Single Field_4_76; // 0x588
	::System::Single Field_4_32; // 0x58C
	::UnityEngine::Vector2 Field_4_198; // 0x590
	::UnityEngine::Color Field_4_168; // 0x598
	::UnityEngine::Color Field_4_134; // 0x5A8
	::UnityEngine::Vector2 Field_4_182; // 0x5B8
	::UnityEngine::Color Field_4_106; // 0x5C0
	::UnityEngine::Vector2 Field_4_184; // 0x5D0
	::System::Boolean Field_4_16; // 0x5D8
	::System::Boolean Field_4_143; // 0x5D9
	::System::Boolean Field_4_85; // 0x5DA
	::System::Boolean Field_4_1; // 0x5DB
	::System::Boolean Field_4_107; // 0x5DC
	::System::Boolean Field_4_31; // 0x5DD
	::System::Boolean Field_4_241; // 0x5DE
	::System::Boolean Field_4_97; // 0x5DF
	::System::Single Field_4_228; // 0x5E0
	::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod Field_4_160; // 0x5E4
	::System::Boolean Field_4_23; // 0x5E8
	::System::Boolean Field_4_43; // 0x5E9
	::System::Boolean Field_4_139; // 0x5EA
	::System::Boolean Field_4_133; // 0x5EB
	::UnityEngine::Color Field_4_164; // 0x5EC
	::UnityEngine::Vector2 Field_4_170; // 0x5FC
	::System::Single Field_4_74; // 0x604
	::System::Single Field_4_62; // 0x608
	::UnityEngine::Vector2 Field_4_196; // 0x60C
	::System::Boolean Field_4_227; // 0x614
	::System::Boolean Field_4_37; // 0x615
	::System::Boolean Field_4_229; // 0x616
	::System::Boolean Field_4_29; // 0x617
	::UnityEngine::Vector3 Field_4_236; // 0x618
	::System::Single Field_4_208; // 0x624
	::System::Single Field_4_202; // 0x628
	::System::Single Field_4_206; // 0x62C
	::System::Single Field_4_100; // 0x630
	::System::Single Field_4_132; // 0x634
	::System::Boolean Field_4_231; // 0x638
	::System::Boolean Field_4_5; // 0x639
	::System::Boolean Field_4_93; // 0x63A
	::System::Boolean Field_4_245; // 0x63B
	::System::Boolean Field_4_61; // 0x63C
	::System::Boolean Field_4_123; // 0x63D
	::System::Boolean Field_4_53; // 0x63E
	::System::Boolean Field_4_25; // 0x63F
	::System::Boolean Field_4_233; // 0x640
	::System::Boolean Field_4_237; // 0x641
	::System::Boolean Field_4_235; // 0x642
	::System::Boolean Field_4_169; // 0x643
	::System::Boolean Field_4_4; // 0x644
	::System::Boolean Field_4_65; // 0x645
	::System::Boolean Field_4_11; // 0x646
	::System::Boolean Field_4_161; // 0x647
	::System::Single Field_4_212; // 0x648
	::System::Single Field_4_52; // 0x64C
	::System::Single Field_4_104; // 0x650
	::System::Boolean Field_4_177; // 0x654
	::System::Boolean Field_4_147; // 0x655
	::System::Boolean Field_4_249; // 0x656
	::System::Boolean Field_4_183; // 0x657
	::System::Single Field_4_18; // 0x658
	::System::Boolean Field_4_203; // 0x65C
	::System::Boolean Field_4_217; // 0x65D
	::System::Boolean Field_4_3; // 0x65E
	::System::Boolean Field_4_135; // 0x65F
	::UnityEngine::Vector2 Field_4_200; // 0x660
	::System::Boolean Field_4_157; // 0x668
	::System::Boolean Field_4_251; // 0x669
	::System::Boolean Field_4_102; // 0x66A
	::System::Boolean Field_4_33; // 0x66B
	::UnityEngine::Rendering::Universal::ScanType Field_4_48; // 0x66C
	::System::Single Field_4_94; // 0x670
	::UnityEngine::Vector2 Field_4_180; // 0x674
	::UnityEngine::Vector3 Field_4_230; // 0x67C
	::UnityEngine::Color Field_4_10; // 0x688
	::System::Single Field_4_130; // 0x698
	::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod Field_4_108; // 0x69C
	::System::Boolean Field_4_38; // 0x6A0
	::System::Boolean Field_4_119; // 0x6A1
	::System::Boolean Field_4_47; // 0x6A2
	::System::Boolean Field_4_193; // 0x6A3
	::System::Single Field_4_28; // 0x6A4
	::System::Single Field_4_138; // 0x6A8
	::System::Single Field_4_114; // 0x6AC
	::System::Boolean Field_4_165; // 0x6B0
	::System::Boolean Field_4_187; // 0x6B1
	::System::Boolean Field_4_199; // 0x6B2
	::System::Boolean Field_4_83; // 0x6B3
	::System::Single Field_4_232; // 0x6B4
	::System::Boolean Field_4_197; // 0x6B8
	::System::Boolean Field_4_13; // 0x6B9
	::System::Boolean Field_4_19; // 0x6BA
	::System::Boolean Field_4_57; // 0x6BB
	::UnityEngine::Vector2 Field_4_186; // 0x6BC
	::System::Boolean Field_4_75; // 0x6C4
	::System::Boolean Field_4_117; // 0x6C5
	::System::Boolean Field_4_99; // 0x6C6
	::System::Boolean Field_4_91; // 0x6C7
	::System::Single Field_4_150; // 0x6C8
	::UnityEngine::Color Field_4_36; // 0x6CC
	::System::Single Field_4_98; // 0x6DC
	::System::Single Field_4_238; // 0x6E0
	::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod Field_4_112; // 0x6E4
	::UnityEngine::Color Field_4_46; // 0x6E8
	::System::Single Field_4_174; // 0x6F8
	::UnityEngine::Color Field_4_172; // 0x6FC
	::System::Boolean Field_4_87; // 0x70C
	::System::Boolean Field_4_21; // 0x70D
	::System::Boolean Field_4_176; // 0x70E
	::System::Boolean Field_4_8; // 0x70F
	::System::Single Field_4_118; // 0x710
	::System::Single Field_4_12; // 0x714
	::System::Boolean Field_4_151; // 0x718
	::System::Boolean Field_4_201; // 0x719
	::System::Boolean Field_4_163; // 0x71A
	::System::Boolean Field_4_81; // 0x71B
	::System::Single Field_4_70; // 0x71C
	::System::Single Field_4_248; // 0x720
	::UnityEngine::Color Field_4_54; // 0x724
	::UnityEngine::Vector2 Field_4_188; // 0x734
	::System::Single Field_4_140; // 0x73C
	::System::Single Field_4_92; // 0x740
	::System::Single Field_4_96; // 0x744
	::System::Boolean Field_4_127; // 0x748
	::System::Boolean Field_4_223; // 0x749
	::System::Boolean Field_4_24; // 0x74A
	::System::Boolean Field_4_67; // 0x74B
	::UnityEngine::Color Field_4_158; // 0x74C
	::System::Single Field_4_26; // 0x75C
	::UnityEngine::Vector2 Field_4_166; // 0x760
	::System::Single Field_4_242; // 0x768
	::System::Single Field_4_30; // 0x76C
	::System::Single Field_4_6; // 0x770
	::UnityEngine::Vector2 Field_4_68; // 0x774
	::System::Single Field_4_90; // 0x77C
	::System::Boolean Field_4_215; // 0x780
	::System::Boolean Field_4_103; // 0x781
	::System::Boolean Field_4_69; // 0x782
	::System::Boolean Field_4_95; // 0x783
	::System::Single Field_4_82; // 0x784
	::System::Single Field_4_128; // 0x788
	::System::Single Field_4_80; // 0x78C
	::System::Single Field_4_144; // 0x790
	::System::Single Field_4_226; // 0x794
	::UnityEngine::Vector2 Field_4_42; // 0x798
	::System::Boolean Field_4_79; // 0x7A0
	::System::Boolean Field_4_22; // 0x7A1
	::System::Boolean Field_4_51; // 0x7A2
	::System::Boolean Field_4_113; // 0x7A3
	::System::Single Field_4_142; // 0x7A4
	::UnityEngine::Rendering::Universal::DistanceDistortionBlendMode Field_4_246; // 0x7A8
	::System::Single Field_4_64; // 0x7AC
	::System::Boolean Field_4_213; // 0x7B0
	::System::Boolean Field_4_181; // 0x7B1
	::System::Boolean Field_4_247; // 0x7B2
	::System::Boolean Field_4_167; // 0x7B3
	::UnityEngine::Color Field_4_110; // 0x7B4
	::System::Single Field_4_152; // 0x7C4
	::System::Single Field_4_126; // 0x7C8
	::System::Boolean Field_4_89; // 0x7CC
	::System::Boolean Field_4_252; // 0x7CD
	::System::Boolean Field_4_17; // 0x7CE
	::System::Boolean Field_4_109; // 0x7CF
	::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod Field_4_124; // 0x7D0
	::System::Single Field_4_240; // 0x7D4
	::System::Boolean Field_4_219; // 0x7D8
	::System::Boolean Field_4_221; // 0x7D9
	::System::Boolean Field_4_45; // 0x7DA
	::System::Boolean Field_4_175; // 0x7DB
	::System::Single Field_4_204; // 0x7DC
	::System::Int32 Field_4_44; // 0x7E0
	::System::Boolean Field_4_115; // 0x7E4
	::System::Boolean Field_4_63; // 0x7E5
	::System::Boolean Field_4_239; // 0x7E6
	::System::Boolean Field_4_185; // 0x7E7
	::System::Single Field_4_244; // 0x7E8
	::UnityEngine::Color Field_4_58; // 0x7EC
	::UnityEngine::Color Field_4_84; // 0x7FC
	::System::Boolean Field_4_173; // 0x80C
	::System::Boolean Field_4_77; // 0x80D
	::System::Boolean Field_4_35; // 0x80E
	::System::Boolean Field_4_141; // 0x80F
	::System::Single Field_4_210; // 0x810
	::UnityEngine::Rendering::Universal::ScanMaskType Field_4_190; // 0x814
	::System::Single Field_4_120; // 0x818
	::UnityEngine::Color Field_4_122; // 0x81C
	::System::Single Field_4_156; // 0x82C
	::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod Field_4_136; // 0x830
	::System::Single Field_4_14; // 0x834
	::System::Boolean Field_4_7; // 0x838
	::System::Boolean Field_4_27; // 0x839
	::System::Boolean Field_4_205; // 0x83A
	::System::Boolean Field_4_111; // 0x83B
	::System::Single Field_4_88; // 0x83C
	::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod Field_4_148; // 0x840
	::System::Single Field_4_66; // 0x844
	::UnityEngine::Vector2 Field_4_162; // 0x848
	::System::Single Field_4_34; // 0x850
	::System::Single Field_4_20; // 0x854
	::UnityEngine::Color Field_4_60; // 0x858
	::System::Single Field_4_116; // 0x868
	::UnityEngine::Vector3 Field_4_250; // 0x86C
	::UnityEngine::Color Field_4_86; // 0x878
	::System::Boolean Field_4_2; // 0x888
	::System::Boolean Field_4_189; // 0x889
	::System::Boolean Field_4_149; // 0x88A
	::System::Boolean Field_4_125; // 0x88B
	::System::Single Field_4_154; // 0x88C
	::UnityEngine::Color Field_4_146; // 0x890
	::System::Boolean Field_4_155; // 0x8A0
	::System::Boolean Field_4_207; // 0x8A1
	::System::Boolean Field_4_49; // 0x8A2
	::System::Boolean Field_4_211; // 0x8A3
	::System::Boolean Field_4_41; // 0x8A4
	::System::Boolean Field_4_214; // 0x8A5
	::System::Boolean Field_4_39; // 0x8A6
	::System::Boolean Field_4_15; // 0x8A7
	::System::Boolean Field_4_105; // 0x8A8
	::System::Boolean Field_4_71; // 0x8A9
	::System::Boolean Field_4_9; // 0x8AA
	::System::Boolean Field_4_121; // 0x8AB
	::UnityEngine::Color Field_4_56; // 0x8AC
	::System::Single Field_4_224; // 0x8BC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_13__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_045F1AAB54606068()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_13_METHOD_4_045F1AAB54606068_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_13_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_13_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_336B51EF746572BB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_13_METHOD_4_336B51EF746572BB_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_13_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_13_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_13_METHOD_4_832295EC279E5994_OFFSET))(this);
	}
};
