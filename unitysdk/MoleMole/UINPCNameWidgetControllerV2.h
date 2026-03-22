#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7E9DD9C420D52D84;
class Class_1_C43CA99ABAC370D4;
class Class_2_5918EB2C42062A7B;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace miHoYoEmotion { class EmoSync; }

#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_CHECKMAXDISTANCE_OFFSET UNITYSDK_OFFSET(0xCFFA7C0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_CHECKOCCLUSIONPHYSICSHIT_OFFSET UNITYSDK_OFFSET(0xCFF6DB0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_FINISHALLANIMATION_OFFSET UNITYSDK_OFFSET(0xCFF6220)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_FINISHROOTANIMATION_OFFSET UNITYSDK_OFFSET(0xCFFAD90)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_GETTRACKICONFADEANI_OFFSET UNITYSDK_OFFSET(0xCFF69C0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0xCFF5280)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ISDOORLEAVESTATE_OFFSET UNITYSDK_OFFSET(0xCFF8980)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONBEFOREONDISABLE_OFFSET UNITYSDK_OFFSET(0xCFF6130)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONBEFOREONENABLE_OFFSET UNITYSDK_OFFSET(0xCFF57C0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONBUILDINTERACTMAP_OFFSET UNITYSDK_OFFSET(0xCFFDB20)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONCLOSENPCTRACK_OFFSET UNITYSDK_OFFSET(0xCFFE4F0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCFF5350)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONFADEINTRACKICON_OFFSET UNITYSDK_OFFSET(0xCFF5A80)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONFADEOUTTRACKICON_OFFSET UNITYSDK_OFFSET(0xCFF5FA0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONFUNCTIONUNLOCKED_OFFSET UNITYSDK_OFFSET(0xCFFDD80)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONHIDENPCCHATUI_OFFSET UNITYSDK_OFFSET(0xCFFD180)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONHIDENPCCHAT_OFFSET UNITYSDK_OFFSET(0xCFFD110)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONINNPCCHATDISTANCE_OFFSET UNITYSDK_OFFSET(0xCFFD350)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONMAINCITYSHOWSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xCFFDC50)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONNPCINTERACTED_OFFSET UNITYSDK_OFFSET(0xCFFDCF0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONNPCSPECIALHINTUPDATE_OFFSET UNITYSDK_OFFSET(0xCFFE370)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONNPCSTARTINTERACT_OFFSET UNITYSDK_OFFSET(0xCFFDBC0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONOUTNPCCHATDISTANCE_OFFSET UNITYSDK_OFFSET(0xCFFD400)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONQUESTTRACKUPDATE_OFFSET UNITYSDK_OFFSET(0xCFFE300)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONQUESTUPDATE_OFFSET UNITYSDK_OFFSET(0xCFFE290)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONSHOWNPCCHATUI_1_OFFSET UNITYSDK_OFFSET(0xCFFCF20)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONSHOWNPCCHATUI_OFFSET UNITYSDK_OFFSET(0xCFFD4B0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONSHOWNPCCHAT_OFFSET UNITYSDK_OFFSET(0xCFFCDA0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCFF5440)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xCFF52A0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUIREUSE_OFFSET UNITYSDK_OFFSET(0xCFF63F0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUNLOCKINTERACTED_OFFSET UNITYSDK_OFFSET(0xCFFE180)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUPDATE2D_OFFSET UNITYSDK_OFFSET(0xCFF9D40)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUPDATEINTERACT_OFFSET UNITYSDK_OFFSET(0xCFFD530)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYARROWANIM_OFFSET UNITYSDK_OFFSET(0xCFFD5A0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYARROWINTERACTFADEOUT_OFFSET UNITYSDK_OFFSET(0xCFFD800)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYCHATBUBBLEANIM_OFFSET UNITYSDK_OFFSET(0xCFFBD80)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYDIFFTRACKICONANIM_OFFSET UNITYSDK_OFFSET(0xCFFB300)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYEMOSYNC_OFFSET UNITYSDK_OFFSET(0xCFFCA20)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYNAMETEXTANIM_OFFSET UNITYSDK_OFFSET(0xCFFBB30)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYTRACKICONANIM_1_OFFSET UNITYSDK_OFFSET(0xCFF5C70)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYTRACKICONANIM_OFFSET UNITYSDK_OFFSET(0xCFFB1C0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYTRACKICONNEARANIM_OFFSET UNITYSDK_OFFSET(0xCFFB710)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYVOICE_OFFSET UNITYSDK_OFFSET(0xCFFC270)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_REFRESHNAME_OFFSET UNITYSDK_OFFSET(0xCFF7160)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_REFRESHSPECIALHINT_OFFSET UNITYSDK_OFFSET(0xCFF75D0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_REFRESHTRACKICON_OFFSET UNITYSDK_OFFSET(0xCFF8BA0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_REFRESHUNLOCK_OFFSET UNITYSDK_OFFSET(0xCFF7440)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SAMPLEANIM_OFFSET UNITYSDK_OFFSET(0xCFF5EA0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SETCHATBUBBLETEXT_OFFSET UNITYSDK_OFFSET(0xCFFC040)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SETDOORNAME_OFFSET UNITYSDK_OFFSET(0xCFFDA50)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SETENTITY_OFFSET UNITYSDK_OFFSET(0xCFF6A60)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SETNAMETEXT_OFFSET UNITYSDK_OFFSET(0xCFF87E0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SETNULLNAMETEXT_OFFSET UNITYSDK_OFFSET(0xCFFB870)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0xCFF5290)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATEALLANIMATION_OFFSET UNITYSDK_OFFSET(0xCFF5840)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATEARROWVISIBILITY_OFFSET UNITYSDK_OFFSET(0xCFF7650)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATENAMETEXTVISIBILITY_OFFSET UNITYSDK_OFFSET(0xCFFA220)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATEOCCLUSION_OFFSET UNITYSDK_OFFSET(0xCFF6E30)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATEOFFSET_OFFSET UNITYSDK_OFFSET(0xCFFBAB0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATERECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xCFFA8F0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATEROOTANIMATION_OFFSET UNITYSDK_OFFSET(0xCFFB120)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATETRACKICONVISIBILITY_OFFSET UNITYSDK_OFFSET(0xCFF7BB0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__CTOR_OFFSET UNITYSDK_OFFSET(0xCFFE5F0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__ONFADEOUTTRACKICON_B__9_0_OFFSET UNITYSDK_OFFSET(0xCFFE630)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__ONFADEOUTTRACKICON_B__9_1_OFFSET UNITYSDK_OFFSET(0xCFFE660)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__PLAYARROWINTERACTFADEOUT_B__67_0_OFFSET UNITYSDK_OFFSET(0xCFFE6B0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__PLAYNAMETEXTANIM_B__50_0_OFFSET UNITYSDK_OFFSET(0xCFFE690)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__REFRESHTRACKICON_G__SETTRACKICONIMAGE_29_0_OFFSET UNITYSDK_OFFSET(0xCFF9BC0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__REFRESHTRACKICON_G__SETTRACKROLEIMAGE_29_1_OFFSET UNITYSDK_OFFSET(0xCFF9890)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCFFE6C0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCFFE730)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xCFFE7B0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___BASE_ONUIREUSE_OFFSET UNITYSDK_OFFSET(0xCFFE820)

