#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIBaseChatPlayController.h"

class Class_1_328B10E9F3553A0D;
class Class_1_84CF578163D09572;
class Class_1_BC9D27E6028F322B;
class Class_2_7BEEB90214042948_10;
class Class_2_ACF3AD21D9602888;
class Class_3_A72BA6D8C1BF0087_1;
namespace MoleMole { class ChatPlusPlayContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::GalGame { class PlayChatPlusStoryNode; }
namespace MoleMole::GalGame { class TagAniPair; }
namespace MoleMole::GalGame { class TagGroupAniPair; }
namespace MoleMole::GalGame { class TimelinePair; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace miHoYoEmotion { class EmoSync; }

#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_ADDONFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xA25F3F0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_CLOSECHILDWITHOUTNARRATOR_OFFSET UNITYSDK_OFFSET(0xA25F520)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_DOSTARTSKIPCHAT_OFFSET UNITYSDK_OFFSET(0xA25F1C0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_ENSUREONGOINGFADEIN_OFFSET UNITYSDK_OFFSET(0xA25ED40)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_ENSUREPREVIOUSNODEFADEOUT_OFFSET UNITYSDK_OFFSET(0xA25E720)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_FINISH_OFFSET UNITYSDK_OFFSET(0xA25E200)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_GETTALKEMOSYNC_OFFSET UNITYSDK_OFFSET(0xA260980)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0xA25C800)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xA25C7F0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0xA25DC30)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_MANUALSTART_OFFSET UNITYSDK_OFFSET(0xA25D0D0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONCONTINUEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0xA260000)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA25C810)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xA25D210)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONNODERUN_OFFSET UNITYSDK_OFFSET(0xA25F0A0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xA25CF30)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xA25D850)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA261ED0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA25C8B0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA25CDE0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_PLAYEMOSYNC_OFFSET UNITYSDK_OFFSET(0xA260CB0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_PLAYLASTNODEFINISH_OFFSET UNITYSDK_OFFSET(0xA2618B0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_PLAYMASKFADEIN_OFFSET UNITYSDK_OFFSET(0xA25F9D0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_PLAYMASKFADEOUT_OFFSET UNITYSDK_OFFSET(0xA25FCE0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_PLAYNPCANIMATION_OFFSET UNITYSDK_OFFSET(0xA25EA20)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_PLAYSTORYNODE_OFFSET UNITYSDK_OFFSET(0xA25E5A0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_PLAYTEXT_OFFSET UNITYSDK_OFFSET(0xA2602C0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_PLAYTIMELINE_OFFSET UNITYSDK_OFFSET(0xA261450)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_POSTSOUND_OFFSET UNITYSDK_OFFSET(0xA261140)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_POSTVOICE_OFFSET UNITYSDK_OFFSET(0xA2603F0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_SETEXITTRANSITION_OFFSET UNITYSDK_OFFSET(0xA25F4B0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_SETNARRATORACTIVE_OFFSET UNITYSDK_OFFSET(0xA25E980)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_SETONGOINGACTIVE_OFFSET UNITYSDK_OFFSET(0xA25E8E0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0xA25D160)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_SHOWNARRATORSCREEN_OFFSET UNITYSDK_OFFSET(0xA261D20)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_SKIPSTORYPLAY_OFFSET UNITYSDK_OFFSET(0xA25EF30)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_STARTSKIPCHAT_OFFSET UNITYSDK_OFFSET(0xA25F240)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_STOPALLTIMELINE_OFFSET UNITYSDK_OFFSET(0xA25DA10)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_STOPCURRENTSOUND_OFFSET UNITYSDK_OFFSET(0xA2612E0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_STOPCURRENTVOICE_OFFSET UNITYSDK_OFFSET(0xA260810)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_STOPTIMELINEBYKEY_OFFSET UNITYSDK_OFFSET(0xA261700)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_UPDATEPLAY_OFFSET UNITYSDK_OFFSET(0xA25D740)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_UPDATESKIPSTATE_OFFSET UNITYSDK_OFFSET(0xA25F110)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA25D5A0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA262360)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER__INITVIEW_B__35_0_OFFSET UNITYSDK_OFFSET(0xA262440)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER__ONCONTINUEBTNCLICKED_B__54_0_OFFSET UNITYSDK_OFFSET(0xA262450)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER__ONUIINIT_B__26_0_OFFSET UNITYSDK_OFFSET(0xA262430)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER__PLAYLASTNODEFINISH_B__68_0_OFFSET UNITYSDK_OFFSET(0xA2624E0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER__PLAYLASTNODEFINISH_B__68_1_OFFSET UNITYSDK_OFFSET(0xA262520)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_FINISH_OFFSET UNITYSDK_OFFSET(0xA262560)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA2625C0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xA262630)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONNODERUN_OFFSET UNITYSDK_OFFSET(0xA262660)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xA2626D0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xA2626E0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA2626F0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA262700)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA262710)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0xA262780)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_STARTSKIPCHAT_OFFSET UNITYSDK_OFFSET(0xA2627E0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_UPDATESKIPSTATE_OFFSET UNITYSDK_OFFSET(0xA262860)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatPlusPageController_TypeDefinitionIndex = 46032;

