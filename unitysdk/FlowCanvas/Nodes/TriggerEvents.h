#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/RouterEventNode_1.h"
#include "unitysdk/ParadoxNotion/EventData_1.h"

namespace FlowCanvas { class FlowOutput; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define FLOWCANVAS_NODES_TRIGGEREVENTS_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1A3F2B10)
#define FLOWCANVAS_NODES_TRIGGEREVENTS_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1A3F2C50)
#define FLOWCANVAS_NODES_TRIGGEREVENTS_ONTRIGGERSTAY_OFFSET UNITYSDK_OFFSET(0x1A3F2BB0)
#define FLOWCANVAS_NODES_TRIGGEREVENTS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A3F25B0)
#define FLOWCANVAS_NODES_TRIGGEREVENTS_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1A3F26D0)
#define FLOWCANVAS_NODES_TRIGGEREVENTS_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1A3F28F0)
#define FLOWCANVAS_NODES_TRIGGEREVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3F2CF0)
#define FLOWCANVAS_NODES_TRIGGEREVENTS__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1A3F2D20)
#define FLOWCANVAS_NODES_TRIGGEREVENTS__REGISTERPORTS_B__5_1_OFFSET UNITYSDK_OFFSET(0x1A3F2D30)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int TriggerEvents_TypeDefinitionIndex = 26799;

	class TriggerEvents : public ::FlowCanvas::Nodes::RouterEventNode_1<::UnityEngine::Collider*>
	{
	public:
		::FlowCanvas::FlowOutput* onExit; // 0xC0
		::UnityEngine::GameObject* other; // 0xC8
		::FlowCanvas::FlowOutput* onStay; // 0xD0
		::FlowCanvas::FlowOutput* onEnter; // 0xD8
		::UnityEngine::Collider* receiver; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGEREVENTS__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGEREVENTS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Subscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGEREVENTS_SUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void UnSubscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGEREVENTS_UNSUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void OnTriggerEnter(::ParadoxNotion::EventData_1<::UnityEngine::Collider*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collider*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGEREVENTS_ONTRIGGERENTER_OFFSET))(this, msg);
		}

		::System::Void OnTriggerStay(::ParadoxNotion::EventData_1<::UnityEngine::Collider*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collider*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGEREVENTS_ONTRIGGERSTAY_OFFSET))(this, msg);
		}

		::System::Void OnTriggerExit(::ParadoxNotion::EventData_1<::UnityEngine::Collider*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collider*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGEREVENTS_ONTRIGGEREXIT_OFFSET))(this, msg);
		}

		::UnityEngine::Collider* _RegisterPorts_b__5_0()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGEREVENTS__REGISTERPORTS_B__5_0_OFFSET))(this);
		}

		::UnityEngine::GameObject* _RegisterPorts_b__5_1()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGEREVENTS__REGISTERPORTS_B__5_1_OFFSET))(this);
		}
	};
}
