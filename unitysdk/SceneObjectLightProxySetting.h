#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/ELightTriggerType.h"

#define SCENEOBJECTLIGHTPROXYSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1826ED30)

inline static constexpr unsigned int SceneObjectLightProxySetting_TypeDefinitionIndex = 79982;

class SceneObjectLightProxySetting : public ::System::Object
{
public:
	::UnityEngine::Rendering::Universal::Internal::ELightTriggerType lightType; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEOBJECTLIGHTPROXYSETTING__CTOR_OFFSET))(this);
	}
};
