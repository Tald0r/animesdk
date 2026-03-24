#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/BaseTimeline/BaseTimelineBehavior.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Timeline/KFrameFieldType.h"

namespace MoleMole::Timeline { class MaterialBaseBehavior_DeleteAnimationFrames; }
namespace MoleMole::Timeline { class MaterialCompRecorderInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Timeline { class AnimationTrack; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_CLEARCOMPRECORDERINFO_OFFSET UNITYSDK_OFFSET(0x1B4FE8F0)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_FINDRELATIVEMESHRENDERER_OFFSET UNITYSDK_OFFSET(0x1B4FE460)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_GETALLRENDERERS_OFFSET UNITYSDK_OFFSET(0x1B4FD4C0)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_GETCOMPRECORDERINFO_OFFSET UNITYSDK_OFFSET(0x1B4FEA00)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1B4FCC50)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_GET_REFERENCETARGET_OFFSET UNITYSDK_OFFSET(0x1B4FCCB0)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1B4FCBF0)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_INIT_OFFSET UNITYSDK_OFFSET(0x1B4FD040)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_LOADKFRAMESFROMANIMATOR_OFFSET UNITYSDK_OFFSET(0x1B4FCE60)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x1B4FCE70)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x1B4FCF90)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x1B4FCE50)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1B4FD020)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_ONPLAY_OFFSET UNITYSDK_OFFSET(0x1B4FCE80)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_ONPROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1B4FCCD0)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_RECORDMESHRENDERSFROMBATCH_OFFSET UNITYSDK_OFFSET(0x1B4FDC80)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_RECORDMESHRENDERS_OFFSET UNITYSDK_OFFSET(0x1B4FD5F0)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_RECOVERMESHRENDERS_OFFSET UNITYSDK_OFFSET(0x1B4FE710)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_REFRESHMONORENDERENTITY_OFFSET UNITYSDK_OFFSET(0x1B4FCF10)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_REINIT_OFFSET UNITYSDK_OFFSET(0x1B4FD4B0)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_RELOADMESHRENDERERS_OFFSET UNITYSDK_OFFSET(0x1B4FD310)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_REVERTATTR_OFFSET UNITYSDK_OFFSET(0x1B4FDFA0)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_SET_REFERENCETARGET_OFFSET UNITYSDK_OFFSET(0x1B4FCCC0)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_UPDATEMESHRENDERERS_OFFSET UNITYSDK_OFFSET(0x1B4FD8D0)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4FEC90)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4FEC00)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MaterialBaseBehavior_TypeDefinitionIndex = 30091;

	class MaterialBaseBehavior : public ::MoleMole::Timeline::BaseTimeline::BaseTimelineBehavior
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_RealKeyPathDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialBaseBehavior_TypeDefinitionIndex)->GetStaticField(0x24230);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_MatchStrDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialBaseBehavior_TypeDefinitionIndex)->GetStaticField(0x24238);
		}
		static ::System::Reflection::MethodInfo** StaticGet_mbpRefresh()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(MaterialBaseBehavior_TypeDefinitionIndex)->GetStaticField(0x24240);
		}
		static ::MoleMole::Timeline::MaterialBaseBehavior_DeleteAnimationFrames** StaticGet_DeleteFrames()
		{
			return (::MoleMole::Timeline::MaterialBaseBehavior_DeleteAnimationFrames**)Il2CppClass::FromTypeDefinitionIndex(MaterialBaseBehavior_TypeDefinitionIndex)->GetStaticField(0x24248);
		}
		static ::System::Int32* StaticGet_delayTime()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialBaseBehavior_TypeDefinitionIndex)->GetStaticField(0x7980);
		}
		::UnityEngine::Timeline::AnimationTrack* kFrameTrack; // 0x18
		::UnityEngine::Timeline::TimelineClip* parentRecorderClip; // 0x20
		::UnityEngine::GameObject* referenceGameObj; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::Timeline::MaterialCompRecorderInfo*>* CompInfos; // 0x30
		::UnityEngine::MonoBehaviour* MonoRenderEntity; // 0x38
		::System::Boolean exited; // 0x40
		::System::Boolean delayRefresh; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Double get_startTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_GET_STARTTIME_OFFSET))(this);
		}

		::System::Double get_endTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_GET_ENDTIME_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_referenceTarget()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_GET_REFERENCETARGET_OFFSET))(this);
		}

		::System::Void set_referenceTarget(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_SET_REFERENCETARGET_OFFSET))(this, value);
		}

		::System::Void OnProcessFrame(::UnityEngine::Playables::Playable rootPlayable, ::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData, ::System::Single weight, ::System::Int32 mixerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_ONPROCESSFRAME_OFFSET))(this, rootPlayable, playable, info, playerData, weight, mixerIndex);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_ONPLAYABLECREATE_OFFSET))(this, playable);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_ONGRAPHSTOP_OFFSET))(this, playable);
		}

		::System::Void OnPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_ONPLAY_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_ONPAUSE_OFFSET))(this);
		}

		::System::Void RefreshMonoRenderEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_REFRESHMONORENDERENTITY_OFFSET))(this);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_ONPLAYABLEDESTROY_OFFSET))(this, playable);
		}

		::System::Void Init(::UnityEngine::GameObject* referenceGo, ::UnityEngine::Timeline::AnimationTrack* kFrameTrack, ::UnityEngine::Timeline::TimelineClip* parentClip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::AnimationTrack*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_INIT_OFFSET))(this, referenceGo, kFrameTrack, parentClip);
		}

		::System::Void ReInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_REINIT_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Renderer*>* GetAllRenderers()
		{
			return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_GETALLRENDERERS_OFFSET))(this);
		}

		::System::Void RecordMeshRenders(::System::Boolean isInit, ::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_RECORDMESHRENDERS_OFFSET))(this, isInit, material);
		}

		::System::Void UpdateMeshRenderers(::UnityEngine::GameObject* referenceTarget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_UPDATEMESHRENDERERS_OFFSET))(this, referenceTarget);
		}

		::System::Void RecordMeshRendersFromBatch(::System::ValueTuple_3<::UnityEngine::Renderer*, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*> materialPropertyTuple)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::UnityEngine::Renderer*, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_RECORDMESHRENDERSFROMBATCH_OFFSET))(this, materialPropertyTuple);
		}

		::System::Void RevertAttr(::System::String* attrName, ::UnityEngine::Timeline::KFrameFieldType fieldType, ::UnityEngine::Object* referenceObj, ::System::String* referenceObjPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Timeline::KFrameFieldType, ::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_REVERTATTR_OFFSET))(this, attrName, fieldType, referenceObj, referenceObjPath);
		}

		::UnityEngine::MeshRenderer* FindRelativeMeshRenderer(::Il2CppArray<::System::String*>* referenceObjPaths)
		{
			return ((::UnityEngine::MeshRenderer*(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_FINDRELATIVEMESHRENDERER_OFFSET))(this, referenceObjPaths);
		}

		::System::Void ReloadMeshRenderers(::UnityEngine::GameObject* referenceObj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_RELOADMESHRENDERERS_OFFSET))(this, referenceObj);
		}

		::System::Void RecoverMeshRenders(::System::Boolean isInit, ::System::Boolean clearMpb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_RECOVERMESHRENDERS_OFFSET))(this, isInit, clearMpb);
		}

		::System::Void LoadKFramesFromAnimator()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_LOADKFRAMESFROMANIMATOR_OFFSET))(this);
		}

		::System::Void ClearCompRecorderInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_CLEARCOMPRECORDERINFO_OFFSET))(this);
		}

		::MoleMole::Timeline::MaterialCompRecorderInfo* GetCompRecorderInfo(::UnityEngine::Renderer* meshRenderer)
		{
			return ((::MoleMole::Timeline::MaterialCompRecorderInfo*(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR_GETCOMPRECORDERINFO_OFFSET))(this, meshRenderer);
		}
	};
}
