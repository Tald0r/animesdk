#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_20577CF7FC6B1263.h"
#include "unitysdk/Class_4_CE10D09BD1801DE0_7_Struct_2_52AD02145F5FCE36_16.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/OtherLightShadowResolution.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SimulatingPlatform.h"

namespace MoleMole::Timeline { class LightingBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class Lighting; }

#define CLASS_4_CE10D09BD1801DE0_7_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x7AADC90)
#define CLASS_4_CE10D09BD1801DE0_7_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x7AADC80)
#define CLASS_4_CE10D09BD1801DE0_7_METHOD_4_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0x7AA96E0)
#define CLASS_4_CE10D09BD1801DE0_7_METHOD_4_A074CB615A9C54E1_OFFSET UNITYSDK_OFFSET(0x7AA9FA0)
#define CLASS_4_CE10D09BD1801DE0_7_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x7AADC70)
#define CLASS_4_CE10D09BD1801DE0_7_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x7AA9BD0)
#define CLASS_4_CE10D09BD1801DE0_7_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x7AAC650)
#define CLASS_4_CE10D09BD1801DE0_7__CTOR_OFFSET UNITYSDK_OFFSET(0x7AADBD0)

inline static constexpr unsigned int Class_4_CE10D09BD1801DE0_7_TypeDefinitionIndex = 50574;

class Class_4_CE10D09BD1801DE0_7 : public ::Class_3_20577CF7FC6B1263<::UnityEngine::Rendering::Universal::Lighting*, ::MoleMole::Timeline::LightingBehaviour*>
{
public:
	::System::Single Field_4_14; // 0x38
	::System::Boolean Field_4_19; // 0x3C
	::System::Boolean Field_4_27; // 0x3D
	::System::Boolean Field_4_29; // 0x3E
	::System::Boolean Field_4_11; // 0x3F
	::Class_4_CE10D09BD1801DE0_7_Struct_2_52AD02145F5FCE36_16 Field_4_0; // 0x40
	::System::Int32 Field_4_46; // 0xE4
	::System::Single Field_4_10; // 0xE8
	::System::Boolean Field_4_3; // 0xEC
	::System::Boolean Field_4_31; // 0xED
	::System::Boolean Field_4_32; // 0xEE
	::System::Boolean Field_4_35; // 0xEF
	::System::Single Field_4_16; // 0xF0
	::System::Boolean Field_4_54; // 0xF4
	::System::Boolean Field_4_7; // 0xF5
	::System::Boolean Field_4_39; // 0xF6
	::System::Boolean Field_4_44; // 0xF7
	::System::Single Field_4_22; // 0xF8
	::System::Boolean Field_4_41; // 0xFC
	::System::Boolean Field_4_17; // 0xFD
	::System::Boolean Field_4_49; // 0xFE
	::System::Boolean Field_4_9; // 0xFF
	::System::Single Field_4_8; // 0x100
	::System::Boolean Field_4_34; // 0x104
	::System::Boolean Field_4_24; // 0x105
	::System::Boolean Field_4_53; // 0x106
	::UnityEngine::Rendering::Universal::SimulatingPlatform Field_4_50; // 0x108
	::System::Boolean Field_4_1; // 0x10C
	::System::Boolean Field_4_48; // 0x10D
	::System::Boolean Field_4_47; // 0x10E
	::System::Boolean Field_4_5; // 0x10F
	::System::Boolean Field_4_36; // 0x110
	::System::Boolean Field_4_25; // 0x111
	::System::Boolean Field_4_23; // 0x112
	::System::Boolean Field_4_33; // 0x113
	::System::Single Field_4_2; // 0x114
	::System::Int32 Field_4_12; // 0x118
	::System::Boolean Field_4_37; // 0x11C
	::System::Boolean Field_4_26; // 0x11D
	::System::Boolean Field_4_45; // 0x11E
	::System::Boolean Field_4_52; // 0x11F
	::System::Single Field_4_4; // 0x120
	::System::Single Field_4_6; // 0x124
	::System::Boolean Field_4_15; // 0x128
	::System::Boolean Field_4_42; // 0x129
	::System::Boolean Field_4_21; // 0x12A
	::System::Boolean Field_4_51; // 0x12B
	::System::Single Field_4_38; // 0x12C
	::System::Boolean Field_4_13; // 0x130
	::System::Boolean Field_4_43; // 0x131
	::System::Single Field_4_28; // 0x134
	::System::Single Field_4_30; // 0x138
	::System::Single Field_4_18; // 0x13C
	::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution Field_4_20; // 0x140
	::System::Single Field_4_40; // 0x144

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_7__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9D8CB5E47C1952BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_7_METHOD_4_9D8CB5E47C1952BD_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_7_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_7_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_A074CB615A9C54E1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_7_METHOD_4_A074CB615A9C54E1_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_7_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_7_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_7_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};
