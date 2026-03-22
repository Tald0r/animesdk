#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessTrack.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_COLORCURVESTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x6B22160)
#define MOLEMOLE_TIMELINE_COLORCURVESTRACK_METHOD_6_6CBA94B39B120DE0_OFFSET UNITYSDK_OFFSET(0x6B22430)
#define MOLEMOLE_TIMELINE_COLORCURVESTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x6B22400)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ColorCurvesTrack_TypeDefinitionIndex = 71955;

	class ColorCurvesTrack : public ::MoleMole::Timeline::PostProcessTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORCURVESTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORCURVESTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable Method_6_6CBA94B39B120DE0(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORCURVESTRACK_METHOD_6_6CBA94B39B120DE0_OFFSET))(this, a1, a2, a3);
		}
	};
}
