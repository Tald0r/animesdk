#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_20577CF7FC6B1263.h"
#include "unitysdk/Class_4_EAF8E0104416EDDD_2_Struct_2_52AD02145F5FCE36_12.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class ChannelMixerBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class ChannelMixer; }

#define CLASS_4_EAF8E0104416EDDD_2_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x13865B50)
#define CLASS_4_EAF8E0104416EDDD_2_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x13865B40)
#define CLASS_4_EAF8E0104416EDDD_2_METHOD_4_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x138642F0)
#define CLASS_4_EAF8E0104416EDDD_2_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x13865B60)
#define CLASS_4_EAF8E0104416EDDD_2_METHOD_4_EBA44A5450C8B29F_OFFSET UNITYSDK_OFFSET(0x13864640)
#define CLASS_4_EAF8E0104416EDDD_2_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x138644B0)
#define CLASS_4_EAF8E0104416EDDD_2_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x138651D0)
#define CLASS_4_EAF8E0104416EDDD_2__CTOR_OFFSET UNITYSDK_OFFSET(0x13865B10)

inline static constexpr unsigned int Class_4_EAF8E0104416EDDD_2_TypeDefinitionIndex = 44862;

class Class_4_EAF8E0104416EDDD_2 : public ::Class_3_20577CF7FC6B1263<::UnityEngine::Rendering::Universal::ChannelMixer*, ::MoleMole::Timeline::ChannelMixerBehaviour*>
{
public:
	::System::Boolean Field_4_20; // 0x38
	::System::Boolean Field_4_5; // 0x39
	::System::Boolean Field_4_7; // 0x3A
	::System::Boolean Field_4_1; // 0x3B
	::System::Single Field_4_16; // 0x3C
	::System::Single Field_4_18; // 0x40
	::System::Single Field_4_4; // 0x44
	::System::Single Field_4_10; // 0x48
	::System::Boolean Field_4_15; // 0x4C
	::System::Boolean Field_4_13; // 0x4D
	::System::Boolean Field_4_19; // 0x4E
	::System::Single Field_4_2; // 0x50
	::Class_4_EAF8E0104416EDDD_2_Struct_2_52AD02145F5FCE36_12 Field_4_0; // 0x54
	::System::Single Field_4_14; // 0xA0
	::System::Single Field_4_12; // 0xA4
	::System::Boolean Field_4_11; // 0xA8
	::System::Boolean Field_4_9; // 0xA9
	::System::Boolean Field_4_17; // 0xAA
	::System::Boolean Field_4_3; // 0xAB
	::System::Single Field_4_8; // 0xAC
	::System::Single Field_4_6; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_2_METHOD_4_B768DA94E3FD91D9_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_2_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_2_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_2_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_2_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_2_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_EBA44A5450C8B29F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_2_METHOD_4_EBA44A5450C8B29F_OFFSET))(this, a1);
	}
};
