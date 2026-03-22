#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EntityDieCheckType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/NumberCompareType.h"

class Class_1_B7E341C5F1A6F199;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::FlowCanvas::Nodes { class EntitySaveDataMap; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x6ADD090)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE_CHECKALIVECOUNT_OFFSET UNITYSDK_OFFSET(0x6ADB830)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE_COMPAREMONSTERCAMP_OFFSET UNITYSDK_OFFSET(0x6ADD9A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE_HANDLECOMPARE_OFFSET UNITYSDK_OFFSET(0x6ADCD80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x6ADB550)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x6ADD2F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x6ADD020)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x6ADD280)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE_ONMONSTERDIE_OFFSET UNITYSDK_OFFSET(0x6ADD550)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x6ADB360)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE_UNBINDEVENT_OFFSET UNITYSDK_OFFSET(0x6ADCE50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE_WAITTOCHECKALIVECOUNT_OFFSET UNITYSDK_OFFSET(0x6ADD900)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x6ADDA10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE__REGISTERPORTS_B__12_0_OFFSET UNITYSDK_OFFSET(0x6ADDAD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x6ADDB80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x6ADDB90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDDestructionLeftCheckNode_TypeDefinitionIndex = 70543;

	class LDDestructionLeftCheckNode : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* inputLeftCount; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::EntitySaveDataMap*>* inputEntityMap; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Boolean>* inputAllDestruction; // 0xB8
		::FlowCanvas::FlowOutput* raised; // 0xC0
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* inputCompareFunc; // 0xC8
		::System::Collections::Generic::List_1<::System::String*>* removeList; // 0xD0
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* deathCheckType; // 0xD8
		::FlowCanvas::FlowOutput* Reached; // 0xE0
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* monstList; // 0xE8
		::Foundation::Coroutine::CoroutineHandle _waitCheckAliveCountCoroutine; // 0xF0
		::System::Boolean eventBind; // 0xF4
		::System::Boolean nodeEnter; // 0xF5
		::System::Boolean goalReached; // 0xF6

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE_INVOKE_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void UnBindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE_UNBINDEVENT_OFFSET))(this);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE_BINDEVENT_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void OnMonsterDie(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE_ONMONSTERDIE_OFFSET))(this, entityID);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* WaitToCheckAliveCount(::System::UInt32 entityID)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE_WAITTOCHECKALIVECOUNT_OFFSET))(this, entityID);
		}

		::System::Boolean CompareMonsterCamp(::MoleMole::Battle::Entity* self, ::MoleMole::Battle::Entity* monster)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE_COMPAREMONSTERCAMP_OFFSET))(this, self, monster);
		}

		::System::Int32 CheckALiveCount(::System::UInt32 deathMonsterId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE_CHECKALIVECOUNT_OFFSET))(this, deathMonsterId);
		}

		::System::Boolean HandleCompare(::MoleMole::FlowCanvas::Nodes::NumberCompareType compareFunc, ::System::Int32 number1, ::System::Int32 number2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::NumberCompareType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE_HANDLECOMPARE_OFFSET))(this, compareFunc, number1, number2);
		}

		::System::Void _RegisterPorts_b__12_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE__REGISTERPORTS_B__12_0_OFFSET))(this, f);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTRUCTIONLEFTCHECKNODE___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