	class UIChatPlusPageController : public ::MoleMole::UIBaseChatPlayController
	{
	public:
		// static const ::System::String* SKIP_TALK_TRIGGER; // 0x0
		// static const ::System::String* MaskFadeInAniName; // 0x0
		// static const ::System::String* MaskFadeOutAniName; // 0x0
		// static const ::System::String* OngoingFadeIn; // 0x0
		// static const ::System::String* OngoingTextFadeIn; // 0x0
		// static const ::System::String* NarratorFadeIn; // 0x0
		// static const ::System::String* NarratorFadeOut; // 0x0
		// static const ::System::String* OngoingFadeOut; // 0x0
		::Class_2_7BEEB90214042948_10* _view; // 0x378
		::Class_1_84CF578163D09572* _chatSkipBtnItem; // 0x380
		::System::Int64 _currChatUid; // 0x388
		::MoleMole::ChatPlusPlayContext* _plusOpenContext; // 0x390
		::System::Action_1<::Class_1_BC9D27E6028F322B*>* _callback; // 0x398
		::System::String* CurrentTimelineKey; // 0x3A0
		::System::Int32 _exitTransitionID; // 0x3A8
		::System::Single _btnTimer; // 0x3AC
		::System::UInt32 _currentPendingVoice; // 0x3B0
		::System::UInt32 _currentPendingSound; // 0x3B4
		::System::Collections::Generic::List_1<::System::String*>* _playingTimeLine; // 0x3B8
		::System::Boolean _withoutPlayFadeIn; // 0x3C0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* galTalkRealTextDic; // 0x3C8
		::Foundation::Coroutine::CoroutineHandle _playStoryPlayAvatarDelay; // 0x3D0
		::Foundation::Coroutine::CoroutineHandle _contentAniFadeInDelay; // 0x3D4
		::Foundation::Coroutine::CoroutineHandle _fadeCoroutineHandle; // 0x3D8
		::Foundation::AssetRequestHandle emoHandler; // 0x3E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void ManualStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_MANUALSTART_OFFSET))(this);
		}

