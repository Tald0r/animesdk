#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_TVMATERIALTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xB310BB0)
#define MOLEMOLE_TIMELINE_TVMATERIALTRACK_METHOD_5_6CBA94B39B120DE0_OFFSET UNITYSDK_OFFSET(0xB310F80)
#define MOLEMOLE_TIMELINE_TVMATERIALTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB310F50)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int TVMaterialTrack_TypeDefinitionIndex = 52133;

	class TVMaterialTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVMATERIALTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVMATERIALTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable Method_5_6CBA94B39B120DE0(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVMATERIALTRACK_METHOD_5_6CBA94B39B120DE0_OFFSET))(this, a1, a2, a3);
		}
	};
}
