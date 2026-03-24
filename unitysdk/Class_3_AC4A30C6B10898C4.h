#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_390F2A0D02A71B76.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/BlendModes.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ChannelMapping.h"
#include "unitysdk/UnityEngine/Rendering/Universal/UvModes.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_8A50BFB20D9D2482_1;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityScreenEffect; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class ScreenEffects; }

#define CLASS_3_AC4A30C6B10898C4_METHOD_3_1966BC60ACBE9F6A_OFFSET UNITYSDK_OFFSET(0x14F14310)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_1C3FD49C832AD361_1_OFFSET UNITYSDK_OFFSET(0x7FC01A0)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_1C3FD49C832AD361_OFFSET UNITYSDK_OFFSET(0x7FC0100)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_2EA24B012C3B3D08_OFFSET UNITYSDK_OFFSET(0x14F07260)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_57BE99FF6B5F2421_1_OFFSET UNITYSDK_OFFSET(0x7FC00F0)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_57BE99FF6B5F2421_2_OFFSET UNITYSDK_OFFSET(0x7FC0110)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_57BE99FF6B5F2421_OFFSET UNITYSDK_OFFSET(0x7FC00E0)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_634E6F4303080601_OFFSET UNITYSDK_OFFSET(0x14F1DC00)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_767682FBD9C06413_OFFSET UNITYSDK_OFFSET(0x14F353B0)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_86D67B570EA3C031_OFFSET UNITYSDK_OFFSET(0x14F2B160)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_8DDE6AF74C73E11E_OFFSET UNITYSDK_OFFSET(0x7FC01F0)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_A29F39D6EDFF36F8_OFFSET UNITYSDK_OFFSET(0x7FC0120)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_A3C11DAABEADB6D8_OFFSET UNITYSDK_OFFSET(0x7FBFD40)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_BF115F5687BF7F78_OFFSET UNITYSDK_OFFSET(0x7FB6F40)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_CC7841E04D5BC26D_OFFSET UNITYSDK_OFFSET(0x7FC01B0)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_D0B68C1DD4B91F49_OFFSET UNITYSDK_OFFSET(0x7FBFDD0)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_EAA3CD3AB6192364_OFFSET UNITYSDK_OFFSET(0x7FC0070)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_F788DB431F3F0579_OFFSET UNITYSDK_OFFSET(0x7FBFF60)
#define CLASS_3_AC4A30C6B10898C4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7FBB950)
#define CLASS_3_AC4A30C6B10898C4__CTOR_OFFSET UNITYSDK_OFFSET(0x14F06430)

inline static constexpr unsigned int Class_3_AC4A30C6B10898C4_TypeDefinitionIndex = 72276;

