#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE_PAUSE_OFFSET UNITYSDK_OFFSET(0x8AEB570)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x8AEB2B0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE_RESUME_OFFSET UNITYSDK_OFFSET(0x8AEB600)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE_START_OFFSET UNITYSDK_OFFSET(0x8AEB4E0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE_UPDATE_OFFSET UNITYSDK_OFFSET(0x8AEB690)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x8AEB950)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE__REGISTERPORTS_B__0_0_OFFSET UNITYSDK_OFFSET(0x8AEB970)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE__REGISTERPORTS_B__0_1_OFFSET UNITYSDK_OFFSET(0x8AEBA30)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE__REGISTERPORTS_B__0_2_OFFSET UNITYSDK_OFFSET(0x8AEBAE0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE__REGISTERPORTS_B__0_3_OFFSET UNITYSDK_OFFSET(0x8AEBB90)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardFixUpdateNode_TypeDefinitionIndex = 59430;

	class ChessboardFixUpdateNode : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Single>* _fixUpdateScale; // 0xA8
		::FlowCanvas::FlowInput* _pause; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Single>* _fixUpdateDuration; // 0xB8
		::FlowCanvas::FlowInput* _resume; // 0xC0
		::FlowCanvas::FlowInput* _start; // 0xC8
		::FlowCanvas::ValueOutput_1<::System::Int32>* _FrameOutput; // 0xD0
		::FlowCanvas::FlowOutput* _advance; // 0xD8
		::System::Int32 _Frame; // 0xE0
		::System::Boolean pause; // 0xE4
		::System::Boolean start; // 0xE5
		::System::Boolean finish; // 0xE6
		::System::Single _curTime; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE_START_OFFSET))(this, flow);
		}

		::System::Void Pause(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE_PAUSE_OFFSET))(this, flow);
		}

		::System::Void Resume(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE_RESUME_OFFSET))(this, flow);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE_UPDATE_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE__REGISTERPORTS_B__0_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__0_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE__REGISTERPORTS_B__0_1_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__0_2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE__REGISTERPORTS_B__0_2_OFFSET))(this, f);
		}

		::System::Int32 _RegisterPorts_b__0_3()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDFIXUPDATENODE__REGISTERPORTS_B__0_3_OFFSET))(this);
		}
	};
}
