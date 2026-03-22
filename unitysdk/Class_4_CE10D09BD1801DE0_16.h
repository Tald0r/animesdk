#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_20577CF7FC6B1263.h"
#include "unitysdk/Class_4_CE10D09BD1801DE0_16_Struct_2_52AD02145F5FCE36_34.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SampleDistanceMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Timeline { class RadialBlurBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class RadialBlur; }

#define CLASS_4_CE10D09BD1801DE0_16_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xC51CAC0)
#define CLASS_4_CE10D09BD1801DE0_16_METHOD_4_3E06E2491B129B22_OFFSET UNITYSDK_OFFSET(0xC5197F0)
#define CLASS_4_CE10D09BD1801DE0_16_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xC51CAD0)
#define CLASS_4_CE10D09BD1801DE0_16_METHOD_4_A074CB615A9C54E1_OFFSET UNITYSDK_OFFSET(0xC519DC0)
#define CLASS_4_CE10D09BD1801DE0_16_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xC51CAE0)
#define CLASS_4_CE10D09BD1801DE0_16_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xC519B10)
#define CLASS_4_CE10D09BD1801DE0_16_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xC51B8B0)
#define CLASS_4_CE10D09BD1801DE0_16__CTOR_OFFSET UNITYSDK_OFFSET(0xC51CA60)

inline static constexpr unsigned int Class_4_CE10D09BD1801DE0_16_TypeDefinitionIndex = 69563;

class Class_4_CE10D09BD1801DE0_16 : public ::Class_3_20577CF7FC6B1263<::UnityEngine::Rendering::Universal::RadialBlur*, ::MoleMole::Timeline::RadialBlurBehaviour*>
{
public:
	::System::Single Field_4_32; // 0x38
	::System::Boolean Field_4_18; // 0x3C
	::System::Boolean Field_4_34; // 0x3D
	::System::Boolean Field_4_19; // 0x3E
	::System::Boolean Field_4_15; // 0x3F
	::UnityEngine::Rendering::Universal::SampleDistanceMode Field_4_4; // 0x40
	::System::Single Field_4_12; // 0x44
	::UnityEngine::Vector2 Field_4_10; // 0x48
	::System::Single Field_4_28; // 0x50
	::System::Single Field_4_26; // 0x54
	::System::Int32 Field_4_6; // 0x58
	::System::Boolean Field_4_36; // 0x5C
	::System::Boolean Field_4_31; // 0x5D
	::System::Boolean Field_4_29; // 0x5E
	::System::Boolean Field_4_13; // 0x5F
	::System::Single Field_4_20; // 0x60
	::UnityEngine::Rendering::Universal::DownSampleLevel Field_4_2; // 0x64
	::System::Boolean Field_4_27; // 0x68
	::System::Boolean Field_4_37; // 0x69
	::System::Boolean Field_4_17; // 0x6A
	::System::Boolean Field_4_33; // 0x6B
	::System::Int32 Field_4_30; // 0x6C
	::System::Single Field_4_22; // 0x70
	::System::Boolean Field_4_21; // 0x74
	::System::Boolean Field_4_11; // 0x75
	::System::Boolean Field_4_9; // 0x76
	::System::Boolean Field_4_3; // 0x77
	::System::Single Field_4_8; // 0x78
	::System::Boolean Field_4_35; // 0x7C
	::System::Boolean Field_4_38; // 0x7D
	::System::Boolean Field_4_5; // 0x7E
	::System::Boolean Field_4_25; // 0x7F
	::Class_4_CE10D09BD1801DE0_16_Struct_2_52AD02145F5FCE36_34 Field_4_0; // 0x80
	::UnityEngine::Vector2 Field_4_16; // 0x108
	::System::Single Field_4_24; // 0x110
	::System::Boolean Field_4_23; // 0x114
	::System::Boolean Field_4_14; // 0x115
	::System::Boolean Field_4_7; // 0x116
	::System::Boolean Field_4_1; // 0x117

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_16__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_3E06E2491B129B22()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_16_METHOD_4_3E06E2491B129B22_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_16_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_16_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_A074CB615A9C54E1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_16_METHOD_4_A074CB615A9C54E1_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_16_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_16_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_16_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};
