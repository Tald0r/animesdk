#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MusicBattleMarkerNodeType.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace System { class String; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_MUSICBATTLEHINTMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x8A9B8E0)
#define MOLEMOLE_TIMELINE_MUSICBATTLEHINTMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x8A9B940)
#define MOLEMOLE_TIMELINE_MUSICBATTLEHINTMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET UNITYSDK_OFFSET(0x8A9B800)
#define MOLEMOLE_TIMELINE_MUSICBATTLEHINTMARKER_METHOD_4_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x8A9B790)
#define MOLEMOLE_TIMELINE_MUSICBATTLEHINTMARKER_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8A9B730)
#define MOLEMOLE_TIMELINE_MUSICBATTLEHINTMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x8A9B870)
#define MOLEMOLE_TIMELINE_MUSICBATTLEHINTMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x8A9B950)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MusicBattleHintMarker_TypeDefinitionIndex = 76490;

	class MusicBattleHintMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::MoleMole::Config::MusicBattleMarkerNodeType NodeType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUSICBATTLEHINTMARKER__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUSICBATTLEHINTMARKER_METHOD_4_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_4_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUSICBATTLEHINTMARKER_METHOD_4_3E7178C5ECF017DB_OFFSET))(this, a1);
		}

		::System::Boolean Method_4_111E3F406ABDDAA7(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUSICBATTLEHINTMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET))(this, a1);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUSICBATTLEHINTMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUSICBATTLEHINTMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUSICBATTLEHINTMARKER_GET_FLAGS_OFFSET))(this);
		}
	};
}
