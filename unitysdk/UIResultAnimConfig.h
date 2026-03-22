#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define UIRESULTANIMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xF4B7870)

inline static constexpr unsigned int UIResultAnimConfig_TypeDefinitionIndex = 60689;

class UIResultAnimConfig : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single Time; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRESULTANIMCONFIG__CTOR_OFFSET))(this);
	}
};
