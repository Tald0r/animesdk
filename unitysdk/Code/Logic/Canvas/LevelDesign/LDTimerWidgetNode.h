#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_1_8289F2785D9AA990;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE_BEGIN_OFFSET UNITYSDK_OFFSET(0x84FAE90)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE_PAUSECOUNTDOWNUI_OFFSET UNITYSDK_OFFSET(0x84FB470)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE_PAUSE_OFFSET UNITYSDK_OFFSET(0x84FB3D0)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x84FAC40)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE_RESUME_OFFSET UNITYSDK_OFFSET(0x84FB700)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE_SHOWCOUNTDOWNUI_OFFSET UNITYSDK_OFFSET(0x84FB0C0)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE_UPDATE_OFFSET UNITYSDK_OFFSET(0x84FB7A0)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x84FB8C0)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE__REGISTERPORTS_B__8_0_OFFSET UNITYSDK_OFFSET(0x84FB8E0)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE__REGISTERPORTS_B__8_1_OFFSET UNITYSDK_OFFSET(0x84FB8F0)

namespace Code::Logic::Canvas::LevelDesign
{
	inline static constexpr unsigned int LDTimerWidgetNode_TypeDefinitionIndex = 53098;

	class LDTimerWidgetNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Single>* totalDuration; // 0xA8
		::Class_1_8289F2785D9AA990* timer; // 0xB0
		::FlowCanvas::FlowOutput* start; // 0xB8
		::FlowCanvas::FlowOutput* finish; // 0xC0
		::FlowCanvas::FlowOutput* update; // 0xC8
		::System::Single remainingNormalized; // 0xD0
		::System::Single remaining; // 0xD4
		::System::Boolean pauseState; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE_BEGIN_OFFSET))(this, f);
		}

		::System::Void Pause(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE_PAUSE_OFFSET))(this, f);
		}

		::System::Void Resume(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE_RESUME_OFFSET))(this, f);
		}

		::System::Void ShowCountDownUI(::System::Boolean showState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE_SHOWCOUNTDOWNUI_OFFSET))(this, showState);
		}

		::System::Void PauseCountDownUI(::System::Boolean pause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE_PAUSECOUNTDOWNUI_OFFSET))(this, pause);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE_UPDATE_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__8_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE__REGISTERPORTS_B__8_0_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__8_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDTIMERWIDGETNODE__REGISTERPORTS_B__8_1_OFFSET))(this);
		}
	};
}
