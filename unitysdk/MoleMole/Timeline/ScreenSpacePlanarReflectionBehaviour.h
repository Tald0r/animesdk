#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/MoleMole/Timeline/ScreenSpacePlanarReflectionBehaviour_Struct_2_52AD02145F5FCE36_27.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class ScreenSpacePlanarReflection; }

#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0xB8CEF30)
#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xB8D0A20)
#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0xB8D09F0)
#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_METHOD_4_86038EB414D95013_OFFSET UNITYSDK_OFFSET(0xB8CF1C0)
#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0xB8D0A10)
#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0xB8D0A00)
#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_METHOD_4_E2BCD1B56132A826_OFFSET UNITYSDK_OFFSET(0xB8CF6C0)
#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xB8CF580)
#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB8D03B0)
#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0xB8D0560)
#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8D09B0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ScreenSpacePlanarReflectionBehaviour_TypeDefinitionIndex = 64143;

	class ScreenSpacePlanarReflectionBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::ScreenSpacePlanarReflectionBehaviour_Struct_2_52AD02145F5FCE36_27 _methodParm; // 0x18
		::System::Boolean enabled; // 0x58
		::System::Boolean active_mirrorReflectionOverride; // 0x59
		::System::Boolean use_mirrorReflectionOverride; // 0x5A
		::System::Boolean mirrorReflectionOverride; // 0x5B
		::System::Boolean active_planarReflectionBlurAmount; // 0x5C
		::System::Boolean use_planarReflectionBlurAmount; // 0x5D
		::System::Single planarReflectionBlurAmount; // 0x60
		::System::Boolean active_planarReflectionLodSteps; // 0x64
		::System::Boolean use_planarReflectionLodSteps; // 0x65
		::System::Single planarReflectionLodSteps; // 0x68
		::System::Boolean active_planarReflectionMinSmoothness; // 0x6C
		::System::Boolean use_planarReflectionMinSmoothness; // 0x6D
		::System::Single planarReflectionMinSmoothness; // 0x70
		::System::Boolean active_planarReflectionSmoothnessFadeStart; // 0x74
		::System::Boolean use_planarReflectionSmoothnessFadeStart; // 0x75
		::System::Single planarReflectionSmoothnessFadeStart; // 0x78
		::System::Boolean active_Enabled; // 0x7C
		::System::Boolean use_Enabled; // 0x7D
		::System::Boolean Enabled; // 0x7E
		::System::Boolean active_FadeDistance; // 0x7F
		::System::Boolean use_FadeDistance; // 0x80
		::System::Single FadeDistance; // 0x84
		::System::Boolean active_StretchScale; // 0x88
		::System::Boolean use_StretchScale; // 0x89
		::System::Single StretchScale; // 0x8C
		::System::Boolean active_ScreenStretchThreshold; // 0x90
		::System::Boolean use_ScreenStretchThreshold; // 0x91
		::System::Single ScreenStretchThreshold; // 0x94
		::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection* _ScreenSpacePlanarReflection; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_E2BCD1B56132A826()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_METHOD_4_E2BCD1B56132A826_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection* Method_4_86038EB414D95013(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_METHOD_4_86038EB414D95013_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}
	};
}
