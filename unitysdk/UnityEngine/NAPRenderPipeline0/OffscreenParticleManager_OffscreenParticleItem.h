#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AssetPathInSRP.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/OffscreenParticleManager_DamageParticleItemDesc.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM_CLEANUP_OFFSET UNITYSDK_OFFSET(0x151A1750)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM_GETORTHOPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0x151A1CD0)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x151A1020)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM_REBUILDMATRICES_OFFSET UNITYSDK_OFFSET(0x151A1A10)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM_RESIZE_OFFSET UNITYSDK_OFFSET(0x151A1530)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x151A1E70)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x151A1E60)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int OffscreenParticleManager_OffscreenParticleItem_TypeDefinitionIndex = 29247;

	class OffscreenParticleManager_OffscreenParticleItem : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_InstanceOffset()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(OffscreenParticleManager_OffscreenParticleItem_TypeDefinitionIndex)->GetStaticField(0x76C0);
		}
		::UnityEngine::Transform* Transform; // 0x10
		::UnityEngine::GameObject* GOInstance; // 0x18
		::System::String* Name; // 0x20
		::UnityEngine::NAPRenderPipeline0::AssetPathInSRP AssetPath; // 0x28
		::System::Collections::Generic::LinkedListNode_1<::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager_OffscreenParticleItem*>* Node; // 0x38
		::Il2CppArray<::UnityEngine::Renderer*>* Renderers; // 0x40
		::Il2CppArray<::UnityEngine::ParticleSystem*>* ParticleSystems; // 0x48
		::UnityEngine::Animation* Animation; // 0x50
		::UnityEngine::RenderTexture* RT; // 0x58
		::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager_DamageParticleItemDesc Desc; // 0x60
		::System::Boolean IsNew; // 0xA0
		::System::Boolean IsPath; // 0xA1
		::System::Byte DrawSetId; // 0xA2
		::UnityEngine::Bounds ScreenBounds; // 0xA4
		::System::Int32 StartFrame; // 0xBC
		::UnityEngine::Matrix4x4 ViewMat; // 0xC0
		::UnityEngine::Matrix4x4 ProjMat; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM__CCTOR_OFFSET))();
		}

		::System::Void Initialize(::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager_DamageParticleItemDesc& desc, ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager_OffscreenParticleItem*>* node, ::System::Byte drawSetId)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager_DamageParticleItemDesc&, ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager_OffscreenParticleItem*>*, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM_INITIALIZE_OFFSET))(this, desc, node, drawSetId);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM_CLEANUP_OFFSET))(this);
		}

		::System::Void Resize(::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM_RESIZE_OFFSET))(this, width, height);
		}

		static ::UnityEngine::Matrix4x4 GetOrthoProjectionMatrix(::System::Single aspect, ::System::Single orthograhpicSize)
		{
			return ((::UnityEngine::Matrix4x4(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM_GETORTHOPROJECTIONMATRIX_OFFSET))(aspect, orthograhpicSize);
		}

		::System::Void RebuildMatrices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM_REBUILDMATRICES_OFFSET))(this);
		}
	};
}
