#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_20577CF7FC6B1263.h"
#include "unitysdk/Class_4_CE10D09BD1801DE0_9_Struct_2_52AD02145F5FCE3A_10.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class CausticsBehaviour; }
namespace System { class Object; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class Caustics; }

#define CLASS_4_CE10D09BD1801DE0_9_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xC54AB50)
#define CLASS_4_CE10D09BD1801DE0_9_METHOD_4_336B51EF746572BB_OFFSET UNITYSDK_OFFSET(0xC548EE0)
#define CLASS_4_CE10D09BD1801DE0_9_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xC54AB40)
#define CLASS_4_CE10D09BD1801DE0_9_METHOD_4_B247C6D88E785B91_OFFSET UNITYSDK_OFFSET(0xC5488F0)
#define CLASS_4_CE10D09BD1801DE0_9_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xC54AB60)
#define CLASS_4_CE10D09BD1801DE0_9_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xC548CF0)
#define CLASS_4_CE10D09BD1801DE0_9_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xC549EF0)
#define CLASS_4_CE10D09BD1801DE0_9__CTOR_OFFSET UNITYSDK_OFFSET(0xC54AAF0)

inline static constexpr unsigned int Class_4_CE10D09BD1801DE0_9_TypeDefinitionIndex = 53692;

class Class_4_CE10D09BD1801DE0_9 : public ::Class_3_20577CF7FC6B1263<::UnityEngine::Rendering::Universal::Caustics*, ::MoleMole::Timeline::CausticsBehaviour*>
{
public:
	::Class_4_CE10D09BD1801DE0_9_Struct_2_52AD02145F5FCE3A_10 Field_4_0; // 0x38
	::UnityEngine::Texture* Field_4_24; // 0xA8
	::System::Boolean Field_4_21; // 0xB0
	::System::Boolean Field_4_15; // 0xB1
	::System::Boolean Field_4_13; // 0xB2
	::System::Boolean Field_4_2; // 0xB3
	::System::Single Field_4_18; // 0xB4
	::System::Single Field_4_6; // 0xB8
	::System::Boolean Field_4_7; // 0xBC
	::System::Boolean Field_4_19; // 0xBD
	::System::Boolean Field_4_26; // 0xBE
	::System::Boolean Field_4_11; // 0xBF
	::System::Single Field_4_14; // 0xC0
	::System::Single Field_4_12; // 0xC4
	::System::Boolean Field_4_1; // 0xC8
	::System::Boolean Field_4_17; // 0xC9
	::System::Boolean Field_4_9; // 0xCA
	::System::Single Field_4_16; // 0xCC
	::System::Single Field_4_8; // 0xD0
	::System::Single Field_4_22; // 0xD4
	::System::Single Field_4_10; // 0xD8
	::System::Boolean Field_4_23; // 0xDC
	::System::Boolean Field_4_25; // 0xDD
	::System::Boolean Field_4_5; // 0xDE
	::System::Boolean Field_4_3; // 0xDF
	::System::Single Field_4_4; // 0xE0
	::UnityEngine::Color Field_4_20; // 0xE4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_9__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_B247C6D88E785B91()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_9_METHOD_4_B247C6D88E785B91_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_9_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_9_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_9_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_9_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_336B51EF746572BB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_9_METHOD_4_336B51EF746572BB_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_9_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};
