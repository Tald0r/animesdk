#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6CC2897B74C41026.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AntialiasingMode.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace System { class String; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0xA541D90)
#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0xA541DF0)
#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_METHOD_4_11004A097DC7DDF7_OFFSET UNITYSDK_OFFSET(0xA541630)
#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET UNITYSDK_OFFSET(0xA541E00)
#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_METHOD_4_253CD9EF68110E19_OFFSET UNITYSDK_OFFSET(0xA541AB0)
#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_METHOD_4_8D85AFBC485D8ABF_OFFSET UNITYSDK_OFFSET(0xA541760)
#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0xA541D20)
#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0xA541E70)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CameraSMAAChangeMarker_TypeDefinitionIndex = 79868;

	class CameraSMAAChangeMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::Boolean IsOpen; // 0x28
		::UnityEngine::NAPRenderPipeline0::AntialiasingMode prevAAMode; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_11004A097DC7DDF7(::Struct_2_6CC2897B74C41026 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6CC2897B74C41026))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_METHOD_4_11004A097DC7DDF7_OFFSET))(this, a1);
		}

		::System::Void Method_4_253CD9EF68110E19(::Struct_2_6CC2897B74C41026 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6CC2897B74C41026, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_METHOD_4_253CD9EF68110E19_OFFSET))(this, a1, a2);
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
