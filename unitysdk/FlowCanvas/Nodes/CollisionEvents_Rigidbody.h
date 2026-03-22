#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/RouterEventNode_1.h"
#include "unitysdk/ParadoxNotion/EventData_1.h"
#include "unitysdk/UnityEngine/ContactPoint.h"

namespace FlowCanvas { class FlowOutput; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }

#define FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x1A07E6B0)
#define FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0x1A07E7D0)
#define FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY_ONCOLLISIONSTAY_OFFSET UNITYSDK_OFFSET(0x1A07E740)
#define FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A07E0E0)
#define FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1A07E290)
#define FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1A07E4A0)
#define FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A07E860)
#define FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1A07E890)
#define FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY__REGISTERPORTS_B__5_1_OFFSET UNITYSDK_OFFSET(0x1A07E8A0)
#define FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY__REGISTERPORTS_B__5_2_OFFSET UNITYSDK_OFFSET(0x1A07E8C0)
#define FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY__REGISTERPORTS_B__5_3_OFFSET UNITYSDK_OFFSET(0x1A07E950)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CollisionEvents_Rigidbody_TypeDefinitionIndex = 25993;

	class CollisionEvents_Rigidbody : public ::FlowCanvas::Nodes::RouterEventNode_1<::UnityEngine::Rigidbody*>
	{
	public:
		::FlowCanvas::FlowOutput* onExit; // 0xC0
		::FlowCanvas::FlowOutput* onStay; // 0xC8
		::UnityEngine::Rigidbody* receiver; // 0xD0
		::FlowCanvas::FlowOutput* onEnter; // 0xD8
		::UnityEngine::Collision* collision; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Subscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY_SUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void UnSubscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY_UNSUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void OnCollisionEnter(::ParadoxNotion::EventData_1<::UnityEngine::Collision*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collision*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY_ONCOLLISIONENTER_OFFSET))(this, msg);
		}

		::System::Void OnCollisionStay(::ParadoxNotion::EventData_1<::UnityEngine::Collision*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collision*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY_ONCOLLISIONSTAY_OFFSET))(this, msg);
		}

		::System::Void OnCollisionExit(::ParadoxNotion::EventData_1<::UnityEngine::Collision*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collision*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY_ONCOLLISIONEXIT_OFFSET))(this, msg);
		}

		::UnityEngine::Rigidbody* _RegisterPorts_b__5_0()
		{
			return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY__REGISTERPORTS_B__5_0_OFFSET))(this);
		}

		::UnityEngine::GameObject* _RegisterPorts_b__5_1()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY__REGISTERPORTS_B__5_1_OFFSET))(this);
		}

		::UnityEngine::ContactPoint _RegisterPorts_b__5_2()
		{
			return ((::UnityEngine::ContactPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY__REGISTERPORTS_B__5_2_OFFSET))(this);
		}

		::UnityEngine::Collision* _RegisterPorts_b__5_3()
		{
			return ((::UnityEngine::Collision*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY__REGISTERPORTS_B__5_3_OFFSET))(this);
		}
	};
}
