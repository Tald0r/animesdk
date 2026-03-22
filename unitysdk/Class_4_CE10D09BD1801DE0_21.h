#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_20577CF7FC6B1263.h"
#include "unitysdk/Class_4_CE10D09BD1801DE0_21_Struct_2_52AD02145F5FCE36_41.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Timeline { class ChromaticAberrationBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class ChromaticAberration; }

#define CLASS_4_CE10D09BD1801DE0_21_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xB9A4340)
#define CLASS_4_CE10D09BD1801DE0_21_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xB9A4330)
#define CLASS_4_CE10D09BD1801DE0_21_METHOD_4_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0xB9A2830)
#define CLASS_4_CE10D09BD1801DE0_21_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xB9A4350)
#define CLASS_4_CE10D09BD1801DE0_21_METHOD_4_EBA44A5450C8B29F_OFFSET UNITYSDK_OFFSET(0xB9A2BE0)
#define CLASS_4_CE10D09BD1801DE0_21_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xB9A2A30)
#define CLASS_4_CE10D09BD1801DE0_21_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB9A3880)
#define CLASS_4_CE10D09BD1801DE0_21__CTOR_OFFSET UNITYSDK_OFFSET(0xB9A42D0)

inline static constexpr unsigned int Class_4_CE10D09BD1801DE0_21_TypeDefinitionIndex = 78799;

class Class_4_CE10D09BD1801DE0_21 : public ::Class_3_20577CF7FC6B1263<::UnityEngine::Rendering::Universal::ChromaticAberration*, ::MoleMole::Timeline::ChromaticAberrationBehaviour*>
{
public:
	::System::Single Field_4_10; // 0x38
	::UnityEngine::Color Field_4_8; // 0x3C
	::System::Boolean Field_4_17; // 0x4C
	::System::Boolean Field_4_19; // 0x4D
	::System::Boolean Field_4_5; // 0x4E
	::System::Boolean Field_4_20; // 0x4F
	::System::Single Field_4_14; // 0x50
	::System::Single Field_4_2; // 0x54
	::System::Single Field_4_6; // 0x58
	::UnityEngine::Color Field_4_16; // 0x5C
	::System::Boolean Field_4_13; // 0x6C
	::System::Boolean Field_4_7; // 0x6D
	::System::Boolean Field_4_3; // 0x6E
	::UnityEngine::Color Field_4_12; // 0x70
	::System::Single Field_4_18; // 0x80
	::UnityEngine::Vector2 Field_4_4; // 0x84
	::System::Boolean Field_4_11; // 0x8C
	::System::Boolean Field_4_9; // 0x8D
	::System::Boolean Field_4_15; // 0x8E
	::System::Boolean Field_4_1; // 0x8F
	::Class_4_CE10D09BD1801DE0_21_Struct_2_52AD02145F5FCE36_41 Field_4_0; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_21__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9D8CB5E47C1952BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_21_METHOD_4_9D8CB5E47C1952BD_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_21_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_21_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_21_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_21_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_EBA44A5450C8B29F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_21_METHOD_4_EBA44A5450C8B29F_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_21_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};
