#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }

#define CLASS_2_3A216A0B03EBC3BB_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x7BFE070)
#define CLASS_2_3A216A0B03EBC3BB_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x7BFE090)
#define CLASS_2_3A216A0B03EBC3BB_METHOD_2_7FBCF1F5AE325F22_OFFSET UNITYSDK_OFFSET(0x7BFD3C0)
#define CLASS_2_3A216A0B03EBC3BB_METHOD_2_8438EF2D52C7A6F5_OFFSET UNITYSDK_OFFSET(0x7BFCF10)
#define CLASS_2_3A216A0B03EBC3BB_METHOD_2_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0x7BFE0A0)
#define CLASS_2_3A216A0B03EBC3BB_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x7BFE080)
#define CLASS_2_3A216A0B03EBC3BB_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x7BFCC20)
#define CLASS_2_3A216A0B03EBC3BB_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x7BFD240)
#define CLASS_2_3A216A0B03EBC3BB_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x7BFDA00)
#define CLASS_2_3A216A0B03EBC3BB__CTOR_OFFSET UNITYSDK_OFFSET(0x7BFE020)

inline static constexpr unsigned int Class_2_3A216A0B03EBC3BB_TypeDefinitionIndex = 72441;

class Class_2_3A216A0B03EBC3BB : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Il2CppArray<::UnityEngine::Material*>* Field_2_17; // 0x10
	::System::Single Field_2_10; // 0x18
	::System::Single Field_2_12; // 0x1C
	::System::Single Field_2_7; // 0x20
	::System::Single Field_2_8; // 0x24
	::System::Single Field_2_9; // 0x28
	::System::Single Field_2_13; // 0x2C
	::UnityEngine::Color Field_2_2; // 0x30
	::System::Single Field_2_6; // 0x40
	::UnityEngine::Color Field_2_3; // 0x44
	::System::Single Field_2_11; // 0x54
	::System::Boolean Field_2_16; // 0x58
	::System::Boolean Field_2_1; // 0x59
	::System::Boolean Field_2_14; // 0x5A
	::System::Boolean Field_2_5; // 0x5B
	::System::Boolean Field_2_0; // 0x5C
	::System::Boolean Field_2_15; // 0x5D
	::UnityEngine::Color Field_2_4; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A216A0B03EBC3BB__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_3A216A0B03EBC3BB_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_3A216A0B03EBC3BB_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3A216A0B03EBC3BB_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7FBCF1F5AE325F22(::System::Boolean a1, ::UnityEngine::Color a2, ::UnityEngine::Color a3, ::UnityEngine::Color a4, ::System::Boolean a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11, ::System::Single a12, ::System::Single a13, ::System::Boolean a14, ::System::Boolean a15, ::System::Boolean a16)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3A216A0B03EBC3BB_METHOD_2_7FBCF1F5AE325F22_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_3A216A0B03EBC3BB_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3A216A0B03EBC3BB_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_3A216A0B03EBC3BB_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8438EF2D52C7A6F5(::Il2CppArray<::UnityEngine::MeshRenderer*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::MeshRenderer*>*))((::PBYTE)hIl2Cpp + CLASS_2_3A216A0B03EBC3BB_METHOD_2_8438EF2D52C7A6F5_OFFSET))(this, a1);
	}

	::System::Void Method_2_C5F2E178DAEB1793()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A216A0B03EBC3BB_METHOD_2_C5F2E178DAEB1793_OFFSET))(this);
	}
};
