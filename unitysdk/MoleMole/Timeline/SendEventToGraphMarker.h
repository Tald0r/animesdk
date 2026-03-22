#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x67DD550)
#define MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x67DD5B0)
#define MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_METHOD_4_2340068C22DFE332_OFFSET UNITYSDK_OFFSET(0x67DD120)
#define MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_METHOD_4_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x67DD250)
#define MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_METHOD_4_802EE4086E769136_OFFSET UNITYSDK_OFFSET(0x67DD3A0)
#define MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_METHOD_4_A3BFBAFC3028D6CA_OFFSET UNITYSDK_OFFSET(0x67DD5C0)
#define MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x67DD4E0)
#define MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x67DD650)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SendEventToGraphMarker_TypeDefinitionIndex = 59218;

	class SendEventToGraphMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::String* eventName; // 0x28
		::System::Boolean forceTriggerOnExit; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* AllowBranchGroupTagList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_2340068C22DFE332()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_METHOD_4_2340068C22DFE332_OFFSET))(this);
		}

		::System::Void Method_4_802EE4086E769136(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_METHOD_4_802EE4086E769136_OFFSET))(this, a1);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean Method_4_A3BFBAFC3028D6CA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_METHOD_4_A3BFBAFC3028D6CA_OFFSET))(this, a1);
		}

		::System::Void Method_4_2566AD459572DFC3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_METHOD_4_2566AD459572DFC3_OFFSET))(this);
		}
	};
}
