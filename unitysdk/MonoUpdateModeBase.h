#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOUPDATEMODEBASE_GETDELTATIME_OFFSET UNITYSDK_OFFSET(0x9F26D50)
#define MONOUPDATEMODEBASE_GET__ACCURACYCOUNT_OFFSET UNITYSDK_OFFSET(0x9F26CA0)
#define MONOUPDATEMODEBASE_TRYCALCULATESTEPTIME_OFFSET UNITYSDK_OFFSET(0x9F26CB0)
#define MONOUPDATEMODEBASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x9F26F00)
#define MONOUPDATEMODEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x9F26F70)

inline static constexpr unsigned int MonoUpdateModeBase_TypeDefinitionIndex = 44175;

class MonoUpdateModeBase : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single _updateStepTime; // 0x18
	::System::Boolean _isStepTimeCalculated; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUPDATEMODEBASE__CTOR_OFFSET))(this);
	}

	::System::Single get__accuracyCount()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUPDATEMODEBASE_GET__ACCURACYCOUNT_OFFSET))(this);
	}

	::System::Void TryCalculateStepTime()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUPDATEMODEBASE_TRYCALCULATESTEPTIME_OFFSET))(this);
	}

	::System::Single GetDeltaTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUPDATEMODEBASE_GETDELTATIME_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUPDATEMODEBASE_UPDATE_OFFSET))(this);
	}
};
