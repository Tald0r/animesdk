#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PlanarReflectionCubeManager_NativeSRP.h"

#define PLANARREFLECTIONCUBEMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19B1C960)
#define PLANARREFLECTIONCUBEMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19B1C880)
#define PLANARREFLECTIONCUBEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19B1CA40)

inline static constexpr unsigned int PlanarReflectionCubeManager_TypeDefinitionIndex = 28020;

class PlanarReflectionCubeManager : public ::UnityEngine::NAPRenderPipeline0::PlanarReflectionCubeManager_NativeSRP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANARREFLECTIONCUBEMANAGER__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANARREFLECTIONCUBEMANAGER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANARREFLECTIONCUBEMANAGER_ONDISABLE_OFFSET))(this);
	}
};
