#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLYCAMERA_GETBASEINPUT_OFFSET UNITYSDK_OFFSET(0x1B677660)
#define FLYCAMERA_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B676FE0)
#define FLYCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B677730)

inline static constexpr unsigned int FlyCamera_TypeDefinitionIndex = 83748;

class FlyCamera : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single mainSpeed; // 0x18
	::System::Single shiftAdd; // 0x1C
	::System::Single maxShift; // 0x20
	::System::Single camSens; // 0x24
	::UnityEngine::Vector3 lastMouse; // 0x28
	::System::Single totalRun; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLYCAMERA__CTOR_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLYCAMERA_UPDATE_OFFSET))(this);
	}

	::UnityEngine::Vector3 GetBaseInput()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLYCAMERA_GETBASEINPUT_OFFSET))(this);
	}
};
