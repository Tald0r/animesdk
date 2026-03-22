#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Sensor.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }

#define UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1A78B150)
#define UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A78B010)
#define UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1A78AFF0)
#define UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x1A78B090)
#define UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1A78B0D0)
#define UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A78B050)
#define UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_SET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1A78B000)
#define UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A78B1A0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int ProximitySensor_TypeDefinitionIndex = 27559;

	class ProximitySensor : public ::UnityEngine::InputSystem::Sensor
	{
	public:
		static ::UnityEngine::InputSystem::ProximitySensor** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::ProximitySensor**)Il2CppClass::FromTypeDefinitionIndex(ProximitySensor_TypeDefinitionIndex)->GetStaticField(0x205F0);
		}
		::UnityEngine::InputSystem::Controls::AxisControl* _distance_k__BackingField; // 0x158

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_distance()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_GET_DISTANCE_OFFSET))(this);
		}

		::System::Void set_distance(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_SET_DISTANCE_OFFSET))(this, value);
		}

		static ::UnityEngine::InputSystem::ProximitySensor* get_current()
		{
			return ((::UnityEngine::InputSystem::ProximitySensor*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::ProximitySensor* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::ProximitySensor*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_SET_CURRENT_OFFSET))(value);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_MAKECURRENT_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_ONREMOVED_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_FINISHSETUP_OFFSET))(this);
		}
	};
}
