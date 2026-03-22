#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_20577CF7FC6B1263.h"
#include "unitysdk/Class_4_CE10D09BD1801DE0_6_Struct_2_52AD02145F5FCE36_15.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DepthOfFieldMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DofDebugMode.h"

namespace MoleMole::Timeline { class DepthOfFieldBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class DepthOfField; }

#define CLASS_4_CE10D09BD1801DE0_6_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x800C570)
#define CLASS_4_CE10D09BD1801DE0_6_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x800C580)
#define CLASS_4_CE10D09BD1801DE0_6_METHOD_4_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0x8009950)
#define CLASS_4_CE10D09BD1801DE0_6_METHOD_4_A074CB615A9C54E1_OFFSET UNITYSDK_OFFSET(0x8009EA0)
#define CLASS_4_CE10D09BD1801DE0_6_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x800C590)
#define CLASS_4_CE10D09BD1801DE0_6_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x8009C30)
#define CLASS_4_CE10D09BD1801DE0_6_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x800B670)
#define CLASS_4_CE10D09BD1801DE0_6__CTOR_OFFSET UNITYSDK_OFFSET(0x800C520)

inline static constexpr unsigned int Class_4_CE10D09BD1801DE0_6_TypeDefinitionIndex = 50525;

class Class_4_CE10D09BD1801DE0_6 : public ::Class_3_20577CF7FC6B1263<::UnityEngine::Rendering::Universal::DepthOfField*, ::MoleMole::Timeline::DepthOfFieldBehaviour*>
{
public:
	::System::Single Field_4_4; // 0x38
	::System::Single Field_4_20; // 0x3C
	::System::Single Field_4_6; // 0x40
	::UnityEngine::Rendering::Universal::DofDebugMode Field_4_24; // 0x44
	::System::Boolean Field_4_30; // 0x48
	::System::Boolean Field_4_11; // 0x49
	::System::Boolean Field_4_29; // 0x4A
	::System::Boolean Field_4_3; // 0x4B
	::System::Single Field_4_22; // 0x4C
	::System::Single Field_4_8; // 0x50
	::System::Int32 Field_4_18; // 0x54
	::System::Single Field_4_12; // 0x58
	::Class_4_CE10D09BD1801DE0_6_Struct_2_52AD02145F5FCE36_15 Field_4_0; // 0x5C
	::System::Single Field_4_16; // 0xC8
	::System::Boolean Field_4_21; // 0xCC
	::System::Boolean Field_4_25; // 0xCD
	::System::Boolean Field_4_34; // 0xCE
	::System::Boolean Field_4_23; // 0xCF
	::System::Boolean Field_4_7; // 0xD0
	::System::Boolean Field_4_17; // 0xD1
	::System::Boolean Field_4_1; // 0xD2
	::System::Boolean Field_4_15; // 0xD3
	::UnityEngine::Rendering::Universal::DepthOfFieldMode Field_4_2; // 0xD4
	::System::Boolean Field_4_19; // 0xD8
	::System::Boolean Field_4_27; // 0xD9
	::System::Boolean Field_4_31; // 0xDA
	::System::Boolean Field_4_5; // 0xDB
	::System::Boolean Field_4_28; // 0xDC
	::System::Boolean Field_4_32; // 0xDD
	::System::Boolean Field_4_10; // 0xDE
	::System::Boolean Field_4_26; // 0xDF
	::System::Boolean Field_4_13; // 0xE0
	::System::Boolean Field_4_33; // 0xE1
	::System::Boolean Field_4_9; // 0xE2
	::System::Single Field_4_14; // 0xE4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_6__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9D8CB5E47C1952BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_6_METHOD_4_9D8CB5E47C1952BD_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_6_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_6_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_A074CB615A9C54E1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_6_METHOD_4_A074CB615A9C54E1_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_6_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_6_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_6_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};
