#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0xD38A6B0)
#define MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0xD38A710)
#define MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_METHOD_4_0E3D8071A5930FA8_OFFSET UNITYSDK_OFFSET(0xD38A130)
#define MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_METHOD_4_1C90585DE55BD885_OFFSET UNITYSDK_OFFSET(0xD38A570)
#define MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_METHOD_4_A3BFBAFC3028D6CA_OFFSET UNITYSDK_OFFSET(0xD38A720)
#define MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_METHOD_4_A874457E729FCC2D_OFFSET UNITYSDK_OFFSET(0xD38A0C0)
#define MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0xD38A5F0)
#define MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0xD38A7B0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SendAbilityCustomEventMarker_TypeDefinitionIndex = 46700;

	class SendAbilityCustomEventMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::String* EventKey; // 0x28
		::System::Boolean IsGlobal; // 0x30
		::System::String* EntityTag; // 0x38
		::System::Boolean forceTriggerOnExit; // 0x40
		::System::Collections::Generic::List_1<::System::String*>* AllowBranchGroupTagList; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_A874457E729FCC2D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_METHOD_4_A874457E729FCC2D_OFFSET))(this);
		}

		::System::Void Method_4_1C90585DE55BD885(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_METHOD_4_1C90585DE55BD885_OFFSET))(this, a1);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean Method_4_A3BFBAFC3028D6CA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_METHOD_4_A3BFBAFC3028D6CA_OFFSET))(this, a1);
		}

		::System::Void Method_4_0E3D8071A5930FA8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_METHOD_4_0E3D8071A5930FA8_OFFSET))(this);
		}
	};
}
