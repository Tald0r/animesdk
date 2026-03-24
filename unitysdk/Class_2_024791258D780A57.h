#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Texture; }

#define CLASS_2_024791258D780A57_METHOD_2_324AEE341AAA7A1B_1_OFFSET UNITYSDK_OFFSET(0xA891320)
#define CLASS_2_024791258D780A57_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xA8912F0)
#define CLASS_2_024791258D780A57_METHOD_2_79ED6854413CA2F4_1_OFFSET UNITYSDK_OFFSET(0xA891310)
#define CLASS_2_024791258D780A57_METHOD_2_79ED6854413CA2F4_2_OFFSET UNITYSDK_OFFSET(0xA891330)
#define CLASS_2_024791258D780A57_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0xA891300)
#define CLASS_2_024791258D780A57_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xA8912E0)
#define CLASS_2_024791258D780A57_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xA890F00)
#define CLASS_2_024791258D780A57_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xA890E60)
#define CLASS_2_024791258D780A57_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xA890D80)
#define CLASS_2_024791258D780A57_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xA890DF0)
#define CLASS_2_024791258D780A57_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xA890FA0)
#define CLASS_2_024791258D780A57_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xA891040)
#define CLASS_2_024791258D780A57__CTOR_OFFSET UNITYSDK_OFFSET(0xA8911B0)

inline static constexpr unsigned int Class_2_024791258D780A57_TypeDefinitionIndex = 60189;

class Class_2_024791258D780A57 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::Gradient* Field_2_5; // 0x10
	::UnityEngine::Texture* Field_2_30; // 0x18
	::System::Single Field_2_44; // 0x20
	::UnityEngine::Color Field_2_24; // 0x24
	::System::Single Field_2_26; // 0x34
	::System::Single Field_2_51; // 0x38
	::System::Single Field_2_50; // 0x3C
	::UnityEngine::Color Field_2_23; // 0x40
	::UnityEngine::Color Field_2_25; // 0x50
	::System::Single Field_2_20; // 0x60
	::System::Single Field_2_22; // 0x64
	::System::Single Field_2_52; // 0x68
	::System::Single Field_2_21; // 0x6C
	::UnityEngine::Vector3 Field_2_34; // 0x70
	::UnityEngine::Color Field_2_3; // 0x7C
	::System::Single Field_2_41; // 0x8C
	::System::Single Field_2_2; // 0x90
	::System::Single Field_2_54; // 0x94
	::System::Boolean Field_2_35; // 0x98
	::System::Boolean Field_2_47; // 0x99
	::System::Boolean Field_2_18; // 0x9A
	::System::Boolean Field_2_19; // 0x9B
	::System::Single Field_2_1; // 0x9C
	::UnityEngine::Color Field_2_10; // 0xA0
	::System::Single Field_2_28; // 0xB0
	::System::Single Field_2_40; // 0xB4
	::System::Single Field_2_49; // 0xB8
	::System::Int32 Field_2_55; // 0xBC
	::UnityEngine::Vector2 Field_2_13; // 0xC0
	::System::Single Field_2_11; // 0xC8
	::System::Single Field_2_4; // 0xCC
	::System::Single Field_2_12; // 0xD0
	::UnityEngine::Color Field_2_7; // 0xD4
	::System::Single Field_2_14; // 0xE4
	::System::Single Field_2_9; // 0xE8
	::System::Single Field_2_46; // 0xEC
	::System::Single Field_2_27; // 0xF0
	::UnityEngine::Color Field_2_43; // 0xF4
	::System::Single Field_2_36; // 0x104
	::System::Single Field_2_39; // 0x108
	::System::Int32 Field_2_56; // 0x10C
	::System::Single Field_2_42; // 0x110
	::UnityEngine::Color Field_2_8; // 0x114
	::System::Single Field_2_45; // 0x124
	::UnityEngine::Vector2 Field_2_33; // 0x128
	::System::Single Field_2_15; // 0x130
	::UnityEngine::Vector4 Field_2_31; // 0x134
	::System::Single Field_2_53; // 0x144
	::System::Single Field_2_37; // 0x148
	::System::Single Field_2_29; // 0x14C
	::UnityEngine::Vector3 Field_2_17; // 0x150
	::System::Single Field_2_6; // 0x15C
	::System::Boolean Field_2_32; // 0x160
	::System::Boolean Field_2_48; // 0x161
	::System::Boolean Field_2_0; // 0x162
	::System::Single Field_2_38; // 0x164
	::System::Single Field_2_57; // 0x168
	::System::Single Field_2_16; // 0x16C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_024791258D780A57__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_024791258D780A57_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_024791258D780A57_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_024791258D780A57_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_024791258D780A57_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_024791258D780A57_PREPAREFRAME_OFFSET))(this, a1, a2);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_024791258D780A57_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_024791258D780A57_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_024791258D780A57_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_024791258D780A57_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_79ED6854413CA2F4_1(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_024791258D780A57_METHOD_2_79ED6854413CA2F4_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_324AEE341AAA7A1B_1(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_024791258D780A57_METHOD_2_324AEE341AAA7A1B_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_79ED6854413CA2F4_2(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_024791258D780A57_METHOD_2_79ED6854413CA2F4_2_OFFSET))(this, a1, a2);
	}
};
