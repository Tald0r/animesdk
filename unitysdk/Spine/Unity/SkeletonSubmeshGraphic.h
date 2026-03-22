#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"

namespace UnityEngine::UI { class VertexHelper; }

#define SPINE_UNITY_SKELETONSUBMESHGRAPHIC_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17BD6180)
#define SPINE_UNITY_SKELETONSUBMESHGRAPHIC_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17BD61C0)
#define SPINE_UNITY_SKELETONSUBMESHGRAPHIC_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x17BD6160)
#define SPINE_UNITY_SKELETONSUBMESHGRAPHIC_SETMATERIALDIRTY_OFFSET UNITYSDK_OFFSET(0x17BD6140)
#define SPINE_UNITY_SKELETONSUBMESHGRAPHIC_SETVERTICESDIRTY_OFFSET UNITYSDK_OFFSET(0x17BD6150)
#define SPINE_UNITY_SKELETONSUBMESHGRAPHIC__CTOR_OFFSET UNITYSDK_OFFSET(0x17BD6200)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonSubmeshGraphic_TypeDefinitionIndex = 36252;

	class SkeletonSubmeshGraphic : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONSUBMESHGRAPHIC__CTOR_OFFSET))(this);
		}

		::System::Void SetMaterialDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONSUBMESHGRAPHIC_SETMATERIALDIRTY_OFFSET))(this);
		}

		::System::Void SetVerticesDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONSUBMESHGRAPHIC_SETVERTICESDIRTY_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONSUBMESHGRAPHIC_ONPOPULATEMESH_OFFSET))(this, vh);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONSUBMESHGRAPHIC_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONSUBMESHGRAPHIC_ONENABLE_OFFSET))(this);
		}
	};
}
