#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/RouterEventNode_1.h"
#include "unitysdk/ParadoxNotion/EventData_1.h"
#include "unitysdk/UnityEngine/ContactPoint2D.h"

namespace FlowCanvas { class FlowOutput; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace UnityEngine { class Collision2D; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody2D; }

#define FLOWCANVAS_NODES_COLLISION2DEVENTS_RIGIDBODY_ONCOLLISIONENTER2D_OFFSET UNITYSDK_OFFSET(0x1A3F0470)
#define FLOWCANVAS_NODES_COLLISION2DEVENTS_RIGIDBODY_ONCOLLISIONEXIT2D_OFFSET UNITYSDK_OFFSET(0x1A3F0590)
#define FLOWCANVAS_NODES_COLLISION2DEVENTS_RIGIDBODY_ONCOLLISIONSTAY2D_OFFSET UNITYSDK_OFFSET(0x1A3F0500)
#define FLOWCANVAS_NODES_COLLISION2DEVENTS_RIGIDBODY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A3EFE80)
#define FLOWCANVAS_NODES_COLLISION2DEVENTS_RIGIDBODY_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1A3F0030)
#define FLOWCANVAS_NODES_COLLISION2DEVENTS_RIGIDBODY_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1A3F0250)
#define FLOWCANVAS_NODES_COLLISION2DEVENTS_RIGIDBODY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3F0620)
#define FLOWCANVAS_NODES_COLLISION2DEVENTS_RIGIDBODY__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1A3F0650)
#define FLOWCANVAS_NODES_COLLISION2DEVENTS_RIGIDBODY__REGISTERPORTS_B__5_1_OFFSET UNITYSDK_OFFSET(0x1A3F0660)
#define FLOWCANVAS_NODES_COLLISION2DEVENTS_RIGIDBODY__REGISTERPORTS_B__5_2_OFFSET UNITYSDK_OFFSET(0x1A3F0680)
#define FLOWCANVAS_NODES_COLLISION2DEVENTS_RIGIDBODY__REGISTERPORTS_B__5_3_OFFSET UNITYSDK_OFFSET(0x1A3F0740)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Collision2DEvents_Rigidbody_TypeDefinitionIndex = 27460;

	class Collision2DEvents_Rigidbody : public ::FlowCanvas::Nodes::RouterEventNode_1<::UnityEngine::Rigidbody2D*>
	{
	public:
		::UnityEngine::Rigidbody2D* receiver; // 0xC0
		::UnityEngine::Collision2D* collision; // 0xC8
		::FlowCanvas::FlowOutput* onStay; // 0xD0
		::FlowCanvas::FlowOutput* onEnter; // 0xD8
		::FlowCanvas::FlowOutput* onExit; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISION2DEVENTS_RIGIDBODY__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISION2DEVENTS_RIGIDBODY_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Subscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISION2DEVENTS_RIGIDBODY_SUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void UnSubscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISION2DEVENTS_RIGIDBODY_UNSUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void OnCollisionEnter2D(::ParadoxNotion::EventData_1<::UnityEngine::Collision2D*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collision2D*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISION2DEVENTS_RIGIDBODY_ONCOLLISIONENTER2D_OFFSET))(this, msg);
		}

		::System::Void OnCollisionStay2D(::ParadoxNotion::EventData_1<::UnityEngine::Collision2D*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collision2D*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISION2DEVENTS_RIGIDBODY_ONCOLLISIONSTAY2D_OFFSET))(this, msg);
		}

		::System::Void OnCollisionExit2D(::ParadoxNotion::EventData_1<::UnityEngine::Collision2D*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collision2D*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISION2DEVENTS_RIGIDBODY_ONCOLLISIONEXIT2D_OFFSET))(this, msg);
		}

		::UnityEngine::Rigidbody2D* _RegisterPorts_b__5_0()
		{
			return ((::UnityEngine::Rigidbody2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISION2DEVENTS_RIGIDBODY__REGISTERPORTS_B__5_0_OFFSET))(this);
		}

		::UnityEngine::GameObject* _RegisterPorts_b__5_1()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISION2DEVENTS_RIGIDBODY__REGISTERPORTS_B__5_1_OFFSET))(this);
		}

		::UnityEngine::ContactPoint2D _RegisterPorts_b__5_2()
		{
			return ((::UnityEngine::ContactPoint2D(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISION2DEVENTS_RIGIDBODY__REGISTERPORTS_B__5_2_OFFSET))(this);
		}

		::UnityEngine::Collision2D* _RegisterPorts_b__5_3()
		{
			return ((::UnityEngine::Collision2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISION2DEVENTS_RIGIDBODY__REGISTERPORTS_B__5_3_OFFSET))(this);
		}
	};
}
