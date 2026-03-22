#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOETHEREYESINTERACTCOLLIDERIGNORE_START_OFFSET UNITYSDK_OFFSET(0x9A45160)
#define MONOETHEREYESINTERACTCOLLIDERIGNORE_UPDATE_OFFSET UNITYSDK_OFFSET(0x9A451C0)
#define MONOETHEREYESINTERACTCOLLIDERIGNORE__CTOR_OFFSET UNITYSDK_OFFSET(0x9A45220)

inline static constexpr unsigned int MonoEtherEyesInteractColliderIgnore_TypeDefinitionIndex = 52100;

class MonoEtherEyesInteractColliderIgnore : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOETHEREYESINTERACTCOLLIDERIGNORE__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOETHEREYESINTERACTCOLLIDERIGNORE_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOETHEREYESINTERACTCOLLIDERIGNORE_UPDATE_OFFSET))(this);
	}
};
