#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class AnimationTrack; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xB3E2F50)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xB3E32B0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALTRACK_GETKFRAMETRACK_OFFSET UNITYSDK_OFFSET(0xB3E3170)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALTRACK_METHOD_5_652F102150AC9967_OFFSET UNITYSDK_OFFSET(0xB3E3560)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALTRACK_METHOD_5_6CBA94B39B120DE0_OFFSET UNITYSDK_OFFSET(0xB3E34C0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALTRACK_ONCURVEWASMODIFIED_OFFSET UNITYSDK_OFFSET(0xB3E3430)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB3E3490)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialTrack_TypeDefinitionIndex = 62895;

	class RuntimeMaterialTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnCurveWasModified()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALTRACK_ONCURVEWASMODIFIED_OFFSET))(this);
		}

		::UnityEngine::Timeline::AnimationTrack* GetKFrameTrack()
		{
			return ((::UnityEngine::Timeline::AnimationTrack*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALTRACK_GETKFRAMETRACK_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable Method_5_6CBA94B39B120DE0(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALTRACK_METHOD_5_6CBA94B39B120DE0_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable Method_5_652F102150AC9967(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALTRACK_METHOD_5_652F102150AC9967_OFFSET))(this, a1, a2, a3);
		}
	};
}
