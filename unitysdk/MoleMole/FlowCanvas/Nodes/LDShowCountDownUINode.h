#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDShowCountDownUINode_CountDownMode.h"

class Class_1_8289F2785D9AA990;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE_BEGIN_OFFSET UNITYSDK_OFFSET(0xF1AA150)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE_CLOSE_OFFSET UNITYSDK_OFFSET(0xF1A9B20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0xF1AA6E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE_FAIL_OFFSET UNITYSDK_OFFSET(0xF1A9960)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xF1A91A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0xF1A92B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0xF1A9330)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE_PAUSECOUNTDOWNUI_OFFSET UNITYSDK_OFFSET(0xF1AAA40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE_PAUSE_OFFSET UNITYSDK_OFFSET(0xF1AACD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xF1A93C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE_RESTART_OFFSET UNITYSDK_OFFSET(0xF1AA7B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE_RESUME_OFFSET UNITYSDK_OFFSET(0xF1AAD80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE_SHOWCOUNTDOWNUI_OFFSET UNITYSDK_OFFSET(0xF1A9BF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE_SUCCESS_OFFSET UNITYSDK_OFFSET(0xF1A97A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE__CTOR_OFFSET UNITYSDK_OFFSET(0xF1AAE20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE__REGISTERPORTS_B__18_0_OFFSET UNITYSDK_OFFSET(0xF1AAE40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE__REGISTERPORTS_B__18_1_OFFSET UNITYSDK_OFFSET(0xF1AAE70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE__REGISTERPORTS_B__18_2_OFFSET UNITYSDK_OFFSET(0xF1AAEB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE__SETREMAIN_OFFSET UNITYSDK_OFFSET(0xF1AA5E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE___BASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xF1AAF60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0xF1AAF70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0xF1AAF80)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowCountDownUINode_TypeDefinitionIndex = 39342;

	class LDShowCountDownUINode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Single>* resetRemainTime; // 0xA8
		::Class_1_8289F2785D9AA990* timer; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* linkTimerKey; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Boolean>* showWhenMidText; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Single>* totalDuration; // 0xC8
		::UnityEngine::Coroutine* coroutine; // 0xD0
		::FlowCanvas::FlowOutput* update; // 0xD8
		::FlowCanvas::FlowOutput* finish; // 0xE0
		::FlowCanvas::FlowOutput* start; // 0xE8
		::System::Boolean pauseState; // 0xF0
		::System::Single remainingNormalized; // 0xF4
		::MoleMole::FlowCanvas::Nodes::LDShowCountDownUINode_CountDownMode runMode; // 0xF8
		::System::Single remaining; // 0xFC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE_GET_NAME_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Success(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE_SUCCESS_OFFSET))(this, f);
		}

		::System::Void Fail(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE_FAIL_OFFSET))(this, f);
		}

		::System::Void Close(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE_CLOSE_OFFSET))(this, f);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE_BEGIN_OFFSET))(this, f);
		}

		::System::Void _SetRemain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE__SETREMAIN_OFFSET))(this);
		}

		::System::Void Restart(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE_RESTART_OFFSET))(this, f);
		}

		::System::Void Pause(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE_PAUSE_OFFSET))(this, f);
		}

		::System::Void Resume(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE_RESUME_OFFSET))(this, f);
		}

		::System::Void ShowCountDownUI(::System::Boolean showState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE_SHOWCOUNTDOWNUI_OFFSET))(this, showState);
		}

		::System::Void PauseCountDownUI(::System::Boolean pause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE_PAUSECOUNTDOWNUI_OFFSET))(this, pause);
		}

		::System::Collections::IEnumerator* CountDown(::FlowCanvas::Flow f)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE_COUNTDOWN_OFFSET))(this, f);
		}

		::System::Single _RegisterPorts_b__18_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE__REGISTERPORTS_B__18_0_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__18_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE__REGISTERPORTS_B__18_1_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__18_2(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE__REGISTERPORTS_B__18_2_OFFSET))(this, flow);
		}

		::System::String* __base_get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE___BASE_GET_NAME_OFFSET))(this);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
