#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostProcessPass___c__DisplayClass274_1_TypeDefinitionIndex = 29054;

	struct alignas(8) PostProcessPass___c__DisplayClass274_1
	{
		::UnityEngine::Rendering::RenderTargetIdentifier currentSource; // 0x10
		::UnityEngine::Rendering::RenderTargetIdentifier taaDestination; // 0x38
		::System::Boolean tempTarget2Used; // 0x60
		::System::Boolean tempTargetUsed; // 0x61
		::System::Boolean hasTaaResult; // 0x62
		::UnityEngine::Rendering::RenderTargetIdentifier source; // 0x68
		::UnityEngine::Rendering::RenderTargetIdentifier destination; // 0x90
	};
}
