#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Sensor.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }

#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1979D410)
#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1979D2D0)
#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_GET_LIGHTLEVEL_OFFSET UNITYSDK_OFFSET(0x1979D2B0)
#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x1979D350)
#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1979D390)
#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1979D310)
#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_SET_LIGHTLEVEL_OFFSET UNITYSDK_OFFSET(0x1979D2C0)
#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1979D460)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int LightSensor_TypeDefinitionIndex = 27557;

	class LightSensor : public ::UnityEngine::InputSystem::Sensor
	{
	public:
		static ::UnityEngine::InputSystem::LightSensor** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::LightSensor**)Il2CppClass::FromTypeDefinitionIndex(LightSensor_TypeDefinitionIndex)->GetStaticField(0x20660);
		}
		::UnityEngine::InputSystem::Controls::AxisControl* _lightLevel_k__BackingField; // 0x158

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_lightLevel()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_GET_LIGHTLEVEL_OFFSET))(this);
		}

		::System::Void set_lightLevel(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_SET_LIGHTLEVEL_OFFSET))(this, value);
		}

		static ::UnityEngine::InputSystem::LightSensor* get_current()
		{
			return ((::UnityEngine::InputSystem::LightSensor*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::LightSensor* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::LightSensor*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_SET_CURRENT_OFFSET))(value);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_MAKECURRENT_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_ONREMOVED_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_FINISHSETUP_OFFSET))(this);
		}
	};
}
