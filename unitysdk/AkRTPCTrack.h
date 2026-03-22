#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace AK::Wwise { class RTPC; }
namespace UnityEngine { class GameObject; }

#define AKRTPCTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1AF9D010)
#define AKRTPCTRACK_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1AF9D1C0)
#define AKRTPCTRACK_SETPLAYABLEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1AF9D0F0)
#define AKRTPCTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF9D290)

inline static constexpr unsigned int AkRTPCTrack_TypeDefinitionIndex = 30131;

class AkRTPCTrack : public ::UnityEngine::Timeline::TrackAsset
{
public:
	::AK::Wwise::RTPC* Parameter; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRTPCTRACK__CTOR_OFFSET))(this);
	}

	::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::System::Int32 inputCount)
	{
		return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + AKRTPCTRACK_CREATETRACKMIXER_OFFSET))(this, graph, go, inputCount);
	}

	::System::Void setPlayableProperties()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRTPCTRACK_SETPLAYABLEPROPERTIES_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRTPCTRACK_ONVALIDATE_OFFSET))(this);
	}
};
