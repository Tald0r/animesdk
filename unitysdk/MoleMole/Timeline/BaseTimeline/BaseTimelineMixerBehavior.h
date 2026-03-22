#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_TIMELINE_BASETIMELINE_BASETIMELINEMIXERBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1AF87400)
#define MOLEMOLE_TIMELINE_BASETIMELINE_BASETIMELINEMIXERBEHAVIOR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x1AF87420)
#define MOLEMOLE_TIMELINE_BASETIMELINE_BASETIMELINEMIXERBEHAVIOR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1AF87430)
#define MOLEMOLE_TIMELINE_BASETIMELINE_BASETIMELINEMIXERBEHAVIOR_PAUSE_OFFSET UNITYSDK_OFFSET(0x1AF87070)
#define MOLEMOLE_TIMELINE_BASETIMELINE_BASETIMELINEMIXERBEHAVIOR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x1AF87050)
#define MOLEMOLE_TIMELINE_BASETIMELINE_BASETIMELINEMIXERBEHAVIOR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1AF86840)
#define MOLEMOLE_TIMELINE_BASETIMELINE_BASETIMELINEMIXERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF87440)

namespace MoleMole::Timeline::BaseTimeline
{
	inline static constexpr unsigned int BaseTimelineMixerBehavior_TypeDefinitionIndex = 29205;

	class BaseTimelineMixerBehavior : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* curTrackIndexes; // 0x10
		::System::Double lastTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BASETIMELINE_BASETIMELINEMIXERBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BASETIMELINE_BASETIMELINEMIXERBEHAVIOR_PROCESSFRAME_OFFSET))(this, playable, info, playerData);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BASETIMELINE_BASETIMELINEMIXERBEHAVIOR_PREPAREFRAME_OFFSET))(this, playable, info);
		}

		::System::Void Pause(::UnityEngine::Playables::Playable playable, ::System::Boolean pauseAll)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BASETIMELINE_BASETIMELINEMIXERBEHAVIOR_PAUSE_OFFSET))(this, playable, pauseAll);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BASETIMELINE_BASETIMELINEMIXERBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET))(this, playable, info);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BASETIMELINE_BASETIMELINEMIXERBEHAVIOR_ONGRAPHSTOP_OFFSET))(this, playable);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BASETIMELINE_BASETIMELINEMIXERBEHAVIOR_ONPLAYABLEDESTROY_OFFSET))(this, playable);
		}
	};
}
