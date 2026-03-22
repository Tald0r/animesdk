#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EAvatarCameraShotType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDReadDailyCardData_MonsterInfo.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xC2C54B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA_START_OFFSET UNITYSDK_OFFSET(0xC2C5740)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC2C6020)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA__REGISTERPORTS_B__13_0_OFFSET UNITYSDK_OFFSET(0xC2C60C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA__REGISTERPORTS_B__13_1_OFFSET UNITYSDK_OFFSET(0xC2C60F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA__REGISTERPORTS_B__13_2_OFFSET UNITYSDK_OFFSET(0xC2C6100)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA__REGISTERPORTS_B__13_3_OFFSET UNITYSDK_OFFSET(0xC2C6110)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA__REGISTERPORTS_B__13_4_OFFSET UNITYSDK_OFFSET(0xC2C6120)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA__REGISTERPORTS_B__13_5_OFFSET UNITYSDK_OFFSET(0xC2C6130)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDReadDailyCardData_TypeDefinitionIndex = 77869;

	class LDReadDailyCardData : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::String* targetBattleStageHandle; // 0xA8
		::FlowCanvas::FlowInput* input; // 0xB0
		::FlowCanvas::ValueOutput_1<::System::String*>* targetBattleStage; // 0xB8
		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LDReadDailyCardData_MonsterInfo>* waveMonsterHandle; // 0xC0
		::FlowCanvas::ValueOutput_1<::System::Int32>* changeToBadassBattleField; // 0xC8
		::System::String* playerSpawnPos; // 0xD0
		::FlowCanvas::FlowOutput* output; // 0xD8
		::FlowCanvas::ValueOutput_1<::System::String*>* playerSpawnPosNode; // 0xE0
		::FlowCanvas::ValueOutput_1<::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LDReadDailyCardData_MonsterInfo>*>* waveMonsters; // 0xE8
		::FlowCanvas::ValueInput_1<::System::Int32>* cardIdNode; // 0xF0
		::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType performType; // 0xF8
		::System::Int32 changeToBadassBattleFieldHandler; // 0xFC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA_START_OFFSET))(this, flow);
		}

		::System::Void _RegisterPorts_b__13_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA__REGISTERPORTS_B__13_0_OFFSET))(this, f);
		}

		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LDReadDailyCardData_MonsterInfo>* _RegisterPorts_b__13_1()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LDReadDailyCardData_MonsterInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA__REGISTERPORTS_B__13_1_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__13_2()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA__REGISTERPORTS_B__13_2_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__13_3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA__REGISTERPORTS_B__13_3_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__13_4()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA__REGISTERPORTS_B__13_4_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType _RegisterPorts_b__13_5()
		{
			return ((::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADDAILYCARDDATA__REGISTERPORTS_B__13_5_OFFSET))(this);
		}
	};
}
