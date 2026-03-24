#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0208C58D3AAD2AB6.h"
#include "unitysdk/Class_4_CE10D09BD1801DE0_14_Struct_2_52AD02145F5FCE36_25.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SampleDistanceMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Timeline { class RadialBlurBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class RadialBlur; }

#define CLASS_4_CE10D09BD1801DE0_14_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xE108530)
#define CLASS_4_CE10D09BD1801DE0_14_METHOD_4_3E06E2491B129B22_OFFSET UNITYSDK_OFFSET(0xE105240)
#define CLASS_4_CE10D09BD1801DE0_14_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xE108520)
#define CLASS_4_CE10D09BD1801DE0_14_METHOD_4_A074CB615A9C54E1_OFFSET UNITYSDK_OFFSET(0xE105830)
#define CLASS_4_CE10D09BD1801DE0_14_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xE108510)
#define CLASS_4_CE10D09BD1801DE0_14_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xE105570)
#define CLASS_4_CE10D09BD1801DE0_14_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE107320)
#define CLASS_4_CE10D09BD1801DE0_14__CTOR_OFFSET UNITYSDK_OFFSET(0xE1084C0)

inline static constexpr unsigned int Class_4_CE10D09BD1801DE0_14_TypeDefinitionIndex = 66209;

class Class_4_CE10D09BD1801DE0_14 : public ::Class_3_0208C58D3AAD2AB6<::UnityEngine::Rendering::Universal::RadialBlur*, ::MoleMole::Timeline::RadialBlurBehaviour*>
{
public:
	::UnityEngine::Rendering::Universal::SampleDistanceMode Field_4_4; // 0x38
	::System::Single Field_4_12; // 0x3C
	::System::Single Field_4_26; // 0x40
	::System::Int32 Field_4_30; // 0x44
	::System::Single Field_4_8; // 0x48
	::UnityEngine::Vector2 Field_4_10; // 0x4C
	::UnityEngine::Vector2 Field_4_16; // 0x54
	::System::Single Field_4_20; // 0x5C
	::System::Boolean Field_4_9; // 0x60
	::System::Boolean Field_4_11; // 0x61
	::System::Boolean Field_4_19; // 0x62
	::System::Boolean Field_4_5; // 0x63
	::System::Boolean Field_4_1; // 0x64
	::System::Boolean Field_4_27; // 0x65
	::System::Boolean Field_4_7; // 0x66
	::System::Boolean Field_4_25; // 0x67
	::System::Boolean Field_4_38; // 0x68
	::System::Boolean Field_4_29; // 0x69
	::System::Boolean Field_4_36; // 0x6A
	::System::Boolean Field_4_33; // 0x6B
	::System::Boolean Field_4_13; // 0x6C
	::System::Boolean Field_4_3; // 0x6D
	::System::Boolean Field_4_35; // 0x6E
	::System::Boolean Field_4_14; // 0x6F
	::UnityEngine::Rendering::Universal::DownSampleLevel Field_4_2; // 0x70
	::System::Single Field_4_32; // 0x74
	::System::Single Field_4_28; // 0x78
	::System::Single Field_4_24; // 0x7C
	::System::Single Field_4_22; // 0x80
	::System::Boolean Field_4_23; // 0x84
	::System::Boolean Field_4_31; // 0x85
	::System::Boolean Field_4_18; // 0x86
	::System::Boolean Field_4_37; // 0x87
	::Class_4_CE10D09BD1801DE0_14_Struct_2_52AD02145F5FCE36_25 Field_4_0; // 0x88
	::System::Int32 Field_4_6; // 0x110
	::System::Boolean Field_4_17; // 0x114
	::System::Boolean Field_4_34; // 0x115
	::System::Boolean Field_4_15; // 0x116
	::System::Boolean Field_4_21; // 0x117

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_14__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_3E06E2491B129B22()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_14_METHOD_4_3E06E2491B129B22_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_14_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_14_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_14_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_14_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_A074CB615A9C54E1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_14_METHOD_4_A074CB615A9C54E1_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_14_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};
