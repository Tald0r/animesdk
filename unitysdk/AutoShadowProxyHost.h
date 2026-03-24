#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Mesh; }

#define AUTOSHADOWPROXYHOST_START_OFFSET UNITYSDK_OFFSET(0xA9FCD90)
#define AUTOSHADOWPROXYHOST__CTOR_OFFSET UNITYSDK_OFFSET(0xA9FCE30)

inline static constexpr unsigned int AutoShadowProxyHost_TypeDefinitionIndex = 47611;

class AutoShadowProxyHost : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single shadowProxyQuality; // 0x18
	::UnityEngine::Mesh* customShadowProxy; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOSHADOWPROXYHOST__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOSHADOWPROXYHOST_START_OFFSET))(this);
	}
};
