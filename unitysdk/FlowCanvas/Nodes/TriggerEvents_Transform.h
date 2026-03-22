#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/RouterEventNode_1.h"
#include "unitysdk/ParadoxNotion/EventData_1.h"

namespace FlowCanvas { class FlowOutput; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define FLOWCANVAS_NODES_TRIGGEREVENTS_TRANSFORM_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1A0815F0)
#define FLOWCANVAS_NODES_TRIGGEREVENTS_TRANSFORM_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1A081730)
#define FLOWCANVAS_NODES_TRIGGEREVENTS_TRANSFORM_ONTRIGGERSTAY_OFFSET UNITYSDK_OFFSET(0x1A081690)
#define FLOWCANVAS_NODES_TRIGGEREVENTS_TRANSFORM_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A0810B0)
#define FLOWCANVAS_NODES_TRIGGEREVENTS_TRANSFORM_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1A0811D0)
#define FLOWCANVAS_NODES_TRIGGEREVENTS_TRANSFORM_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1A0813E0)
#define FLOWCANVAS_NODES_TRIGGEREVENTS_TRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0817D0)
#define FLOWCANVAS_NODES_TRIGGEREVENTS_TRANSFORM__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1A081800)
#define FLOWCANVAS_NODES_TRIGGEREVENTS_TRANSFORM__REGISTERPORTS_B__5_1_OFFSET UNITYSDK_OFFSET(0x1A081810)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int TriggerEvents_Transform_TypeDefinitionIndex = 25671;

	class TriggerEvents_Transform : public ::FlowCanvas::Nodes::RouterEventNode_1<::UnityEngine::Transform*>
	{
	public:
		::FlowCanvas::FlowOutput* onExit; // 0xC0
		::FlowCanvas::FlowOutput* onStay; // 0xC8
		::UnityEngine::GameObject* other; // 0xD0
		::UnityEngine::Transform* receiver; // 0xD8
		::FlowCanvas::FlowOutput* onEnter; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGEREVENTS_TRANSFORM__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGEREVENTS_TRANSFORM_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Subscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGEREVENTS_TRANSFORM_SUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void UnSubscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGEREVENTS_TRANSFORM_UNSUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void OnTriggerEnter(::ParadoxNotion::EventData_1<::UnityEngine::Collider*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collider*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGEREVENTS_TRANSFORM_ONTRIGGERENTER_OFFSET))(this, msg);
		}

		::System::Void OnTriggerStay(::ParadoxNotion::EventData_1<::UnityEngine::Collider*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collider*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGEREVENTS_TRANSFORM_ONTRIGGERSTAY_OFFSET))(this, msg);
		}

		::System::Void OnTriggerExit(::ParadoxNotion::EventData_1<::UnityEngine::Collider*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collider*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGEREVENTS_TRANSFORM_ONTRIGGEREXIT_OFFSET))(this, msg);
		}

		::UnityEngine::Transform* _RegisterPorts_b__5_0()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGEREVENTS_TRANSFORM__REGISTERPORTS_B__5_0_OFFSET))(this);
		}

		::UnityEngine::GameObject* _RegisterPorts_b__5_1()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGEREVENTS_TRANSFORM__REGISTERPORTS_B__5_1_OFFSET))(this);
		}
	};
}
