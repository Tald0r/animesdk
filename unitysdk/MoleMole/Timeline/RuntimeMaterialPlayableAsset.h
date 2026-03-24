#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace MoleMole::Timeline { class RuntimeMaterialBehavior; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class AnimationTrack; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xC330AA0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xC330A90)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALPLAYABLEASSET_METHOD_4_4E497FF5F288E9D7_OFFSET UNITYSDK_OFFSET(0xC3309F0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALPLAYABLEASSET_METHOD_4_C433AF37CE9D6E5B_OFFSET UNITYSDK_OFFSET(0xC330CF0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0xC330C10)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialPlayableAsset_TypeDefinitionIndex = 43038;

	class RuntimeMaterialPlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::RuntimeMaterialBehavior* Recorder; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_4E497FF5F288E9D7(::UnityEngine::GameObject* a1, ::UnityEngine::Timeline::AnimationTrack* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::AnimationTrack*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALPLAYABLEASSET_METHOD_4_4E497FF5F288E9D7_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_C433AF37CE9D6E5B(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALPLAYABLEASSET_METHOD_4_C433AF37CE9D6E5B_OFFSET))(this, a1);
		}
	};
}
