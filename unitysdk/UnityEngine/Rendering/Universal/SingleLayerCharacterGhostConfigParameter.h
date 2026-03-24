#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/StructVolumeParameter_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SingleLayerCharacterGhostConfig.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLELAYERCHARACTERGHOSTCONFIGPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x189FB100)
#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLELAYERCHARACTERGHOSTCONFIGPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x189FB120)
#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLELAYERCHARACTERGHOSTCONFIGPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x189FB0C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SingleLayerCharacterGhostConfigParameter_TypeDefinitionIndex = 29635;

	class SingleLayerCharacterGhostConfigParameter : public ::UnityEngine::NAPRenderPipeline0::StructVolumeParameter_1<::UnityEngine::Rendering::Universal::SingleLayerCharacterGhostConfig>
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::SingleLayerCharacterGhostConfig value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::SingleLayerCharacterGhostConfig, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SINGLELAYERCHARACTERGHOSTCONFIGPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}

		::UnityEngine::Rendering::Universal::SingleLayerCharacterGhostConfig get_value()
		{
			return ((::UnityEngine::Rendering::Universal::SingleLayerCharacterGhostConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SINGLELAYERCHARACTERGHOSTCONFIGPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::Rendering::Universal::SingleLayerCharacterGhostConfig value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::SingleLayerCharacterGhostConfig))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SINGLELAYERCHARACTERGHOSTCONFIGPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
