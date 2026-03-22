#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define SCENEVIEWCAMERASYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB50F10)

inline static constexpr unsigned int SceneViewCameraSync_TypeDefinitionIndex = 34891;

class SceneViewCameraSync : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEVIEWCAMERASYNC__CTOR_OFFSET))(this);
	}
};
