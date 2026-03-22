#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace System { class String; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_NAPDEBUGLOGMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x8F46C70)
#define MOLEMOLE_TIMELINE_NAPDEBUGLOGMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x8F46CD0)
#define MOLEMOLE_TIMELINE_NAPDEBUGLOGMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET UNITYSDK_OFFSET(0x8F46CE0)
#define MOLEMOLE_TIMELINE_NAPDEBUGLOGMARKER_METHOD_4_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x8F46B50)
#define MOLEMOLE_TIMELINE_NAPDEBUGLOGMARKER_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8F46AF0)
#define MOLEMOLE_TIMELINE_NAPDEBUGLOGMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x8F46BC0)
#define MOLEMOLE_TIMELINE_NAPDEBUGLOGMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x8F46D50)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int NapDebugLogMarker_TypeDefinitionIndex = 70824;

	class NapDebugLogMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::String* LogText; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPDEBUGLOGMARKER__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPDEBUGLOGMARKER_METHOD_4_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_4_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPDEBUGLOGMARKER_METHOD_4_3E7178C5ECF017DB_OFFSET))(this, a1);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPDEBUGLOGMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPDEBUGLOGMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPDEBUGLOGMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean Method_4_111E3F406ABDDAA7(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPDEBUGLOGMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET))(this, a1);
		}
	};
}
