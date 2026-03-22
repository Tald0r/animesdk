#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_20577CF7FC6B1263.h"
#include "unitysdk/Class_4_CE10D09BD1801DE0_Struct_2_52AD02145F5FCE36_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SampleCountLevel.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class AmplifyOcclusionBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class AmplifyOcclusion; }

#define CLASS_4_CE10D09BD1801DE0_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xD71EBB0)
#define CLASS_4_CE10D09BD1801DE0_METHOD_4_3E06E2491B129B22_OFFSET UNITYSDK_OFFSET(0xD71BF70)
#define CLASS_4_CE10D09BD1801DE0_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xD71EB90)
#define CLASS_4_CE10D09BD1801DE0_METHOD_4_A074CB615A9C54E1_OFFSET UNITYSDK_OFFSET(0xD71C4D0)
#define CLASS_4_CE10D09BD1801DE0_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xD71EBA0)
#define CLASS_4_CE10D09BD1801DE0_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xD71C260)
#define CLASS_4_CE10D09BD1801DE0_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xD71DCC0)
#define CLASS_4_CE10D09BD1801DE0__CTOR_OFFSET UNITYSDK_OFFSET(0xD71EB10)

inline static constexpr unsigned int Class_4_CE10D09BD1801DE0_TypeDefinitionIndex = 38548;

class Class_4_CE10D09BD1801DE0 : public ::Class_3_20577CF7FC6B1263<::UnityEngine::Rendering::Universal::AmplifyOcclusion*, ::MoleMole::Timeline::AmplifyOcclusionBehaviour*>
{
public:
	::System::Int32 Field_4_28; // 0x38
	::System::Int32 Field_4_26; // 0x3C
	::System::Single Field_4_16; // 0x40
	::System::Boolean Field_4_15; // 0x44
	::System::Boolean Field_4_31; // 0x45
	::System::Boolean Field_4_24; // 0x46
	::System::Boolean Field_4_19; // 0x47
	::System::Single Field_4_30; // 0x48
	::System::Boolean Field_4_23; // 0x4C
	::System::Boolean Field_4_11; // 0x4D
	::System::Boolean Field_4_27; // 0x4E
	::System::Boolean Field_4_7; // 0x4F
	::UnityEngine::NAPRenderPipeline0::SampleCountLevel Field_4_6; // 0x50
	::System::Boolean Field_4_17; // 0x54
	::System::Boolean Field_4_1; // 0x55
	::System::Boolean Field_4_9; // 0x56
	::System::Boolean Field_4_22; // 0x57
	::System::Single Field_4_14; // 0x58
	::Class_4_CE10D09BD1801DE0_Struct_2_52AD02145F5FCE36_1 Field_4_0; // 0x5C
	::System::Boolean Field_4_20; // 0xD8
	::System::Boolean Field_4_3; // 0xD9
	::System::Single Field_4_8; // 0xDC
	::System::Boolean Field_4_34; // 0xE0
	::System::Boolean Field_4_13; // 0xE1
	::System::Boolean Field_4_5; // 0xE2
	::System::Boolean Field_4_33; // 0xE3
	::System::Single Field_4_2; // 0xE4
	::UnityEngine::Color Field_4_10; // 0xE8
	::System::Single Field_4_4; // 0xF8
	::System::Single Field_4_18; // 0xFC
	::System::Boolean Field_4_21; // 0x100
	::System::Boolean Field_4_32; // 0x101
	::System::Boolean Field_4_29; // 0x102
	::System::Boolean Field_4_25; // 0x103
	::System::Single Field_4_12; // 0x104

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_3E06E2491B129B22()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_METHOD_4_3E06E2491B129B22_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_A074CB615A9C54E1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_METHOD_4_A074CB615A9C54E1_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};
