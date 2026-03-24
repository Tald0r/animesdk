#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }
template <typename T> class NPCSoftAssetPath_1;

#define NPCCROWD_AVATAR_NPCAVATARGOREFERENCESHADOWPROXYCOMPONENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x76D72D0)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCAvatarGOReferenceShadowProxyComponentInfo_TypeDefinitionIndex = 78020;

	class NPCAvatarGOReferenceShadowProxyComponentInfo : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* shadowProxyStaticGo; // 0x10
		::UnityEngine::MeshFilter* shadowProxyStaticMF; // 0x18
		::UnityEngine::SkinnedMeshRenderer* shadowProxySMR; // 0x20
		::UnityEngine::MeshRenderer* shadowProxyStaticMR; // 0x28
		::NPCSoftAssetPath_1<::UnityEngine::Mesh*>* shadowProxyMesh; // 0x30
		::UnityEngine::GameObject* shadowProxySkinnedGo; // 0x38
		::UnityEngine::Material* shadowProxyGpuMaterial; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARGOREFERENCESHADOWPROXYCOMPONENTINFO__CTOR_OFFSET))(this);
		}
	};
}
