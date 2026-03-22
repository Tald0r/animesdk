#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EntityDieCheckType.h"

class Class_1_B7E341C5F1A6F199;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::FlowCanvas::Nodes { class EntitySaveDataMap; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_BINDEVENT_OFFSET UNITYSDK_OFFSET(0xE0F3240)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_CHECKDIECOUNT_OFFSET UNITYSDK_OFFSET(0xE0F27D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0xE0F22F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0xE0F34A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0xE0F31D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0xE0F3430)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_ONMONSTERDIE_OFFSET UNITYSDK_OFFSET(0xE0F35C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xE0F2140)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_UNBINDEVENT_OFFSET UNITYSDK_OFFSET(0xE0F3000)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xE0F3AE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE__REGISTERPORTS_B__9_0_OFFSET UNITYSDK_OFFSET(0xE0F3B00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0xE0F3BB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0xE0F3BC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMonsterDieCheckNode_TypeDefinitionIndex = 47222;

	class LDMonsterDieCheckNode : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::FlowOutput* raised; // 0xA8
		::FlowCanvas::FlowOutput* Reached; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Int32>* inputNumber; // 0xB8
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* inputDeathCheckType; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Boolean>* inputAllDie; // 0xC8
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::EntitySaveDataMap*>* inputEntityMap; // 0xD0
		::System::Boolean nodeEnter; // 0xD8
		::System::Boolean goalReached; // 0xD9
		::System::Boolean bindEvent; // 0xDA

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_INVOKE_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_BINDEVENT_OFFSET))(this);
		}

		::System::Void UnBindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_UNBINDEVENT_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void OnMonsterDie(::System::UInt32 fighterID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_ONMONSTERDIE_OFFSET))(this, fighterID);
		}

		::System::Int32 CheckDieCount(::System::UInt32 deathEntityId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_CHECKDIECOUNT_OFFSET))(this, deathEntityId);
		}

		::System::Void _RegisterPorts_b__9_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE__REGISTERPORTS_B__9_0_OFFSET))(this, f);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
