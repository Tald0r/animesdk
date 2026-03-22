#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_20577CF7FC6B1263.h"
#include "unitysdk/Class_4_CE10D09BD1801DE0_14_Struct_2_52AD02145F5FCE3A_18.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class RTXVolumeBehaviour; }
namespace System { class Object; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class RTXVolume; }

#define CLASS_4_CE10D09BD1801DE0_14_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x7143200)
#define CLASS_4_CE10D09BD1801DE0_14_METHOD_4_336B51EF746572BB_OFFSET UNITYSDK_OFFSET(0x71401D0)
#define CLASS_4_CE10D09BD1801DE0_14_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x71431E0)
#define CLASS_4_CE10D09BD1801DE0_14_METHOD_4_B247C6D88E785B91_OFFSET UNITYSDK_OFFSET(0x713F940)
#define CLASS_4_CE10D09BD1801DE0_14_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x71431F0)
#define CLASS_4_CE10D09BD1801DE0_14_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x713FE80)
#define CLASS_4_CE10D09BD1801DE0_14_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x7141E60)
#define CLASS_4_CE10D09BD1801DE0_14__CTOR_OFFSET UNITYSDK_OFFSET(0x7143160)

inline static constexpr unsigned int Class_4_CE10D09BD1801DE0_14_TypeDefinitionIndex = 60312;

class Class_4_CE10D09BD1801DE0_14 : public ::Class_3_20577CF7FC6B1263<::UnityEngine::Rendering::Universal::RTXVolume*, ::MoleMole::Timeline::RTXVolumeBehaviour*>
{
public:
	::UnityEngine::Texture* Field_4_42; // 0x38
	::UnityEngine::Texture* Field_4_44; // 0x40
	::Class_4_CE10D09BD1801DE0_14_Struct_2_52AD02145F5FCE3A_18 Field_4_0; // 0x48
	::UnityEngine::Texture* Field_4_40; // 0x108
	::System::Single Field_4_18; // 0x110
	::System::Single Field_4_22; // 0x114
	::System::Single Field_4_28; // 0x118
	::System::Single Field_4_12; // 0x11C
	::System::Single Field_4_14; // 0x120
	::System::Boolean Field_4_7; // 0x124
	::System::Boolean Field_4_46; // 0x125
	::System::Boolean Field_4_13; // 0x126
	::System::Single Field_4_36; // 0x128
	::System::Int32 Field_4_8; // 0x12C
	::System::Boolean Field_4_37; // 0x130
	::System::Boolean Field_4_17; // 0x131
	::System::Boolean Field_4_27; // 0x132
	::System::Boolean Field_4_4; // 0x133
	::System::Int32 Field_4_6; // 0x134
	::System::Single Field_4_32; // 0x138
	::System::Single Field_4_20; // 0x13C
	::System::Boolean Field_4_29; // 0x140
	::System::Boolean Field_4_43; // 0x141
	::System::Boolean Field_4_5; // 0x142
	::System::Boolean Field_4_9; // 0x143
	::System::Single Field_4_24; // 0x144
	::System::Boolean Field_4_35; // 0x148
	::System::Boolean Field_4_21; // 0x149
	::System::Boolean Field_4_33; // 0x14A
	::System::Boolean Field_4_41; // 0x14B
	::System::Single Field_4_38; // 0x14C
	::System::Single Field_4_30; // 0x150
	::System::Boolean Field_4_3; // 0x154
	::System::Boolean Field_4_23; // 0x155
	::System::Boolean Field_4_11; // 0x156
	::System::Boolean Field_4_39; // 0x157
	::System::Single Field_4_10; // 0x158
	::System::Boolean Field_4_16; // 0x15C
	::System::Boolean Field_4_31; // 0x15D
	::System::Boolean Field_4_19; // 0x15E
	::System::Boolean Field_4_2; // 0x15F
	::System::Single Field_4_34; // 0x160
	::System::Boolean Field_4_25; // 0x164
	::System::Boolean Field_4_45; // 0x165
	::System::Boolean Field_4_1; // 0x166
	::System::Boolean Field_4_15; // 0x167
	::System::Single Field_4_26; // 0x168

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_14__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_B247C6D88E785B91()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_14_METHOD_4_B247C6D88E785B91_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_14_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_14_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_14_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_336B51EF746572BB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_14_METHOD_4_336B51EF746572BB_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_14_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_14_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};
