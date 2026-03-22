#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Sensor.h"

namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1A0FEAC0)
#define UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A0FE980)
#define UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_GET_MAGNETICFIELD_OFFSET UNITYSDK_OFFSET(0x1A0FE960)
#define UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x1A0FEA00)
#define UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1A0FEA40)
#define UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A0FE9C0)
#define UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_SET_MAGNETICFIELD_OFFSET UNITYSDK_OFFSET(0x1A0FE970)
#define UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0FEB10)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int MagneticFieldSensor_TypeDefinitionIndex = 27556;

	class MagneticFieldSensor : public ::UnityEngine::InputSystem::Sensor
	{
	public:
		static ::UnityEngine::InputSystem::MagneticFieldSensor** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::MagneticFieldSensor**)Il2CppClass::FromTypeDefinitionIndex(MagneticFieldSensor_TypeDefinitionIndex)->GetStaticField(0x202B0);
		}
		::UnityEngine::InputSystem::Controls::Vector3Control* _magneticField_k__BackingField; // 0x158

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_magneticField()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_GET_MAGNETICFIELD_OFFSET))(this);
		}

		::System::Void set_magneticField(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_SET_MAGNETICFIELD_OFFSET))(this, value);
		}

		static ::UnityEngine::InputSystem::MagneticFieldSensor* get_current()
		{
			return ((::UnityEngine::InputSystem::MagneticFieldSensor*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::MagneticFieldSensor* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::MagneticFieldSensor*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_SET_CURRENT_OFFSET))(value);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_MAKECURRENT_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_ONREMOVED_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_FINISHSETUP_OFFSET))(this);
		}
	};
}
