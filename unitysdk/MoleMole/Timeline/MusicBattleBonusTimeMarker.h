#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6CC2897B74C41026.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace System { class String; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0xD453EB0)
#define MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0xD453F10)
#define MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET UNITYSDK_OFFSET(0xD453DD0)
#define MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_METHOD_4_1125A08AE683AE0F_OFFSET UNITYSDK_OFFSET(0xD453CB0)
#define MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_METHOD_4_AA94FB72678389C0_OFFSET UNITYSDK_OFFSET(0xD453D60)
#define MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0xD453E40)
#define MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0xD453F20)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MusicBattleBonusTimeMarker_TypeDefinitionIndex = 55155;

	class MusicBattleBonusTimeMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::Boolean isEnter; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_1125A08AE683AE0F(::Struct_2_6CC2897B74C41026 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6CC2897B74C41026))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_METHOD_4_1125A08AE683AE0F_OFFSET))(this, a1);
		}

		::System::Void Method_4_AA94FB72678389C0(::Struct_2_6CC2897B74C41026 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6CC2897B74C41026, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUSICBATTLEBONUSTIMEMARKER_METHOD_4_AA94FB72678389C0_OFFSET))(this, a1, a2);
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
