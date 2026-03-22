#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Texture2D; }

#define MONONPCCROWDPLATMODELCOMPONENT_GET_CACHEMATERIALPROPBLOCK_OFFSET UNITYSDK_OFFSET(0x68583E0)
#define MONONPCCROWDPLATMODELCOMPONENT_GET_GPUMESHRENDER_OFFSET UNITYSDK_OFFSET(0x68583D0)
#define MONONPCCROWDPLATMODELCOMPONENT_INITMATERIALPARAMS_OFFSET UNITYSDK_OFFSET(0x6858470)
#define MONONPCCROWDPLATMODELCOMPONENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x6858AE0)
#define MONONPCCROWDPLATMODELCOMPONENT_ONFRAMEINDEXCHANGED_OFFSET UNITYSDK_OFFSET(0x6858F70)
#define MONONPCCROWDPLATMODELCOMPONENT_TRIGGERDITHER_OFFSET UNITYSDK_OFFSET(0x6858D90)
#define MONONPCCROWDPLATMODELCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x6859280)
#define MONONPCCROWDPLATMODELCOMPONENT__INITMATERIALPARAMS_B__19_0_OFFSET UNITYSDK_OFFSET(0x68592C0)

inline static constexpr unsigned int MonoNPCCrowdPlatModelComponent_TypeDefinitionIndex = 48217;

class MonoNPCCrowdPlatModelComponent : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Material* gpuMaterial; // 0x18
	::UnityEngine::Material* gpuDitherMaterial; // 0x20
	::UnityEngine::Texture2D* animationTexture; // 0x28
	::System::Int32 textureSizeX; // 0x30
	::System::Int32 textureSizeY; // 0x34
	::System::Int32 totalBoneCount; // 0x38
	::System::Int32 playStartFrame; // 0x3C
	::System::Int32 maxFrameCount; // 0x40
	::System::Single frameIndex; // 0x44
	::System::Int32 lastFrameIndex; // 0x48
	::System::Int32 frameRate; // 0x4C
	::UnityEngine::MeshFilter* gpuMeshFilter; // 0x50
	::UnityEngine::MeshRenderer* gpuMeshRender; // 0x58
	::System::Boolean isGpuMeshRenderValid; // 0x60
	::UnityEngine::MaterialPropertyBlock* cacheMatPropBlock; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONONPCCROWDPLATMODELCOMPONENT__CTOR_OFFSET))(this);
	}

	::UnityEngine::MeshRenderer* get_GPUMeshRender()
	{
		return ((::UnityEngine::MeshRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONONPCCROWDPLATMODELCOMPONENT_GET_GPUMESHRENDER_OFFSET))(this);
	}

	::UnityEngine::MaterialPropertyBlock* get_CacheMaterialPropBlock()
	{
		return ((::UnityEngine::MaterialPropertyBlock*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONONPCCROWDPLATMODELCOMPONENT_GET_CACHEMATERIALPROPBLOCK_OFFSET))(this);
	}

	::System::Void InitMaterialParams()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONONPCCROWDPLATMODELCOMPONENT_INITMATERIALPARAMS_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONONPCCROWDPLATMODELCOMPONENT_ONENABLE_OFFSET))(this);
	}

	::System::Void TriggerDither(::System::Boolean bEnableDither)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONONPCCROWDPLATMODELCOMPONENT_TRIGGERDITHER_OFFSET))(this, bEnableDither);
	}

	::System::Void OnFrameIndexChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONONPCCROWDPLATMODELCOMPONENT_ONFRAMEINDEXCHANGED_OFFSET))(this);
	}

	::System::Void _InitMaterialParams_b__19_0(::UnityEngine::Material* mat)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MONONPCCROWDPLATMODELCOMPONENT__INITMATERIALPARAMS_B__19_0_OFFSET))(this, mat);
	}
};
