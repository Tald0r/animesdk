#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_BEGIN_OFFSET UNITYSDK_OFFSET(0xD0DADB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_CLOSE_OFFSET UNITYSDK_OFFSET(0xD0DA7B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_FAIL_OFFSET UNITYSDK_OFFSET(0xD0DA5F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD0DA1A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_ONFINISH_OFFSET UNITYSDK_OFFSET(0xD0DAFA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xD0DA1B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_SHOWCOUNTDOWNUI_OFFSET UNITYSDK_OFFSET(0xD0DA850)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_SUCCESS_OFFSET UNITYSDK_OFFSET(0xD0DA430)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY__CTOR_OFFSET UNITYSDK_OFFSET(0xD0DB040)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY__REGISTERPORTS_B__7_0_OFFSET UNITYSDK_OFFSET(0xD0DB060)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY__REGISTERPORTS_B__7_1_OFFSET UNITYSDK_OFFSET(0xD0DB080)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_ShowCountDownUIByKey_TypeDefinitionIndex = 41049;

	class LD_ShowCountDownUIByKey : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Boolean>* showWhenMidText; // 0xA8
		::FlowCanvas::ValueInput_1<::System::String*>* linkTimerKey; // 0xB0
		::FlowCanvas::FlowOutput* finish; // 0xB8
		::FlowCanvas::FlowOutput* update; // 0xC0
		::Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA* _LTimer; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_GET_NAME_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Success(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_SUCCESS_OFFSET))(this, f);
		}

		::System::Void Fail(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_FAIL_OFFSET))(this, f);
		}

		::System::Void Close(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_CLOSE_OFFSET))(this, f);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_BEGIN_OFFSET))(this, f);
		}

		::System::Void ShowCountDownUI(::System::Boolean showState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_SHOWCOUNTDOWNUI_OFFSET))(this, showState);
		}

		::System::Void OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_ONFINISH_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__7_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY__REGISTERPORTS_B__7_0_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__7_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY__REGISTERPORTS_B__7_1_OFFSET))(this);
		}
	};
}
