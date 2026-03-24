#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0208C58D3AAD2AB6.h"
#include "unitysdk/Class_4_CE10D09BD1801DE0_15_Struct_2_52AD02145F5FCE36_29.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/OtherLightShadowResolution.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SimulatingPlatform.h"

namespace MoleMole::Timeline { class LightingBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class Lighting; }

#define CLASS_4_CE10D09BD1801DE0_15_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xA8DFE90)
#define CLASS_4_CE10D09BD1801DE0_15_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xA8DFE80)
#define CLASS_4_CE10D09BD1801DE0_15_METHOD_4_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0xA8DABC0)
#define CLASS_4_CE10D09BD1801DE0_15_METHOD_4_A074CB615A9C54E1_OFFSET UNITYSDK_OFFSET(0xA8DB620)
#define CLASS_4_CE10D09BD1801DE0_15_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xA8DFE70)
#define CLASS_4_CE10D09BD1801DE0_15_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xA8DB1A0)
#define CLASS_4_CE10D09BD1801DE0_15_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xA8DE4B0)
#define CLASS_4_CE10D09BD1801DE0_15__CTOR_OFFSET UNITYSDK_OFFSET(0xA8DFDD0)

inline static constexpr unsigned int Class_4_CE10D09BD1801DE0_15_TypeDefinitionIndex = 67246;

class Class_4_CE10D09BD1801DE0_15 : public ::Class_3_0208C58D3AAD2AB6<::UnityEngine::Rendering::Universal::Lighting*, ::MoleMole::Timeline::LightingBehaviour*>
{
public:
	::System::Single Field_4_14; // 0x38
	::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution Field_4_20; // 0x3C
	::System::Single Field_4_4; // 0x40
	::UnityEngine::Rendering::Universal::SimulatingPlatform Field_4_50; // 0x44
	::System::Boolean Field_4_58; // 0x48
	::System::Boolean Field_4_42; // 0x49
	::System::Boolean Field_4_34; // 0x4A
	::System::Boolean Field_4_60; // 0x4B
	::System::Single Field_4_2; // 0x4C
	::System::Single Field_4_10; // 0x50
	::System::Boolean Field_4_25; // 0x54
	::System::Boolean Field_4_64; // 0x55
	::System::Boolean Field_4_29; // 0x56
	::System::Boolean Field_4_21; // 0x57
	::System::Single Field_4_22; // 0x58
	::Class_4_CE10D09BD1801DE0_15_Struct_2_52AD02145F5FCE36_29 Field_4_0; // 0x5C
	::System::Single Field_4_6; // 0x114
	::System::Single Field_4_30; // 0x118
	::System::Boolean Field_4_26; // 0x11C
	::System::Boolean Field_4_57; // 0x11D
	::System::Boolean Field_4_9; // 0x11E
	::System::Boolean Field_4_19; // 0x11F
	::System::Single Field_4_18; // 0x120
	::System::Boolean Field_4_59; // 0x124
	::System::Boolean Field_4_17; // 0x125
	::System::Boolean Field_4_7; // 0x126
	::System::Boolean Field_4_47; // 0x127
	::System::Single Field_4_38; // 0x128
	::System::Boolean Field_4_63; // 0x12C
	::System::Boolean Field_4_27; // 0x12D
	::System::Boolean Field_4_55; // 0x12E
	::System::Boolean Field_4_23; // 0x12F
	::System::Single Field_4_40; // 0x130
	::System::Boolean Field_4_61; // 0x134
	::System::Boolean Field_4_24; // 0x135
	::System::Boolean Field_4_3; // 0x136
	::System::Boolean Field_4_52; // 0x137
	::System::Int32 Field_4_12; // 0x138
	::System::Single Field_4_62; // 0x13C
	::System::Boolean Field_4_43; // 0x140
	::System::Boolean Field_4_49; // 0x141
	::System::Boolean Field_4_48; // 0x142
	::System::Single Field_4_8; // 0x144
	::System::Int32 Field_4_46; // 0x148
	::System::Boolean Field_4_53; // 0x14C
	::System::Boolean Field_4_33; // 0x14D
	::System::Boolean Field_4_51; // 0x14E
	::System::Boolean Field_4_15; // 0x14F
	::System::Single Field_4_28; // 0x150
	::System::Boolean Field_4_1; // 0x154
	::System::Boolean Field_4_37; // 0x155
	::System::Boolean Field_4_11; // 0x156
	::System::Boolean Field_4_31; // 0x157
	::System::Boolean Field_4_54; // 0x158
	::System::Boolean Field_4_45; // 0x159
	::System::Single Field_4_16; // 0x15C
	::System::Boolean Field_4_35; // 0x160
	::System::Boolean Field_4_36; // 0x161
	::System::Boolean Field_4_39; // 0x162
	::System::Boolean Field_4_13; // 0x163
	::System::Boolean Field_4_41; // 0x164
	::System::Boolean Field_4_32; // 0x165
	::System::Boolean Field_4_44; // 0x166
	::System::Boolean Field_4_5; // 0x167
	::System::Single Field_4_56; // 0x168

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_15__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9D8CB5E47C1952BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_15_METHOD_4_9D8CB5E47C1952BD_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_15_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_15_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_15_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_15_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_15_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_A074CB615A9C54E1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_15_METHOD_4_A074CB615A9C54E1_OFFSET))(this, a1);
	}
};
