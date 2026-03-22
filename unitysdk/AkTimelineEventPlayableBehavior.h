#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/AkCurveInterpolation.h"
#include "unitysdk/AkTimelineEventPlayableBehavior_Actions.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class AkCallbackInfo;
namespace AK::Wwise { class Event; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_CALLBACKHANDLER_OFFSET UNITYSDK_OFFSET(0x1ADE5360)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_CHECKFORFADEINFADEOUT_OFFSET UNITYSDK_OFFSET(0x1ADE6650)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_CHECKFORFADEOUT_OFFSET UNITYSDK_OFFSET(0x1ADE6720)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_GETPROPORTIONALTIME_OFFSET UNITYSDK_OFFSET(0x1ADE6B00)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_ISSCRUBBING_OFFSET UNITYSDK_OFFSET(0x1ADE5450)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1ADE6C20)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1ADE6790)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_PLAYEVENT_OFFSET UNITYSDK_OFFSET(0x1ADE7210)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_POSTEVENT_OFFSET UNITYSDK_OFFSET(0x1ADE76A0)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x1ADE60B0)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_PRINTINFO_OFFSET UNITYSDK_OFFSET(0x1ADE5510)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1ADE6D70)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_RETRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0x1ADE7370)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_SEEKTOTIME_OFFSET UNITYSDK_OFFSET(0x1ADE72C0)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_SHOULDPLAY_OFFSET UNITYSDK_OFFSET(0x1ADE6550)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_STOPEVENT_OFFSET UNITYSDK_OFFSET(0x1ADE6D30)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_TRIGGERFADEIN_OFFSET UNITYSDK_OFFSET(0x1ADE7520)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR_TRIGGERFADEOUT_OFFSET UNITYSDK_OFFSET(0x1ADE75F0)
#define AKTIMELINEEVENTPLAYABLEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADE7740)

inline static constexpr unsigned int AkTimelineEventPlayableBehavior_TypeDefinitionIndex = 30065;

class AkTimelineEventPlayableBehavior : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	// static const ::System::UInt32 CallbackFlags = 0x9; // 0x0
	// static const ::System::Int32 scrubPlaybackLengthMs = 0x64; // 0x0
	// static const ::System::Single alph; // 0x0
	::UnityEngine::GameObject* eventObject; // 0x10
	::AK::Wwise::Event* akEvent; // 0x18
	::AkCurveInterpolation blendInCurve; // 0x20
	::System::Single currentDuration; // 0x24
	::System::Single eventDurationMin; // 0x28
	::System::Single easeInDuration; // 0x2C
	::System::Single currentDurationProportion; // 0x30
	::System::Single easeOutDuration; // 0x34
	::System::Single previousEventStartTime; // 0x38
	::System::Boolean PrintDebugInformation; // 0x3C
	::System::Boolean fadeinTriggered; // 0x3D
	::System::Boolean retriggerEvent; // 0x3E
	::System::Single eventDurationMax; // 0x40
	::AkTimelineEventPlayableBehavior_Actions requiredActions; // 0x44
	::AkCurveInterpolation blendOutCurve; // 0x48
	::System::Single blendInDuration; // 0x4C
	::System::Single blendOutDuration; // 0x50
	::System::Boolean StopEventAtClipEnd; // 0x54
	::System::Boolean wasScrubbingAndRequiresRetrigger; // 0x55
	::System::Boolean fadeoutTriggered; // 0x56
	::System::Boolean eventIsPlaying; // 0x57

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR__CTOR_OFFSET))(this);
	}

	::System::Void CallbackHandler(::System::Object* in_cookie, ::AkCallbackType in_type, ::AkCallbackInfo* in_info)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_CALLBACKHANDLER_OFFSET))(this, in_cookie, in_type, in_info);
	}

	::System::Boolean IsScrubbing(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_ISSCRUBBING_OFFSET))(this, playable, info);
	}

	::System::Void PrintInfo(::System::String* FunctionName, ::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_PRINTINFO_OFFSET))(this, FunctionName, playable, info);
	}

	::System::Void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_PREPAREFRAME_OFFSET))(this, playable, info);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_ONBEHAVIOURPLAY_OFFSET))(this, playable, info);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET))(this, playable, info);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_PROCESSFRAME_OFFSET))(this, playable, info, playerData);
	}

	::System::Boolean ShouldPlay(::UnityEngine::Playables::Playable playable)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_SHOULDPLAY_OFFSET))(this, playable);
	}

	::System::Void CheckForFadeInFadeOut(::UnityEngine::Playables::Playable playable)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_CHECKFORFADEINFADEOUT_OFFSET))(this, playable);
	}

	::System::Void CheckForFadeOut(::UnityEngine::Playables::Playable playable, ::System::Double currentClipTime)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::System::Double))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_CHECKFORFADEOUT_OFFSET))(this, playable, currentClipTime);
	}

	::System::Void TriggerFadeIn(::UnityEngine::Playables::Playable playable)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_TRIGGERFADEIN_OFFSET))(this, playable);
	}

	::System::Void TriggerFadeOut(::UnityEngine::Playables::Playable playable)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_TRIGGERFADEOUT_OFFSET))(this, playable);
	}

	::System::Void StopEvent(::System::Int32 transition)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_STOPEVENT_OFFSET))(this, transition);
	}

	::System::Boolean PostEvent()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_POSTEVENT_OFFSET))(this);
	}

	::System::Void PlayEvent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_PLAYEVENT_OFFSET))(this);
	}

	::System::Void RetriggerEvent(::UnityEngine::Playables::Playable playable)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_RETRIGGEREVENT_OFFSET))(this, playable);
	}

	::System::Single GetProportionalTime(::UnityEngine::Playables::Playable playable)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_GETPROPORTIONALTIME_OFFSET))(this, playable);
	}

	::System::Single SeekToTime(::UnityEngine::Playables::Playable playable)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLEBEHAVIOR_SEEKTOTIME_OFFSET))(this, playable);
	}
};
