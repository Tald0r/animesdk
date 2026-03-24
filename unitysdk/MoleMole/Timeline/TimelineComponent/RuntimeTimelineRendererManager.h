#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole::Timeline::TimelineComponent { class RuntimeTimelineRebindComp; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINERENDERERMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xBEF8BE0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINERENDERERMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBEF8A70)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINERENDERERMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0xBEF86D0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINERENDERERMANAGER_SET_OFFSET UNITYSDK_OFFSET(0xBEF8330)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINERENDERERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xBEF8C40)

namespace MoleMole::Timeline::TimelineComponent
{
	inline static constexpr unsigned int RuntimeTimelineRendererManager_TypeDefinitionIndex = 71107;

	class RuntimeTimelineRendererManager : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::UnityEngine::Playables::PlayableDirector* _playableDirector; // 0x58
		::MoleMole::Timeline::TimelineComponent::RuntimeTimelineRebindComp* _runtimeTimelineRebindComp; // 0x60
		::System::Boolean SetCutsceneMode; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINERENDERERMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Set()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINERENDERERMANAGER_SET_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINERENDERERMANAGER_RESET_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINERENDERERMANAGER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINERENDERERMANAGER_ONDISABLE_OFFSET))(this);
		}
	};
}
