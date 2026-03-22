#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOINTERACTPARAM_START_OFFSET UNITYSDK_OFFSET(0x7559150)
#define MONOINTERACTPARAM_UPDATE_OFFSET UNITYSDK_OFFSET(0x75591B0)
#define MONOINTERACTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x7559210)

inline static constexpr unsigned int MonoInteractParam_TypeDefinitionIndex = 44985;

class MonoInteractParam : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single MaxWidth; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINTERACTPARAM__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINTERACTPARAM_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINTERACTPARAM_UPDATE_OFFSET))(this);
	}
};
