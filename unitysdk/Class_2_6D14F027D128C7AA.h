#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Timeline { class OverrideRadialBlurBehaviour; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class RadialBlur; }

#define CLASS_2_6D14F027D128C7AA_METHOD_2_324AEE341AAA7A1B_1_OFFSET UNITYSDK_OFFSET(0x7192A60)
#define CLASS_2_6D14F027D128C7AA_METHOD_2_324AEE341AAA7A1B_2_OFFSET UNITYSDK_OFFSET(0x7192A70)
#define CLASS_2_6D14F027D128C7AA_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x7192A50)
#define CLASS_2_6D14F027D128C7AA_METHOD_2_51466B028D7EFD50_OFFSET UNITYSDK_OFFSET(0x71927B0)
#define CLASS_2_6D14F027D128C7AA_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x7192A40)
#define CLASS_2_6D14F027D128C7AA_METHOD_2_837BAD498C4D4446_OFFSET UNITYSDK_OFFSET(0x7191D50)
#define CLASS_2_6D14F027D128C7AA_METHOD_2_901DEE86232ECD06_OFFSET UNITYSDK_OFFSET(0x71920E0)
#define CLASS_2_6D14F027D128C7AA_METHOD_2_C433AF37CE9D6E5B_OFFSET UNITYSDK_OFFSET(0x7192740)
#define CLASS_2_6D14F027D128C7AA_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x7192A80)
#define CLASS_2_6D14F027D128C7AA_METHOD_2_F234B52FBDF4059C_OFFSET UNITYSDK_OFFSET(0x71919B0)
#define CLASS_2_6D14F027D128C7AA_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x71923B0)
#define CLASS_2_6D14F027D128C7AA_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x7191240)
#define CLASS_2_6D14F027D128C7AA_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x71912B0)
#define CLASS_2_6D14F027D128C7AA_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x71926A0)
#define CLASS_2_6D14F027D128C7AA_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x7191320)
#define CLASS_2_6D14F027D128C7AA__CTOR_OFFSET UNITYSDK_OFFSET(0x7192730)

inline static constexpr unsigned int Class_2_6D14F027D128C7AA_TypeDefinitionIndex = 53700;

class Class_2_6D14F027D128C7AA : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::GameObject* Field_2_0; // 0x10
	::UnityEngine::Rendering::Universal::RadialBlur* Field_2_6; // 0x18
	::UnityEngine::Rendering::Volume* Field_2_1; // 0x20
	::System::Boolean Field_2_2; // 0x28
	::System::Boolean Field_2_7; // 0x29
	::System::Boolean Field_2_4; // 0x2A
	::System::Boolean Field_2_3; // 0x2B
	::System::Single Field_2_8; // 0x2C
	::UnityEngine::Vector2 Field_2_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D14F027D128C7AA__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_6D14F027D128C7AA_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_6D14F027D128C7AA_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6D14F027D128C7AA_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_6D14F027D128C7AA_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_6D14F027D128C7AA_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void Method_2_C433AF37CE9D6E5B(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_6D14F027D128C7AA_METHOD_2_C433AF37CE9D6E5B_OFFSET))(this, a1);
	}

	::UnityEngine::Rendering::Universal::RadialBlur* Method_2_F234B52FBDF4059C()
	{
		return ((::UnityEngine::Rendering::Universal::RadialBlur*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D14F027D128C7AA_METHOD_2_F234B52FBDF4059C_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_2_51466B028D7EFD50(::UnityEngine::Vector2 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_6D14F027D128C7AA_METHOD_2_51466B028D7EFD50_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_901DEE86232ECD06(::System::Boolean a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_6D14F027D128C7AA_METHOD_2_901DEE86232ECD06_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2 Method_2_837BAD498C4D4446(::UnityEngine::Vector2 a1, ::MoleMole::Timeline::OverrideRadialBlurBehaviour* a2)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::MoleMole::Timeline::OverrideRadialBlurBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_6D14F027D128C7AA_METHOD_2_837BAD498C4D4446_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_6D14F027D128C7AA_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_6D14F027D128C7AA_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_324AEE341AAA7A1B_1(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_6D14F027D128C7AA_METHOD_2_324AEE341AAA7A1B_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_324AEE341AAA7A1B_2(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_6D14F027D128C7AA_METHOD_2_324AEE341AAA7A1B_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6D14F027D128C7AA_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};
