#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_5_AF65C3A968E836D2;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GETTIME_OFFSET UNITYSDK_OFFSET(0x6AD7E90)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_CURRENTCHESSBOARD_OFFSET UNITYSDK_OFFSET(0x6AD75F0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_DELAY_OFFSET UNITYSDK_OFFSET(0x6AD7370)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_DISCRETEMODE_OFFSET UNITYSDK_OFFSET(0x6AD74E0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x6AD75E0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x6AD7560)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_MAXX_OFFSET UNITYSDK_OFFSET(0x6AD71F0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_MAXY_OFFSET UNITYSDK_OFFSET(0x6AD72F0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_MINX_OFFSET UNITYSDK_OFFSET(0x6AD7170)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_MINY_OFFSET UNITYSDK_OFFSET(0x6AD7270)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x6AD7F50)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x6AD7720)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x6AD8500)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_START_OFFSET UNITYSDK_OFFSET(0x6AD83C0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_STOP_OFFSET UNITYSDK_OFFSET(0x6AD8270)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_UPDATE_OFFSET UNITYSDK_OFFSET(0x6AD7A30)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x6AD8580)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE__REGISTERPORTS_B__40_0_OFFSET UNITYSDK_OFFSET(0x6AD8600)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE__REGISTERPORTS_B__40_1_OFFSET UNITYSDK_OFFSET(0x6AD8630)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE__REGISTERPORTS_B__40_2_OFFSET UNITYSDK_OFFSET(0x6AD8640)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE__REGISTERPORTS_B__40_3_OFFSET UNITYSDK_OFFSET(0x6AD8650)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameWaveActionNode_TypeDefinitionIndex = 57751;

	class HackerGameWaveActionNode : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::FlowOutput* _invokeColumn; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* _minX; // 0xB0
		::FlowCanvas::Flow _flow; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Int32>* _minY; // 0xE0
		::FlowCanvas::FlowInput* _start; // 0xE8
		::FlowCanvas::FlowOutput* _invokeCell; // 0xF0
		::FlowCanvas::ValueInput_1<::System::Int32>* _maxY; // 0xF8
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::System::Single>*>* _delay; // 0x100
		::FlowCanvas::ValueOutput_1<::System::Int32>* _xOutput; // 0x108
		::FlowCanvas::FlowOutput* _invokeFinish; // 0x110
		::FlowCanvas::ValueInput_1<::System::Int32>* _maxX; // 0x118
		::FlowCanvas::ValueOutput_1<::MoleMole::HollowChessboard::HollowCell>* _cellOutput; // 0x120
		::FlowCanvas::ValueInput_1<::System::Boolean>* _discreteMode; // 0x128
		::FlowCanvas::FlowOutput* _output; // 0x130
		::FlowCanvas::ValueOutput_1<::System::Int32>* _yOutput; // 0x138
		::FlowCanvas::ValueInput_1<::System::Boolean>* _isPaused; // 0x140
		::System::Boolean _isActive; // 0x148
		::System::Int32 _y; // 0x14C
		::System::Int32 _x; // 0x150
		::MoleMole::HollowChessboard::HollowCell _cell; // 0x154
		::System::Single _timer; // 0x160
		::System::Int32 _indexCache; // 0x164

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MinX()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_MINX_OFFSET))(this);
		}

		::System::Int32 get_MaxX()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_MAXX_OFFSET))(this);
		}

		::System::Int32 get_MinY()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_MINY_OFFSET))(this);
		}

		::System::Int32 get_MaxY()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_MAXY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Single>* get_Delay()
		{
			return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_DELAY_OFFSET))(this);
		}

		::System::Boolean get_DiscreteMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_DISCRETEMODE_OFFSET))(this);
		}

		::System::Boolean get_IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_ISPAUSED_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_ISACTIVE_OFFSET))(this);
		}

		::Class_5_AF65C3A968E836D2* get_CurrentChessboard()
		{
			return ((::Class_5_AF65C3A968E836D2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_CURRENTCHESSBOARD_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_UPDATE_OFFSET))(this);
		}

		::System::Single GetTime(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GETTIME_OFFSET))(this, index);
		}

		::System::Void Invoke(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_INVOKE_OFFSET))(this, index);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_START_OFFSET))(this, flow);
		}

		::System::Void Stop(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_STOP_OFFSET))(this, flow);
		}

		::System::Void SetActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_SETACTIVE_OFFSET))(this, value);
		}

		::System::Void _RegisterPorts_b__40_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE__REGISTERPORTS_B__40_0_OFFSET))(this, f);
		}

		::System::Int32 _RegisterPorts_b__40_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE__REGISTERPORTS_B__40_1_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__40_2()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE__REGISTERPORTS_B__40_2_OFFSET))(this);
		}

		::MoleMole::HollowChessboard::HollowCell _RegisterPorts_b__40_3()
		{
			return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE__REGISTERPORTS_B__40_3_OFFSET))(this);
		}
	};
}
