#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/Distortion_NativeSRP.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DISTORTION__CTOR_OFFSET UNITYSDK_OFFSET(0x185D2150)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Distortion_TypeDefinitionIndex = 28650;

	class Distortion : public ::UnityEngine::NAPRenderPipeline0::Distortion_NativeSRP
	{
	public:
		::UnityEngine::NAPRenderPipeline0::BoolParameter* DoDistortionAfterDof; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DISTORTION__CTOR_OFFSET))(this);
		}
	};
}
