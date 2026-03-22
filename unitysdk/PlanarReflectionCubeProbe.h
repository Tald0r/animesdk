#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PlanarReflectionCubeProbe_NativeSRP.h"

#define PLANARREFLECTIONCUBEPROBE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B1CAE0)

inline static constexpr unsigned int PlanarReflectionCubeProbe_TypeDefinitionIndex = 28021;

class PlanarReflectionCubeProbe : public ::UnityEngine::NAPRenderPipeline0::PlanarReflectionCubeProbe_NativeSRP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANARREFLECTIONCUBEPROBE__CTOR_OFFSET))(this);
	}
};
