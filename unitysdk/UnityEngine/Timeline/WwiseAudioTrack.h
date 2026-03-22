#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/MarkerTrack.h"

#define UNITYENGINE_TIMELINE_WWISEAUDIOTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A871190)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int WwiseAudioTrack_TypeDefinitionIndex = 29413;

	class WwiseAudioTrack : public ::UnityEngine::Timeline::MarkerTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_WWISEAUDIOTRACK__CTOR_OFFSET))(this);
		}
	};
}
