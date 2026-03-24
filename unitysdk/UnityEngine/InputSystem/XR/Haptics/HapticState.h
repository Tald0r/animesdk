#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICSTATE_GET_SAMPLESAVAILABLE_OFFSET UNITYSDK_OFFSET(0x302230)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICSTATE_GET_SAMPLESQUEUED_OFFSET UNITYSDK_OFFSET(0x2F1F70)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICSTATE_SET_SAMPLESAVAILABLE_OFFSET UNITYSDK_OFFSET(0x302120)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICSTATE_SET_SAMPLESQUEUED_OFFSET UNITYSDK_OFFSET(0x302300)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x2F3C30)

namespace UnityEngine::InputSystem::XR::Haptics
{
	inline static constexpr unsigned int HapticState_TypeDefinitionIndex = 28559;

	struct alignas(4) HapticState
	{
		::System::UInt32 _samplesQueued_k__BackingField; // 0x10
		::System::UInt32 _samplesAvailable_k__BackingField; // 0x14

		::System::Void _ctor(::System::UInt32 samplesQueued, ::System::UInt32 samplesAvailable)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICSTATE__CTOR_OFFSET))(this, samplesQueued, samplesAvailable);
		}

		::System::UInt32 get_samplesQueued()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICSTATE_GET_SAMPLESQUEUED_OFFSET))(this);
		}

		::System::Void set_samplesQueued(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICSTATE_SET_SAMPLESQUEUED_OFFSET))(this, value);
		}

		::System::UInt32 get_samplesAvailable()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICSTATE_GET_SAMPLESAVAILABLE_OFFSET))(this);
		}

		::System::Void set_samplesAvailable(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICSTATE_SET_SAMPLESAVAILABLE_OFFSET))(this, value);
		}
	};
}
