#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0208C58D3AAD2AB6.h"
#include "unitysdk/Class_4_CE10D09BD1801DE0_17_Struct_2_52AD02145F5FCE36_37.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class ScreenSpaceAmbientOcclusionBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class ScreenSpaceAmbientOcclusion; }

#define CLASS_4_CE10D09BD1801DE0_17_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xB67C160)
#define CLASS_4_CE10D09BD1801DE0_17_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xB67C150)
#define CLASS_4_CE10D09BD1801DE0_17_METHOD_4_8562A2A1E4593432_OFFSET UNITYSDK_OFFSET(0xB679A60)
#define CLASS_4_CE10D09BD1801DE0_17_METHOD_4_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0xB679560)
#define CLASS_4_CE10D09BD1801DE0_17_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xB67C170)
#define CLASS_4_CE10D09BD1801DE0_17_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xB679820)
#define CLASS_4_CE10D09BD1801DE0_17_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB67B2E0)
#define CLASS_4_CE10D09BD1801DE0_17__CTOR_OFFSET UNITYSDK_OFFSET(0xB67C0E0)

inline static constexpr unsigned int Class_4_CE10D09BD1801DE0_17_TypeDefinitionIndex = 75603;

class Class_4_CE10D09BD1801DE0_17 : public ::Class_3_0208C58D3AAD2AB6<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion*, ::MoleMole::Timeline::ScreenSpaceAmbientOcclusionBehaviour*>
{
public:
	::System::Int32 Field_4_16; // 0x38
	::System::Boolean Field_4_21; // 0x3C
	::System::Boolean Field_4_31; // 0x3D
	::System::Boolean Field_4_5; // 0x3E
	::System::Boolean Field_4_7; // 0x3F
	::Class_4_CE10D09BD1801DE0_17_Struct_2_52AD02145F5FCE36_37 Field_4_0; // 0x40
	::System::Boolean Field_4_10; // 0xA4
	::System::Boolean Field_4_8; // 0xA5
	::System::Boolean Field_4_25; // 0xA6
	::System::Boolean Field_4_15; // 0xA7
	::System::Int32 Field_4_28; // 0xA8
	::System::Single Field_4_4; // 0xAC
	::System::Boolean Field_4_3; // 0xB0
	::System::Boolean Field_4_1; // 0xB1
	::System::Boolean Field_4_18; // 0xB2
	::System::Boolean Field_4_29; // 0xB3
	::System::Single Field_4_20; // 0xB4
	::System::Int32 Field_4_26; // 0xB8
	::System::Single Field_4_2; // 0xBC
	::System::Single Field_4_12; // 0xC0
	::System::Single Field_4_14; // 0xC4
	::System::Boolean Field_4_9; // 0xC8
	::System::Boolean Field_4_27; // 0xC9
	::System::Int32 Field_4_22; // 0xCC
	::System::Boolean Field_4_17; // 0xD0
	::System::Boolean Field_4_30; // 0xD1
	::System::Boolean Field_4_32; // 0xD2
	::System::Boolean Field_4_11; // 0xD3
	::System::Single Field_4_6; // 0xD4
	::System::Boolean Field_4_23; // 0xD8
	::System::Boolean Field_4_13; // 0xD9
	::System::Boolean Field_4_19; // 0xDA
	::System::Boolean Field_4_24; // 0xDB

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_17__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9D8CB5E47C1952BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_17_METHOD_4_9D8CB5E47C1952BD_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_17_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_17_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_8562A2A1E4593432(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_17_METHOD_4_8562A2A1E4593432_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_17_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_17_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_17_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};
