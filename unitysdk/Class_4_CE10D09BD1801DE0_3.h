#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0208C58D3AAD2AB6.h"
#include "unitysdk/Class_4_CE10D09BD1801DE0_3_Struct_2_52AD02145F5FCE36_9.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SampleCountLevel.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class AmplifyOcclusionBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class AmplifyOcclusion; }

#define CLASS_4_CE10D09BD1801DE0_3_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x9E348B0)
#define CLASS_4_CE10D09BD1801DE0_3_METHOD_4_3E06E2491B129B22_OFFSET UNITYSDK_OFFSET(0x9E31C70)
#define CLASS_4_CE10D09BD1801DE0_3_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x9E348C0)
#define CLASS_4_CE10D09BD1801DE0_3_METHOD_4_A074CB615A9C54E1_OFFSET UNITYSDK_OFFSET(0x9E321C0)
#define CLASS_4_CE10D09BD1801DE0_3_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x9E348A0)
#define CLASS_4_CE10D09BD1801DE0_3_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x9E31F50)
#define CLASS_4_CE10D09BD1801DE0_3_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x9E339C0)
#define CLASS_4_CE10D09BD1801DE0_3__CTOR_OFFSET UNITYSDK_OFFSET(0x9E34820)

inline static constexpr unsigned int Class_4_CE10D09BD1801DE0_3_TypeDefinitionIndex = 43171;

class Class_4_CE10D09BD1801DE0_3 : public ::Class_3_0208C58D3AAD2AB6<::UnityEngine::Rendering::Universal::AmplifyOcclusion*, ::MoleMole::Timeline::AmplifyOcclusionBehaviour*>
{
public:
	::System::Single Field_4_16; // 0x38
	::System::Boolean Field_4_29; // 0x3C
	::System::Boolean Field_4_33; // 0x3D
	::System::Boolean Field_4_25; // 0x3E
	::System::Boolean Field_4_27; // 0x3F
	::UnityEngine::NAPRenderPipeline0::SampleCountLevel Field_4_6; // 0x40
	::System::Single Field_4_18; // 0x44
	::System::Single Field_4_8; // 0x48
	::System::Boolean Field_4_19; // 0x4C
	::System::Boolean Field_4_22; // 0x4D
	::System::Boolean Field_4_13; // 0x4E
	::System::Boolean Field_4_1; // 0x4F
	::System::Boolean Field_4_21; // 0x50
	::System::Boolean Field_4_15; // 0x51
	::System::Single Field_4_30; // 0x54
	::System::Single Field_4_4; // 0x58
	::System::Boolean Field_4_24; // 0x5C
	::System::Boolean Field_4_5; // 0x5D
	::System::Boolean Field_4_9; // 0x5E
	::System::Boolean Field_4_23; // 0x5F
	::System::Single Field_4_12; // 0x60
	::System::Int32 Field_4_26; // 0x64
	::System::Int32 Field_4_28; // 0x68
	::Class_4_CE10D09BD1801DE0_3_Struct_2_52AD02145F5FCE36_9 Field_4_0; // 0x6C
	::System::Boolean Field_4_11; // 0xE8
	::System::Boolean Field_4_20; // 0xE9
	::System::Boolean Field_4_7; // 0xEA
	::System::Boolean Field_4_32; // 0xEB
	::System::Single Field_4_2; // 0xEC
	::System::Boolean Field_4_17; // 0xF0
	::System::Boolean Field_4_3; // 0xF1
	::System::Boolean Field_4_34; // 0xF2
	::System::Boolean Field_4_31; // 0xF3
	::UnityEngine::Color Field_4_10; // 0xF4
	::System::Single Field_4_14; // 0x104

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_3E06E2491B129B22()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_3_METHOD_4_3E06E2491B129B22_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_3_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_3_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_3_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_3_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_3_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_A074CB615A9C54E1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_3_METHOD_4_A074CB615A9C54E1_OFFSET))(this, a1);
	}
};
