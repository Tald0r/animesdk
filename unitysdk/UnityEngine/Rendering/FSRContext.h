#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/FSRConstants.h"
#include "unitysdk/UnityEngine/Rendering/FSRFGQualityMode.h"
#include "unitysdk/UnityEngine/Rendering/FSRQualityMode.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int FSRContext_TypeDefinitionIndex = 6135;

	struct alignas(8) FSRContext
	{
		::System::Int32 w; // 0x10
		::System::Int32 h; // 0x14
		::UnityEngine::Rendering::FSRQualityMode mode; // 0x18
		::UnityEngine::Rendering::FSRFGQualityMode frameGenMode; // 0x1C
		::System::Single sharpness; // 0x20
		::System::Single preExposure; // 0x24
		::System::Single exposureScale; // 0x28
		::System::Boolean colorBuffersHDR; // 0x2C
		::System::Boolean indicatorInvertAxisX; // 0x2D
		::System::Boolean indicatorInvertAxisY; // 0x2E
		::System::Boolean useAutoExposure; // 0x2F
		::UnityEngine::Rendering::FSRConstants constants; // 0x30
		::UnityEngine::Rendering::RenderTargetIdentifier colorIn; // 0x1D8
		::UnityEngine::Rendering::RenderTargetIdentifier colorOut; // 0x200
		::UnityEngine::Rendering::RenderTargetIdentifier depth; // 0x228
		::UnityEngine::Rendering::RenderTargetIdentifier motion; // 0x250
	};
}
