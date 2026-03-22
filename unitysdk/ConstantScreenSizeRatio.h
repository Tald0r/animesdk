#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CONSTANTSCREENSIZERATIO_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xADC6DA0)
#define CONSTANTSCREENSIZERATIO_ONENABLE_OFFSET UNITYSDK_OFFSET(0xADC6CC0)
#define CONSTANTSCREENSIZERATIO__CTOR_OFFSET UNITYSDK_OFFSET(0xADC70F0)

inline static constexpr unsigned int ConstantScreenSizeRatio_TypeDefinitionIndex = 48906;

class ConstantScreenSizeRatio : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Camera* targetCamera; // 0x18
	::System::Single desiredScreenHeightRatio; // 0x20
	::System::Single minDistance; // 0x24
	::System::Single maxDistance; // 0x28
	::System::Single maxScale; // 0x2C
	::UnityEngine::Transform* cachedTransform; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTANTSCREENSIZERATIO__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTANTSCREENSIZERATIO_ONENABLE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTANTSCREENSIZERATIO_LATEUPDATE_OFFSET))(this);
	}
};
