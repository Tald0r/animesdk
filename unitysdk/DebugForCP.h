#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define DEBUGFORCP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B556000)

inline static constexpr unsigned int DebugForCP_TypeDefinitionIndex = 83495;

class DebugForCP : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGFORCP__CTOR_OFFSET))(this);
	}
};
