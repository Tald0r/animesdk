#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AssetPathInSRP.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/OffscreenParticleManager_DamageParticlePrefabArg.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal::Internal { class DamageTextSystem_DamageParticleItem; }
namespace UnityEngine::Rendering::Universal::Internal { class DamageTextSystem_DamageTextInstanceContext; }
namespace UnityEngine::Rendering::Universal::Internal { class DamageTextSystem_DamageTextItem; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_CALCPARTICLEPOSANDSIZE_OFFSET UNITYSDK_OFFSET(0x16F681B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_CLEANUPFORSRP_OFFSET UNITYSDK_OFFSET(0x16F66AF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_CLEARALLTEXT_OFFSET UNITYSDK_OFFSET(0x16F64A70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_CONVERTSCREENPOSTOUIPOS_OFFSET UNITYSDK_OFFSET(0x16F68580)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DRAWMESHES_OFFSET UNITYSDK_OFFSET(0x16F67110)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DRAWOFFSCREENPARTICLES_OFFSET UNITYSDK_OFFSET(0x16F67CA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_GETFROMPOOL_OFFSET UNITYSDK_OFFSET(0x16F631C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_GETPOSXMATRIXBYVALUE_OFFSET UNITYSDK_OFFSET(0x16F64570)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_GETRANDOMCHANGETEXT_OFFSET UNITYSDK_OFFSET(0x16F64290)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_GETSCALEVECTOR_OFFSET UNITYSDK_OFFSET(0x16F64880)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_GETSCALE_OFFSET UNITYSDK_OFFSET(0x16F63CB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_GETUVMATRIXBYVALUE_OFFSET UNITYSDK_OFFSET(0x16F64400)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_GET_GLOBALALPHA_OFFSET UNITYSDK_OFFSET(0x16F63070)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x16F62B00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x16F63050)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_INITCAMERA_OFFSET UNITYSDK_OFFSET(0x16F66CF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_INITFORSRP_OFFSET UNITYSDK_OFFSET(0x16F667F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_INITPOOL_OFFSET UNITYSDK_OFFSET(0x16F63090)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_INITSCREENSPACERANGE_OFFSET UNITYSDK_OFFSET(0x16F66C90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_INIT_OFFSET UNITYSDK_OFFSET(0x16F666E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_LOGSDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x16F66E10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_MARKCOMBINEDAMAGETEXTFADEOUT_OFFSET UNITYSDK_OFFSET(0x16F65A30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_MARKCOMBINETEXTITEMDESTROYED_OFFSET UNITYSDK_OFFSET(0x16F65AA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_ONBATTLEEND_OFFSET UNITYSDK_OFFSET(0x16F649A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_ONPAUSESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x16F66D50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_REBUILDBLOCKS_OFFSET UNITYSDK_OFFSET(0x16F65B00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_REFRESHCOMBINEDAMAGETEXT_OFFSET UNITYSDK_OFFSET(0x16F65920)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_REFRESHENDTIME_OFFSET UNITYSDK_OFFSET(0x16F64DB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_REFRESHRANDOMCHANGE_OFFSET UNITYSDK_OFFSET(0x16F65750)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_RETURNTOPOOL_OFFSET UNITYSDK_OFFSET(0x16F63290)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_SETBLOCKINFO_OFFSET UNITYSDK_OFFSET(0x16F65010)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_SET_GLOBALALPHA_OFFSET UNITYSDK_OFFSET(0x16F63080)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x16F63060)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_SHOWPARTICLE_1_OFFSET UNITYSDK_OFFSET(0x16F63A50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_SHOWPARTICLE_2_OFFSET UNITYSDK_OFFSET(0x16F63630)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_SHOWPARTICLE_OFFSET UNITYSDK_OFFSET(0x16F633F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_SHOWTEXT_OFFSET UNITYSDK_OFFSET(0x16F63D40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_TRYRETURNITEMTOPOOL_OFFSET UNITYSDK_OFFSET(0x16F64F00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_UPDATETRANSFORM_OFFSET UNITYSDK_OFFSET(0x16F67540)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F686A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x16F62BC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM__REBUILDBLOCKS_G__DOREBUILDBLOCKS_97_0_OFFSET UNITYSDK_OFFSET(0x16F661C0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DamageTextSystem_TypeDefinitionIndex = 28850;

	class DamageTextSystem : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Char, ::System::Int32>** StaticGet_UVOffsetTable()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Char, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DamageTextSystem_TypeDefinitionIndex)->GetStaticField(0x226C0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Char, ::System::Single>** StaticGet_CharWidthTable()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Char, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(DamageTextSystem_TypeDefinitionIndex)->GetStaticField(0x226C8);
		}
		static ::UnityEngine::Rendering::Universal::Internal::DamageTextSystem** StaticGet_m_Instance()
		{
			return (::UnityEngine::Rendering::Universal::Internal::DamageTextSystem**)Il2CppClass::FromTypeDefinitionIndex(DamageTextSystem_TypeDefinitionIndex)->GetStaticField(0x226D0);
		}
		static ::System::Int32* StaticGet__IsSkipDefAttack()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DamageTextSystem_TypeDefinitionIndex)->GetStaticField(0x70D0);
		}
		static ::System::Int32* StaticGet__FadeoutInterval()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DamageTextSystem_TypeDefinitionIndex)->GetStaticField(0x70D4);
		}
		static ::System::Int32* StaticGet__FadeoutTime()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DamageTextSystem_TypeDefinitionIndex)->GetStaticField(0x70D8);
		}
		static ::System::Int32* StaticGet__DamageTextAlpha()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DamageTextSystem_TypeDefinitionIndex)->GetStaticField(0x70DC);
		}
		static ::System::Int32* StaticGet__BitCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DamageTextSystem_TypeDefinitionIndex)->GetStaticField(0x70E0);
		}
		static ::System::Int32* StaticGet__StartTime()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DamageTextSystem_TypeDefinitionIndex)->GetStaticField(0x70E4);
		}
		static ::UnityEngine::Vector4* StaticGet_s_Debug_GetDynamicScreenSize()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(DamageTextSystem_TypeDefinitionIndex)->GetStaticField(0x70E8);
		}
		static ::System::Int32* StaticGet__FadeinTime()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DamageTextSystem_TypeDefinitionIndex)->GetStaticField(0x70F8);
		}
		static ::System::Int32* StaticGet__FaceIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DamageTextSystem_TypeDefinitionIndex)->GetStaticField(0x70FC);
		}
		static ::System::Int32* StaticGet__CombineTextFadeOutStartTime()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DamageTextSystem_TypeDefinitionIndex)->GetStaticField(0x7100);
		}
		static ::System::Int32* StaticGet__ShowTime()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DamageTextSystem_TypeDefinitionIndex)->GetStaticField(0x7104);
		}
		static ::System::Int32* StaticGet__Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DamageTextSystem_TypeDefinitionIndex)->GetStaticField(0x7108);
		}
		static ::System::Int32* StaticGet__FadeinInterval()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DamageTextSystem_TypeDefinitionIndex)->GetStaticField(0x710C);
		}
		static ::System::Boolean* StaticGet_s_Debug_s_RenderToFinalTargetEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DamageTextSystem_TypeDefinitionIndex)->GetStaticField(0x7110);
		}
		static ::System::Int32* StaticGet__AnimType()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DamageTextSystem_TypeDefinitionIndex)->GetStaticField(0x7114);
		}
		static ::System::Int32* StaticGet__UnityDamageTextTime()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DamageTextSystem_TypeDefinitionIndex)->GetStaticField(0x7118);
		}
		static ::UnityEngine::Vector2* StaticGet_STANDARD_RESOLUTION()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(DamageTextSystem_TypeDefinitionIndex)->GetStaticField(0x711C);
		}
		static ::System::Int32* StaticGet__IsCombineDamageText()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DamageTextSystem_TypeDefinitionIndex)->GetStaticField(0x7124);
		}
		static ::System::Int32* StaticGet__UVOffsets()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DamageTextSystem_TypeDefinitionIndex)->GetStaticField(0x7128);
		}
		static ::System::Int32* StaticGet__Flash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DamageTextSystem_TypeDefinitionIndex)->GetStaticField(0x712C);
		}
		static ::System::Int32* StaticGet__POSXOffsets()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DamageTextSystem_TypeDefinitionIndex)->GetStaticField(0x7130);
		}
		// static const ::System::Int32 MaxSize = 0x3E8; // 0x0
		// static const ::System::Int32 MaxInstanceCount = 0x28; // 0x0
		::Il2CppArray<::UnityEngine::Vector4>* colors; // 0x10
		::UnityEngine::Mesh* m_particleMesh; // 0x18
		::Il2CppArray<::System::Single>* combineTextFadeOutStartTimes; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageTextInstanceContext*>* drawInstanceContexts; // 0x28
		::System::Collections::Generic::LinkedList_1<::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageParticleItem*>* particleItems; // 0x30
		::Il2CppArray<::System::Single>* flashes; // 0x38
		::Il2CppArray<::System::Single>* showTimess; // 0x40
		::UnityEngine::MaterialPropertyBlock* m_ParticleAdditionProp; // 0x48
		::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageTextItem*>* _itemPool; // 0x50
		::Il2CppArray<::System::Single>* times; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageTextItem*>* _swapItems; // 0x60
		::Il2CppArray<::System::Single>* fadeouts; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageTextItem*>* _topItems; // 0x70
		::Il2CppArray<::UnityEngine::MaterialPropertyBlock*>* blocks; // 0x78
		::Il2CppArray<::System::Single>* isCombineDamageTexts; // 0x80
		::Il2CppArray<::System::Single>* fadeoutIntervals; // 0x88
		::UnityEngine::Material* m_particleMaterial; // 0x90
		::UnityEngine::Material* m_material; // 0x98
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageTextItem*>* _items; // 0xA0
		::Il2CppArray<::System::Single>* faceIndexes; // 0xA8
		::UnityEngine::Camera* m_uiCamera; // 0xB0
		::UnityEngine::Mesh* m_mesh; // 0xB8
		::Il2CppArray<::System::Single>* animTypes; // 0xC0
		::System::Text::StringBuilder* _randomChangeStringBuilder; // 0xC8
		::UnityEngine::Camera* m_sceneCamera; // 0xD0
		::Il2CppArray<::System::Single>* fadeinIntervals; // 0xD8
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageTextItem*>* _normalItems; // 0xE0
		::Il2CppArray<::UnityEngine::Matrix4x4>* posXOffset; // 0xE8
		::Il2CppArray<::System::Single>* fadeins; // 0xF0
		::Il2CppArray<::System::Single>* bits; // 0xF8
		::Il2CppArray<::System::Single>* isSkipDefAttacks; // 0x100
		::Il2CppArray<::UnityEngine::Matrix4x4>* uvs; // 0x108
		::UnityEngine::Vector2 _screenSpaceRangeMin; // 0x110
		::UnityEngine::Vector2 _screenSpaceRangeMax; // 0x118
		::System::Single UnityDamageTextTime; // 0x120
		::System::Single DamageTextFollowDampingSpeed; // 0x124
		::System::Int32 population; // 0x128
		::System::Int32 m_NameMainTex; // 0x12C
		::System::Single _GlobalAlpha_k__BackingField; // 0x130
		::System::Boolean _isPause; // 0x134
		::System::Boolean _IsEnable_k__BackingField; // 0x135
		::System::Boolean DamageTextFollowDampingEnabled; // 0x136
		::System::Boolean _isDirty; // 0x137

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::Universal::Internal::DamageTextSystem* get_instance()
		{
			return ((::UnityEngine::Rendering::Universal::Internal::DamageTextSystem*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_GET_INSTANCE_OFFSET))();
		}

		::System::Boolean get_IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_GET_ISENABLE_OFFSET))(this);
		}

		::System::Void set_IsEnable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_SET_ISENABLE_OFFSET))(this, value);
		}

		::System::Single get_GlobalAlpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_GET_GLOBALALPHA_OFFSET))(this);
		}

		::System::Void set_GlobalAlpha(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_SET_GLOBALALPHA_OFFSET))(this, value);
		}

		::System::Void InitPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_INITPOOL_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageTextItem* GetFromPool()
		{
			return ((::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageTextItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_GETFROMPOOL_OFFSET))(this);
		}

		::System::Void ReturnToPool(::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageTextItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageTextItem*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_RETURNTOPOOL_OFFSET))(this, item);
		}

		::System::Void ShowParticle(::UnityEngine::Vector3 initWorldPos, ::System::Single scale, ::UnityEngine::GameObject* prefabGO, ::UnityEngine::Vector3 worldOffset, ::UnityEngine::Transform* refTransform, ::UnityEngine::Vector2 screenOffset, ::System::Single length, ::System::UInt32 entityID, ::System::Action_2<::System::UInt32, ::System::Single>* onEndCallback, ::System::Single showTime, ::System::Int32 width, ::System::Int32 height, ::UnityEngine::Bounds& screenBounds, ::System::Int32 followType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Transform*, ::UnityEngine::Vector2, ::System::Single, ::System::UInt32, ::System::Action_2<::System::UInt32, ::System::Single>*, ::System::Single, ::System::Int32, ::System::Int32, ::UnityEngine::Bounds&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_SHOWPARTICLE_OFFSET))(this, initWorldPos, scale, prefabGO, worldOffset, refTransform, screenOffset, length, entityID, onEndCallback, showTime, width, height, screenBounds, followType);
		}

		::System::Void ShowParticle_1(::UnityEngine::Vector3 initWorldPos, ::System::Single scale, ::UnityEngine::NAPRenderPipeline0::AssetPathInSRP prefabPath, ::UnityEngine::Vector3 worldOffset, ::UnityEngine::Transform* refTransform, ::UnityEngine::Vector2 screenOffset, ::System::Single length, ::System::UInt32 entityID, ::System::Action_2<::System::UInt32, ::System::Single>* onEndCallback, ::System::Single showTime, ::System::Int32 width, ::System::Int32 height, ::UnityEngine::Bounds& screenBounds, ::System::Int32 followType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::NAPRenderPipeline0::AssetPathInSRP, ::UnityEngine::Vector3, ::UnityEngine::Transform*, ::UnityEngine::Vector2, ::System::Single, ::System::UInt32, ::System::Action_2<::System::UInt32, ::System::Single>*, ::System::Single, ::System::Int32, ::System::Int32, ::UnityEngine::Bounds&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_SHOWPARTICLE_1_OFFSET))(this, initWorldPos, scale, prefabPath, worldOffset, refTransform, screenOffset, length, entityID, onEndCallback, showTime, width, height, screenBounds, followType);
		}

		::System::Void ShowParticle_2(::UnityEngine::Vector3 initWorldPos, ::System::Single scale, ::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager_DamageParticlePrefabArg& prefab, ::UnityEngine::Vector3 worldOffset, ::UnityEngine::Transform* refTransform, ::UnityEngine::Vector2 screenOffset, ::System::Single length, ::System::UInt32 entityID, ::System::Action_2<::System::UInt32, ::System::Single>* onEndCallback, ::System::Single showTime, ::System::Int32 width, ::System::Int32 height, ::UnityEngine::Bounds& screenBounds, ::System::Int32 followType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager_DamageParticlePrefabArg&, ::UnityEngine::Vector3, ::UnityEngine::Transform*, ::UnityEngine::Vector2, ::System::Single, ::System::UInt32, ::System::Action_2<::System::UInt32, ::System::Single>*, ::System::Single, ::System::Int32, ::System::Int32, ::UnityEngine::Bounds&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_SHOWPARTICLE_2_OFFSET))(this, initWorldPos, scale, prefab, worldOffset, refTransform, screenOffset, length, entityID, onEndCallback, showTime, width, height, screenBounds, followType);
		}

		::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageTextItem* ShowText(::System::String* value, ::UnityEngine::Vector3 position, ::System::Single scale, ::UnityEngine::Color color, ::System::Boolean isFlash, ::System::Single fadeinInterval, ::System::Single fadeoutInterval, ::System::Single showTime, ::System::Single fadeinTime, ::System::Single fadeoutTime, ::System::Single faceIndex, ::System::Single effColorIndex, ::System::UInt32 animType, ::System::UInt32 isSkipDefAttack, ::System::Single charWidthOffset, ::System::Boolean isRandomChange, ::System::Boolean isOnTop, ::System::UInt32 isCombineDamageText)
		{
			return ((::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageTextItem*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Color, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::UInt32, ::System::UInt32, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_SHOWTEXT_OFFSET))(this, value, position, scale, color, isFlash, fadeinInterval, fadeoutInterval, showTime, fadeinTime, fadeoutTime, faceIndex, effColorIndex, animType, isSkipDefAttack, charWidthOffset, isRandomChange, isOnTop, isCombineDamageText);
		}

		::System::Void OnBattleEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_ONBATTLEEND_OFFSET))(this);
		}

		::System::Void ClearAllText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_CLEARALLTEXT_OFFSET))(this);
		}

		::System::Void RefreshEndTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_REFRESHENDTIME_OFFSET))(this);
		}

		::System::Void TryReturnItemToPool(::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageTextItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageTextItem*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_TRYRETURNITEMTOPOOL_OFFSET))(this, item);
		}

		::System::Void SetBlockInfo(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_SETBLOCKINFO_OFFSET))(this, index);
		}

		::System::Void RefreshRandomChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_REFRESHRANDOMCHANGE_OFFSET))(this);
		}

		::System::Void RefreshCombineDamageText(::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageTextItem* item, ::System::String* damageStr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageTextItem*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_REFRESHCOMBINEDAMAGETEXT_OFFSET))(this, item, damageStr);
		}

		::System::Void MarkCombineDamageTextFadeOut(::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageTextItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageTextItem*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_MARKCOMBINEDAMAGETEXTFADEOUT_OFFSET))(this, item);
		}

		::System::Void MarkCombineTextItemDestroyed(::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageTextItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageTextItem*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_MARKCOMBINETEXTITEMDESTROYED_OFFSET))(this, item);
		}

		::System::String* GetRandomChangeText(::System::String* text)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_GETRANDOMCHANGETEXT_OFFSET))(this, text);
		}

		::System::Void RebuildBlocks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_REBUILDBLOCKS_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 GetUVMatrixByValue(::System::String* value)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_GETUVMATRIXBYVALUE_OFFSET))(this, value);
		}

		::UnityEngine::Matrix4x4 GetPosXMatrixByValue(::System::String* value, ::System::Single charWidthOffset)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_GETPOSXMATRIXBYVALUE_OFFSET))(this, value, charWidthOffset);
		}

		::System::Void Init(::UnityEngine::Mesh* mesh, ::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_INIT_OFFSET))(this, mesh, mat);
		}

		::System::Void InitForSRP(::UnityEngine::Shader* particleDrawShader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_INITFORSRP_OFFSET))(this, particleDrawShader);
		}

		::System::Void CleanupForSRP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_CLEANUPFORSRP_OFFSET))(this);
		}

		::System::Void InitScreenSpaceRange(::UnityEngine::Vector2 screenSpaceRangeMin, ::UnityEngine::Vector2 screenSpaceRangeMax)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_INITSCREENSPACERANGE_OFFSET))(this, screenSpaceRangeMin, screenSpaceRangeMax);
		}

		::System::Void InitCamera(::UnityEngine::Camera* scam, ::UnityEngine::Camera* uiCam)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_INITCAMERA_OFFSET))(this, scam, uiCam);
		}

		::System::Void OnPauseStateChanged(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_ONPAUSESTATECHANGED_OFFSET))(this, isPause);
		}

		static ::System::Void LogSDebugInfo()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_LOGSDEBUGINFO_OFFSET))();
		}

		::System::Void DrawMeshes(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DRAWMESHES_OFFSET))(this, cmd, renderingData);
		}

		::System::Void DrawOffscreenParticles(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::Int32 screenWidth, ::System::Int32 screenHeight)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DRAWOFFSCREENPARTICLES_OFFSET))(this, cmd, renderingData, screenWidth, screenHeight);
		}

		::UnityEngine::Vector4 CalcParticlePosAndSize(::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageParticleItem* item, ::System::Int32 screenWidth, ::System::Int32 screenHeight)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageParticleItem*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_CALCPARTICLEPOSANDSIZE_OFFSET))(this, item, screenWidth, screenHeight);
		}

		::System::Void UpdateTransform(::System::Int32 screenWidth, ::System::Int32 screenHeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_UPDATETRANSFORM_OFFSET))(this, screenWidth, screenHeight);
		}

		::UnityEngine::Vector3 GetScaleVector(::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageTextItem* item)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageTextItem*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_GETSCALEVECTOR_OFFSET))(this, item);
		}

		::System::Single GetScale(::System::Single scale)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_GETSCALE_OFFSET))(this, scale);
		}

		::UnityEngine::Vector2 ConvertScreenPosToUIPos(::UnityEngine::Vector2 screenPos, ::System::Int32 screenWidth, ::System::Int32 screenHeight)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_CONVERTSCREENPOSTOUIPOS_OFFSET))(this, screenPos, screenWidth, screenHeight);
		}

		::System::Void _RebuildBlocks_g__DoRebuildBlocks_97_0(::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageTextItem* item, ::System::Int32 tmpBlockIndex, ::System::Int32 tmpOffset, ::System::Boolean setInfo)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageTextItem*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM__REBUILDBLOCKS_G__DOREBUILDBLOCKS_97_0_OFFSET))(this, item, tmpBlockIndex, tmpOffset, setInfo);
		}
	};
}
