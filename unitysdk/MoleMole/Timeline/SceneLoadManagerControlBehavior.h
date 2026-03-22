#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/BaseTimeline/BaseTimelineBehavior.h"

namespace MoleMole::Timeline { class SceneLoadManagerParams; }

#define MOLEMOLE_TIMELINE_SCENELOADMANAGERCONTROLBEHAVIOR_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x8A9C780)
#define MOLEMOLE_TIMELINE_SCENELOADMANAGERCONTROLBEHAVIOR_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x8A9C770)
#define MOLEMOLE_TIMELINE_SCENELOADMANAGERCONTROLBEHAVIOR_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x8A9C670)
#define MOLEMOLE_TIMELINE_SCENELOADMANAGERCONTROLBEHAVIOR_ONPLAY_OFFSET UNITYSDK_OFFSET(0x8A9C590)
#define MOLEMOLE_TIMELINE_SCENELOADMANAGERCONTROLBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x8A9C730)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SceneLoadManagerControlBehavior_TypeDefinitionIndex = 37142;

	class SceneLoadManagerControlBehavior : public ::MoleMole::Timeline::BaseTimeline::BaseTimelineBehavior
	{
	public:
		::MoleMole::Timeline::SceneLoadManagerParams* Params; // 0x18
		::System::Boolean isInit; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENELOADMANAGERCONTROLBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void OnPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENELOADMANAGERCONTROLBEHAVIOR_ONPLAY_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENELOADMANAGERCONTROLBEHAVIOR_ONPAUSE_OFFSET))(this);
		}

		::System::Void Method_3_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENELOADMANAGERCONTROLBEHAVIOR_METHOD_3_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_3_832295EC279E5994_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENELOADMANAGERCONTROLBEHAVIOR_METHOD_3_832295EC279E5994_1_OFFSET))(this);
		}
	};
}
