#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_20577CF7FC6B1263.h"
#include "unitysdk/Class_4_CE10D09BD1801DE0_2_Struct_2_52AD02145F5FCE3A_6.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NapBloomQuality.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/BloomResolution.h"
#include "unitysdk/UnityEngine/Rendering/Universal/HQBloomMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/PP_Quality.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Timeline { class NAPBloomBehaviour; }
namespace System { class Object; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class FlareProfile_NativeSRP; }
namespace UnityEngine::Rendering::Universal { class NapBloom; }

#define CLASS_4_CE10D09BD1801DE0_2_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x91F8EC0)
#define CLASS_4_CE10D09BD1801DE0_2_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x91F8EE0)
#define CLASS_4_CE10D09BD1801DE0_2_METHOD_4_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0x91F0970)
#define CLASS_4_CE10D09BD1801DE0_2_METHOD_4_A074CB615A9C54E1_OFFSET UNITYSDK_OFFSET(0x91F1B80)
#define CLASS_4_CE10D09BD1801DE0_2_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x91F8ED0)
#define CLASS_4_CE10D09BD1801DE0_2_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x91F1380)
#define CLASS_4_CE10D09BD1801DE0_2_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x91F6220)
#define CLASS_4_CE10D09BD1801DE0_2__CTOR_OFFSET UNITYSDK_OFFSET(0x91F8D80)

inline static constexpr unsigned int Class_4_CE10D09BD1801DE0_2_TypeDefinitionIndex = 41396;

