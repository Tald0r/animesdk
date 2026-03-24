#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Camera; }

#define MONOSPRITEFACETOCAMERA_SETFACINGCAMERA_OFFSET UNITYSDK_OFFSET(0x9553050)
#define MONOSPRITEFACETOCAMERA_START_OFFSET UNITYSDK_OFFSET(0x9553190)
#define MONOSPRITEFACETOCAMERA_UPDATE_OFFSET UNITYSDK_OFFSET(0x9553200)
#define MONOSPRITEFACETOCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x9553640)

inline static constexpr unsigned int MonoSpriteFaceToCamera_TypeDefinitionIndex = 61791;

class MonoSpriteFaceToCamera : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Boolean UseSceneMainCamera; // 0x18
	::UnityEngine::Camera* FacingCamera; // 0x20
	::System::Boolean FacingAxisX; // 0x28
	::System::Boolean FacingAxisY; // 0x29
	::System::Boolean FacingAxisZ; // 0x2A
	::UnityEngine::Camera* m_FacingCamera; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSPRITEFACETOCAMERA__CTOR_OFFSET))(this);
	}

	::System::Void SetFacingCamera()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSPRITEFACETOCAMERA_SETFACINGCAMERA_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSPRITEFACETOCAMERA_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSPRITEFACETOCAMERA_UPDATE_OFFSET))(this);
	}
};
