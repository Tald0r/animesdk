#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class PBDDeformer; }
namespace UnityEngine::Rendering::Universal { class SingleWeatherConfigWind; }

#define UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_APPLYWIND_OFFSET UNITYSDK_OFFSET(0x19ED4990)
#define UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_GET_WINDDIRECTIONWS_OFFSET UNITYSDK_OFFSET(0x19ED4710)
#define UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19ED5050)
#define UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x19ED4BC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19ED4740)
#define UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x19ED4940)
#define UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_SET_WINDDIRECTIONWS_OFFSET UNITYSDK_OFFSET(0x19ED4730)
#define UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_UPDATELOCALWINDDIRECTION_OFFSET UNITYSDK_OFFSET(0x19ED4820)
#define UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19ED50B0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int FlagWindController_TypeDefinitionIndex = 29471;

	class FlagWindController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::PBDDeformer* m_Deformer; // 0x18
		::System::Single windIntensity; // 0x20
		::System::Boolean useLocalSpaceWindDirection; // 0x24
		::UnityEngine::Vector3 windDirection; // 0x28
		::System::Single forceRandom; // 0x34
		::System::Single directionRandom; // 0x38
		::System::Boolean ignoreMass; // 0x3C
		::UnityEngine::Vector3 _windDirectionWS_k__BackingField; // 0x40
		::System::Single m_TimeDelay; // 0x4C
		::System::Single timeDelay; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_windDirectionWS()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_GET_WINDDIRECTIONWS_OFFSET))(this);
		}

		::System::Void set_windDirectionWS(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_SET_WINDDIRECTIONWS_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_ONVALIDATE_OFFSET))(this);
		}

		::System::Void UpdateLocalWindDirection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_UPDATELOCALWINDDIRECTION_OFFSET))(this);
		}

		::System::Void ApplyWind(::UnityEngine::Rendering::Universal::SingleWeatherConfigWind* windConfig, ::System::Single fixedTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::SingleWeatherConfigWind*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_APPLYWIND_OFFSET))(this, windConfig, fixedTime);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLAGWINDCONTROLLER_ONDISABLE_OFFSET))(this);
		}
	};
}
