#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define SRDYNAMICSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x11B25BB0)

inline static constexpr unsigned int SRDynamicScale_TypeDefinitionIndex = 84219;

class SRDynamicScale : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDYNAMICSCALE__CTOR_OFFSET))(this);
	}
};
