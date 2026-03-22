#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define SRDYNAMICSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x124A8080)

inline static constexpr unsigned int SRDynamicScale_TypeDefinitionIndex = 82141;

class SRDynamicScale : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDYNAMICSCALE__CTOR_OFFSET))(this);
	}
};
