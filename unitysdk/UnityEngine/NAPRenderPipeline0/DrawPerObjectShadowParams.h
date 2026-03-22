#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int DrawPerObjectShadowParams_TypeDefinitionIndex = 5918;

	struct alignas(8) DrawPerObjectShadowParams
	{
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* WorldToUvMatrices; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* LocalToWorldMatrices; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* ResolveTilingOffsets; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* OffsetWS; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Extents; // 0x30
		::UnityEngine::Vector2 AtlasSize; // 0x38
		::System::Int32 Count; // 0x40
	};
}
