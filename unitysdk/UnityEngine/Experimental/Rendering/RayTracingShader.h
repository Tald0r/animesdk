#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RAYTRACINGSHADER__CTOR_OFFSET UNITYSDK_OFFSET(0x19E45200)

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int RayTracingShader_TypeDefinitionIndex = 6319;

	class RayTracingShader : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RAYTRACINGSHADER__CTOR_OFFSET))(this);
		}
	};
}
