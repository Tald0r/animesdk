#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/DepthOfFieldBehaviour_Struct_2_52AD02145F5FCE36_5.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DepthOfFieldMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DofDebugMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class DepthOfField; }

#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x7F2B6E0)
#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x7F2E250)
#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x7F2E240)
#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_METHOD_4_A307B521288CF6B1_OFFSET UNITYSDK_OFFSET(0x7F2BA80)
#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x7F2E270)
#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x7F2E260)
#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_METHOD_4_EEED34E9AAC26D51_OFFSET UNITYSDK_OFFSET(0x7F2C030)
#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x7F2BE40)
#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x7F2D7A0)
#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x7F2DA00)
#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x7F2E180)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int DepthOfFieldBehaviour_TypeDefinitionIndex = 40207;

	class DepthOfFieldBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::DepthOfFieldBehaviour_Struct_2_52AD02145F5FCE36_5 _methodParm; // 0x18
		::System::Boolean enabled; // 0x84
		::System::Boolean active_mode; // 0x85
		::System::Boolean use_mode; // 0x86
		::UnityEngine::Rendering::Universal::DepthOfFieldMode mode; // 0x88
		::System::Boolean active_gaussianStart; // 0x8C
		::System::Boolean use_gaussianStart; // 0x8D
		::System::Single gaussianStart; // 0x90
		::System::Boolean active_gaussianEnd; // 0x94
		::System::Boolean use_gaussianEnd; // 0x95
		::System::Single gaussianEnd; // 0x98
		::System::Boolean active_gaussianMaxRadius; // 0x9C
		::System::Boolean use_gaussianMaxRadius; // 0x9D
		::System::Single gaussianMaxRadius; // 0xA0
		::System::Boolean active_highQualitySampling; // 0xA4
		::System::Boolean use_highQualitySampling; // 0xA5
		::System::Boolean highQualitySampling; // 0xA6
		::System::Boolean active_focusDistance; // 0xA7
		::System::Boolean use_focusDistance; // 0xA8
		::System::Single focusDistance; // 0xAC
		::System::Boolean active_aperture; // 0xB0
		::System::Boolean use_aperture; // 0xB1
		::System::Single aperture; // 0xB4
		::System::Boolean active_focalLength; // 0xB8
		::System::Boolean use_focalLength; // 0xB9
		::System::Single focalLength; // 0xBC
		::System::Boolean active_bladeCount; // 0xC0
		::System::Boolean use_bladeCount; // 0xC1
		::System::Int32 bladeCount; // 0xC4
		::System::Boolean active_bladeCurvature; // 0xC8
		::System::Boolean use_bladeCurvature; // 0xC9
		::System::Single bladeCurvature; // 0xCC
		::System::Boolean active_bladeRotation; // 0xD0
		::System::Boolean use_bladeRotation; // 0xD1
		::System::Single bladeRotation; // 0xD4
		::System::Boolean active_debugMode; // 0xD8
		::System::Boolean use_debugMode; // 0xD9
		::UnityEngine::Rendering::Universal::DofDebugMode debugMode; // 0xDC
		::System::Boolean active_discardNearCoc; // 0xE0
		::System::Boolean use_discardNearCoc; // 0xE1
		::System::Boolean discardNearCoc; // 0xE2
		::System::Boolean active_doDofBeforeTransparent; // 0xE3
		::System::Boolean use_doDofBeforeTransparent; // 0xE4
		::System::Boolean doDofBeforeTransparent; // 0xE5
		::System::Boolean active_blurQualityHigh; // 0xE6
		::System::Boolean use_blurQualityHigh; // 0xE7
		::System::Boolean blurQualityHigh; // 0xE8
		::System::Boolean active_forceNoDefaultDof; // 0xE9
		::System::Boolean use_forceNoDefaultDof; // 0xEA
		::System::Boolean forceNoDefaultDof; // 0xEB
		::UnityEngine::Rendering::Universal::DepthOfField* _DepthOfField; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_EEED34E9AAC26D51()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_METHOD_4_EEED34E9AAC26D51_OFFSET))(this);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Universal::DepthOfField* Method_4_A307B521288CF6B1(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::DepthOfField*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_METHOD_4_A307B521288CF6B1_OFFSET))(this, a1);
		}
	};
}
