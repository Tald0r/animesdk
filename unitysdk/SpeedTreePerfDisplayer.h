#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define SPEEDTREEPERFDISPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x11B25BD0)

inline static constexpr unsigned int SpeedTreePerfDisplayer_TypeDefinitionIndex = 84202;

class SpeedTreePerfDisplayer : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPEEDTREEPERFDISPLAYER__CTOR_OFFSET))(this);
	}
};
