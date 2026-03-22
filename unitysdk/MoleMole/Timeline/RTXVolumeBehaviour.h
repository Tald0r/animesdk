#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/MoleMole/Timeline/RTXVolumeBehaviour_Struct_2_52AD02145F5FCE3A_32.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class RTXVolume; }

#define MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0xA4A7180)
#define MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xA4AA710)
#define MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_METHOD_4_5F1FE78F971E9268_OFFSET UNITYSDK_OFFSET(0xA4A7760)
#define MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0xA4AA720)
#define MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_METHOD_4_80313B77C31AD02B_OFFSET UNITYSDK_OFFSET(0xA4A7DC0)
#define MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0xA4AA740)
#define MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0xA4AA730)
#define MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xA4A7B20)
#define MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xA4A99F0)
#define MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0xA4A9D00)
#define MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xA4AA660)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RTXVolumeBehaviour_TypeDefinitionIndex = 78865;

	class RTXVolumeBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::RTXVolumeBehaviour_Struct_2_52AD02145F5FCE3A_32 _methodParm; // 0x18
		::System::Boolean behaviorEnabled; // 0xD8
		::System::Boolean active_enableRTXSubConfigs1; // 0xD9
		::System::Boolean use_enableRTXSubConfigs1; // 0xDA
		::System::Boolean enableRTXSubConfigs1; // 0xDB
		::System::Boolean active_areaLightEnabled; // 0xDC
		::System::Boolean use_areaLightEnabled; // 0xDD
		::System::Boolean areaLightEnabled; // 0xDE
		::System::Boolean active_pvSubstepNum; // 0xDF
		::System::Boolean use_pvSubstepNum; // 0xE0
		::System::Int32 pvSubstepNum; // 0xE4
		::System::Boolean active_qualityPreset; // 0xE8
		::System::Boolean use_qualityPreset; // 0xE9
		::System::Int32 qualityPreset; // 0xEC
		::System::Boolean active_rayBudget; // 0xF0
		::System::Boolean use_rayBudget; // 0xF1
		::System::Single rayBudget; // 0xF4
		::System::Boolean active_resolutionScale; // 0xF8
		::System::Boolean use_resolutionScale; // 0xF9
		::System::Single resolutionScale; // 0xFC
		::System::Boolean active_responseSpeed; // 0x100
		::System::Boolean use_responseSpeed; // 0x101
		::System::Single responseSpeed; // 0x104
		::System::Boolean active_enabled; // 0x108
		::System::Boolean use_enabled; // 0x109
		::System::Boolean enabled; // 0x10A
		::System::Boolean active_boost; // 0x10B
		::System::Boolean use_boost; // 0x10C
		::System::Single boost; // 0x110
		::System::Boolean active_specularBoost; // 0x114
		::System::Boolean use_specularBoost; // 0x115
		::System::Single specularBoost; // 0x118
		::System::Boolean active_skyDiffuseScale; // 0x11C
		::System::Boolean use_skyDiffuseScale; // 0x11D
		::System::Single skyDiffuseScale; // 0x120
		::System::Boolean active_skySpecularScale; // 0x124
		::System::Boolean use_skySpecularScale; // 0x125
		::System::Single skySpecularScale; // 0x128
		::System::Boolean active_splitSpecThreshold; // 0x12C
		::System::Boolean use_splitSpecThreshold; // 0x12D
		::System::Single splitSpecThreshold; // 0x130
		::System::Boolean active_microAOStrength; // 0x134
		::System::Boolean use_microAOStrength; // 0x135
		::System::Single microAOStrength; // 0x138
		::System::Boolean active_multiBounceScale; // 0x13C
		::System::Boolean use_multiBounceScale; // 0x13D
		::System::Single multiBounceScale; // 0x140
		::System::Boolean active_multiBounceFarDistScale; // 0x144
		::System::Boolean use_multiBounceFarDistScale; // 0x145
		::System::Single multiBounceFarDistScale; // 0x148
		::System::Boolean active_multiBounceIndoorScale; // 0x14C
		::System::Boolean use_multiBounceIndoorScale; // 0x14D
		::System::Single multiBounceIndoorScale; // 0x150
		::System::Boolean active_multiBounceScaleMaxDist; // 0x154
		::System::Boolean use_multiBounceScaleMaxDist; // 0x155
		::System::Single multiBounceScaleMaxDist; // 0x158
		::System::Boolean active_lightmapBoost; // 0x15C
		::System::Boolean use_lightmapBoost; // 0x15D
		::System::Single lightmapBoost; // 0x160
		::System::Boolean active_lut; // 0x164
		::System::Boolean use_lut; // 0x165
		::UnityEngine::Texture* lut; // 0x168
		::System::Boolean active_roughnessLut; // 0x170
		::System::Boolean use_roughnessLut; // 0x171
		::UnityEngine::Texture* roughnessLut; // 0x178
		::System::Boolean active_multiBounceAlbedoLut; // 0x180
		::System::Boolean use_multiBounceAlbedoLut; // 0x181
		::UnityEngine::Texture* multiBounceAlbedoLut; // 0x188
		::UnityEngine::Rendering::Universal::RTXVolume* _RTXVolume; // 0x190

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Universal::RTXVolume* Method_4_5F1FE78F971E9268(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::RTXVolume*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_METHOD_4_5F1FE78F971E9268_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_80313B77C31AD02B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_METHOD_4_80313B77C31AD02B_OFFSET))(this);
		}
	};
}
