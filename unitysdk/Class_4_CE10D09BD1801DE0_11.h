#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_20577CF7FC6B1263.h"
#include "unitysdk/Class_4_CE10D09BD1801DE0_11_Struct_2_52AD02145F5FCE3A_12.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Timeline { class GlitchBehaviour; }
namespace System { class Object; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class Glitch; }

#define CLASS_4_CE10D09BD1801DE0_11_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x9220700)
#define CLASS_4_CE10D09BD1801DE0_11_METHOD_4_3E06E2491B129B22_OFFSET UNITYSDK_OFFSET(0x921B900)
#define CLASS_4_CE10D09BD1801DE0_11_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x9220720)
#define CLASS_4_CE10D09BD1801DE0_11_METHOD_4_8562A2A1E4593432_OFFSET UNITYSDK_OFFSET(0x921C4F0)
#define CLASS_4_CE10D09BD1801DE0_11_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x9220710)
#define CLASS_4_CE10D09BD1801DE0_11_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x921C080)
#define CLASS_4_CE10D09BD1801DE0_11_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x921ECF0)
#define CLASS_4_CE10D09BD1801DE0_11__CTOR_OFFSET UNITYSDK_OFFSET(0x9220680)

inline static constexpr unsigned int Class_4_CE10D09BD1801DE0_11_TypeDefinitionIndex = 55181;

class Class_4_CE10D09BD1801DE0_11 : public ::Class_3_20577CF7FC6B1263<::UnityEngine::Rendering::Universal::Glitch*, ::MoleMole::Timeline::GlitchBehaviour*>
{
public:
	::UnityEngine::Texture* Field_4_54; // 0x38
	::Class_4_CE10D09BD1801DE0_11_Struct_2_52AD02145F5FCE3A_12 Field_4_0; // 0x40
	::UnityEngine::Texture* Field_4_40; // 0x170
	::UnityEngine::Texture* Field_4_46; // 0x178
	::UnityEngine::Texture* Field_4_22; // 0x180
	::System::Single Field_4_16; // 0x188
	::UnityEngine::Color Field_4_34; // 0x18C
	::UnityEngine::Vector2 Field_4_48; // 0x19C
	::System::Single Field_4_58; // 0x1A4
	::System::Single Field_4_42; // 0x1A8
	::System::Boolean Field_4_51; // 0x1AC
	::System::Boolean Field_4_5; // 0x1AD
	::System::Boolean Field_4_41; // 0x1AE
	::System::Boolean Field_4_45; // 0x1AF
	::UnityEngine::Vector2 Field_4_32; // 0x1B0
	::System::Boolean Field_4_1; // 0x1B8
	::System::Boolean Field_4_29; // 0x1B9
	::System::Boolean Field_4_33; // 0x1BA
	::System::Boolean Field_4_49; // 0x1BB
	::System::Boolean Field_4_13; // 0x1BC
	::System::Boolean Field_4_36; // 0x1BD
	::System::Boolean Field_4_7; // 0x1BE
	::System::Boolean Field_4_19; // 0x1BF
	::System::Single Field_4_50; // 0x1C0
	::System::Boolean Field_4_9; // 0x1C4
	::System::Boolean Field_4_31; // 0x1C5
	::System::Boolean Field_4_24; // 0x1C6
	::System::Boolean Field_4_28; // 0x1C7
	::System::Single Field_4_8; // 0x1C8
	::System::Boolean Field_4_39; // 0x1CC
	::System::Boolean Field_4_43; // 0x1CD
	::System::Boolean Field_4_27; // 0x1CE
	::System::Single Field_4_52; // 0x1D0
	::System::Single Field_4_60; // 0x1D4
	::System::Single Field_4_10; // 0x1D8
	::System::Boolean Field_4_37; // 0x1DC
	::System::Boolean Field_4_61; // 0x1DD
	::System::Boolean Field_4_57; // 0x1DE
	::System::Boolean Field_4_3; // 0x1DF
	::System::Single Field_4_4; // 0x1E0
	::System::Boolean Field_4_47; // 0x1E4
	::System::Boolean Field_4_62; // 0x1E5
	::System::Boolean Field_4_17; // 0x1E6
	::System::Boolean Field_4_59; // 0x1E7
	::System::Single Field_4_20; // 0x1E8
	::System::Single Field_4_2; // 0x1EC
	::System::Boolean Field_4_23; // 0x1F0
	::System::Boolean Field_4_55; // 0x1F1
	::System::Boolean Field_4_53; // 0x1F2
	::System::Boolean Field_4_11; // 0x1F3
	::System::Single Field_4_38; // 0x1F4
	::System::Single Field_4_18; // 0x1F8
	::System::Single Field_4_44; // 0x1FC
	::UnityEngine::Vector4 Field_4_26; // 0x200
	::UnityEngine::Vector4 Field_4_30; // 0x210
	::System::Boolean Field_4_15; // 0x220
	::System::Boolean Field_4_21; // 0x221
	::System::Boolean Field_4_35; // 0x222
	::System::Boolean Field_4_25; // 0x223
	::System::Single Field_4_12; // 0x224
	::System::Single Field_4_14; // 0x228
	::System::Single Field_4_6; // 0x22C
	::UnityEngine::Vector2 Field_4_56; // 0x230

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_11__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_3E06E2491B129B22()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_11_METHOD_4_3E06E2491B129B22_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_11_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_11_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_11_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_11_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_8562A2A1E4593432(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_11_METHOD_4_8562A2A1E4593432_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_11_METHOD_4_832295EC279E5994_OFFSET))(this);
	}
};
