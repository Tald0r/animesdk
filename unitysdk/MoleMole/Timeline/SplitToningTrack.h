#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessTrack.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_SPLITTONINGTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xB3E69E0)
#define MOLEMOLE_TIMELINE_SPLITTONINGTRACK_METHOD_6_6CBA94B39B120DE0_OFFSET UNITYSDK_OFFSET(0xB3E6CB0)
#define MOLEMOLE_TIMELINE_SPLITTONINGTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB3E6C80)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SplitToningTrack_TypeDefinitionIndex = 44780;

	class SplitToningTrack : public ::MoleMole::Timeline::PostProcessTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable Method_6_6CBA94B39B120DE0(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGTRACK_METHOD_6_6CBA94B39B120DE0_OFFSET))(this, a1, a2, a3);
		}
	};
}
