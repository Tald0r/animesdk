#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0208C58D3AAD2AB6.h"
#include "unitysdk/Class_4_CE10D09BD1801DE0_16_Struct_2_52AD02145F5FCE3A_27.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class ColorAdjustmentsBehaviour; }
namespace System { class Object; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class ColorAdjustments; }

#define CLASS_4_CE10D09BD1801DE0_16_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xA5C7200)
#define CLASS_4_CE10D09BD1801DE0_16_METHOD_4_7DBE4BF81A0D0238_OFFSET UNITYSDK_OFFSET(0xA5C4F70)
#define CLASS_4_CE10D09BD1801DE0_16_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xA5C71F0)
#define CLASS_4_CE10D09BD1801DE0_16_METHOD_4_B247C6D88E785B91_OFFSET UNITYSDK_OFFSET(0xA5C48E0)
#define CLASS_4_CE10D09BD1801DE0_16_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xA5C71E0)
#define CLASS_4_CE10D09BD1801DE0_16_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xA5C4D00)
#define CLASS_4_CE10D09BD1801DE0_16_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xA5C6390)
#define CLASS_4_CE10D09BD1801DE0_16__CTOR_OFFSET UNITYSDK_OFFSET(0xA5C71C0)

inline static constexpr unsigned int Class_4_CE10D09BD1801DE0_16_TypeDefinitionIndex = 70461;

class Class_4_CE10D09BD1801DE0_16 : public ::Class_3_0208C58D3AAD2AB6<::UnityEngine::Rendering::Universal::ColorAdjustments*, ::MoleMole::Timeline::ColorAdjustmentsBehaviour*>
{
public:
	::UnityEngine::Texture* Field_4_26; // 0x38
	::Class_4_CE10D09BD1801DE0_16_Struct_2_52AD02145F5FCE3A_27 Field_4_0; // 0x40
	::System::Single Field_4_4; // 0xC8
	::UnityEngine::Color Field_4_12; // 0xCC
	::System::Single Field_4_24; // 0xDC
	::System::Single Field_4_28; // 0xE0
	::System::Single Field_4_16; // 0xE4
	::System::Single Field_4_6; // 0xE8
	::System::Boolean Field_4_20; // 0xEC
	::System::Boolean Field_4_17; // 0xED
	::System::Boolean Field_4_3; // 0xEE
	::System::Boolean Field_4_13; // 0xEF
	::System::Boolean Field_4_11; // 0xF0
	::System::Boolean Field_4_23; // 0xF1
	::System::Boolean Field_4_19; // 0xF2
	::System::Single Field_4_22; // 0xF4
	::System::Single Field_4_14; // 0xF8
	::System::Boolean Field_4_1; // 0xFC
	::System::Boolean Field_4_21; // 0xFD
	::System::Boolean Field_4_5; // 0xFE
	::System::Boolean Field_4_27; // 0xFF
	::System::Single Field_4_18; // 0x100
	::System::Single Field_4_10; // 0x104
	::System::Boolean Field_4_7; // 0x108
	::System::Boolean Field_4_15; // 0x109
	::System::Boolean Field_4_25; // 0x10A
	::System::Boolean Field_4_29; // 0x10B
	::System::Single Field_4_2; // 0x10C
	::System::Boolean Field_4_30; // 0x110
	::System::Boolean Field_4_32; // 0x111
	::System::Boolean Field_4_9; // 0x112
	::System::Boolean Field_4_31; // 0x113
	::System::Single Field_4_8; // 0x114

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_16__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_B247C6D88E785B91()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_16_METHOD_4_B247C6D88E785B91_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_16_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_16_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_16_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_16_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_7DBE4BF81A0D0238(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_16_METHOD_4_7DBE4BF81A0D0238_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_16_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};
