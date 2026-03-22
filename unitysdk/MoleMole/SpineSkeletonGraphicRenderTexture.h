#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SpineSkeletonGraphicRenderTexture_TextureMaterialPair.h"
#include "unitysdk/MoleMole/SpineSkeletonRenderTextureBase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class SpineSkeletonGraphicImage; }
namespace Spine::Unity { class SkeletonGraphic; }
namespace Spine::Unity { class SkeletonRendererInstruction; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class CanvasRenderer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class OutlineEx; }
namespace UnityEngine::UI { class RawImage; }

#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_AWAKE_OFFSET UNITYSDK_OFFSET(0xB3C3B70)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_BINDRT_OFFSET UNITYSDK_OFFSET(0xB3C5B30)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_CLAMPVECTOR3_OFFSET UNITYSDK_OFFSET(0xB3C5990)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_CLEARRT_OFFSET UNITYSDK_OFFSET(0xB3C5630)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_DOIMAGELISTDESTROY_OFFSET UNITYSDK_OFFSET(0xB3C30C0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_24983FE76D082542_OFFSET UNITYSDK_OFFSET(0xB3C62D0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_3CAB3F134E5CEF52_OFFSET UNITYSDK_OFFSET(0xB3C76B0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_42583DA595DCD536_OFFSET UNITYSDK_OFFSET(0xB3C5FB0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB3C5A40)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_4EED0FA306E026CA_OFFSET UNITYSDK_OFFSET(0xB3C5E00)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_57454248D6301A57_OFFSET UNITYSDK_OFFSET(0xB3C7740)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_8E9E3E0D1D6E6E24_OFFSET UNITYSDK_OFFSET(0xB3C3E60)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0xB3C6B80)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_E7A46A8E39261DE6_OFFSET UNITYSDK_OFFSET(0xB3C65C0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_FC793E2201556942_OFFSET UNITYSDK_OFFSET(0xB3C61D0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB3C57C0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB3C5130)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB3C4C60)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONSPINERTCREATEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB3C5AC0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONSPINERTRELEASEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB3C5CC0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_RESETSPINEMATERIALTEXTURELIST_OFFSET UNITYSDK_OFFSET(0xB3C4430)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_RESET_OFFSET UNITYSDK_OFFSET(0xB3C4BF0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_SETIMAGELISTMESH_OFFSET UNITYSDK_OFFSET(0xB3C3290)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_SETIMAGELISTRT_OFFSET UNITYSDK_OFFSET(0xB3C39A0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0xB3C5D30)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0xB3C5DE0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB3C5DF0)

namespace MoleMole
{
	inline static constexpr unsigned int SpineSkeletonGraphicRenderTexture_TypeDefinitionIndex = 40276;

	class SpineSkeletonGraphicRenderTexture : public ::MoleMole::SpineSkeletonRenderTextureBase
	{
	public:
		::UnityEngine::UI::OutlineEx* outlineHolder; // 0xD8
		::System::Int32 shaderPassID; // 0xE0
		::System::Collections::Generic::List_1<::MoleMole::SpineSkeletonGraphicImage*>* imageStructList; // 0xE8
		::UnityEngine::RectTransform* Field_6_3; // 0xF0
		::UnityEngine::CanvasRenderer* Field_6_4; // 0xF8
		::UnityEngine::RectTransform* customRenderRect; // 0x100
		::Spine::Unity::SkeletonGraphic* Field_6_6; // 0x108
		::System::Collections::Generic::List_1<::MoleMole::SpineSkeletonGraphicRenderTexture_TextureMaterialPair>* meshRendererMaterialForTexture; // 0x110
		::UnityEngine::CanvasRenderer* Field_6_8; // 0x118
		::UnityEngine::RectTransform* Field_6_9; // 0x120
		::UnityEngine::UI::RawImage* Field_6_10; // 0x128
		::Il2CppArray<::UnityEngine::Vector3>* Field_6_11; // 0x130
		::UnityEngine::Vector3 Field_6_12; // 0x138
		::UnityEngine::Vector3 Field_6_13; // 0x144
		::UnityEngine::Vector3 Field_6_14; // 0x150
		::UnityEngine::Vector3 Field_6_15; // 0x15C
		::System::Boolean Field_6_16; // 0x168

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE__CTOR_OFFSET))(this);
		}

		::System::Void DoImageListDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_DOIMAGELISTDESTROY_OFFSET))(this);
		}

		::System::Void SetImageListMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_SETIMAGELISTMESH_OFFSET))(this);
		}

		::System::Void SetImageListRT()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_SETIMAGELISTRT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_AWAKE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_RESET_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONDESTROY_OFFSET))(this);
		}

		::System::Void ResetSpineMaterialTextureList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_RESETSPINEMATERIALTEXTURELIST_OFFSET))(this);
		}

		::System::Void ClampVector3(::UnityEngine::Vector3& a1, ::UnityEngine::Vector2& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_CLAMPVECTOR3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void OnSpineRTCreatedCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONSPINERTCREATEDCALLBACK_OFFSET))(this);
		}

		::System::Void OnSpineRTReleasedCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_ONSPINERTRELEASEDCALLBACK_OFFSET))(this);
		}

		::System::Void BindRT()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_BINDRT_OFFSET))(this);
		}

		::System::Void ClearRT()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_CLEARRT_OFFSET))(this);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE___BASE_AWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_6_4EED0FA306E026CA(::Spine::Unity::SkeletonGraphic* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_4EED0FA306E026CA_OFFSET))(this, a1);
		}

		::System::Void Method_6_42583DA595DCD536(::UnityEngine::Mesh* a1, ::UnityEngine::Material* a2, ::UnityEngine::Texture* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Material*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_42583DA595DCD536_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_24983FE76D082542(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Mesh*>* a2, ::Il2CppArray<::UnityEngine::Material*>* a3, ::Il2CppArray<::UnityEngine::Texture*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Mesh*>*, ::Il2CppArray<::UnityEngine::Material*>*, ::Il2CppArray<::UnityEngine::Texture*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_24983FE76D082542_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Material* Method_6_FC793E2201556942(::UnityEngine::Texture* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_FC793E2201556942_OFFSET))(this, a1);
		}

		::System::Void Method_6_E7A46A8E39261DE6(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_E7A46A8E39261DE6_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_A27DC2C5A103933A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_A27DC2C5A103933A_OFFSET))(this);
		}

		::System::Void Method_6_3CAB3F134E5CEF52()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_3CAB3F134E5CEF52_OFFSET))(this);
		}

		::System::Void Method_6_57454248D6301A57(::Spine::Unity::SkeletonRendererInstruction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererInstruction*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_57454248D6301A57_OFFSET))(this, a1);
		}

		::System::Void Method_6_8E9E3E0D1D6E6E24()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_METHOD_6_8E9E3E0D1D6E6E24_OFFSET))(this);
		}
	};
}
