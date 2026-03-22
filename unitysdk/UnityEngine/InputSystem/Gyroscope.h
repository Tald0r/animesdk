#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Sensor.h"

namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x19EC8200)
#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE_GET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x19EC80A0)
#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19EC80C0)
#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x19EC8140)
#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x19EC8180)
#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE_SET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x19EC80B0)
#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19EC8100)
#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x19EC8250)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Gyroscope_TypeDefinitionIndex = 27552;

	class Gyroscope : public ::UnityEngine::InputSystem::Sensor
	{
	public:
		static ::UnityEngine::InputSystem::Gyroscope** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::Gyroscope**)Il2CppClass::FromTypeDefinitionIndex(Gyroscope_TypeDefinitionIndex)->GetStaticField(0x1FED0);
		}
		::UnityEngine::InputSystem::Controls::Vector3Control* _angularVelocity_k__BackingField; // 0x158

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_angularVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE_GET_ANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_angularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE_SET_ANGULARVELOCITY_OFFSET))(this, value);
		}

		static ::UnityEngine::InputSystem::Gyroscope* get_current()
		{
			return ((::UnityEngine::InputSystem::Gyroscope*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::Gyroscope* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Gyroscope*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE_SET_CURRENT_OFFSET))(value);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE_MAKECURRENT_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE_ONREMOVED_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE_FINISHSETUP_OFFSET))(this);
		}
	};
}
