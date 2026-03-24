#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDHOLLOWSHOWCOUNTDOWNUINODE_BEGIN_OFFSET UNITYSDK_OFFSET(0xCD3A6E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHOLLOWSHOWCOUNTDOWNUINODE_CLOSE_OFFSET UNITYSDK_OFFSET(0xCD3A3E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHOLLOWSHOWCOUNTDOWNUINODE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCD39BC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHOLLOWSHOWCOUNTDOWNUINODE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0xCD39CD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHOLLOWSHOWCOUNTDOWNUINODE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0xCD39D40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHOLLOWSHOWCOUNTDOWNUINODE_PAUSE_OFFSET UNITYSDK_OFFSET(0xCD3AE50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHOLLOWSHOWCOUNTDOWNUINODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xCD3A080)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHOLLOWSHOWCOUNTDOWNUINODE_RESTART_OFFSET UNITYSDK_OFFSET(0xCD3AD50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHOLLOWSHOWCOUNTDOWNUINODE_RESUME_OFFSET UNITYSDK_OFFSET(0xCD3AEE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHOLLOWSHOWCOUNTDOWNUINODE__CTOR_OFFSET UNITYSDK_OFFSET(0xCD3AF70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHOLLOWSHOWCOUNTDOWNUINODE__REGISTERPORTS_B__17_0_OFFSET UNITYSDK_OFFSET(0xCD3AFD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHOLLOWSHOWCOUNTDOWNUINODE__REGISTERPORTS_B__17_1_OFFSET UNITYSDK_OFFSET(0xCD3AFE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHOLLOWSHOWCOUNTDOWNUINODE___BASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCD3B000)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHOLLOWSHOWCOUNTDOWNUINODE___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0xCD3B010)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHOLLOWSHOWCOUNTDOWNUINODE___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0xCD3B020)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDHollowShowCountDownUINode_TypeDefinitionIndex = 53475;

	class LDHollowShowCountDownUINode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::Il2CppArray<::System::Single>* coundownParam; // 0xA8
		::FlowCanvas::FlowOutput* finish; // 0xB0
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* tipController; // 0xB8
		::Il2CppArray<::System::Single>* coutdownPauseParam; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Single>* time; // 0xC8
		::FlowCanvas::FlowOutput* start; // 0xD0
		::FlowCanvas::FlowOutput* update; // 0xD8
		::FlowCanvas::ValueInput_1<::System::Single>* curTime; // 0xE0
		::System::Boolean pauseState; // 0xE8
		::System::Single remainingNormalized; // 0xEC
		::System::Single remaining; // 0xF0
		::Foundation::Coroutine::CoroutineHandle updateHandle; // 0xF4
		::System::Single timer; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHOLLOWSHOWCOUNTDOWNUINODE__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHOLLOWSHOWCOUNTDOWNUINODE_GET_NAME_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHOLLOWSHOWCOUNTDOWNUINODE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHOLLOWSHOWCOUNTDOWNUINODE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHOLLOWSHOWCOUNTDOWNUINODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Close(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHOLLOWSHOWCOUNTDOWNUINODE_CLOSE_OFFSET))(this, f);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHOLLOWSHOWCOUNTDOWNUINODE_BEGIN_OFFSET))(this, f);
		}

		::System::Void Restart(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHOLLOWSHOWCOUNTDOWNUINODE_RESTART_OFFSET))(this, f);
		}

		::System::Void Pause(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHOLLOWSHOWCOUNTDOWNUINODE_PAUSE_OFFSET))(this, f);
		}

		::System::Void Resume(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHOLLOWSHOWCOUNTDOWNUINODE_RESUME_OFFSET))(this, f);
		}

		::System::Single _RegisterPorts_b__17_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHOLLOWSHOWCOUNTDOWNUINODE__REGISTERPORTS_B__17_0_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__17_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHOLLOWSHOWCOUNTDOWNUINODE__REGISTERPORTS_B__17_1_OFFSET))(this);
		}

		::System::String* __base_get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHOLLOWSHOWCOUNTDOWNUINODE___BASE_GET_NAME_OFFSET))(this);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHOLLOWSHOWCOUNTDOWNUINODE___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHOLLOWSHOWCOUNTDOWNUINODE___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
