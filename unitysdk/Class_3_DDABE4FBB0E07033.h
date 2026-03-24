#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_390F2A0D02A71B76.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VREffects_NativeSRP_ColorBlendMethod.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ChannelMapping.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DistanceDistortionBlendMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanMaskType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8A50BFB20D9D2482_1;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityVREffectsEffect; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class VREffects; }

#define CLASS_3_DDABE4FBB0E07033_METHOD_3_17D5A5D3C63B90F7_OFFSET UNITYSDK_OFFSET(0x9FA22A0)
#define CLASS_3_DDABE4FBB0E07033_METHOD_3_336A6B820D9126A6_OFFSET UNITYSDK_OFFSET(0x1853C990)
#define CLASS_3_DDABE4FBB0E07033_METHOD_3_4FE3D2919983140C_OFFSET UNITYSDK_OFFSET(0x1854AB90)
#define CLASS_3_DDABE4FBB0E07033_METHOD_3_60C2031AD5DDAE7A_1_OFFSET UNITYSDK_OFFSET(0x9FA22D0)
#define CLASS_3_DDABE4FBB0E07033_METHOD_3_60C2031AD5DDAE7A_OFFSET UNITYSDK_OFFSET(0x9FA22B0)
#define CLASS_3_DDABE4FBB0E07033_METHOD_3_87237E6E439E39A4_OFFSET UNITYSDK_OFFSET(0x617C380)
#define CLASS_3_DDABE4FBB0E07033_METHOD_3_A211BC9F15CED8BB_OFFSET UNITYSDK_OFFSET(0x9F95750)
#define CLASS_3_DDABE4FBB0E07033_METHOD_3_BF9AE8817D31A47F_OFFSET UNITYSDK_OFFSET(0x1856AFD0)
#define CLASS_3_DDABE4FBB0E07033_METHOD_3_CC7841E04D5BC26D_OFFSET UNITYSDK_OFFSET(0x9FA22F0)
#define CLASS_3_DDABE4FBB0E07033_METHOD_3_DA3E5A55D0B0BC44_OFFSET UNITYSDK_OFFSET(0x1855C970)
#define CLASS_3_DDABE4FBB0E07033_METHOD_3_E45D1BE334B2DB94_1_OFFSET UNITYSDK_OFFSET(0x9FA22E0)
#define CLASS_3_DDABE4FBB0E07033_METHOD_3_E45D1BE334B2DB94_OFFSET UNITYSDK_OFFSET(0x9FA22C0)
#define CLASS_3_DDABE4FBB0E07033_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F9C100)
#define CLASS_3_DDABE4FBB0E07033__CTOR_OFFSET UNITYSDK_OFFSET(0x617AFE0)

inline static constexpr unsigned int Class_3_DDABE4FBB0E07033_TypeDefinitionIndex = 60509;

