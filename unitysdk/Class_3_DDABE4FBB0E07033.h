#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0913CDAD1E2CC7E0.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VREffects_NativeSRP_ColorBlendMethod.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ChannelMapping.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DistanceDistortionBlendMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanMaskType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityVREffectsEffect; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class VREffects; }

#define CLASS_3_DDABE4FBB0E07033_METHOD_3_17D5A5D3C63B90F7_OFFSET UNITYSDK_OFFSET(0xB7E9310)
#define CLASS_3_DDABE4FBB0E07033_METHOD_3_336A6B820D9126A6_OFFSET UNITYSDK_OFFSET(0x178D4FE0)
#define CLASS_3_DDABE4FBB0E07033_METHOD_3_4FE3D2919983140C_OFFSET UNITYSDK_OFFSET(0x178E3020)
#define CLASS_3_DDABE4FBB0E07033_METHOD_3_60C2031AD5DDAE7A_1_OFFSET UNITYSDK_OFFSET(0xB7E9360)
#define CLASS_3_DDABE4FBB0E07033_METHOD_3_60C2031AD5DDAE7A_OFFSET UNITYSDK_OFFSET(0xB7E9300)
#define CLASS_3_DDABE4FBB0E07033_METHOD_3_87237E6E439E39A4_OFFSET UNITYSDK_OFFSET(0x178C2AE0)
#define CLASS_3_DDABE4FBB0E07033_METHOD_3_A211BC9F15CED8BB_OFFSET UNITYSDK_OFFSET(0xB7DCA30)
#define CLASS_3_DDABE4FBB0E07033_METHOD_3_BF9AE8817D31A47F_OFFSET UNITYSDK_OFFSET(0xB7CCEE0)
#define CLASS_3_DDABE4FBB0E07033_METHOD_3_CC7841E04D5BC26D_OFFSET UNITYSDK_OFFSET(0xB7E9320)
#define CLASS_3_DDABE4FBB0E07033_METHOD_3_DA3E5A55D0B0BC44_OFFSET UNITYSDK_OFFSET(0x178F4B00)
#define CLASS_3_DDABE4FBB0E07033_METHOD_3_E45D1BE334B2DB94_1_OFFSET UNITYSDK_OFFSET(0xB7E9380)
#define CLASS_3_DDABE4FBB0E07033_METHOD_3_E45D1BE334B2DB94_OFFSET UNITYSDK_OFFSET(0xB7E9370)
#define CLASS_3_DDABE4FBB0E07033_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB7E3210)
#define CLASS_3_DDABE4FBB0E07033__CTOR_OFFSET UNITYSDK_OFFSET(0x178C1760)

inline static constexpr unsigned int Class_3_DDABE4FBB0E07033_TypeDefinitionIndex = 56521;

