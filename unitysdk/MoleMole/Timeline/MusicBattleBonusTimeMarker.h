#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace System { class String; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x6B2ADE0)
#define MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x6B2AE40)
#define MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET UNITYSDK_OFFSET(0x6B2AD00)
#define MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_METHOD_4_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x6B2AC90)
#define MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_METHOD_4_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x6B2ABE0)
#define MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x6B2AD70)
#define MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x6B2AE50)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MusicBattleBonusTimeMarker_TypeDefinitionIndex = 41928;

	class MusicBattleBonusTimeMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::Boolean isEnter; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_DE52BD42C4B0B772()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_METHOD_4_DE52BD42C4B0B772_OFFSET))(this);
		}

		::System::Void Method_4_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_METHOD_4_3E7178C5ECF017DB_OFFSET))(this, a1);
		}

		::System::Boolean Method_4_111E3F406ABDDAA7(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET))(this, a1);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_GET_FLAGS_OFFSET))(this);
		}
	};
}
