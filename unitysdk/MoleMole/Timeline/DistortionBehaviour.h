#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/DistortionBehaviour_Struct_2_52AD02145F5FCE36_19.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DistortionQueueType.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class Distortion; }

#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x7F2E280)
#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x7F2FBC0)
#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x7F2FB90)
#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_METHOD_4_970DD0C46A33229F_OFFSET UNITYSDK_OFFSET(0x7F2E490)
#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x7F2FBB0)
#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x7F2FBA0)
#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_METHOD_4_E2BCD1B56132A826_OFFSET UNITYSDK_OFFSET(0x7F2E960)
#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x7F2E850)
#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x7F2F610)
#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x7F2F790)
#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x7F2FB70)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int DistortionBehaviour_TypeDefinitionIndex = 58559;

	class DistortionBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::DistortionBehaviour_Struct_2_52AD02145F5FCE36_19 _methodParm; // 0x18
		::System::Boolean enabled; // 0x50
		::System::Boolean active_DoDistortionAfterDof; // 0x51
		::System::Boolean use_DoDistortionAfterDof; // 0x52
		::System::Boolean DoDistortionAfterDof; // 0x53
		::System::Boolean active_downScaleFactor; // 0x54
		::System::Boolean use_downScaleFactor; // 0x55
		::System::Int32 downScaleFactor; // 0x58
		::System::Boolean active_intensity; // 0x5C
		::System::Boolean use_intensity; // 0x5D
		::System::Single intensity; // 0x60
		::System::Boolean active_rgbShift; // 0x64
		::System::Boolean use_rgbShift; // 0x65
		::UnityEngine::Vector3 rgbShift; // 0x68
		::System::Boolean active_separateRGBIntensity; // 0x74
		::System::Boolean use_separateRGBIntensity; // 0x75
		::System::Single separateRGBIntensity; // 0x78
		::System::Boolean active_forceActive; // 0x7C
		::System::Boolean use_forceActive; // 0x7D
		::System::Boolean forceActive; // 0x7E
		::System::Boolean active_effectRenderQueue; // 0x7F
		::System::Boolean use_effectRenderQueue; // 0x80
		::UnityEngine::NAPRenderPipeline0::DistortionQueueType effectRenderQueue; // 0x84
		::UnityEngine::Rendering::Universal::Distortion* _Distortion; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_E2BCD1B56132A826()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_METHOD_4_E2BCD1B56132A826_OFFSET))(this);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Universal::Distortion* Method_4_970DD0C46A33229F(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::Distortion*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_METHOD_4_970DD0C46A33229F_OFFSET))(this, a1);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}
	};
}
