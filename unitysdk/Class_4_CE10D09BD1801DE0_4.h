#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_20577CF7FC6B1263.h"
#include "unitysdk/Class_4_CE10D09BD1801DE0_4_Struct_2_52AD02145F5FCE36_9.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class CullingBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class Culling; }

#define CLASS_4_CE10D09BD1801DE0_4_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x7019750)
#define CLASS_4_CE10D09BD1801DE0_4_METHOD_4_336B51EF746572BB_OFFSET UNITYSDK_OFFSET(0x7016F00)
#define CLASS_4_CE10D09BD1801DE0_4_METHOD_4_3E06E2491B129B22_OFFSET UNITYSDK_OFFSET(0x70169B0)
#define CLASS_4_CE10D09BD1801DE0_4_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x7019760)
#define CLASS_4_CE10D09BD1801DE0_4_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x7019770)
#define CLASS_4_CE10D09BD1801DE0_4_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x7016CD0)
#define CLASS_4_CE10D09BD1801DE0_4_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x7018940)
#define CLASS_4_CE10D09BD1801DE0_4__CTOR_OFFSET UNITYSDK_OFFSET(0x7019710)

inline static constexpr unsigned int Class_4_CE10D09BD1801DE0_4_TypeDefinitionIndex = 42990;

class Class_4_CE10D09BD1801DE0_4 : public ::Class_3_20577CF7FC6B1263<::UnityEngine::Rendering::Universal::Culling*, ::MoleMole::Timeline::CullingBehaviour*>
{
public:
	::System::Boolean Field_4_3; // 0x38
	::System::Boolean Field_4_7; // 0x39
	::System::Boolean Field_4_19; // 0x3A
	::System::Boolean Field_4_18; // 0x3B
	::System::Boolean Field_4_31; // 0x3C
	::System::Boolean Field_4_32; // 0x3D
	::System::Boolean Field_4_29; // 0x3E
	::System::Boolean Field_4_4; // 0x3F
	::System::Single Field_4_26; // 0x40
	::System::Boolean Field_4_22; // 0x44
	::System::Boolean Field_4_13; // 0x45
	::System::Boolean Field_4_27; // 0x46
	::System::Boolean Field_4_6; // 0x47
	::UnityEngine::Color Field_4_24; // 0x48
	::UnityEngine::Color Field_4_16; // 0x58
	::System::Boolean Field_4_21; // 0x68
	::System::Boolean Field_4_10; // 0x69
	::System::Boolean Field_4_1; // 0x6A
	::System::Boolean Field_4_17; // 0x6B
	::System::Boolean Field_4_2; // 0x6C
	::System::Boolean Field_4_11; // 0x6D
	::System::Boolean Field_4_23; // 0x6E
	::System::Boolean Field_4_5; // 0x6F
	::System::Boolean Field_4_25; // 0x70
	::System::Boolean Field_4_12; // 0x71
	::System::Boolean Field_4_30; // 0x72
	::System::Boolean Field_4_8; // 0x73
	::System::Single Field_4_28; // 0x74
	::System::Boolean Field_4_14; // 0x78
	::System::Boolean Field_4_9; // 0x79
	::System::Boolean Field_4_15; // 0x7A
	::System::Boolean Field_4_20; // 0x7B
	::Class_4_CE10D09BD1801DE0_4_Struct_2_52AD02145F5FCE36_9 Field_4_0; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_3E06E2491B129B22()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_4_METHOD_4_3E06E2491B129B22_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_4_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_4_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_336B51EF746572BB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_4_METHOD_4_336B51EF746572BB_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_4_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_4_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_4_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};
