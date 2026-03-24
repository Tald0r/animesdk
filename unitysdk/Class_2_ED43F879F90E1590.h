#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define CLASS_2_ED43F879F90E1590_METHOD_2_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x6F2EBA0)
#define CLASS_2_ED43F879F90E1590_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x6F2EFE0)
#define CLASS_2_ED43F879F90E1590_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x6F2EFF0)
#define CLASS_2_ED43F879F90E1590_METHOD_2_8F101C90A7C6542B_OFFSET UNITYSDK_OFFSET(0x6F2E9A0)
#define CLASS_2_ED43F879F90E1590_METHOD_2_A07CF89F60604380_OFFSET UNITYSDK_OFFSET(0x6F2D850)
#define CLASS_2_ED43F879F90E1590_METHOD_2_A4C1A04E39B18C75_OFFSET UNITYSDK_OFFSET(0x6F2DC90)
#define CLASS_2_ED43F879F90E1590_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x6F2EFD0)
#define CLASS_2_ED43F879F90E1590_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x6F2D570)
#define CLASS_2_ED43F879F90E1590_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x6F2DAC0)
#define CLASS_2_ED43F879F90E1590_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x6F2E300)
#define CLASS_2_ED43F879F90E1590__CTOR_OFFSET UNITYSDK_OFFSET(0x6F2EB50)

inline static constexpr unsigned int Class_2_ED43F879F90E1590_TypeDefinitionIndex = 48716;

class Class_2_ED43F879F90E1590 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::Material* Field_2_17; // 0x10
	::UnityEngine::Color Field_2_4; // 0x18
	::UnityEngine::Color Field_2_2; // 0x28
	::System::Single Field_2_7; // 0x38
	::System::Single Field_2_10; // 0x3C
	::System::Single Field_2_13; // 0x40
	::System::Single Field_2_6; // 0x44
	::UnityEngine::Color Field_2_3; // 0x48
	::System::Boolean Field_2_1; // 0x58
	::System::Boolean Field_2_15; // 0x59
	::System::Boolean Field_2_14; // 0x5A
	::System::Boolean Field_2_5; // 0x5B
	::System::Boolean Field_2_0; // 0x5C
	::System::Boolean Field_2_16; // 0x5D
	::System::Single Field_2_11; // 0x60
	::System::Single Field_2_9; // 0x64
	::System::Single Field_2_12; // 0x68
	::System::Single Field_2_8; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED43F879F90E1590__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_ED43F879F90E1590_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_ED43F879F90E1590_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ED43F879F90E1590_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Material* Method_2_8F101C90A7C6542B(::System::Object* a1)
	{
		return ((::UnityEngine::Material*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ED43F879F90E1590_METHOD_2_8F101C90A7C6542B_OFFSET))(this, a1);
	}

	::System::Void Method_2_A07CF89F60604380(::UnityEngine::Renderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_2_ED43F879F90E1590_METHOD_2_A07CF89F60604380_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ED43F879F90E1590_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED43F879F90E1590_METHOD_2_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_ED43F879F90E1590_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_ED43F879F90E1590_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A4C1A04E39B18C75(::System::Boolean a1, ::UnityEngine::Color a2, ::UnityEngine::Color a3, ::UnityEngine::Color a4, ::System::Boolean a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11, ::System::Single a12, ::System::Single a13, ::System::Boolean a14, ::System::Boolean a15, ::System::Boolean a16)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_ED43F879F90E1590_METHOD_2_A4C1A04E39B18C75_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
	}
};
