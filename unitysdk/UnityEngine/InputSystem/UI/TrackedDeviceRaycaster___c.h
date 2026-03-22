#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/UI/TrackedDeviceRaycaster_RaycastHitData.h"

namespace System { template <typename T> class Comparison_1; }

#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F76F40)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19F76F80)
#define UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER___C__SORTEDRAYCASTGRAPHICS_B__25_0_OFFSET UNITYSDK_OFFSET(0x19F76F90)

namespace UnityEngine::InputSystem::UI
{
	inline static constexpr unsigned int TrackedDeviceRaycaster___c_TypeDefinitionIndex = 27661;

	class TrackedDeviceRaycaster___c : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster___c** StaticGet___9()
		{
			return (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster___c**)Il2CppClass::FromTypeDefinitionIndex(TrackedDeviceRaycaster___c_TypeDefinitionIndex)->GetStaticField(0x20090);
		}
		static ::System::Comparison_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>** StaticGet___9__25_0()
		{
			return (::System::Comparison_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>**)Il2CppClass::FromTypeDefinitionIndex(TrackedDeviceRaycaster___c_TypeDefinitionIndex)->GetStaticField(0x20098);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SortedRaycastGraphics_b__25_0(::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData g1, ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData g2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData, ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_TRACKEDDEVICERAYCASTER___C__SORTEDRAYCASTGRAPHICS_B__25_0_OFFSET))(this, g1, g2);
		}
	};
}
