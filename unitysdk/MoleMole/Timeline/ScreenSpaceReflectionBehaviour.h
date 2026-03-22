#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/MoleMole/Timeline/ScreenSpaceReflectionBehaviour_Struct_2_52AD02145F5FCE36_39.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SsrQuality.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class ScreenSpaceReflection; }

#define MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x9ADDE70)
#define MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x9ADF4F0)
#define MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x9ADF4D0)
#define MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x9ADF500)
#define MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x9ADF4E0)
#define MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_METHOD_4_C38AA259F0B46320_OFFSET UNITYSDK_OFFSET(0x9ADE510)
#define MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_METHOD_4_D9CC535573E160CF_OFFSET UNITYSDK_OFFSET(0x9ADE060)
#define MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x9ADE410)
#define MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x9ADEFC0)
#define MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x9ADF130)
#define MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x9ADF4A0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ScreenSpaceReflectionBehaviour_TypeDefinitionIndex = 78001;

	class ScreenSpaceReflectionBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::ScreenSpaceReflectionBehaviour_Struct_2_52AD02145F5FCE36_39 _methodParm; // 0x18
		::System::Boolean behaviorEnabled; // 0x48
		::System::Boolean active_enabled; // 0x49
		::System::Boolean use_enabled; // 0x4A
		::System::Boolean enabled; // 0x4B
		::System::Boolean active_intensity; // 0x4C
		::System::Boolean use_intensity; // 0x4D
		::System::Single intensity; // 0x50
		::System::Boolean active_depthBufferThickness; // 0x54
		::System::Boolean use_depthBufferThickness; // 0x55
		::System::Single depthBufferThickness; // 0x58
		::System::Boolean active_screenFadeDistance; // 0x5C
		::System::Boolean use_screenFadeDistance; // 0x5D
		::System::Single screenFadeDistance; // 0x60
		::System::Boolean active_quality; // 0x64
		::System::Boolean use_quality; // 0x65
		::UnityEngine::NAPRenderPipeline0::SsrQuality quality; // 0x68
		::System::Boolean active_overrideGlobalPlanarReflectionConfig; // 0x6C
		::System::Boolean use_overrideGlobalPlanarReflectionConfig; // 0x6D
		::System::Boolean overrideGlobalPlanarReflectionConfig; // 0x6E
		::System::Boolean active_planarReflectionBlurAmount; // 0x6F
		::System::Boolean use_planarReflectionBlurAmount; // 0x70
		::System::Single planarReflectionBlurAmount; // 0x74
		::UnityEngine::Rendering::Universal::ScreenSpaceReflection* _ScreenSpaceReflection; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_C38AA259F0B46320()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_METHOD_4_C38AA259F0B46320_OFFSET))(this);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Universal::ScreenSpaceReflection* Method_4_D9CC535573E160CF(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::ScreenSpaceReflection*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_METHOD_4_D9CC535573E160CF_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}
	};
}
