#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Shadow.h"

namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_SHADOWHQ_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0xFB1B4D0)
#define UNITYENGINE_UI_SHADOWHQ__CTOR_OFFSET UNITYSDK_OFFSET(0xFB1B440)
#define UNITYENGINE_UI_SHADOWHQ___BASE_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0xFB1B7F0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ShadowHQ_TypeDefinitionIndex = 43525;

	class ShadowHQ : public ::UnityEngine::UI::Shadow
	{
	public:
		::System::UInt32 iterations; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOWHQ__CTOR_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOWHQ_MODIFYMESH_OFFSET))(this, vh);
		}

		::System::Void __base_ModifyMesh(::UnityEngine::UI::VertexHelper* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOWHQ___BASE_MODIFYMESH_OFFSET))(this, P0);
		}
	};
}
