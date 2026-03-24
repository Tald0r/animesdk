#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParticleBaseDataType.h"

#define PARTICLECOLORDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1965FD90)

inline static constexpr unsigned int ParticleColorData_TypeDefinitionIndex = 28989;

class ParticleColorData : public ::ParticleBaseDataType
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLECOLORDATA__CTOR_OFFSET))(this);
	}
};
