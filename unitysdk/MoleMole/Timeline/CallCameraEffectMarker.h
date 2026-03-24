#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/Config/ShaderCustomType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LD_CallCameraEffect_CallType.h"
#include "unitysdk/MoleMole/Timeline/CallCameraEffectActionType.h"
#include "unitysdk/Struct_2_6CC2897B74C41026.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace System { class String; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_CALLCAMERAEFFECTMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0xA668800)
#define MOLEMOLE_TIMELINE_CALLCAMERAEFFECTMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0xA667F70)
#define MOLEMOLE_TIMELINE_CALLCAMERAEFFECTMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET UNITYSDK_OFFSET(0xA668860)
#define MOLEMOLE_TIMELINE_CALLCAMERAEFFECTMARKER_METHOD_4_9C6221085838BD79_OFFSET UNITYSDK_OFFSET(0xA667F80)
#define MOLEMOLE_TIMELINE_CALLCAMERAEFFECTMARKER_METHOD_4_AA94FB72678389C0_OFFSET UNITYSDK_OFFSET(0xA668720)
#define MOLEMOLE_TIMELINE_CALLCAMERAEFFECTMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0xA668790)
#define MOLEMOLE_TIMELINE_CALLCAMERAEFFECTMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0xA6688D0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CallCameraEffectMarker_TypeDefinitionIndex = 81101;

	class CallCameraEffectMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::MoleMole::Timeline::CallCameraEffectActionType actionType; // 0x28
		::MoleMole::FlowCanvas::Nodes::LD_CallCameraEffect_CallType callType; // 0x2C
		::System::Boolean isInterruptType; // 0x30
		::System::Boolean isEndByKey; // 0x31
		::MoleMole::Config::ScreenEffectType effectType; // 0x34
		::MoleMole::Config::ShaderCustomType shaderCustomType; // 0x38
		::System::String* effectKey; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CALLCAMERAEFFECTMARKER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CALLCAMERAEFFECTMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Void Method_4_9C6221085838BD79(::Struct_2_6CC2897B74C41026 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6CC2897B74C41026))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CALLCAMERAEFFECTMARKER_METHOD_4_9C6221085838BD79_OFFSET))(this, a1);
		}

		::System::Void Method_4_AA94FB72678389C0(::Struct_2_6CC2897B74C41026 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6CC2897B74C41026, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CALLCAMERAEFFECTMARKER_METHOD_4_AA94FB72678389C0_OFFSET))(this, a1, a2);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CALLCAMERAEFFECTMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CALLCAMERAEFFECTMARKER_GETDATA_OFFSET))(this);
		}

		::System::Boolean Method_4_111E3F406ABDDAA7(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CALLCAMERAEFFECTMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET))(this, a1);
		}
	};
}