class Class_4_CE10D09BD1801DE0_2 : public ::Class_3_20577CF7FC6B1263<::UnityEngine::Rendering::Universal::NapBloom*, ::MoleMole::Timeline::NAPBloomBehaviour*>
{
public:
	::Class_4_CE10D09BD1801DE0_2_Struct_2_52AD02145F5FCE3A_6 Field_4_0; // 0x38
	::UnityEngine::NAPRenderPipeline0::FlareProfile_NativeSRP* Field_4_112; // 0x210
	::UnityEngine::Texture* Field_4_90; // 0x218
	::System::Single Field_4_12; // 0x220
	::System::Boolean Field_4_99; // 0x224
	::System::Boolean Field_4_11; // 0x225
	::System::Boolean Field_4_43; // 0x226
	::System::Boolean Field_4_37; // 0x227
	::System::Single Field_4_24; // 0x228
	::System::Single Field_4_50; // 0x22C
	::System::Single Field_4_100; // 0x230
	::UnityEngine::Vector4 Field_4_86; // 0x234
	::System::Single Field_4_40; // 0x244
	::System::Int32 Field_4_88; // 0x248
	::System::Int32 Field_4_110; // 0x24C
	::UnityEngine::NAPRenderPipeline0::NapBloomQuality Field_4_84; // 0x250
	::UnityEngine::Rendering::Universal::HQBloomMode Field_4_2; // 0x254
	::System::Single Field_4_108; // 0x258
	::System::Boolean Field_4_9; // 0x25C
	::System::Boolean Field_4_73; // 0x25D
	::System::Boolean Field_4_29; // 0x25E
	::System::Boolean Field_4_107; // 0x25F
	::System::Single Field_4_18; // 0x260
	::UnityEngine::Vector4 Field_4_74; // 0x264
	::System::Boolean Field_4_55; // 0x274
	::System::Boolean Field_4_77; // 0x275
	::System::Boolean Field_4_21; // 0x276
	::System::Boolean Field_4_19; // 0x277
	::System::Single Field_4_10; // 0x278
	::System::Single Field_4_70; // 0x27C
	::System::Single Field_4_78; // 0x280
	::System::Single Field_4_80; // 0x284
	::System::Single Field_4_52; // 0x288
	::UnityEngine::Color Field_4_54; // 0x28C
	::System::Single Field_4_26; // 0x29C
	::System::Single Field_4_36; // 0x2A0
	::System::Single Field_4_48; // 0x2A4
	::System::Single Field_4_34; // 0x2A8
	::System::Single Field_4_8; // 0x2AC
	::System::Boolean Field_4_64; // 0x2B0
	::System::Boolean Field_4_93; // 0x2B1
	::System::Boolean Field_4_71; // 0x2B2
	::System::Boolean Field_4_51; // 0x2B3
	::System::Single Field_4_46; // 0x2B4
	::System::Single Field_4_6; // 0x2B8
	::System::Single Field_4_60; // 0x2BC
	::System::Boolean Field_4_13; // 0x2C0
	::System::Boolean Field_4_7; // 0x2C1
	::System::Boolean Field_4_17; // 0x2C2
	::System::Boolean Field_4_75; // 0x2C3
	::System::Boolean Field_4_15; // 0x2C4
	::System::Boolean Field_4_35; // 0x2C5
	::System::Boolean Field_4_95; // 0x2C6
	::System::Boolean Field_4_31; // 0x2C7
	::System::Boolean Field_4_41; // 0x2C8
	::System::Boolean Field_4_33; // 0x2C9
	::System::Boolean Field_4_85; // 0x2CA
	::System::Boolean Field_4_94; // 0x2CB
	::System::Boolean Field_4_87; // 0x2CC
	::System::Boolean Field_4_39; // 0x2CD
	::System::Boolean Field_4_103; // 0x2CE
	::System::Boolean Field_4_5; // 0x2CF
	::System::Boolean Field_4_65; // 0x2D0
	::System::Boolean Field_4_67; // 0x2D1
	::System::Boolean Field_4_97; // 0x2D2
	::System::Boolean Field_4_3; // 0x2D3
	::System::Boolean Field_4_69; // 0x2D4
	::System::Boolean Field_4_113; // 0x2D5
	::System::Boolean Field_4_105; // 0x2D6
	::System::Boolean Field_4_58; // 0x2D7
	::System::Single Field_4_30; // 0x2D8
	::System::Single Field_4_98; // 0x2DC
	::System::Single Field_4_22; // 0x2E0
	::System::Boolean Field_4_47; // 0x2E4
	::System::Boolean Field_4_61; // 0x2E5
	::System::Boolean Field_4_62; // 0x2E6
	::System::Boolean Field_4_83; // 0x2E7
	::System::Single Field_4_102; // 0x2E8
	::System::Boolean Field_4_79; // 0x2EC
	::System::Boolean Field_4_63; // 0x2ED
	::System::Boolean Field_4_25; // 0x2EE
	::System::Boolean Field_4_101; // 0x2EF
	::System::Single Field_4_76; // 0x2F0
	::System::Single Field_4_44; // 0x2F4
	::System::Single Field_4_32; // 0x2F8
	::System::Single Field_4_28; // 0x2FC
	::System::Single Field_4_72; // 0x300
	::System::Boolean Field_4_57; // 0x304
	::System::Boolean Field_4_23; // 0x305
	::System::Boolean Field_4_109; // 0x306
	::System::Boolean Field_4_53; // 0x307
	::System::Int32 Field_4_82; // 0x308
	::System::Single Field_4_14; // 0x30C
	::System::Single Field_4_42; // 0x310
	::System::Boolean Field_4_111; // 0x314
	::System::Boolean Field_4_114; // 0x315
	::System::Boolean Field_4_89; // 0x316
	::System::Single Field_4_38; // 0x318
	::System::Boolean Field_4_1; // 0x31C
	::System::Boolean Field_4_49; // 0x31D
	::System::Boolean Field_4_81; // 0x31E
	::System::Boolean Field_4_59; // 0x31F
	::UnityEngine::Rendering::Universal::BloomResolution Field_4_56; // 0x320
	::System::Boolean Field_4_45; // 0x324
	::System::Boolean Field_4_27; // 0x325
	::System::Boolean Field_4_91; // 0x326
	::System::Boolean Field_4_96; // 0x327
	::System::Single Field_4_20; // 0x328
	::System::Single Field_4_106; // 0x32C
	::System::Single Field_4_16; // 0x330
	::System::Single Field_4_92; // 0x334
	::UnityEngine::Rendering::Universal::PP_Quality Field_4_4; // 0x338
	::System::Single Field_4_66; // 0x33C
	::System::Single Field_4_68; // 0x340
	::System::Single Field_4_104; // 0x344

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9D8CB5E47C1952BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_2_METHOD_4_9D8CB5E47C1952BD_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_2_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_2_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_A074CB615A9C54E1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_2_METHOD_4_A074CB615A9C54E1_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_2_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_2_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_2_METHOD_4_832295EC279E5994_OFFSET))(this);
	}
};
