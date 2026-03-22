#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace UnityEngine::Timeline { class CleanBubbleInfo; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define UNITYENGINE_TIMELINE_CLEANBUBBLEMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x1A73EC30)
#define UNITYENGINE_TIMELINE_CLEANBUBBLEMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1A73EC40)
#define UNITYENGINE_TIMELINE_CLEANBUBBLEMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x1A73EC20)
#define UNITYENGINE_TIMELINE_CLEANBUBBLEMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A73EC50)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int CleanBubbleMarker_TypeDefinitionIndex = 29273;

	class CleanBubbleMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::UnityEngine::Timeline::CleanBubbleInfo* Info; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CLEANBUBBLEMARKER__CTOR_OFFSET))(this);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CLEANBUBBLEMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CLEANBUBBLEMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CLEANBUBBLEMARKER_GET_FLAGS_OFFSET))(this);
		}
	};
}
