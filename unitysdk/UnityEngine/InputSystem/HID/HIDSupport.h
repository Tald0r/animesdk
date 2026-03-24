#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HIDSupport_HIDPageUsage.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.h"

#define UNITYENGINE_INPUTSYSTEM_HID_HIDSUPPORT_GET_SUPPORTEDHIDUSAGES_OFFSET UNITYSDK_OFFSET(0x1A554060)
#define UNITYENGINE_INPUTSYSTEM_HID_HIDSUPPORT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A554350)
#define UNITYENGINE_INPUTSYSTEM_HID_HIDSUPPORT_SET_SUPPORTEDHIDUSAGES_OFFSET UNITYSDK_OFFSET(0x1A5540A0)

namespace UnityEngine::InputSystem::HID
{
	inline static constexpr unsigned int HIDSupport_TypeDefinitionIndex = 28632;

	class HIDSupport : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage>** StaticGet_s_SupportedHIDUsages()
		{
			return (::Il2CppArray<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage>**)Il2CppClass::FromTypeDefinitionIndex(HIDSupport_TypeDefinitionIndex)->GetStaticField(0x21B50);
		}

		static ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage> get_supportedHIDUsages()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage>(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HIDSUPPORT_GET_SUPPORTEDHIDUSAGES_OFFSET))();
		}

		static ::System::Void set_supportedHIDUsages(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage> value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HIDSUPPORT_SET_SUPPORTEDHIDUSAGES_OFFSET))(value);
		}

		static ::System::Void Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HIDSUPPORT_INITIALIZE_OFFSET))();
		}
	};
}
