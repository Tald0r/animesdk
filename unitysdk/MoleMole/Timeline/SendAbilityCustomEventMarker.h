#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6CC2897B74C41026.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0xD46BD90)
#define MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0xD46BDF0)
#define MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_METHOD_4_09E78DEC01D6F816_OFFSET UNITYSDK_OFFSET(0xD46BC40)
#define MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_METHOD_4_0E3D8071A5930FA8_OFFSET UNITYSDK_OFFSET(0xD46B800)
#define MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_METHOD_4_A3BFBAFC3028D6CA_OFFSET UNITYSDK_OFFSET(0xD46BE00)
#define MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_METHOD_4_E651218EB2CC654F_OFFSET UNITYSDK_OFFSET(0xD46B790)
#define MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0xD46BCD0)
#define MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0xD46BE90)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SendAbilityCustomEventMarker_TypeDefinitionIndex = 48080;

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

		::System::Void Method_4_E651218EB2CC654F(::Struct_2_6CC2897B74C41026 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6CC2897B74C41026))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_METHOD_4_E651218EB2CC654F_OFFSET))(this, a1);
		}

		::System::Void Method_4_09E78DEC01D6F816(::Struct_2_6CC2897B74C41026 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6CC2897B74C41026, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_METHOD_4_09E78DEC01D6F816_OFFSET))(this, a1, a2);
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