class Class_3_DDABE4FBB0E07033 : public ::Class_2_390F2A0D02A71B76<::UnityEngine::Rendering::Universal::VREffects*, ::MoleMole::Config::ConfigEntityVREffectsEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_236; // 0xA8
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_182; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_100; // 0xB8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_148; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_70; // 0xC8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_30; // 0xD0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_54; // 0xD8
	::UnityEngine::Texture* Field_3_217; // 0xE0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_126; // 0xE8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_24; // 0xF0
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_140; // 0xF8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_204; // 0x100
	::MoleMole::TwoValue_1<::System::Single>* Field_3_146; // 0x108
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_162; // 0x110
	::MoleMole::TwoValue_1<::System::Single>* Field_3_98; // 0x118
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_192; // 0x120
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_124; // 0x128
	::MoleMole::TwoValue_1<::System::Single>* Field_3_88; // 0x130
	::MoleMole::TwoValue_1<::System::Single>* Field_3_52; // 0x138
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_180; // 0x140
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_48; // 0x148
	::MoleMole::TwoValue_1<::UnityEngine::Vector3>* Field_3_232; // 0x150
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_144; // 0x158
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_178; // 0x160
	::MoleMole::TwoValue_1<::System::Single>* Field_3_16; // 0x168
	::MoleMole::TwoValue_1<::System::Single>* Field_3_68; // 0x170
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0x178
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_122; // 0x180
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod>* Field_3_94; // 0x188
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_34; // 0x190
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_242; // 0x198
	::MoleMole::TwoValue_1<::System::Single>* Field_3_240; // 0x1A0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_202; // 0x1A8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_214; // 0x1B0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_222; // 0x1B8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_56; // 0x1C0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_84; // 0x1C8
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_216; // 0x1D0
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod>* Field_3_142; // 0x1D8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_14; // 0x1E0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_132; // 0x1E8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_74; // 0x1F0
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_196; // 0x1F8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_112; // 0x200
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_200; // 0x208
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_0; // 0x210
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_186; // 0x218
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_218; // 0x220
	::UnityEngine::Texture* Field_3_219; // 0x228
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod>* Field_3_138; // 0x230
	::MoleMole::TwoValue_1<::System::Single>* Field_3_64; // 0x238
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_190; // 0x240
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::ScanType>* Field_3_26; // 0x248
	::MoleMole::TwoValue_1<::System::Single>* Field_3_44; // 0x250
	::MoleMole::TwoValue_1<::System::Single>* Field_3_66; // 0x258
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_174; // 0x260
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::ChannelMapping>* Field_3_36; // 0x268
	::MoleMole::TwoValue_1<::System::Single>* Field_3_210; // 0x270
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0x278
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_60; // 0x280
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_76; // 0x288
	::MoleMole::TwoValue_1<::System::Single>* Field_3_2; // 0x290
	::MoleMole::TwoValue_1<::System::Single>* Field_3_50; // 0x298
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_176; // 0x2A0
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_40; // 0x2A8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_28; // 0x2B0
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_118; // 0x2B8
	::UnityEngine::Texture* Field_3_195; // 0x2C0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_154; // 0x2C8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_130; // 0x2D0
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_198; // 0x2D8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_150; // 0x2E0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_128; // 0x2E8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_86; // 0x2F0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_168; // 0x2F8
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::ScanMaskType>* Field_3_32; // 0x300
	::MoleMole::TwoValue_1<::System::Single>* Field_3_170; // 0x308
	::MoleMole::TwoValue_1<::System::Single>* Field_3_134; // 0x310
	::MoleMole::TwoValue_1<::System::Single>* Field_3_10; // 0x318
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod>* Field_3_78; // 0x320
	::MoleMole::TwoValue_1<::System::Single>* Field_3_20; // 0x328
	::MoleMole::TwoValue_1<::System::Single>* Field_3_226; // 0x330
	::MoleMole::TwoValue_1<::System::Single>* Field_3_46; // 0x338
	::MoleMole::TwoValue_1<::System::Single>* Field_3_152; // 0x340
	::MoleMole::TwoValue_1<::System::Single>* Field_3_102; // 0x348
	::MoleMole::TwoValue_1<::System::Single>* Field_3_82; // 0x350
	::MoleMole::TwoValue_1<::System::Single>* Field_3_104; // 0x358
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_194; // 0x360
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_184; // 0x368
	::MoleMole::TwoValue_1<::System::Single>* Field_3_164; // 0x370
	::MoleMole::TwoValue_1<::System::Single>* Field_3_156; // 0x378
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_114; // 0x380
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_90; // 0x388
	::MoleMole::TwoValue_1<::System::Single>* Field_3_158; // 0x390
	::MoleMole::TwoValue_1<::System::Single>* Field_3_224; // 0x398
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_38; // 0x3A0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_72; // 0x3A8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_160; // 0x3B0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_206; // 0x3B8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_166; // 0x3C0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_230; // 0x3C8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_92; // 0x3D0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_80; // 0x3D8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_120; // 0x3E0
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod>* Field_3_110; // 0x3E8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_106; // 0x3F0
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_136; // 0x3F8
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_42; // 0x400
	::UnityEngine::Texture* Field_3_35; // 0x408
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_188; // 0x410
	::MoleMole::TwoValue_1<::System::Single>* Field_3_22; // 0x418
	::MoleMole::TwoValue_1<::System::Single>* Field_3_96; // 0x420
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_18; // 0x428
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::DistanceDistortionBlendMode>* Field_3_244; // 0x430
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_116; // 0x438
	::MoleMole::TwoValue_1<::System::Single>* Field_3_8; // 0x440
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_212; // 0x448
	::MoleMole::TwoValue_1<::System::Single>* Field_3_172; // 0x450
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod>* Field_3_62; // 0x458
	::MoleMole::TwoValue_1<::UnityEngine::Vector3>* Field_3_238; // 0x460
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_208; // 0x468
	::MoleMole::TwoValue_1<::System::Single>* Field_3_234; // 0x470
	::UnityEngine::Texture* Field_3_181; // 0x478
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_108; // 0x480
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_58; // 0x488
	::MoleMole::TwoValue_1<::System::Single>* Field_3_228; // 0x490
	::MoleMole::TwoValue_1<::System::Single>* Field_3_12; // 0x498
	::MoleMole::TwoValue_1<::System::Single>* Field_3_220; // 0x4A0
	::UnityEngine::Vector2 Field_3_119; // 0x4A8
	::UnityEngine::Color Field_3_151; // 0x4B0
	::System::Single Field_3_173; // 0x4C0
	::System::Single Field_3_13; // 0x4C4
	::UnityEngine::Color Field_3_59; // 0x4C8
	::UnityEngine::Color Field_3_109; // 0x4D8
	::System::Single Field_3_169; // 0x4E8
	::System::Single Field_3_147; // 0x4EC
	::System::Single Field_3_203; // 0x4F0
	::UnityEngine::Vector2 Field_3_209; // 0x4F4
	::UnityEngine::Vector2 Field_3_189; // 0x4FC
	::UnityEngine::Rendering::Universal::DistanceDistortionBlendMode Field_3_245; // 0x504
	::System::Single Field_3_241; // 0x508
	::System::Single Field_3_231; // 0x50C
	::UnityEngine::Color Field_3_121; // 0x510
	::System::Single Field_3_113; // 0x520
	::System::Single Field_3_11; // 0x524
	::System::Single Field_3_31; // 0x528
	::System::Single Field_3_65; // 0x52C
	::UnityEngine::Color Field_3_15; // 0x530
	::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod Field_3_79; // 0x540
	::System::Single Field_3_5; // 0x544
	::System::Single Field_3_153; // 0x548
	::UnityEngine::Vector2 Field_3_41; // 0x54C
	::System::Single Field_3_73; // 0x554
	::System::Single Field_3_81; // 0x558
	::System::Boolean Field_3_29; // 0x55C
	::System::Boolean Field_3_49; // 0x55D
	::System::Boolean Field_3_1; // 0x55E
	::System::Boolean Field_3_213; // 0x55F
	::UnityEngine::Vector2 Field_3_115; // 0x560
	::System::Single Field_3_3; // 0x568
	::UnityEngine::Color Field_3_137; // 0x56C
	::UnityEngine::Rendering::Universal::ScanType Field_3_27; // 0x57C
	::System::Single Field_3_23; // 0x580
	::UnityEngine::Color Field_3_107; // 0x584
	::System::Single Field_3_71; // 0x594
	::System::Single Field_3_127; // 0x598
	::System::Single Field_3_129; // 0x59C
	::System::Single Field_3_215; // 0x5A0
	::UnityEngine::Rendering::Universal::ScanMaskType Field_3_33; // 0x5A4
	::UnityEngine::Vector2 Field_3_43; // 0x5A8
	::System::Boolean Field_3_145; // 0x5B0
	::System::Boolean Field_3_193; // 0x5B1
	::System::Boolean Field_3_161; // 0x5B2
	::System::Boolean Field_3_179; // 0x5B3
	::System::Single Field_3_53; // 0x5B4
	::System::Single Field_3_101; // 0x5B8
	::UnityEngine::Color Field_3_93; // 0x5BC
	::UnityEngine::Color Field_3_243; // 0x5CC
	::UnityEngine::Vector2 Field_3_191; // 0x5DC
	::UnityEngine::Vector2 Field_3_183; // 0x5E4
	::UnityEngine::Color Field_3_61; // 0x5EC
	::System::Single Field_3_223; // 0x5FC
	::System::Single Field_3_159; // 0x600
	::System::Single Field_3_47; // 0x604
	::UnityEngine::Vector3 Field_3_239; // 0x608
	::UnityEngine::Vector3 Field_3_233; // 0x614
	::System::Single Field_3_21; // 0x620
	::System::Single Field_3_99; // 0x624
	::System::Single Field_3_105; // 0x628
	::System::Single Field_3_87; // 0x62C
	::UnityEngine::Color Field_3_141; // 0x630
	::System::Int32 Field_3_199; // 0x640
	::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod Field_3_139; // 0x644
	::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod Field_3_111; // 0x648
	::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod Field_3_143; // 0x64C
	::System::Single Field_3_25; // 0x650
	::System::Single Field_3_89; // 0x654
	::System::Single Field_3_135; // 0x658
	::UnityEngine::Color Field_3_201; // 0x65C
	::System::Single Field_3_171; // 0x66C
	::System::Single Field_3_235; // 0x670
	::System::Single Field_3_67; // 0x674
	::System::Single Field_3_229; // 0x678
	::UnityEngine::Rendering::Universal::ChannelMapping Field_3_37; // 0x67C
	::UnityEngine::Vector2 Field_3_187; // 0x680
	::System::Single Field_3_7; // 0x688
	::UnityEngine::Vector2 Field_3_185; // 0x68C
	::UnityEngine::Color Field_3_77; // 0x694
	::System::Single Field_3_69; // 0x6A4
	::System::Single Field_3_97; // 0x6A8
	::UnityEngine::Color Field_3_91; // 0x6AC
	::System::Single Field_3_57; // 0x6BC
	::System::Single Field_3_155; // 0x6C0
	::System::Single Field_3_205; // 0x6C4
	::UnityEngine::Vector2 Field_3_39; // 0x6C8
	::System::Single Field_3_225; // 0x6D0
	::System::Single Field_3_9; // 0x6D4
	::UnityEngine::Vector2 Field_3_123; // 0x6D8
	::System::Single Field_3_237; // 0x6E0
	::UnityEngine::Color Field_3_19; // 0x6E4
	::System::Single Field_3_165; // 0x6F4
	::System::Single Field_3_83; // 0x6F8
	::System::Single Field_3_55; // 0x6FC
	::UnityEngine::Vector2 Field_3_197; // 0x700
	::System::Single Field_3_157; // 0x708
	::System::Single Field_3_221; // 0x70C
	::UnityEngine::Color Field_3_75; // 0x710
	::System::Single Field_3_131; // 0x720
	::System::Single Field_3_167; // 0x724
	::System::Single Field_3_85; // 0x728
	::System::Boolean Field_3_177; // 0x72C
	::System::Boolean Field_3_133; // 0x72D
	::System::Boolean Field_3_163; // 0x72E
	::System::Boolean Field_3_149; // 0x72F
	::UnityEngine::Color Field_3_125; // 0x730
	::System::Single Field_3_207; // 0x740
	::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod Field_3_95; // 0x744
	::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod Field_3_63; // 0x748
	::System::Single Field_3_227; // 0x74C
	::System::Single Field_3_211; // 0x750
	::System::Single Field_3_17; // 0x754
	::System::Single Field_3_103; // 0x758
	::System::Single Field_3_51; // 0x75C
	::UnityEngine::Color Field_3_117; // 0x760
	::UnityEngine::Color Field_3_175; // 0x770
	::System::Single Field_3_45; // 0x780

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityVREffectsEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482_1* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityVREffectsEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_DDABE4FBB0E07033__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
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

	::System::Void Method_3_17D5A5D3C63B90F7(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::VREffects* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::VREffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DDABE4FBB0E07033_METHOD_3_17D5A5D3C63B90F7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_60C2031AD5DDAE7A(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::VREffects* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::VREffects*))((::PBYTE)hIl2Cpp + CLASS_3_DDABE4FBB0E07033_METHOD_3_60C2031AD5DDAE7A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_E45D1BE334B2DB94(::UnityEngine::Rendering::Universal::VREffects* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::VREffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DDABE4FBB0E07033_METHOD_3_E45D1BE334B2DB94_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_60C2031AD5DDAE7A_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::VREffects* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::VREffects*))((::PBYTE)hIl2Cpp + CLASS_3_DDABE4FBB0E07033_METHOD_3_60C2031AD5DDAE7A_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_E45D1BE334B2DB94_1(::UnityEngine::Rendering::Universal::VREffects* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::VREffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DDABE4FBB0E07033_METHOD_3_E45D1BE334B2DB94_1_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_CC7841E04D5BC26D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DDABE4FBB0E07033_METHOD_3_CC7841E04D5BC26D_OFFSET))(this);
	}
};
