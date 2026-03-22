#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x8F40010)
#define MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x8F40070)
#define MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET UNITYSDK_OFFSET(0x8F40080)
#define MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_METHOD_4_90ED9EE1B14DE0E1_OFFSET UNITYSDK_OFFSET(0x8F3FCE0)
#define MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_METHOD_4_F5B4708E7805566C_OFFSET UNITYSDK_OFFSET(0x8F3F620)
#define MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x8F3FFA0)
#define MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x8F400F0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CameraAttachEffectMarker_TypeDefinitionIndex = 74945;

	class CameraAttachEffectMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::String* effectKey; // 0x28
		::System::Boolean IsClose; // 0x30
		::MoleMole::Battle::Entity* _effEntity; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_F5B4708E7805566C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_METHOD_4_F5B4708E7805566C_OFFSET))(this);
		}

		::System::Void Method_4_90ED9EE1B14DE0E1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_METHOD_4_90ED9EE1B14DE0E1_OFFSET))(this, a1);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean Method_4_111E3F406ABDDAA7(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET))(this, a1);
		}
	};
}
