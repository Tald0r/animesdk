#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Sensor.h"

namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1979A2B0)
#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1979A230)
#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x1979A210)
#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x1979A300)
#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1979A340)
#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1979A270)
#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_SET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x1979A220)
#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1979A3C0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int GravitySensor_TypeDefinitionIndex = 27553;

	class GravitySensor : public ::UnityEngine::InputSystem::Sensor
	{
	public:
		static ::UnityEngine::InputSystem::GravitySensor** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::GravitySensor**)Il2CppClass::FromTypeDefinitionIndex(GravitySensor_TypeDefinitionIndex)->GetStaticField(0x20620);
		}
		::UnityEngine::InputSystem::Controls::Vector3Control* _gravity_k__BackingField; // 0x158

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_gravity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_GET_GRAVITY_OFFSET))(this);
		}

		::System::Void set_gravity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_SET_GRAVITY_OFFSET))(this, value);
		}

		static ::UnityEngine::InputSystem::GravitySensor* get_current()
		{
			return ((::UnityEngine::InputSystem::GravitySensor*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::GravitySensor* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::GravitySensor*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_SET_CURRENT_OFFSET))(value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_FINISHSETUP_OFFSET))(this);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_MAKECURRENT_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_ONREMOVED_OFFSET))(this);
		}
	};
}