		::System::Void UpdatePlay(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_UPDATEPLAY_OFFSET))(this, deltaTime);
		}

		::System::Void InitView(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_INITVIEW_OFFSET))(this, id);
		}

		::System::Void PlayStoryNode(::MoleMole::GalGame::PlayChatPlusStoryNode* config, ::System::Action_1<::System::Boolean>* finishFunc, ::System::Action* voiceEndFunc, ::System::Boolean isSkip)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::PlayChatPlusStoryNode*, ::System::Action_1<::System::Boolean>*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_PLAYSTORYNODE_OFFSET))(this, config, finishFunc, voiceEndFunc, isSkip);
		}

		::System::Void SetOnGoingActive(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_SETONGOINGACTIVE_OFFSET))(this, isActive);
		}

		::System::Void SetNarratorActive(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_SETNARRATORACTIVE_OFFSET))(this, isActive);
		}

		::System::Void PlayNpcAnimation(::System::Collections::Generic::List_1<::MoleMole::GalGame::TagAniPair*>* TagAniParams, ::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupAniPair*>* GroupAniParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::GalGame::TagAniPair*>*, ::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupAniPair*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_PLAYNPCANIMATION_OFFSET))(this, TagAniParams, GroupAniParams);
		}

		::System::Void EnsureOnGoingFadeIn(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_ENSUREONGOINGFADEIN_OFFSET))(this, callback);
		}

		::System::Void SkipStoryPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_SKIPSTORYPLAY_OFFSET))(this);
		}

		::System::Void OnNodeRun(::Class_1_328B10E9F3553A0D* node)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_328B10E9F3553A0D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONNODERUN_OFFSET))(this, node);
		}

		::System::Void UpdateSkipState(::Class_1_328B10E9F3553A0D* node)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_328B10E9F3553A0D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_UPDATESKIPSTATE_OFFSET))(this, node);
		}

		::System::Void DoStartSkipChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_DOSTARTSKIPCHAT_OFFSET))(this);
		}

		::System::Void StartSkipChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_STARTSKIPCHAT_OFFSET))(this);
		}

		::System::Void AddOnFinishCallback(::System::Action_1<::Class_1_BC9D27E6028F322B*>* _action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_BC9D27E6028F322B*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_ADDONFINISHCALLBACK_OFFSET))(this, _action);
		}

		::System::Void SetExitTransition(::System::Int32 transitionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_SETEXITTRANSITION_OFFSET))(this, transitionID);
		}

		::System::Void CloseChildWithOutNarrator()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_CLOSECHILDWITHOUTNARRATOR_OFFSET))(this);
		}

		::System::Void PlayMaskFadeIn(::System::Action* onFadeInCompleted, ::System::Boolean isWithAni)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_PLAYMASKFADEIN_OFFSET))(this, onFadeInCompleted, isWithAni);
		}

		::System::Void PlayMaskFadeOut(::System::Action* onFadeOutCompleted, ::System::Boolean isWithAni)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_PLAYMASKFADEOUT_OFFSET))(this, onFadeOutCompleted, isWithAni);
		}

		::System::Void OnContinueBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONCONTINUEBTNCLICKED_OFFSET))(this);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_FINISH_OFFSET))(this);
		}

		::System::Void PlayText(::System::String* playText, ::System::Single speed, ::System::String* realText, ::System::Single delay, ::System::Int32 recordIndex, ::Class_2_ACF3AD21D9602888* seqPlayable)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::String*, ::System::Single, ::System::Int32, ::Class_2_ACF3AD21D9602888*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_PLAYTEXT_OFFSET))(this, playText, speed, realText, delay, recordIndex, seqPlayable);
		}

		::System::Void PostVoice(::MoleMole::GalGame::PlayChatPlusStoryNode* config, ::Class_3_A72BA6D8C1BF0087_1* endCallBack)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::PlayChatPlusStoryNode*, ::Class_3_A72BA6D8C1BF0087_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_POSTVOICE_OFFSET))(this, config, endCallBack);
		}

		::miHoYoEmotion::EmoSync* GetTalkEmoSync(::System::Int32 speakerNpcTag, ::System::String* speakerMember, ::System::UInt32& entityID)
		{
			return ((::miHoYoEmotion::EmoSync*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_GETTALKEMOSYNC_OFFSET))(this, speakerNpcTag, speakerMember, entityID);
		}

		::System::Void PlayEmoSync(::miHoYoEmotion::EmoSync* emoSync, ::System::String* voiceKey, ::System::String* poseKey, ::System::String* facialKey)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::EmoSync*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_PLAYEMOSYNC_OFFSET))(this, emoSync, voiceKey, poseKey, facialKey);
		}

		::System::Void PostSound(::System::String* eventName, ::Class_3_A72BA6D8C1BF0087_1* endCallBack)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_3_A72BA6D8C1BF0087_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_POSTSOUND_OFFSET))(this, eventName, endCallBack);
		}

		::System::Void StopCurrentVoice()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_STOPCURRENTVOICE_OFFSET))(this);
		}

		::System::Void StopCurrentSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_STOPCURRENTSOUND_OFFSET))(this);
		}

		::System::Void PlayTimeLine(::System::Collections::Generic::List_1<::MoleMole::GalGame::TimelinePair*>* TimelineParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::GalGame::TimelinePair*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_PLAYTIMELINE_OFFSET))(this, TimelineParams);
		}

		::System::Void StopAllTimeLine(::System::Boolean isDestroy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_STOPALLTIMELINE_OFFSET))(this, isDestroy);
		}

		::System::Void StopTimeLineByKey(::System::String* timelineKey, ::System::Boolean isDestroy)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_STOPTIMELINEBYKEY_OFFSET))(this, timelineKey, isDestroy);
		}

		::System::Single EnsurePreviousNodeFadeOut(::UnityEngine::GameObject* targetGo, ::System::Action* callback)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_ENSUREPREVIOUSNODEFADEOUT_OFFSET))(this, targetGo, callback);
		}

		::System::Single PlayLastNodeFinish(::UnityEngine::GameObject* nextObj)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_PLAYLASTNODEFINISH_OFFSET))(this, nextObj);
		}

		::System::Void ShowNarratorScreen(::System::String* textKey, ::System::Boolean anim, ::System::Action* onFinished, ::System::Single delay, ::System::Single speakSpeed, ::System::String* soundEvent, ::System::Action* onFadeInFinished)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action*, ::System::Single, ::System::Single, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_SHOWNARRATORSCREEN_OFFSET))(this, textKey, anim, onFinished, delay, speakSpeed, soundEvent, onFadeInFinished);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean _OnUIInit_b__26_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER__ONUIINIT_B__26_0_OFFSET))(this);
		}

		::System::Void _InitView_b__35_0(::System::Int64 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER__INITVIEW_B__35_0_OFFSET))(this, uid);
		}

		::System::Void _OnContinueBtnClicked_b__54_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER__ONCONTINUEBTNCLICKED_B__54_0_OFFSET))(this);
		}

		::System::Void _PlayLastNodeFinish_b__68_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER__PLAYLASTNODEFINISH_B__68_0_OFFSET))(this);
		}

		::System::Void _PlayLastNodeFinish_b__68_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER__PLAYLASTNODEFINISH_B__68_1_OFFSET))(this);
		}

		::System::Void __base_Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_FINISH_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnNodeRun(::Class_1_328B10E9F3553A0D* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_328B10E9F3553A0D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONNODERUN_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void __base_StartSkipChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_STARTSKIPCHAT_OFFSET))(this);
		}

		::System::Void __base_UpdateSkipState(::Class_1_328B10E9F3553A0D* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_328B10E9F3553A0D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_UPDATESKIPSTATE_OFFSET))(this, P0);
		}
	};
}
