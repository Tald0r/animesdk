#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/Axis.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define AUTOROTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x7B629E0)
#define AUTOROTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x7B62C10)

inline static constexpr unsigned int AutoRotate_TypeDefinitionIndex = 45914;

class AutoRotate : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single rotSpeed; // 0x18
	::RootMotion::Axis axis; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOROTATE__CTOR_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOROTATE_UPDATE_OFFSET))(this);
	}
};
