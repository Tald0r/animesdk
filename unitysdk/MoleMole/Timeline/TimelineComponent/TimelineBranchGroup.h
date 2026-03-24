#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP_GET_BRANCHTRACK_OFFSET UNITYSDK_OFFSET(0xB7106B0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP_METHOD_1_0BDFAC56E6B704CB_1_OFFSET UNITYSDK_OFFSET(0xB710D10)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP_METHOD_1_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0xB710BB0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP_METHOD_1_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0xB710AA0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP_METHOD_1_1290EA767C459179_2_OFFSET UNITYSDK_OFFSET(0xB710E70)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xB7109A0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP_METHOD_1_3016C1136D90757E_OFFSET UNITYSDK_OFFSET(0xB7106D0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xB7106C0)

namespace MoleMole::Timeline::TimelineComponent
{
	inline static constexpr unsigned int TimelineBranchGroup_TypeDefinitionIndex = 57582;

	class TimelineBranchGroup : public ::System::Object
	{
	public:
		::System::String* BranchName; // 0x10
		::System::Double Duration; // 0x18
		::System::Double StartTime; // 0x20
		::System::String* BrachTrackGuid; // 0x28
		::System::Boolean IsMuted; // 0x30
		::UnityEngine::Timeline::TrackAsset* _trackAsset; // 0x38
		::UnityEngine::Playables::PlayableDirector* rootPlayableDirector; // 0x40
		::UnityEngine::Playables::PlayableDirector* BranchPlayableDirector; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::TrackAsset* get_BranchTrack()
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP_GET_BRANCHTRACK_OFFSET))(this);
		}

		::System::Void Method_1_3016C1136D90757E(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Timeline::TimelineAsset* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::TimelineAsset*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP_METHOD_1_3016C1136D90757E_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP_METHOD_1_1290EA767C459179_OFFSET))(this);
		}

		::System::Void Method_1_1290EA767C459179_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP_METHOD_1_1290EA767C459179_1_OFFSET))(this);
		}

		::System::Void Method_1_0BDFAC56E6B704CB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP_METHOD_1_0BDFAC56E6B704CB_OFFSET))(this);
		}

		::System::Void Method_1_0BDFAC56E6B704CB_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP_METHOD_1_0BDFAC56E6B704CB_1_OFFSET))(this);
		}

		::System::Void Method_1_1290EA767C459179_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TIMELINEBRANCHGROUP_METHOD_1_1290EA767C459179_2_OFFSET))(this);
		}
	};
}
