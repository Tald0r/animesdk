#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define CINEMACHINE_NAPORBITALTRANSPOSERHEADINGPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6A4530)

namespace Cinemachine
{
	inline static constexpr unsigned int NapOrbitalTransposerHeadingPropertyAttribute_TypeDefinitionIndex = 32065;

	class NapOrbitalTransposerHeadingPropertyAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPORBITALTRANSPOSERHEADINGPROPERTYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
