#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOUICHAPTERFINISHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA6E6D10)

inline static constexpr unsigned int MonoUIChapterFinishConfig_TypeDefinitionIndex = 63671;

class MonoUIChapterFinishConfig : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single WaitBeforeClose; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUICHAPTERFINISHCONFIG__CTOR_OFFSET))(this);
	}
};
