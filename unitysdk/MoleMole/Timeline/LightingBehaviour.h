#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/LightingBehaviour_Struct_2_52AD02145F5FCE36_11.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/OtherLightShadowResolution.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SimulatingPlatform.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class Lighting; }

#define MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x67D38C0)
#define MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_METHOD_4_26650B228AC14071_OFFSET UNITYSDK_OFFSET(0x67D3E50)
#define MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x67D7BB0)
#define MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x67D7BE0)
#define MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x67D7BD0)
#define MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x67D7BC0)
#define MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_METHOD_4_D68547FF19A170E2_OFFSET UNITYSDK_OFFSET(0x67D4520)
#define MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x67D4210)
#define MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x67D6B60)
#define MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x67D6EE0)
#define MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x67D7AA0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int LightingBehaviour_TypeDefinitionIndex = 44322;

	class LightingBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::LightingBehaviour_Struct_2_52AD02145F5FCE36_11 _methodParm; // 0x18
		::System::Boolean enabled; // 0xBC
		::System::Boolean active_cascade0ToNextBlendIntensity; // 0xBD
		::System::Boolean use_cascade0ToNextBlendIntensity; // 0xBE
		::System::Single cascade0ToNextBlendIntensity; // 0xC0
		::System::Boolean active_cascade1ToNextBlendIntensity; // 0xC4
		::System::Boolean use_cascade1ToNextBlendIntensity; // 0xC5
		::System::Single cascade1ToNextBlendIntensity; // 0xC8
		::System::Boolean active_cascade2ToNextBlendIntensity; // 0xCC
		::System::Boolean use_cascade2ToNextBlendIntensity; // 0xCD
		::System::Single cascade2ToNextBlendIntensity; // 0xD0
		::System::Boolean active_cascade3ToNextBlendIntensity; // 0xD4
		::System::Boolean use_cascade3ToNextBlendIntensity; // 0xD5
		::System::Single cascade3ToNextBlendIntensity; // 0xD8
		::System::Boolean active_maxShadowDistance; // 0xDC
		::System::Boolean use_maxShadowDistance; // 0xDD
		::System::Single maxShadowDistance; // 0xE0
		::System::Boolean active_cascadeShadowSplitCount; // 0xE4
		::System::Boolean use_cascadeShadowSplitCount; // 0xE5
		::System::Int32 cascadeShadowSplitCount; // 0xE8
		::System::Boolean active_cascadeShadowSplit0; // 0xEC
		::System::Boolean use_cascadeShadowSplit0; // 0xED
		::System::Single cascadeShadowSplit0; // 0xF0
		::System::Boolean active_cascadeShadowSplit1; // 0xF4
		::System::Boolean use_cascadeShadowSplit1; // 0xF5
		::System::Single cascadeShadowSplit1; // 0xF8
		::System::Boolean active_cascadeShadowSplit2; // 0xFC
		::System::Boolean use_cascadeShadowSplit2; // 0xFD
		::System::Single cascadeShadowSplit2; // 0x100
		::System::Boolean active_otherLightShadowResolution; // 0x104
		::System::Boolean use_otherLightShadowResolution; // 0x105
		::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution otherLightShadowResolution; // 0x108
		::System::Boolean active_shadowBlurRadius; // 0x10C
		::System::Boolean use_shadowBlurRadius; // 0x10D
		::System::Single shadowBlurRadius; // 0x110
		::System::Boolean active_isContactShadowOn; // 0x114
		::System::Boolean use_isContactShadowOn; // 0x115
		::System::Boolean isContactShadowOn; // 0x116
		::System::Boolean active_overrideAdditionalLightsDiffuseOnlyDistThreshold; // 0x117
		::System::Boolean use_overrideAdditionalLightsDiffuseOnlyDistThreshold; // 0x118
		::System::Boolean overrideAdditionalLightsDiffuseOnlyDistThreshold; // 0x119
		::System::Boolean active_additionalLightsDiffuseOnlyDistThreshold; // 0x11A
		::System::Boolean use_additionalLightsDiffuseOnlyDistThreshold; // 0x11B
		::System::Single additionalLightsDiffuseOnlyDistThreshold; // 0x11C
		::System::Boolean active_punctualLightShadowStrength; // 0x120
		::System::Boolean use_punctualLightShadowStrength; // 0x121
		::System::Single punctualLightShadowStrength; // 0x124
		::System::Boolean active_lockMaxShadowDistance; // 0x128
		::System::Boolean use_lockMaxShadowDistance; // 0x129
		::System::Boolean lockMaxShadowDistance; // 0x12A
		::System::Boolean active_lockSplitByMetric; // 0x12B
		::System::Boolean use_lockSplitByMetric; // 0x12C
		::System::Boolean lockSplitByMetric; // 0x12D
		::System::Boolean active_overridePunctualLightShadowResolutionConfig; // 0x12E
		::System::Boolean use_overridePunctualLightShadowResolutionConfig; // 0x12F
		::System::Boolean overridePunctualLightShadowResolutionConfig; // 0x130
		::System::Boolean active_localLightLodBiasMultiply; // 0x131
		::System::Boolean use_localLightLodBiasMultiply; // 0x132
		::System::Single localLightLodBiasMultiply; // 0x134
		::System::Boolean active_microShadowIntensity; // 0x138
		::System::Boolean use_microShadowIntensity; // 0x139
		::System::Single microShadowIntensity; // 0x13C
		::System::Boolean active_disableShadowMapCache; // 0x140
		::System::Boolean use_disableShadowMapCache; // 0x141
		::System::Boolean disableShadowMapCache; // 0x142
		::System::Boolean active_enableCustomMaxLightCount; // 0x143
		::System::Boolean use_enableCustomMaxLightCount; // 0x144
		::System::Boolean enableCustomMaxLightCount; // 0x145
		::System::Boolean active_maxLocalLightCount; // 0x146
		::System::Boolean use_maxLocalLightCount; // 0x147
		::System::Int32 maxLocalLightCount; // 0x148
		::System::Boolean active_disableLocalLightShadowMapCached; // 0x14C
		::System::Boolean use_disableLocalLightShadowMapCached; // 0x14D
		::System::Boolean disableLocalLightShadowMapCached; // 0x14E
		::System::Boolean active_disableLocalLightShadowOnPlatform; // 0x14F
		::System::Boolean use_disableLocalLightShadowOnPlatform; // 0x150
		::UnityEngine::Rendering::Universal::SimulatingPlatform disableLocalLightShadowOnPlatform; // 0x154
		::System::Boolean active_useConstantLodBiasValue; // 0x158
		::System::Boolean use_useConstantLodBiasValue; // 0x159
		::System::Boolean useConstantLodBiasValue; // 0x15A
		::UnityEngine::Rendering::Universal::Lighting* _Lighting; // 0x160

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::Universal::Lighting* Method_4_26650B228AC14071(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::Lighting*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_METHOD_4_26650B228AC14071_OFFSET))(this, a1);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_D68547FF19A170E2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_METHOD_4_D68547FF19A170E2_OFFSET))(this);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}
	};
}
