#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define MOLEMOLE_TIMELINE_RUNTIMEPRELOADTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xD1AAE40)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimePreLoadTrack_TypeDefinitionIndex = 78095;

	class RuntimePreLoadTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEPRELOADTRACK__CTOR_OFFSET))(this);
		}
	};
}
