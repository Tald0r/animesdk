#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_CAMERAS_NAPCUTSCENECAMERATRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x6D345A0)
#define MOLEMOLE_CAMERAS_NAPCUTSCENECAMERATRACK_METHOD_5_6CBA94B39B120DE0_OFFSET UNITYSDK_OFFSET(0x6D348D0)
#define MOLEMOLE_CAMERAS_NAPCUTSCENECAMERATRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x6D348A0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int NapCutSceneCameraTrack_TypeDefinitionIndex = 58770;

	class NapCutSceneCameraTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPCUTSCENECAMERATRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPCUTSCENECAMERATRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable Method_5_6CBA94B39B120DE0(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPCUTSCENECAMERATRACK_METHOD_5_6CBA94B39B120DE0_OFFSET))(this, a1, a2, a3);
		}
	};
}
