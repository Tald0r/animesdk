#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0xA4AB490)
#define MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0xA4AB4F0)
#define MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_METHOD_4_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xA4AAFE0)
#define MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_METHOD_4_74FE0F242303E029_OFFSET UNITYSDK_OFFSET(0xA4AB2E0)
#define MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_METHOD_4_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0xA4AAEB0)
#define MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_METHOD_4_A3BFBAFC3028D6CA_OFFSET UNITYSDK_OFFSET(0xA4AB500)
#define MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0xA4AB420)
#define MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0xA4AB590)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SendEventToFCMarker_TypeDefinitionIndex = 65367;

	class SendEventToFCMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::String* eventName; // 0x28
		::System::Boolean isFCRawEvent; // 0x30
		::System::Boolean forceTriggerOnExit; // 0x31
		::System::Collections::Generic::List_1<::System::String*>* AllowBranchGroupTagList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_8F7825DAFFB9B517()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_METHOD_4_8F7825DAFFB9B517_OFFSET))(this);
		}

		::System::Void Method_4_74FE0F242303E029(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_METHOD_4_74FE0F242303E029_OFFSET))(this, a1);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean Method_4_A3BFBAFC3028D6CA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_METHOD_4_A3BFBAFC3028D6CA_OFFSET))(this, a1);
		}

		::System::Void Method_4_508D4DD02D3DB74E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_METHOD_4_508D4DD02D3DB74E_OFFSET))(this);
		}
	};
}
