#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/LatentActionNodeBase_InvocationMode.h"
#include "unitysdk/FlowCanvas/Nodes/LatentActionNodeBase_RoutineData.h"
#include "unitysdk/FlowCanvas/Nodes/SimplexNode.h"

namespace FlowCanvas { class FlowNode; }
namespace FlowCanvas { class FlowOutput; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Coroutine; }

#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE_BEGIN_OFFSET UNITYSDK_OFFSET(0x1A3F0D20)
#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE_BREAKALL_OFFSET UNITYSDK_OFFSET(0x1A3F0C80)
#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE_GET_ALLOWROUTINEQUEUEING_OFFSET UNITYSDK_OFFSET(0x1A3F1090)
#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A3F0B30)
#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE_INTERNALCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1A3F0EC0)
#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE_ONBREAK_OFFSET UNITYSDK_OFFSET(0x1A3F1080)
#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1A3F0C00)
#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A3F0C10)
#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE_ONREGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A3F0F30)
#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3F10A0)
#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE__INTERNALCOROUTINE_B__15_0_OFFSET UNITYSDK_OFFSET(0x1A3F10B0)
#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE__ONREGISTERPORTS_B__16_0_OFFSET UNITYSDK_OFFSET(0x1A3F10C0)
#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE__ONREGISTERPORTS_B__16_1_OFFSET UNITYSDK_OFFSET(0x1A3F10D0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LatentActionNodeBase_TypeDefinitionIndex = 26842;

	class LatentActionNodeBase : public ::FlowCanvas::Nodes::SimplexNode
	{
	public:
		::FlowCanvas::FlowOutput* onFinish; // 0x30
		::System::Collections::Generic::Queue_1<::FlowCanvas::Nodes::LatentActionNodeBase_RoutineData>* routineQueue; // 0x38
		::FlowCanvas::FlowOutput* onUpdate; // 0x40
		::UnityEngine::Coroutine* currentCoroutine; // 0x48
		::FlowCanvas::FlowOutput* onStart; // 0x50
		::FlowCanvas::Nodes::LatentActionNodeBase_InvocationMode invocationMode; // 0x58
		::System::Boolean graphStoped; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE_GET_NAME_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void Begin(::System::Collections::IEnumerator* enumerator, ::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerator*, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE_BEGIN_OFFSET))(this, enumerator, f);
		}

		::System::Void BreakAll(::System::Boolean callFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE_BREAKALL_OFFSET))(this, callFinish);
		}

		::System::Collections::IEnumerator* InternalCoroutine(::FlowCanvas::Nodes::LatentActionNodeBase_RoutineData data)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::FlowCanvas::Nodes::LatentActionNodeBase_RoutineData))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE_INTERNALCOROUTINE_OFFSET))(this, data);
		}

		::System::Void OnRegisterPorts(::FlowCanvas::FlowNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE_ONREGISTERPORTS_OFFSET))(this, node);
		}

		::System::Void OnBreak()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE_ONBREAK_OFFSET))(this);
		}

		::System::Boolean get_allowRoutineQueueing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE_GET_ALLOWROUTINEQUEUEING_OFFSET))(this);
		}

		::System::Void _InternalCoroutine_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE__INTERNALCOROUTINE_B__15_0_OFFSET))(this);
		}

		::System::Void _OnRegisterPorts_b__16_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE__ONREGISTERPORTS_B__16_0_OFFSET))(this, f);
		}

		::System::Void _OnRegisterPorts_b__16_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE__ONREGISTERPORTS_B__16_1_OFFSET))(this, f);
		}
	};
}
