#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_INPUTSYSTEM_XR_XRSUPPORT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18C0C190)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int XRSupport_TypeDefinitionIndex = 27617;

	class XRSupport : public ::System::Object
	{
	public:
		static ::System::Void Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRSUPPORT_INITIALIZE_OFFSET))();
		}
	};
}
