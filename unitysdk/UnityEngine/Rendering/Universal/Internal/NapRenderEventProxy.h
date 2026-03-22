#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPRENDEREVENTPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x16F6B2E0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int NapRenderEventProxy_TypeDefinitionIndex = 28953;

	class NapRenderEventProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPRENDEREVENTPROXY__CTOR_OFFSET))(this);
		}
	};
}
