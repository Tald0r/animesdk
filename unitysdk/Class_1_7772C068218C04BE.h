#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AssetPathInSRP.h"

namespace UnityEngine { class GameObject; }

#define CLASS_1_7772C068218C04BE_METHOD_1_45BDE1E108783E59_OFFSET UNITYSDK_OFFSET(0x7667EC0)
#define CLASS_1_7772C068218C04BE_METHOD_1_F0EDA764F7AFCD75_OFFSET UNITYSDK_OFFSET(0x7668020)
#define CLASS_1_7772C068218C04BE_UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_IRESOURCELOADER_ALLOC_OFFSET UNITYSDK_OFFSET(0x7667E40)
#define CLASS_1_7772C068218C04BE_UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_IRESOURCELOADER_FREE_OFFSET UNITYSDK_OFFSET(0x7667F90)
#define CLASS_1_7772C068218C04BE__CTOR_OFFSET UNITYSDK_OFFSET(0x76680F0)

inline static constexpr unsigned int Class_1_7772C068218C04BE_TypeDefinitionIndex = 62836;

class Class_1_7772C068218C04BE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7772C068218C04BE__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* UnityEngine_NAPRenderPipeline0_OffscreenParticleManager_IResourceLoader_Alloc(::UnityEngine::NAPRenderPipeline0::AssetPathInSRP a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::AssetPathInSRP))((::PBYTE)hIl2Cpp + CLASS_1_7772C068218C04BE_UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_IRESOURCELOADER_ALLOC_OFFSET))(this, a1);
	}

	::System::Void UnityEngine_NAPRenderPipeline0_OffscreenParticleManager_IResourceLoader_Free(::UnityEngine::NAPRenderPipeline0::AssetPathInSRP a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::AssetPathInSRP, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_7772C068218C04BE_UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_IRESOURCELOADER_FREE_OFFSET))(this, a1, a2);
	}

	static ::UnityEngine::GameObject* Method_1_45BDE1E108783E59(::UnityEngine::NAPRenderPipeline0::AssetPathInSRP a1)
	{
		return ((::UnityEngine::GameObject*(*)(::UnityEngine::NAPRenderPipeline0::AssetPathInSRP))((::PBYTE)hIl2Cpp + CLASS_1_7772C068218C04BE_METHOD_1_45BDE1E108783E59_OFFSET))(a1);
	}

	static ::System::Void Method_1_F0EDA764F7AFCD75(::UnityEngine::NAPRenderPipeline0::AssetPathInSRP a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::AssetPathInSRP, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_7772C068218C04BE_METHOD_1_F0EDA764F7AFCD75_OFFSET))(a1, a2);
	}
};
