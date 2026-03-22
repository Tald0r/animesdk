#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCULLOPTIMIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x180400A0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightCullOptimizer_TypeDefinitionIndex = 28563;

	class LightCullOptimizer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTCULLOPTIMIZER__CTOR_OFFSET))(this);
		}
	};
}
