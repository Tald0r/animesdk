#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_1_16EA9862B8D2E5C9;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE_ADVANCEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA37D150)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE_ADVANCE_OFFSET UNITYSDK_OFFSET(0xA37CF20)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE_PAUSE_OFFSET UNITYSDK_OFFSET(0xA37CE00)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xA37C2B0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE_RESUME_OFFSET UNITYSDK_OFFSET(0xA37CE90)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE_START_OFFSET UNITYSDK_OFFSET(0xA37C760)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xA37D5E0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_0_OFFSET UNITYSDK_OFFSET(0xA37D600)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_1_OFFSET UNITYSDK_OFFSET(0xA37D630)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_2_OFFSET UNITYSDK_OFFSET(0xA37D6E0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_3_OFFSET UNITYSDK_OFFSET(0xA37D790)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_4_OFFSET UNITYSDK_OFFSET(0xA37D7A0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_5_OFFSET UNITYSDK_OFFSET(0xA37D7B0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_6_OFFSET UNITYSDK_OFFSET(0xA37D7D0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_7_OFFSET UNITYSDK_OFFSET(0xA37D7E0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_8_OFFSET UNITYSDK_OFFSET(0xA37D7F0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardMonsterSpawnerNode_TypeDefinitionIndex = 76602;

	class ChessboardMonsterSpawnerNode : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::ValueOutput_1<::System::Collections::Generic::List_1<::System::UInt32>*>* _spawnerEntityList; // 0xA8
		::FlowCanvas::FlowInput* _start; // 0xB0
		::Class_1_16EA9862B8D2E5C9* _spawner; // 0xB8
		::System::Collections::Generic::List_1<::System::Int32>* _tokenList; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Int32>* _feverGroupId; // 0xC8
		::FlowCanvas::FlowOutput* _finish; // 0xD0
		::FlowCanvas::FlowOutput* _update; // 0xD8
		::FlowCanvas::ValueInput_1<::System::Int32>* _peedRatio; // 0xE0
		::System::String* _spawnSignalValue; // 0xE8
		::FlowCanvas::ValueOutput_1<::System::Collections::Generic::List_1<::System::Int32>*>* _TokenList; // 0xF0
		::FlowCanvas::ValueInput_1<::System::Int32>* _groupId; // 0xF8
		::FlowCanvas::ValueOutput_1<::System::Int32>* _totalFrame; // 0x100
		::FlowCanvas::FlowInput* _pause; // 0x108
		::System::Collections::Generic::List_1<::System::UInt32>* cacheSpawnerEntityList; // 0x110
		::Class_1_16EA9862B8D2E5C9* _hoverSpawner; // 0x118
		::FlowCanvas::FlowInput* _resume; // 0x120
		::FlowCanvas::ValueOutput_1<::System::Int32>* _curFrame; // 0x128
		::FlowCanvas::ValueInput_1<::System::Boolean>* _hever; // 0x130
		::FlowCanvas::FlowOutput* _then; // 0x138
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*>* _cellMap; // 0x140
		::FlowCanvas::FlowInput* _advance; // 0x148
		::FlowCanvas::ValueOutput_1<::System::String*>* _spawnSignal; // 0x150
		::FlowCanvas::ValueInput_1<::System::String*>* _groupIndex; // 0x158
		::System::Int32 _curFrameInternal; // 0x160
		::System::Boolean start; // 0x164
		::System::Boolean pause; // 0x165
		::System::Boolean finish; // 0x166
		::System::Int32 _curTime; // 0x168

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE_START_OFFSET))(this, flow);
		}

		::System::Void Pause(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE_PAUSE_OFFSET))(this, flow);
		}

		::System::Void Resume(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE_RESUME_OFFSET))(this, flow);
		}

		::System::Void Advance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE_ADVANCE_OFFSET))(this);
		}

		::System::Boolean AdvanceInternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE_ADVANCEINTERNAL_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__0_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_1_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__0_2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_2_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__0_3(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_3_OFFSET))(this, f);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _RegisterPorts_b__0_4()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_4_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__0_5()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_5_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__0_6()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_6_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__0_7()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_7_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* _RegisterPorts_b__0_8()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_8_OFFSET))(this);
		}
	};
}