class Class_3_DDABE4FBB0E07033 : public ::Class_2_0913CDAD1E2CC7E0<::UnityEngine::Rendering::Universal::VREffects*, ::MoleMole::Config::ConfigEntityVREffectsEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_134; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_84; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_202; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_234; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_98; // 0xC8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_160; // 0xD0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_224; // 0xD8
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_192; // 0xE0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_208; // 0xE8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_80; // 0xF0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_10; // 0xF8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_108; // 0x100
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::ScanMaskType>* Field_3_32; // 0x108
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_174; // 0x110
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_186; // 0x118
	::MoleMole::TwoValue_1<::System::Single>* Field_3_44; // 0x120
	::MoleMole::TwoValue_1<::System::Single>* Field_3_170; // 0x128
	::MoleMole::TwoValue_1<::System::Single>* Field_3_54; // 0x130
	::UnityEngine::Texture* Field_3_215; // 0x138
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::DistanceDistortionBlendMode>* Field_3_242; // 0x140
	::MoleMole::TwoValue_1<::System::Single>* Field_3_50; // 0x148
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod>* Field_3_62; // 0x150
	::MoleMole::TwoValue_1<::System::Single>* Field_3_24; // 0x158
	::MoleMole::TwoValue_1<::System::Single>* Field_3_168; // 0x160
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_132; // 0x168
	::MoleMole::TwoValue_1<::System::Single>* Field_3_232; // 0x170
	::MoleMole::TwoValue_1<::System::Single>* Field_3_112; // 0x178
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_210; // 0x180
	::MoleMole::TwoValue_1<::System::Single>* Field_3_204; // 0x188
	::MoleMole::TwoValue_1<::System::Single>* Field_3_218; // 0x190
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_74; // 0x198
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_106; // 0x1A0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_228; // 0x1A8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_46; // 0x1B0
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_118; // 0x1B8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_76; // 0x1C0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_82; // 0x1C8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_22; // 0x1D0
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_194; // 0x1D8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_150; // 0x1E0
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::ScanType>* Field_3_26; // 0x1E8
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::ChannelMapping>* Field_3_36; // 0x1F0
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_184; // 0x1F8
	::UnityEngine::Texture* Field_3_35; // 0x200
	::MoleMole::TwoValue_1<::System::Single>* Field_3_200; // 0x208
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_178; // 0x210
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_196; // 0x218
	::MoleMole::TwoValue_1<::System::Single>* Field_3_154; // 0x220
	::MoleMole::TwoValue_1<::System::Single>* Field_3_100; // 0x228
	::MoleMole::TwoValue_1<::UnityEngine::Vector3>* Field_3_230; // 0x230
	::MoleMole::TwoValue_1<::System::Single>* Field_3_8; // 0x238
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod>* Field_3_94; // 0x240
	::MoleMole::TwoValue_1<::System::Single>* Field_3_30; // 0x248
	::MoleMole::TwoValue_1<::System::Single>* Field_3_20; // 0x250
	::MoleMole::TwoValue_1<::System::Single>* Field_3_86; // 0x258
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_34; // 0x260
	::MoleMole::TwoValue_1<::System::Single>* Field_3_72; // 0x268
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_60; // 0x270
	::MoleMole::TwoValue_1<::System::Single>* Field_3_156; // 0x278
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_144; // 0x280
	::MoleMole::TwoValue_1<::System::Single>* Field_3_226; // 0x288
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_114; // 0x290
	::UnityEngine::Texture* Field_3_193; // 0x298
	::MoleMole::TwoValue_1<::System::Single>* Field_3_220; // 0x2A0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_130; // 0x2A8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_64; // 0x2B0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_172; // 0x2B8
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod>* Field_3_138; // 0x2C0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0x2C8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_58; // 0x2D0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_0; // 0x2D8
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_214; // 0x2E0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_56; // 0x2E8
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_40; // 0x2F0
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_38; // 0x2F8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_222; // 0x300
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_14; // 0x308
	::UnityEngine::Texture* Field_3_179; // 0x310
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod>* Field_3_110; // 0x318
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_182; // 0x320
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_188; // 0x328
	::MoleMole::TwoValue_1<::System::Single>* Field_3_96; // 0x330
	::MoleMole::TwoValue_1<::System::Single>* Field_3_152; // 0x338
	::MoleMole::TwoValue_1<::System::Single>* Field_3_238; // 0x340
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_240; // 0x348
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_136; // 0x350
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_122; // 0x358
	::MoleMole::TwoValue_1<::System::Single>* Field_3_164; // 0x360
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_216; // 0x368
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_148; // 0x370
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_176; // 0x378
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_180; // 0x380
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_48; // 0x388
	::MoleMole::TwoValue_1<::System::Single>* Field_3_102; // 0x390
	::MoleMole::TwoValue_1<::System::Single>* Field_3_12; // 0x398
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod>* Field_3_78; // 0x3A0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_68; // 0x3A8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_190; // 0x3B0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_128; // 0x3B8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_116; // 0x3C0
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_18; // 0x3C8
	::MoleMole::TwoValue_1<::UnityEngine::Vector3>* Field_3_236; // 0x3D0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0x3D8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_212; // 0x3E0
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_120; // 0x3E8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_124; // 0x3F0
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_140; // 0x3F8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_166; // 0x400
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_162; // 0x408
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_198; // 0x410
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_92; // 0x418
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_28; // 0x420
	::MoleMole::TwoValue_1<::System::Single>* Field_3_52; // 0x428
	::MoleMole::TwoValue_1<::System::Single>* Field_3_16; // 0x430
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_206; // 0x438
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod>* Field_3_142; // 0x440
	::MoleMole::TwoValue_1<::System::Single>* Field_3_158; // 0x448
	::UnityEngine::Texture* Field_3_217; // 0x450
	::MoleMole::TwoValue_1<::System::Single>* Field_3_2; // 0x458
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_90; // 0x460
	::MoleMole::TwoValue_1<::System::Single>* Field_3_104; // 0x468
	::MoleMole::TwoValue_1<::System::Single>* Field_3_70; // 0x470
	::MoleMole::TwoValue_1<::System::Single>* Field_3_146; // 0x478
	::MoleMole::TwoValue_1<::System::Single>* Field_3_66; // 0x480
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_42; // 0x488
	::MoleMole::TwoValue_1<::System::Single>* Field_3_126; // 0x490
	::MoleMole::TwoValue_1<::System::Single>* Field_3_88; // 0x498
	::UnityEngine::Color Field_3_125; // 0x4A0
	::System::Single Field_3_83; // 0x4B0
	::UnityEngine::Vector2 Field_3_207; // 0x4B4
	::System::Single Field_3_227; // 0x4BC
	::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod Field_3_139; // 0x4C0
	::UnityEngine::Vector2 Field_3_119; // 0x4C4
	::System::Single Field_3_103; // 0x4CC
	::UnityEngine::Color Field_3_141; // 0x4D0
	::System::Boolean Field_3_49; // 0x4E0
	::System::Boolean Field_3_163; // 0x4E1
	::System::Boolean Field_3_191; // 0x4E2
	::System::Boolean Field_3_29; // 0x4E3
	::System::Single Field_3_223; // 0x4E4
	::System::Single Field_3_67; // 0x4E8
	::UnityEngine::Vector2 Field_3_123; // 0x4EC
	::System::Single Field_3_127; // 0x4F4
	::UnityEngine::Color Field_3_19; // 0x4F8
	::System::Single Field_3_13; // 0x508
	::UnityEngine::Color Field_3_77; // 0x50C
	::System::Single Field_3_155; // 0x51C
	::System::Single Field_3_99; // 0x520
	::System::Single Field_3_47; // 0x524
	::UnityEngine::Vector2 Field_3_43; // 0x528
	::UnityEngine::Rendering::Universal::ScanType Field_3_27; // 0x530
	::System::Single Field_3_113; // 0x534
	::System::Single Field_3_31; // 0x538
	::UnityEngine::Color Field_3_151; // 0x53C
	::System::Single Field_3_173; // 0x54C
	::System::Single Field_3_3; // 0x550
	::System::Single Field_3_221; // 0x554
	::UnityEngine::Rendering::Universal::DistanceDistortionBlendMode Field_3_243; // 0x558
	::UnityEngine::Vector3 Field_3_237; // 0x55C
	::System::Single Field_3_225; // 0x568
	::UnityEngine::Color Field_3_175; // 0x56C
	::UnityEngine::Color Field_3_121; // 0x57C
	::System::Single Field_3_153; // 0x58C
	::UnityEngine::Vector2 Field_3_39; // 0x590
	::System::Single Field_3_159; // 0x598
	::UnityEngine::Color Field_3_91; // 0x59C
	::UnityEngine::Color Field_3_137; // 0x5AC
	::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod Field_3_63; // 0x5BC
	::UnityEngine::Rendering::Universal::ChannelMapping Field_3_37; // 0x5C0
	::System::Single Field_3_219; // 0x5C4
	::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod Field_3_111; // 0x5C8
	::System::Single Field_3_147; // 0x5CC
	::System::Single Field_3_45; // 0x5D0
	::UnityEngine::Color Field_3_75; // 0x5D4
	::System::Single Field_3_69; // 0x5E4
	::System::Single Field_3_105; // 0x5E8
	::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod Field_3_79; // 0x5EC
	::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod Field_3_143; // 0x5F0
	::System::Single Field_3_55; // 0x5F4
	::UnityEngine::Vector2 Field_3_181; // 0x5F8
	::System::Single Field_3_131; // 0x600
	::UnityEngine::Vector2 Field_3_41; // 0x604
	::System::Single Field_3_157; // 0x60C
	::UnityEngine::Color Field_3_199; // 0x610
	::System::Single Field_3_81; // 0x620
	::UnityEngine::Color Field_3_117; // 0x624
	::UnityEngine::Color Field_3_241; // 0x634
	::System::Single Field_3_209; // 0x644
	::System::Single Field_3_201; // 0x648
	::System::Single Field_3_229; // 0x64C
	::UnityEngine::Color Field_3_59; // 0x650
	::UnityEngine::Vector2 Field_3_183; // 0x660
	::UnityEngine::Vector3 Field_3_231; // 0x668
	::System::Single Field_3_7; // 0x674
	::System::Single Field_3_11; // 0x678
	::System::Single Field_3_65; // 0x67C
	::System::Single Field_3_239; // 0x680
	::System::Single Field_3_85; // 0x684
	::UnityEngine::Vector2 Field_3_195; // 0x688
	::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod Field_3_95; // 0x690
	::System::Single Field_3_129; // 0x694
	::System::Single Field_3_213; // 0x698
	::System::Single Field_3_165; // 0x69C
	::System::Single Field_3_235; // 0x6A0
	::UnityEngine::Color Field_3_15; // 0x6A4
	::System::Single Field_3_25; // 0x6B4
	::System::Boolean Field_3_145; // 0x6B8
	::System::Boolean Field_3_1; // 0x6B9
	::System::Boolean Field_3_211; // 0x6BA
	::System::Boolean Field_3_149; // 0x6BB
	::System::Single Field_3_51; // 0x6BC
	::UnityEngine::Color Field_3_109; // 0x6C0
	::System::Single Field_3_169; // 0x6D0
	::UnityEngine::Vector2 Field_3_189; // 0x6D4
	::System::Single Field_3_205; // 0x6DC
	::System::Single Field_3_17; // 0x6E0
	::System::Single Field_3_89; // 0x6E4
	::System::Single Field_3_171; // 0x6E8
	::UnityEngine::Color Field_3_61; // 0x6EC
	::System::Boolean Field_3_133; // 0x6FC
	::System::Boolean Field_3_177; // 0x6FD
	::System::Boolean Field_3_161; // 0x6FE
	::System::Single Field_3_5; // 0x700
	::System::Single Field_3_233; // 0x704
	::System::Single Field_3_97; // 0x708
	::System::Single Field_3_23; // 0x70C
	::System::Single Field_3_21; // 0x710
	::System::Single Field_3_73; // 0x714
	::System::Single Field_3_87; // 0x718
	::System::Single Field_3_101; // 0x71C
	::System::Single Field_3_167; // 0x720
	::UnityEngine::Color Field_3_93; // 0x724
	::System::Single Field_3_57; // 0x734
	::System::Single Field_3_71; // 0x738
	::UnityEngine::Vector2 Field_3_185; // 0x73C
	::UnityEngine::Rendering::Universal::ScanMaskType Field_3_33; // 0x744
	::UnityEngine::Vector2 Field_3_115; // 0x748
	::System::Single Field_3_203; // 0x750
	::UnityEngine::Color Field_3_107; // 0x754
	::System::Int32 Field_3_197; // 0x764
	::System::Single Field_3_135; // 0x768
	::System::Single Field_3_53; // 0x76C
	::UnityEngine::Vector2 Field_3_187; // 0x770
	::System::Single Field_3_9; // 0x778

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityVREffectsEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityVREffectsEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_DDABE4FBB0E07033__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_87237E6E439E39A4(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::VREffects* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::VREffects*))((::PBYTE)hIl2Cpp + CLASS_3_DDABE4FBB0E07033_METHOD_3_87237E6E439E39A4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_336A6B820D9126A6(::UnityEngine::Rendering::Universal::VREffects* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::VREffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DDABE4FBB0E07033_METHOD_3_336A6B820D9126A6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4FE3D2919983140C(::UnityEngine::Rendering::Universal::VREffects* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::VREffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DDABE4FBB0E07033_METHOD_3_4FE3D2919983140C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_DA3E5A55D0B0BC44(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::VREffects* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::VREffects*))((::PBYTE)hIl2Cpp + CLASS_3_DDABE4FBB0E07033_METHOD_3_DA3E5A55D0B0BC44_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BF9AE8817D31A47F(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::VREffects* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::VREffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DDABE4FBB0E07033_METHOD_3_BF9AE8817D31A47F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_A211BC9F15CED8BB(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::VREffects* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::VREffects*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_DDABE4FBB0E07033_METHOD_3_A211BC9F15CED8BB_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DDABE4FBB0E07033_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_3_60C2031AD5DDAE7A(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::VREffects* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::VREffects*))((::PBYTE)hIl2Cpp + CLASS_3_DDABE4FBB0E07033_METHOD_3_60C2031AD5DDAE7A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_17D5A5D3C63B90F7(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::VREffects* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::VREffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DDABE4FBB0E07033_METHOD_3_17D5A5D3C63B90F7_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_3_CC7841E04D5BC26D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DDABE4FBB0E07033_METHOD_3_CC7841E04D5BC26D_OFFSET))(this);
	}

	::System::Void Method_3_60C2031AD5DDAE7A_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::VREffects* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::VREffects*))((::PBYTE)hIl2Cpp + CLASS_3_DDABE4FBB0E07033_METHOD_3_60C2031AD5DDAE7A_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_E45D1BE334B2DB94(::UnityEngine::Rendering::Universal::VREffects* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::VREffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DDABE4FBB0E07033_METHOD_3_E45D1BE334B2DB94_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_E45D1BE334B2DB94_1(::UnityEngine::Rendering::Universal::VREffects* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::VREffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DDABE4FBB0E07033_METHOD_3_E45D1BE334B2DB94_1_OFFSET))(this, a1, a2);
	}
};