namespace MoleMole
{
	inline static constexpr unsigned int UINPCNameWidgetControllerV2_TypeDefinitionIndex = 44439;

	class UINPCNameWidgetControllerV2 : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Single unActiveTime; // 0x0
		::System::Boolean _NeedCache_k__BackingField; // 0x2A0
		::Class_1_C43CA99ABAC370D4* _data; // 0x2A8
		::Class_2_5918EB2C42062A7B* _view; // 0x2B0
		::System::UInt32 _entityId; // 0x2B8
		::System::Int32 _npcConfigId; // 0x2BC
		::System::Boolean _inOcclusion; // 0x2C0
		::Foundation::Coroutine::CoroutineHandle _trackIconAnimHandle; // 0x2C4
		::Foundation::Coroutine::CoroutineHandle _trackIconAnimChatDelayHandle; // 0x2C8
		::Foundation::Coroutine::CoroutineHandle _nameTextAnimHandle; // 0x2CC
		::Foundation::Coroutine::CoroutineHandle _chatBubbleAnimHandle; // 0x2D0
		::Foundation::Coroutine::CoroutineHandle _chatBubbleAnimDelayHandle; // 0x2D4
		::Foundation::Coroutine::CoroutineHandle _showArrowAnimHandle; // 0x2D8
		::Foundation::Coroutine::CoroutineHandle _arrowFadeAnimHandle; // 0x2DC
		::System::Single unActiveTimer; // 0x2E0
		::System::UInt32 _currentPendingVoice; // 0x2E4
		::Foundation::AssetRequestHandle emoHandler; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_GET_NEEDCACHE_OFFSET))(this);
		}

		::System::Void set_NeedCache(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SET_NEEDCACHE_OFFSET))(this, value);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnBeforeOnEnable(::System::Boolean hasAvatarEnterArea)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONBEFOREONENABLE_OFFSET))(this, hasAvatarEnterArea);
		}

		::System::Boolean OnFadeInTrackIcon(::System::Boolean hasNeedPlayFadeInAnim)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONFADEINTRACKICON_OFFSET))(this, hasNeedPlayFadeInAnim);
		}

		::System::Boolean OnFadeOutTrackIcon(::System::Boolean hasNeedPlayFadeOutAnim)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONFADEOUTTRACKICON_OFFSET))(this, hasNeedPlayFadeOutAnim);
		}

		::System::Void OnBeforeOnDisable(::System::Boolean needCleanText)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONBEFOREONDISABLE_OFFSET))(this, needCleanText);
		}

		::System::Void OnUIReuse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUIREUSE_OFFSET))(this);
		}

		::System::Void SetEntity(::MoleMole::Battle::Entity* entity, ::Class_1_C43CA99ABAC370D4* data, ::System::Int32 npcConfigId, ::System::Boolean hasAvatarEnterArea)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_1_C43CA99ABAC370D4*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SETENTITY_OFFSET))(this, entity, data, npcConfigId, hasAvatarEnterArea);
		}

		::System::Void RefreshName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_REFRESHNAME_OFFSET))(this);
		}

		::System::Boolean IsDoorLeaveState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ISDOORLEAVESTATE_OFFSET))(this);
		}

		::System::Void RefreshUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_REFRESHUNLOCK_OFFSET))(this);
		}

		::System::Void RefreshSpecialHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_REFRESHSPECIALHINT_OFFSET))(this);
		}

		::System::Void RefreshTrackIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_REFRESHTRACKICON_OFFSET))(this);
		}

		::System::Void OnUpdate2D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUPDATE2D_OFFSET))(this);
		}

		::System::Void UpdateAllAnimation(::System::Boolean hasAvatarEnterArea)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATEALLANIMATION_OFFSET))(this, hasAvatarEnterArea);
		}

		::System::Void FinishAllAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_FINISHALLANIMATION_OFFSET))(this);
		}

		::System::Void UpdateRootAnimation(::System::Single avatarDis, ::System::Boolean hasAvatarEnterArea)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATEROOTANIMATION_OFFSET))(this, avatarDis, hasAvatarEnterArea);
		}

		::System::Void FinishRootAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_FINISHROOTANIMATION_OFFSET))(this);
		}

		::System::Boolean CheckOcclusionPhysicsHit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_CHECKOCCLUSIONPHYSICSHIT_OFFSET))(this);
		}

		::System::Void UpdateOcclusion(::System::Boolean inOcclusion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATEOCCLUSION_OFFSET))(this, inOcclusion);
		}

		::System::Void UpdateRectTransform(::UnityEngine::Vector3 targetPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATERECTTRANSFORM_OFFSET))(this, targetPos);
		}

		::System::Void UpdateTrackIconVisibility(::System::Boolean anim, ::System::Single avatarDis, ::System::Boolean hasAvatarEnterArea)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATETRACKICONVISIBILITY_OFFSET))(this, anim, avatarDis, hasAvatarEnterArea);
		}

		::System::Void PlayDiffTrackIconAnim(::UnityEngine::GameObject* trackIconObject, ::UnityEngine::Animation* trackIconAnim, ::System::Int32 trackIconStatus, ::System::Boolean anim, ::System::Boolean show, ::System::Boolean showText, ::System::Boolean hasAvatarEnterArea)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Animation*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYDIFFTRACKICONANIM_OFFSET))(this, trackIconObject, trackIconAnim, trackIconStatus, anim, show, showText, hasAvatarEnterArea);
		}

		::System::Void PlayTrackIconAnim(::UnityEngine::GameObject* trackIconObject, ::UnityEngine::Animation* trackIconAnim, ::System::Boolean showText, ::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Animation*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYTRACKICONANIM_OFFSET))(this, trackIconObject, trackIconAnim, showText, isShow);
		}

		::System::Void PlayTrackIconAnim_1(::UnityEngine::GameObject* trackIconObject, ::UnityEngine::Animation* trackIconAnim, ::System::String* clipName, ::System::Boolean isShow, ::System::Action* cb)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Animation*, ::System::String*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYTRACKICONANIM_1_OFFSET))(this, trackIconObject, trackIconAnim, clipName, isShow, cb);
		}

		::System::Void PlayTrackIconNearAnim(::UnityEngine::GameObject* trackIconObject, ::UnityEngine::Animation* trackIconAnim, ::System::Boolean isNear)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Animation*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYTRACKICONNEARANIM_OFFSET))(this, trackIconObject, trackIconAnim, isNear);
		}

		::System::String* GetTrackIconFadeAni(::System::Boolean isNear, ::System::Boolean isFadeIn)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_GETTRACKICONFADEANI_OFFSET))(this, isNear, isFadeIn);
		}

		::System::Boolean CheckMaxDistance(::System::Single avatarXZDis, ::UnityEngine::Vector3 targetPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_CHECKMAXDISTANCE_OFFSET))(this, avatarXZDis, targetPos);
		}

		::System::Void SetNullNameText(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SETNULLNAMETEXT_OFFSET))(this, key);
		}

		::System::Void SetNameText(::System::String* key, ::System::Boolean isKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SETNAMETEXT_OFFSET))(this, key, isKey);
		}

		::System::Void UpdateNameTextVisibility(::System::Boolean anim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATENAMETEXTVISIBILITY_OFFSET))(this, anim);
		}

		::System::Void PlayNameTextAnim(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYNAMETEXTANIM_OFFSET))(this, isShow);
		}

		::System::Void UpdateOffset(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATEOFFSET_OFFSET))(this, isShow);
		}

		::System::Void PlayChatBubbleAnim(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYCHATBUBBLEANIM_OFFSET))(this, isShow);
		}

		::System::Boolean SetChatBubbleText(::System::String* textKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SETCHATBUBBLETEXT_OFFSET))(this, textKey);
		}

		::System::Void PlayVoice(::System::String* voice)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYVOICE_OFFSET))(this, voice);
		}

		::System::Void PlayEmoSync(::miHoYoEmotion::EmoSync* emoSync, ::System::String* voiceKey)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::EmoSync*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYEMOSYNC_OFFSET))(this, emoSync, voiceKey);
		}

		::System::Void OnShowNpcChat(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONSHOWNPCCHAT_OFFSET))(this, args);
		}

		::System::Void OnHideNpcChat(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONHIDENPCCHAT_OFFSET))(this, args);
		}

		::System::Void OnInNpcChatDistance(::System::Int32 npcTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONINNPCCHATDISTANCE_OFFSET))(this, npcTag);
		}

		::System::Void OnOutNpcChatDistance(::System::Int32 npcTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONOUTNPCCHATDISTANCE_OFFSET))(this, npcTag);
		}

		::System::Void OnShowNpcChatUI(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONSHOWNPCCHATUI_OFFSET))(this, args);
		}

		::System::Void OnHideNpcChatUI(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONHIDENPCCHATUI_OFFSET))(this, args);
		}

		::System::Boolean OnShowNpcChatUI_1(::System::Object* args, ::Class_1_7E9DD9C420D52D84*& data)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::Class_1_7E9DD9C420D52D84*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONSHOWNPCCHATUI_1_OFFSET))(this, args, data);
		}

		::System::Void OnUpdateInteract(::System::UInt64 args)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUPDATEINTERACT_OFFSET))(this, args);
		}

		::System::Void UpdateArrowVisibility(::System::Boolean anim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_UPDATEARROWVISIBILITY_OFFSET))(this, anim);
		}

		::System::Void PlayArrowInteractFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYARROWINTERACTFADEOUT_OFFSET))(this);
		}

		::System::Void PlayArrowAnim(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_PLAYARROWANIM_OFFSET))(this, isShow);
		}

		::System::Void SetDoorName(::System::Boolean clearNpcName, ::System::String* doorNameKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SETDOORNAME_OFFSET))(this, clearNpcName, doorNameKey);
		}

		::System::Void OnBuildInteractMap(::System::UInt32 npcTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONBUILDINTERACTMAP_OFFSET))(this, npcTag);
		}

		::System::Void OnNpcStartInteract(::System::Int32 npcTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONNPCSTARTINTERACT_OFFSET))(this, npcTag);
		}

		::System::Void OnMainCityShowStateChange(::System::Boolean showUI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONMAINCITYSHOWSTATECHANGE_OFFSET))(this, showUI);
		}

		::System::Void OnNpcInteracted(::System::Int32 npcTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONNPCINTERACTED_OFFSET))(this, npcTag);
		}

		::System::Void OnFunctionUnlocked(::System::Int32 unlockID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONFUNCTIONUNLOCKED_OFFSET))(this, unlockID);
		}

		::System::Void OnUnlockInteracted(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONUNLOCKINTERACTED_OFFSET))(this, args);
		}

		::System::Void OnQuestUpdate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONQUESTUPDATE_OFFSET))(this, args);
		}

		::System::Void OnQuestTrackUpdate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONQUESTTRACKUPDATE_OFFSET))(this, args);
		}

		::System::Void OnNpcSpecialHintUpdate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONNPCSPECIALHINTUPDATE_OFFSET))(this, args);
		}

		::System::Void OnCloseNPCTrack(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ONCLOSENPCTRACK_OFFSET))(this, obj);
		}

		static ::System::Void SampleAnim(::UnityEngine::Animation* anim, ::System::String* clipName, ::System::Single normalizedTime)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_SAMPLEANIM_OFFSET))(anim, clipName, normalizedTime);
		}

		::System::Void _OnFadeOutTrackIcon_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__ONFADEOUTTRACKICON_B__9_0_OFFSET))(this);
		}

		::System::Void _OnFadeOutTrackIcon_b__9_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__ONFADEOUTTRACKICON_B__9_1_OFFSET))(this);
		}

		::System::Void _RefreshTrackIcon_g__SetTrackIconImage_29_0(::Foundation::AssetPath path)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__REFRESHTRACKICON_G__SETTRACKICONIMAGE_29_0_OFFSET))(this, path);
		}

		::System::Void _RefreshTrackIcon_g__SetTrackRoleImage_29_1(::Foundation::AssetPath rolePath)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__REFRESHTRACKICON_G__SETTRACKROLEIMAGE_29_1_OFFSET))(this, rolePath);
		}

		::System::Void _PlayNameTextAnim_b__50_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__PLAYNAMETEXTANIM_B__50_0_OFFSET))(this);
		}

		::System::Void _PlayArrowInteractFadeOut_b__67_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2__PLAYARROWINTERACTFADEOUT_B__67_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIReuse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___BASE_ONUIREUSE_OFFSET))(this);
		}
	};
}
