#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define VFXVOLUMETRICSHADOWSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x18F17250)

inline static constexpr unsigned int VfxVolumetricShadowSystem_TypeDefinitionIndex = 28994;

class VfxVolumetricShadowSystem : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VFXVOLUMETRICSHADOWSYSTEM__CTOR_OFFSET))(this);
	}
};
