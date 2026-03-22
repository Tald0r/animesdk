#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOSCROLLVIEWLOADASSETMARKER_START_OFFSET UNITYSDK_OFFSET(0x69B65D0)
#define MONOSCROLLVIEWLOADASSETMARKER_UPDATE_OFFSET UNITYSDK_OFFSET(0x69B6630)
#define MONOSCROLLVIEWLOADASSETMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x69B6690)

inline static constexpr unsigned int MonoScrollViewLoadAssetMarker_TypeDefinitionIndex = 49421;

class MonoScrollViewLoadAssetMarker : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCROLLVIEWLOADASSETMARKER__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCROLLVIEWLOADASSETMARKER_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCROLLVIEWLOADASSETMARKER_UPDATE_OFFSET))(this);
	}
};
