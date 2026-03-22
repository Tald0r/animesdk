#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define VFXVOLUMETRICSHADOW__CTOR_OFFSET UNITYSDK_OFFSET(0x17B96CD0)

inline static constexpr unsigned int VfxVolumetricShadow_TypeDefinitionIndex = 28053;

class VfxVolumetricShadow : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VFXVOLUMETRICSHADOW__CTOR_OFFSET))(this);
	}
};
