#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDStarRandomPositionTask_State.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONTASK_CLOSE_OFFSET UNITYSDK_OFFSET(0xD0D7080)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONTASK_CORORANDOMPOSITION_OFFSET UNITYSDK_OFFSET(0xD0D75B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONTASK_PAUSE_OFFSET UNITYSDK_OFFSET(0xD0D6F60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONTASK_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xD0D6BC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONTASK_RESUME_OFFSET UNITYSDK_OFFSET(0xD0D6FF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONTASK_START_OFFSET UNITYSDK_OFFSET(0xD0D7180)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONTASK__CTOR_OFFSET UNITYSDK_OFFSET(0xD0D7670)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONTASK__REGISTERPORTS_B__18_0_OFFSET UNITYSDK_OFFSET(0xD0D7690)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONTASK__REGISTERPORTS_B__18_1_OFFSET UNITYSDK_OFFSET(0xD0D76A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDStarRandomPositionTask_TypeDefinitionIndex = 53989;

	class LDStarRandomPositionTask : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Single>* _inputCellSize; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* inputCount; // 0xB0
		::FlowCanvas::FlowOutput* _flowOutputFinish; // 0xB8
		::FlowCanvas::ValueInput_1<::MoleMole::EntityHandle>* inputCenter; // 0xC0
		::FlowCanvas::FlowOutput* _flowOutputDo; // 0xC8
		::UnityEngine::Coroutine* runingCoroutine; // 0xD0
		::FlowCanvas::ValueInput_1<::UnityEngine::Vector3>* _inputCenterOffset; // 0xD8
		::FlowCanvas::ValueInput_1<::UnityEngine::Vector2>* inputRandomDelay; // 0xE0
		::FlowCanvas::ValueInput_1<::System::Single>* inputInterval; // 0xE8
		::FlowCanvas::FlowOutput* _groupStart; // 0xF0
		::FlowCanvas::ValueInput_1<::System::Single>* _inputRange; // 0xF8
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::System::String*>*>* _inputDefaultExclude; // 0x100
		::FlowCanvas::ValueOutput_1<::UnityEngine::Vector3>* _outputPosition; // 0x108
		::FlowCanvas::FlowOutput* _flowOutputOut; // 0x110
		::MoleMole::FlowCanvas::Nodes::LDStarRandomPositionTask_State _state; // 0x118
		::System::Int32 taskHandle; // 0x11C
		::UnityEngine::Vector3 outPosition; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONTASK__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONTASK_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Pause(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONTASK_PAUSE_OFFSET))(this, f);
		}

		::System::Void Resume(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONTASK_RESUME_OFFSET))(this, f);
		}

		::System::Void Close(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONTASK_CLOSE_OFFSET))(this, f);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONTASK_START_OFFSET))(this, f);
		}

		::Cysharp::Threading::Tasks::UniTask CoroRandomPosition()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONTASK_CORORANDOMPOSITION_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__18_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONTASK__REGISTERPORTS_B__18_0_OFFSET))(this);
		}

		::UnityEngine::Vector3 _RegisterPorts_b__18_1()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONTASK__REGISTERPORTS_B__18_1_OFFSET))(this);
		}
	};
}