class Class_3_AC4A30C6B10898C4 : public ::Class_2_390F2A0D02A71B76<::UnityEngine::Rendering::Universal::ScreenEffects*, ::MoleMole::Config::ConfigEntityScreenEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_160; // 0xA8
	::UnityEngine::Texture* Field_3_49; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_126; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_136; // 0xC0
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_18; // 0xC8
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_106; // 0xD0
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_130; // 0xD8
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_46; // 0xE0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_148; // 0xE8
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::UvModes>* Field_3_20; // 0xF0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_156; // 0xF8
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_36; // 0x100
	::MoleMole::TwoValue_1<::System::Single>* Field_3_144; // 0x108
	::MoleMole::TwoValue_1<::System::Single>* Field_3_34; // 0x110
	::MoleMole::TwoValue_1<::System::Single>* Field_3_56; // 0x118
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_96; // 0x120
	::MoleMole::TwoValue_1<::System::Single>* Field_3_132; // 0x128
	::MoleMole::TwoValue_1<::System::Single>* Field_3_82; // 0x130
	::MoleMole::TwoValue_1<::System::Single>* Field_3_92; // 0x138
	::UnityEngine::Texture* Field_3_19; // 0x140
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::UvModes>* Field_3_6; // 0x148
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_146; // 0x150
	::MoleMole::TwoValue_1<::System::Single>* Field_3_152; // 0x158
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_0; // 0x160
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_90; // 0x168
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_94; // 0x170
	::MoleMole::TwoValue_1<::System::Single>* Field_3_124; // 0x178
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_22; // 0x180
	::UnityEngine::Texture* Field_3_65; // 0x188
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::BlendModes>* Field_3_2; // 0x190
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_122; // 0x198
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_154; // 0x1A0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_80; // 0x1A8
	::UnityEngine::Texture* Field_3_105; // 0x1B0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_158; // 0x1B8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_118; // 0x1C0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_12; // 0x1C8
	::MoleMole::Battle::Entity* Field_3_174; // 0x1D0
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_48; // 0x1D8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_140; // 0x1E0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_60; // 0x1E8
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::ChannelMapping>* Field_3_28; // 0x1F0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_112; // 0x1F8
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::UvModes>* Field_3_40; // 0x200
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_72; // 0x208
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_170; // 0x210
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_138; // 0x218
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_116; // 0x220
	::MoleMole::TwoValue_1<::System::Single>* Field_3_76; // 0x228
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_104; // 0x230
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::UvModes>* Field_3_50; // 0x238
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_84; // 0x240
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_68; // 0x248
	::MoleMole::TwoValue_1<::System::Single>* Field_3_78; // 0x250
	::MoleMole::TwoValue_1<::System::Single>* Field_3_142; // 0x258
	::MoleMole::TwoValue_1<::System::Single>* Field_3_168; // 0x260
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_58; // 0x268
	::MoleMole::TwoValue_1<::System::Single>* Field_3_150; // 0x270
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_74; // 0x278
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_38; // 0x280
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_102; // 0x288
	::MoleMole::TwoValue_1<::System::Single>* Field_3_8; // 0x290
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::ChannelMapping>* Field_3_70; // 0x298
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_32; // 0x2A0
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_86; // 0x2A8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_16; // 0x2B0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_114; // 0x2B8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_134; // 0x2C0
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::ChannelMapping>* Field_3_54; // 0x2C8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0x2D0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_100; // 0x2D8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_164; // 0x2E0
	::UnityEngine::Texture* Field_3_39; // 0x2E8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_62; // 0x2F0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_10; // 0x2F8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_24; // 0x300
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_30; // 0x308
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_52; // 0x310
	::UnityEngine::Texture* Field_3_87; // 0x318
	::MoleMole::TwoValue_1<::UnityEngine::Vector3>* Field_3_120; // 0x320
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::ChannelMapping>* Field_3_44; // 0x328
	::MoleMole::TwoValue_1<::System::Single>* Field_3_14; // 0x330
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::UvModes>* Field_3_88; // 0x338
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_108; // 0x340
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::ChannelMapping>* Field_3_26; // 0x348
	::MoleMole::TwoValue_1<::System::Single>* Field_3_172; // 0x350
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_42; // 0x358
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::UvModes>* Field_3_66; // 0x360
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_64; // 0x368
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_162; // 0x370
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_166; // 0x378
	::MoleMole::TwoValue_1<::System::Single>* Field_3_110; // 0x380
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_98; // 0x388
	::MoleMole::TwoValue_1<::System::Single>* Field_3_128; // 0x390
	::UnityEngine::Color Field_3_31; // 0x398
	::System::Single Field_3_153; // 0x3A8
	::UnityEngine::Rendering::Universal::BlendModes Field_3_3; // 0x3AC
	::System::Single Field_3_111; // 0x3B0
	::System::Single Field_3_77; // 0x3B4
	::System::Single Field_3_57; // 0x3B8
	::System::Int32 Field_3_103; // 0x3BC
	::System::Single Field_3_129; // 0x3C0
	::UnityEngine::Rendering::Universal::UvModes Field_3_89; // 0x3C4
	::UnityEngine::Rendering::Universal::ChannelMapping Field_3_29; // 0x3C8
	::UnityEngine::Vector2 Field_3_47; // 0x3CC
	::System::Single Field_3_125; // 0x3D4
	::UnityEngine::Vector2 Field_3_95; // 0x3D8
	::System::Single Field_3_173; // 0x3E0
	::System::Single Field_3_15; // 0x3E4
	::UnityEngine::Vector2 Field_3_107; // 0x3E8
	::UnityEngine::Vector4 Field_3_43; // 0x3F0
	::UnityEngine::Rendering::Universal::UvModes Field_3_7; // 0x400
	::UnityEngine::Color Field_3_163; // 0x404
	::System::Single Field_3_11; // 0x414
	::UnityEngine::Rendering::Universal::UvModes Field_3_67; // 0x418
	::System::Single Field_3_5; // 0x41C
	::UnityEngine::Vector4 Field_3_23; // 0x420
	::System::Single Field_3_169; // 0x430
	::System::Single Field_3_149; // 0x434
	::UnityEngine::Vector4 Field_3_53; // 0x438
	::UnityEngine::Vector3 Field_3_121; // 0x448
	::System::Single Field_3_13; // 0x454
	::System::Single Field_3_93; // 0x458
	::System::Single Field_3_9; // 0x45C
	::UnityEngine::Rendering::Universal::ChannelMapping Field_3_55; // 0x460
	::System::Single Field_3_79; // 0x464
	::UnityEngine::Color Field_3_139; // 0x468
	::System::Single Field_3_159; // 0x478
	::System::Single Field_3_143; // 0x47C
	::UnityEngine::Color Field_3_165; // 0x480
	::UnityEngine::Rendering::Universal::UvModes Field_3_21; // 0x490
	::System::Single Field_3_157; // 0x494
	::UnityEngine::Color Field_3_147; // 0x498
	::System::Single Field_3_83; // 0x4A8
	::System::Single Field_3_161; // 0x4AC
	::UnityEngine::Rendering::Universal::UvModes Field_3_41; // 0x4B0
	::System::Single Field_3_141; // 0x4B4
	::System::Boolean Field_3_85; // 0x4B8
	::System::Boolean Field_3_117; // 0x4B9
	::UnityEngine::Vector2 Field_3_37; // 0x4BC
	::UnityEngine::Rendering::Universal::UvModes Field_3_51; // 0x4C4
	::UnityEngine::Rendering::Universal::ChannelMapping Field_3_45; // 0x4C8
	::System::Single Field_3_35; // 0x4CC
	::System::Boolean Field_3_115; // 0x4D0
	::System::Boolean Field_3_61; // 0x4D1
	::System::Boolean Field_3_175; // 0x4D2
	::System::Boolean Field_3_171; // 0x4D3
	::UnityEngine::Rendering::Universal::ChannelMapping Field_3_27; // 0x4D4
	::UnityEngine::Color Field_3_33; // 0x4D8
	::System::Boolean Field_3_99; // 0x4E8
	::System::Boolean Field_3_1; // 0x4E9
	::System::Boolean Field_3_75; // 0x4EA
	::System::Single Field_3_127; // 0x4EC
	::System::Single Field_3_135; // 0x4F0
	::UnityEngine::Vector4 Field_3_69; // 0x4F4
	::UnityEngine::Color Field_3_131; // 0x504
	::System::Single Field_3_133; // 0x514
	::System::Single Field_3_151; // 0x518
	::UnityEngine::Vector4 Field_3_91; // 0x51C
	::System::Single Field_3_113; // 0x52C
	::System::Single Field_3_81; // 0x530
	::System::Int32 Field_3_123; // 0x534
	::System::Single Field_3_137; // 0x538
	::System::Boolean Field_3_119; // 0x53C
	::System::Boolean Field_3_25; // 0x53D
	::System::Boolean Field_3_97; // 0x53E
	::System::Boolean Field_3_176; // 0x53F
	::UnityEngine::Color Field_3_155; // 0x540
	::UnityEngine::Vector2 Field_3_109; // 0x550
	::UnityEngine::Vector2 Field_3_73; // 0x558
	::UnityEngine::Rendering::Universal::ChannelMapping Field_3_71; // 0x560
	::System::Boolean Field_3_63; // 0x564
	::System::Boolean Field_3_101; // 0x565
	::System::Boolean Field_3_17; // 0x566
	::System::Boolean Field_3_167; // 0x567
	::System::Single Field_3_145; // 0x568
	::UnityEngine::Vector2 Field_3_59; // 0x56C

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityScreenEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482_1* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityScreenEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482_1*))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_2EA24B012C3B3D08(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenEffects* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenEffects*))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_2EA24B012C3B3D08_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1966BC60ACBE9F6A(::UnityEngine::Rendering::Universal::ScreenEffects* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScreenEffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_1966BC60ACBE9F6A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_634E6F4303080601(::UnityEngine::Rendering::Universal::ScreenEffects* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScreenEffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_634E6F4303080601_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_86D67B570EA3C031(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenEffects* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenEffects*))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_86D67B570EA3C031_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_767682FBD9C06413(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenEffects* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenEffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_767682FBD9C06413_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_BF115F5687BF7F78(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenEffects* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenEffects*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_BF115F5687BF7F78_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_3_A3C11DAABEADB6D8(::UnityEngine::Rendering::Universal::ScreenEffects* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScreenEffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_A3C11DAABEADB6D8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F788DB431F3F0579(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_F788DB431F3F0579_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::MoleMole::Battle::Entity* Method_3_EAA3CD3AB6192364()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_EAA3CD3AB6192364_OFFSET))(this);
	}

	::System::Void Method_3_57BE99FF6B5F2421(::UnityEngine::Rendering::Universal::ScreenEffects* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScreenEffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_57BE99FF6B5F2421_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_57BE99FF6B5F2421_1(::UnityEngine::Rendering::Universal::ScreenEffects* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScreenEffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_57BE99FF6B5F2421_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1C3FD49C832AD361(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenEffects* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenEffects*))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_1C3FD49C832AD361_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_57BE99FF6B5F2421_2(::UnityEngine::Rendering::Universal::ScreenEffects* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScreenEffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_57BE99FF6B5F2421_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A29F39D6EDFF36F8(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_A29F39D6EDFF36F8_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_3_D0B68C1DD4B91F49(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_D0B68C1DD4B91F49_OFFSET))(this, a1);
	}

	::System::Void Method_3_1C3FD49C832AD361_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenEffects* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenEffects*))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_1C3FD49C832AD361_1_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_CC7841E04D5BC26D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_CC7841E04D5BC26D_OFFSET))(this);
	}

	::System::Void Method_3_8DDE6AF74C73E11E(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenEffects* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenEffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_8DDE6AF74C73E11E_OFFSET))(this, a1, a2, a3);
	}
};
