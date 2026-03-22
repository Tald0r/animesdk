#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AntialiasingMode.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace System { class String; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x9ACEE90)
#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x9ACEEF0)
#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET UNITYSDK_OFFSET(0x9ACEF00)
#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_METHOD_4_8D85AFBC485D8ABF_OFFSET UNITYSDK_OFFSET(0x9ACE860)
#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_METHOD_4_B37C805F1A4DBCFB_OFFSET UNITYSDK_OFFSET(0x9ACEBB0)
#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_METHOD_4_EBAB6A35C21A2A5B_OFFSET UNITYSDK_OFFSET(0x9ACE730)
#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x9ACEE20)
#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x9ACEF70)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CameraSMAAChangeMarker_TypeDefinitionIndex = 49528;

	class CameraSMAAChangeMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::Boolean IsOpen; // 0x28
		::UnityEngine::NAPRenderPipeline0::AntialiasingMode prevAAMode; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_EBAB6A35C21A2A5B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_METHOD_4_EBAB6A35C21A2A5B_OFFSET))(this);
		}

		::System::Void Method_4_B37C805F1A4DBCFB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_METHOD_4_B37C805F1A4DBCFB_OFFSET))(this, a1);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean Method_4_111E3F406ABDDAA7(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET))(this, a1);
		}

		::System::Void Method_4_8D85AFBC485D8ABF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_METHOD_4_8D85AFBC485D8ABF_OFFSET))(this, a1);
		}
	};
}
