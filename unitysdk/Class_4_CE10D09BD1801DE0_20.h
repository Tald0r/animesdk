#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0208C58D3AAD2AB6.h"
#include "unitysdk/Class_4_CE10D09BD1801DE0_20_Struct_2_52AD02145F5FCE36_41.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DepthOfFieldMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DofDebugMode.h"

namespace MoleMole::Timeline { class DepthOfFieldBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class DepthOfField; }

#define CLASS_4_CE10D09BD1801DE0_20_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xC5342D0)
#define CLASS_4_CE10D09BD1801DE0_20_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xC5342F0)
#define CLASS_4_CE10D09BD1801DE0_20_METHOD_4_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0xC531980)
#define CLASS_4_CE10D09BD1801DE0_20_METHOD_4_A074CB615A9C54E1_OFFSET UNITYSDK_OFFSET(0xC531EA0)
#define CLASS_4_CE10D09BD1801DE0_20_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xC5342E0)
#define CLASS_4_CE10D09BD1801DE0_20_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xC531C50)
#define CLASS_4_CE10D09BD1801DE0_20_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xC533480)
#define CLASS_4_CE10D09BD1801DE0_20__CTOR_OFFSET UNITYSDK_OFFSET(0xC534280)

inline static constexpr unsigned int Class_4_CE10D09BD1801DE0_20_TypeDefinitionIndex = 78909;

class Class_4_CE10D09BD1801DE0_20 : public ::Class_3_0208C58D3AAD2AB6<::UnityEngine::Rendering::Universal::DepthOfField*, ::MoleMole::Timeline::DepthOfFieldBehaviour*>
{
public:
	::System::Int32 Field_4_18; // 0x38
	::Class_4_CE10D09BD1801DE0_20_Struct_2_52AD02145F5FCE36_41 Field_4_0; // 0x3C
	::System::Boolean Field_4_23; // 0xA4
	::System::Boolean Field_4_21; // 0xA5
	::System::Boolean Field_4_9; // 0xA6
	::System::Boolean Field_4_25; // 0xA7
	::System::Single Field_4_6; // 0xA8
	::System::Single Field_4_8; // 0xAC
	::System::Boolean Field_4_30; // 0xB0
	::System::Boolean Field_4_28; // 0xB1
	::System::Boolean Field_4_3; // 0xB2
	::System::Boolean Field_4_26; // 0xB3
	::System::Boolean Field_4_15; // 0xB4
	::System::Boolean Field_4_32; // 0xB5
	::System::Single Field_4_14; // 0xB8
	::System::Single Field_4_4; // 0xBC
	::System::Single Field_4_20; // 0xC0
	::System::Boolean Field_4_27; // 0xC4
	::System::Boolean Field_4_19; // 0xC5
	::System::Boolean Field_4_5; // 0xC6
	::System::Boolean Field_4_10; // 0xC7
	::System::Single Field_4_16; // 0xC8
	::System::Single Field_4_12; // 0xCC
	::System::Boolean Field_4_31; // 0xD0
	::System::Boolean Field_4_11; // 0xD1
	::System::Boolean Field_4_13; // 0xD2
	::UnityEngine::Rendering::Universal::DofDebugMode Field_4_24; // 0xD4
	::UnityEngine::Rendering::Universal::DepthOfFieldMode Field_4_2; // 0xD8
	::System::Single Field_4_22; // 0xDC
	::System::Boolean Field_4_7; // 0xE0
	::System::Boolean Field_4_17; // 0xE1
	::System::Boolean Field_4_29; // 0xE2
	::System::Boolean Field_4_1; // 0xE3

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_20__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9D8CB5E47C1952BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_20_METHOD_4_9D8CB5E47C1952BD_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_20_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_20_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_20_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_20_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_20_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_A074CB615A9C54E1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_20_METHOD_4_A074CB615A9C54E1_OFFSET))(this, a1);
	}
};
