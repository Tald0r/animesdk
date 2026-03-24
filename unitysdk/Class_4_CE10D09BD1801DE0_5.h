#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0208C58D3AAD2AB6.h"
#include "unitysdk/Class_4_CE10D09BD1801DE0_5_Struct_2_52AD02145F5FCE3A_8.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class CausticsBehaviour; }
namespace System { class Object; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class Caustics; }

#define CLASS_4_CE10D09BD1801DE0_5_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x9944130)
#define CLASS_4_CE10D09BD1801DE0_5_METHOD_4_336B51EF746572BB_OFFSET UNITYSDK_OFFSET(0x9942460)
#define CLASS_4_CE10D09BD1801DE0_5_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x9944110)
#define CLASS_4_CE10D09BD1801DE0_5_METHOD_4_B247C6D88E785B91_OFFSET UNITYSDK_OFFSET(0x9941E70)
#define CLASS_4_CE10D09BD1801DE0_5_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x9944120)
#define CLASS_4_CE10D09BD1801DE0_5_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x9942270)
#define CLASS_4_CE10D09BD1801DE0_5_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x9943470)
#define CLASS_4_CE10D09BD1801DE0_5__CTOR_OFFSET UNITYSDK_OFFSET(0x99440C0)

inline static constexpr unsigned int Class_4_CE10D09BD1801DE0_5_TypeDefinitionIndex = 45194;

class Class_4_CE10D09BD1801DE0_5 : public ::Class_3_0208C58D3AAD2AB6<::UnityEngine::Rendering::Universal::Caustics*, ::MoleMole::Timeline::CausticsBehaviour*>
{
public:
	::Class_4_CE10D09BD1801DE0_5_Struct_2_52AD02145F5FCE3A_8 Field_4_0; // 0x38
	::UnityEngine::Texture* Field_4_24; // 0xA8
	::UnityEngine::Color Field_4_20; // 0xB0
	::System::Boolean Field_4_19; // 0xC0
	::System::Boolean Field_4_15; // 0xC1
	::System::Boolean Field_4_7; // 0xC2
	::System::Boolean Field_4_11; // 0xC3
	::System::Single Field_4_14; // 0xC4
	::System::Single Field_4_16; // 0xC8
	::System::Single Field_4_8; // 0xCC
	::System::Single Field_4_10; // 0xD0
	::System::Boolean Field_4_17; // 0xD4
	::System::Boolean Field_4_26; // 0xD5
	::System::Boolean Field_4_13; // 0xD6
	::System::Boolean Field_4_25; // 0xD7
	::System::Single Field_4_18; // 0xD8
	::System::Single Field_4_6; // 0xDC
	::System::Single Field_4_4; // 0xE0
	::System::Boolean Field_4_23; // 0xE4
	::System::Boolean Field_4_9; // 0xE5
	::System::Boolean Field_4_3; // 0xE6
	::System::Boolean Field_4_1; // 0xE7
	::System::Single Field_4_12; // 0xE8
	::System::Single Field_4_22; // 0xEC
	::System::Boolean Field_4_2; // 0xF0
	::System::Boolean Field_4_5; // 0xF1
	::System::Boolean Field_4_21; // 0xF2

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_5__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_B247C6D88E785B91()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_5_METHOD_4_B247C6D88E785B91_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_5_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_5_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_5_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_336B51EF746572BB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_5_METHOD_4_336B51EF746572BB_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_5_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_5_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};
