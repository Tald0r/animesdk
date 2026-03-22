#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_BEGIN_OFFSET UNITYSDK_OFFSET(0x8F7B290)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_CLOSE_OFFSET UNITYSDK_OFFSET(0x8F7AC90)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_FAIL_OFFSET UNITYSDK_OFFSET(0x8F7AAD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x8F7A680)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_ONFINISH_OFFSET UNITYSDK_OFFSET(0x8F7B480)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x8F7A690)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_SHOWCOUNTDOWNUI_OFFSET UNITYSDK_OFFSET(0x8F7AD30)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_SUCCESS_OFFSET UNITYSDK_OFFSET(0x8F7A910)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x8F7B520)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY__REGISTERPORTS_B__7_0_OFFSET UNITYSDK_OFFSET(0x8F7B540)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY__REGISTERPORTS_B__7_1_OFFSET UNITYSDK_OFFSET(0x8F7B560)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_ShowCountDownUIByKey_TypeDefinitionIndex = 40219;

	class LD_ShowCountDownUIByKey : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA* _LTimer; // 0xA8
		::FlowCanvas::FlowOutput* update; // 0xB0
		::FlowCanvas::FlowOutput* finish; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Boolean>* showWhenMidText; // 0xC0
		::FlowCanvas::ValueInput_1<::System::String*>* linkTimerKey; // 0xC8

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
