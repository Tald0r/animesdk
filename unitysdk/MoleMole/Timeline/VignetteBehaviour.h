#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/MoleMole/Timeline/VignetteBehaviour_Struct_2_52AD02145F5FCE36_18.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class Vignette; }

#define MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x67DE7D0)
#define MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_METHOD_4_049F28789E693AA7_OFFSET UNITYSDK_OFFSET(0xA4D5320)
#define MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xA4D4A40)
#define MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0xA4D4A50)
#define MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_METHOD_4_AE828D899505A3B4_OFFSET UNITYSDK_OFFSET(0xA4D4A60)
#define MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0xA4D5310)
#define MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0xA4D5300)
#define MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x67DE9B0)
#define MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x67DEAA0)
#define MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x67DEC00)
#define MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xA4D4A00)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int VignetteBehaviour_TypeDefinitionIndex = 55312;

	class VignetteBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::VignetteBehaviour_Struct_2_52AD02145F5FCE36_18 _methodParm; // 0x18
		::System::Boolean enabled; // 0x50
		::System::Boolean active_color; // 0x51
		::System::Boolean use_color; // 0x52
		::UnityEngine::Color color; // 0x54
		::System::Boolean active_center; // 0x64
		::System::Boolean use_center; // 0x65
		::UnityEngine::Vector2 center; // 0x68
		::System::Boolean active_intensity; // 0x70
		::System::Boolean use_intensity; // 0x71
		::System::Single intensity; // 0x74
		::System::Boolean active_smoothness; // 0x78
		::System::Boolean use_smoothness; // 0x79
		::System::Single smoothness; // 0x7C
		::System::Boolean active_rounded; // 0x80
		::System::Boolean use_rounded; // 0x81
		::System::Boolean rounded; // 0x82
		::UnityEngine::Rendering::Universal::Vignette* _Vignette; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_AE828D899505A3B4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_METHOD_4_AE828D899505A3B4_OFFSET))(this);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Universal::Vignette* Method_4_049F28789E693AA7(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::Vignette*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VIGNETTEBEHAVIOUR_METHOD_4_049F28789E693AA7_OFFSET))(this, a1);
		}
	};
}
