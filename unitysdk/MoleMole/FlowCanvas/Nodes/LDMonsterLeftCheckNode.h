#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5DFC66413CB20B09_Enum_3_A5191D6218CE9E26_1.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EntityDieCheckType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterPickType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/NumberCompareType.h"
#include "unitysdk/MoleMole/GameplayTag.h"

class Class_1_B7E341C5F1A6F199;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::FlowCanvas::Nodes { class EntitySaveDataMap; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_BINDEVENT_OFFSET UNITYSDK_OFFSET(0xC9C36A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_CHECKALIVECOUNT_OFFSET UNITYSDK_OFFSET(0xC9C1CA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_COMPAREMONSTERCAMP_OFFSET UNITYSDK_OFFSET(0xC9C4320)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_HANDLECOMPARE_OFFSET UNITYSDK_OFFSET(0xC9C33C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0xC9C16C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_ISNORMALCOUNTINGTAG_OFFSET UNITYSDK_OFFSET(0xC9C4560)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_ISSERVERCARE_OFFSET UNITYSDK_OFFSET(0xC9C0C70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_LISTENENTITYTAGCHANGE_OFFSET UNITYSDK_OFFSET(0xC9C3AF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0xC9C3FA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0xC9C39F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0xC9C3A60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_ONHOSTCHANGED_OFFSET UNITYSDK_OFFSET(0xC9C3530)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_ONLATETICKCALLBACK_OFFSET UNITYSDK_OFFSET(0xC9C4210)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_ONMONSTERSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xC9C3BE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xC9C0A40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_REMOTEWAITFLOWPROCESS_OFFSET UNITYSDK_OFFSET(0xC9C3490)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_UNBINDEVENT_OFFSET UNITYSDK_OFFSET(0xC9C1390)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_WAITTOCHECKALIVECOUNT_OFFSET UNITYSDK_OFFSET(0xC9C4280)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE__CALLREACHED_OFFSET UNITYSDK_OFFSET(0xC9C0CD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xC9C47F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE__REGISTERPORTS_B__15_0_OFFSET UNITYSDK_OFFSET(0xC9C48B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE___BASE_ISSERVERCARE_OFFSET UNITYSDK_OFFSET(0xC9C4EA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0xC9C4EB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0xC9C4EC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMonsterLeftCheckNode_TypeDefinitionIndex = 66282;

	class LDMonsterLeftCheckNode : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* monsterCampInput; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* inputAllMonster; // 0xB0
		::UnityEngine::Coroutine* coroutine; // 0xB8
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* monstList; // 0xC0
		::FlowCanvas::FlowOutput* Reached; // 0xC8
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* inputCompareFunc; // 0xD0
		::System::Collections::Generic::List_1<::System::String*>* removeList; // 0xD8
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::EntitySaveDataMap*>* inputEntityMap; // 0xE0
		::FlowCanvas::ValueInput_1<::System::Int32>* inputLeftCount; // 0xE8
		::FlowCanvas::FlowOutput* raised; // 0xF0
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* deathCheckType; // 0xF8
		::System::Boolean eventBind; // 0x100
		::System::Boolean notifyServer; // 0x101
		::System::Boolean nodeEnter; // 0x102
		::System::Boolean goalReached; // 0x103
		::Foundation::Coroutine::CoroutineHandle _waitCheckAliveCountCoroutine; // 0x104

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Boolean IsServerCare()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_ISSERVERCARE_OFFSET))(this);
		}

		::System::Void _CallReached(::System::Boolean unbind)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE__CALLREACHED_OFFSET))(this, unbind);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_INVOKE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* RemoteWaitFlowProcess()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_REMOTEWAITFLOWPROCESS_OFFSET))(this);
		}

		::System::Void OnHostChanged(::System::UInt32 hostPeerID, ::System::Boolean isNewHost)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_ONHOSTCHANGED_OFFSET))(this, hostPeerID, isNewHost);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void UnBindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_UNBINDEVENT_OFFSET))(this);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_BINDEVENT_OFFSET))(this);
		}

		::System::Void ListenEntityTagChange(::MoleMole::EntityHandle entityHandle, ::Class_2_5DFC66413CB20B09_Enum_3_A5191D6218CE9E26_1 changeType, ::MoleMole::GameplayTag tag)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::Class_2_5DFC66413CB20B09_Enum_3_A5191D6218CE9E26_1, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_LISTENENTITYTAGCHANGE_OFFSET))(this, entityHandle, changeType, tag);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void OnLateTickCallback(::System::Single delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_ONLATETICKCALLBACK_OFFSET))(this, delta);
		}

		::System::Void OnMonsterStateChange(::System::UInt32 entityID, ::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_ONMONSTERSTATECHANGE_OFFSET))(this, entityID, tag);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* WaitToCheckAliveCount(::System::UInt32 entityID)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_WAITTOCHECKALIVECOUNT_OFFSET))(this, entityID);
		}

		::System::Boolean CompareMonsterCamp(::MoleMole::Battle::Entity* self, ::MoleMole::Battle::Entity* monster)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_COMPAREMONSTERCAMP_OFFSET))(this, self, monster);
		}

		::System::Int32 CheckALiveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_CHECKALIVECOUNT_OFFSET))(this);
		}

		::System::Boolean HandleCompare(::MoleMole::FlowCanvas::Nodes::NumberCompareType compareFunc, ::System::Int32 number1, ::System::Int32 number2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::NumberCompareType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_HANDLECOMPARE_OFFSET))(this, compareFunc, number1, number2);
		}

		::System::Boolean IsNormalCountingTag(::MoleMole::EntityHandle handle)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE_ISNORMALCOUNTINGTAG_OFFSET))(this, handle);
		}

		::System::Void _RegisterPorts_b__15_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE__REGISTERPORTS_B__15_0_OFFSET))(this, f);
		}

		::System::Boolean __base_IsServerCare()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE___BASE_ISSERVERCARE_OFFSET))(this);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
