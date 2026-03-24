#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Graph.h"
#include "unitysdk/NodeCanvas/StateMachines/FSM_TransitionCallMode.h"

namespace NodeCanvas::Framework { class IUpdatable; }
namespace NodeCanvas::StateMachines { class FSMState; }
namespace NodeCanvas::StateMachines { class IState; }
namespace NodeCanvas::StateMachines { class IStateCallbackReceiver; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define NODECANVAS_STATEMACHINES_FSM_ADD_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x19557510)
#define NODECANVAS_STATEMACHINES_FSM_ADD_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x19557710)
#define NODECANVAS_STATEMACHINES_FSM_ADD_ONSTATETRANSITION_OFFSET UNITYSDK_OFFSET(0x19557810)
#define NODECANVAS_STATEMACHINES_FSM_ADD_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0x19557610)
#define NODECANVAS_STATEMACHINES_FSM_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x19557CF0)
#define NODECANVAS_STATEMACHINES_FSM_GATHERCALLBACKRECEIVERS_OFFSET UNITYSDK_OFFSET(0x19558620)
#define NODECANVAS_STATEMACHINES_FSM_GETSTATENAMES_OFFSET UNITYSDK_OFFSET(0x19558450)
#define NODECANVAS_STATEMACHINES_FSM_GETSTATEWITHNAME_OFFSET UNITYSDK_OFFSET(0x19558360)
#define NODECANVAS_STATEMACHINES_FSM_GET_ALLOWBLACKBOARDOVERRIDES_OFFSET UNITYSDK_OFFSET(0x19557A10)
#define NODECANVAS_STATEMACHINES_FSM_GET_BASENODETYPE_OFFSET UNITYSDK_OFFSET(0x195579B0)
#define NODECANVAS_STATEMACHINES_FSM_GET_CANACCEPTVARIABLEDROPS_OFFSET UNITYSDK_OFFSET(0x19557A20)
#define NODECANVAS_STATEMACHINES_FSM_GET_CURRENTSTATENAME_OFFSET UNITYSDK_OFFSET(0x19557950)
#define NODECANVAS_STATEMACHINES_FSM_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x19557910)
#define NODECANVAS_STATEMACHINES_FSM_GET_ISTREE_OFFSET UNITYSDK_OFFSET(0x19557A00)
#define NODECANVAS_STATEMACHINES_FSM_GET_PREVIOUSSTATENAME_OFFSET UNITYSDK_OFFSET(0x19557980)
#define NODECANVAS_STATEMACHINES_FSM_GET_PREVIOUSSTATE_OFFSET UNITYSDK_OFFSET(0x19557930)
#define NODECANVAS_STATEMACHINES_FSM_GET_REQUIRESAGENT_OFFSET UNITYSDK_OFFSET(0x195579E0)
#define NODECANVAS_STATEMACHINES_FSM_GET_REQUIRESPRIMENODE_OFFSET UNITYSDK_OFFSET(0x195579F0)
#define NODECANVAS_STATEMACHINES_FSM_ONGRAPHINITIALIZE_OFFSET UNITYSDK_OFFSET(0x19557A30)
#define NODECANVAS_STATEMACHINES_FSM_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x19557BF0)
#define NODECANVAS_STATEMACHINES_FSM_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x195582A0)
#define NODECANVAS_STATEMACHINES_FSM_ONGRAPHUPDATE_OFFSET UNITYSDK_OFFSET(0x19557F70)
#define NODECANVAS_STATEMACHINES_FSM_PEEKSTACK_OFFSET UNITYSDK_OFFSET(0x19558900)
#define NODECANVAS_STATEMACHINES_FSM_REMOVE_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x19557590)
#define NODECANVAS_STATEMACHINES_FSM_REMOVE_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x19557790)
#define NODECANVAS_STATEMACHINES_FSM_REMOVE_ONSTATETRANSITION_OFFSET UNITYSDK_OFFSET(0x19557890)
#define NODECANVAS_STATEMACHINES_FSM_REMOVE_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0x19557690)
#define NODECANVAS_STATEMACHINES_FSM_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x19557920)
#define NODECANVAS_STATEMACHINES_FSM_SET_PREVIOUSSTATE_OFFSET UNITYSDK_OFFSET(0x19557940)
#define NODECANVAS_STATEMACHINES_FSM_TRIGGERSTATE_OFFSET UNITYSDK_OFFSET(0x19558320)
#define NODECANVAS_STATEMACHINES_FSM__CTOR_OFFSET UNITYSDK_OFFSET(0x19558960)
#define NODECANVAS_STATEMACHINES_FSM__GATHERCALLBACKRECEIVERS_B__48_0_OFFSET UNITYSDK_OFFSET(0x19558970)
#define NODECANVAS_STATEMACHINES_FSM__GATHERCALLBACKRECEIVERS_B__48_1_OFFSET UNITYSDK_OFFSET(0x19558AD0)
#define NODECANVAS_STATEMACHINES_FSM__GATHERCALLBACKRECEIVERS_B__48_2_OFFSET UNITYSDK_OFFSET(0x19558C30)

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int FSM_TypeDefinitionIndex = 26383;

	class FSM : public ::NodeCanvas::Framework::Graph
	{
	public:
		::System::Collections::Generic::List_1<::NodeCanvas::Framework::IUpdatable*>* updatableNodes; // 0xB0
		::Il2CppArray<::NodeCanvas::StateMachines::IStateCallbackReceiver*>* callbackReceivers; // 0xB8
		::System::Collections::Generic::Stack_1<::NodeCanvas::StateMachines::FSMState*>* stateStack; // 0xC0
		::System::Action_1<::NodeCanvas::StateMachines::IState*>* onStateEnter; // 0xC8
		::System::Action_1<::NodeCanvas::StateMachines::IState*>* onStateUpdate; // 0xD0
		::System::Action_1<::NodeCanvas::StateMachines::IState*>* onStateExit; // 0xD8
		::System::Action_1<::NodeCanvas::StateMachines::IState*>* onStateTransition; // 0xE0
		::NodeCanvas::StateMachines::FSMState* _currentState_k__BackingField; // 0xE8
		::NodeCanvas::StateMachines::FSMState* _previousState_k__BackingField; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM__CTOR_OFFSET))(this);
		}

		::System::Void add_onStateEnter(::System::Action_1<::NodeCanvas::StateMachines::IState*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::NodeCanvas::StateMachines::IState*>*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM_ADD_ONSTATEENTER_OFFSET))(this, value);
		}

		::System::Void remove_onStateEnter(::System::Action_1<::NodeCanvas::StateMachines::IState*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::NodeCanvas::StateMachines::IState*>*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM_REMOVE_ONSTATEENTER_OFFSET))(this, value);
		}

		::System::Void add_onStateUpdate(::System::Action_1<::NodeCanvas::StateMachines::IState*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::NodeCanvas::StateMachines::IState*>*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM_ADD_ONSTATEUPDATE_OFFSET))(this, value);
		}

		::System::Void remove_onStateUpdate(::System::Action_1<::NodeCanvas::StateMachines::IState*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::NodeCanvas::StateMachines::IState*>*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM_REMOVE_ONSTATEUPDATE_OFFSET))(this, value);
		}

		::System::Void add_onStateExit(::System::Action_1<::NodeCanvas::StateMachines::IState*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::NodeCanvas::StateMachines::IState*>*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM_ADD_ONSTATEEXIT_OFFSET))(this, value);
		}

		::System::Void remove_onStateExit(::System::Action_1<::NodeCanvas::StateMachines::IState*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::NodeCanvas::StateMachines::IState*>*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM_REMOVE_ONSTATEEXIT_OFFSET))(this, value);
		}

		::System::Void add_onStateTransition(::System::Action_1<::NodeCanvas::StateMachines::IState*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::NodeCanvas::StateMachines::IState*>*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM_ADD_ONSTATETRANSITION_OFFSET))(this, value);
		}

		::System::Void remove_onStateTransition(::System::Action_1<::NodeCanvas::StateMachines::IState*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::NodeCanvas::StateMachines::IState*>*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM_REMOVE_ONSTATETRANSITION_OFFSET))(this, value);
		}

		::NodeCanvas::StateMachines::FSMState* get_currentState()
		{
			return ((::NodeCanvas::StateMachines::FSMState*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM_GET_CURRENTSTATE_OFFSET))(this);
		}

		::System::Void set_currentState(::NodeCanvas::StateMachines::FSMState* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::StateMachines::FSMState*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM_SET_CURRENTSTATE_OFFSET))(this, value);
		}

		::NodeCanvas::StateMachines::FSMState* get_previousState()
		{
			return ((::NodeCanvas::StateMachines::FSMState*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM_GET_PREVIOUSSTATE_OFFSET))(this);
		}

		::System::Void set_previousState(::NodeCanvas::StateMachines::FSMState* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::StateMachines::FSMState*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM_SET_PREVIOUSSTATE_OFFSET))(this, value);
		}

		::System::String* get_currentStateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM_GET_CURRENTSTATENAME_OFFSET))(this);
		}

		::System::String* get_previousStateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM_GET_PREVIOUSSTATENAME_OFFSET))(this);
		}

		::System::Type* get_baseNodeType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM_GET_BASENODETYPE_OFFSET))(this);
		}

		::System::Boolean get_requiresAgent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM_GET_REQUIRESAGENT_OFFSET))(this);
		}

		::System::Boolean get_requiresPrimeNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM_GET_REQUIRESPRIMENODE_OFFSET))(this);
		}

		::System::Boolean get_isTree()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM_GET_ISTREE_OFFSET))(this);
		}

		::System::Boolean get_allowBlackboardOverrides()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM_GET_ALLOWBLACKBOARDOVERRIDES_OFFSET))(this);
		}

		::System::Boolean get_canAcceptVariableDrops()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM_GET_CANACCEPTVARIABLEDROPS_OFFSET))(this);
		}

		::System::Void OnGraphInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM_ONGRAPHINITIALIZE_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM_ONGRAPHUPDATE_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Boolean EnterState(::NodeCanvas::StateMachines::FSMState* newState, ::NodeCanvas::StateMachines::FSM_TransitionCallMode callMode)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeCanvas::StateMachines::FSMState*, ::NodeCanvas::StateMachines::FSM_TransitionCallMode))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM_ENTERSTATE_OFFSET))(this, newState, callMode);
		}

		::NodeCanvas::StateMachines::FSMState* TriggerState(::System::String* stateName, ::NodeCanvas::StateMachines::FSM_TransitionCallMode callMode)
		{
			return ((::NodeCanvas::StateMachines::FSMState*(*)(::PVOID, ::System::String*, ::NodeCanvas::StateMachines::FSM_TransitionCallMode))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM_TRIGGERSTATE_OFFSET))(this, stateName, callMode);
		}

		::Il2CppArray<::System::String*>* GetStateNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM_GETSTATENAMES_OFFSET))(this);
		}

		::NodeCanvas::StateMachines::FSMState* GetStateWithName(::System::String* name)
		{
			return ((::NodeCanvas::StateMachines::FSMState*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM_GETSTATEWITHNAME_OFFSET))(this, name);
		}

		::System::Void GatherCallbackReceivers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM_GATHERCALLBACKRECEIVERS_OFFSET))(this);
		}

		::NodeCanvas::StateMachines::FSMState* PeekStack()
		{
			return ((::NodeCanvas::StateMachines::FSMState*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM_PEEKSTACK_OFFSET))(this);
		}

		::System::Void _GatherCallbackReceivers_b__48_0(::NodeCanvas::StateMachines::IState* x)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::StateMachines::IState*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM__GATHERCALLBACKRECEIVERS_B__48_0_OFFSET))(this, x);
		}

		::System::Void _GatherCallbackReceivers_b__48_1(::NodeCanvas::StateMachines::IState* x)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::StateMachines::IState*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM__GATHERCALLBACKRECEIVERS_B__48_1_OFFSET))(this, x);
		}

		::System::Void _GatherCallbackReceivers_b__48_2(::NodeCanvas::StateMachines::IState* x)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::StateMachines::IState*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSM__GATHERCALLBACKRECEIVERS_B__48_2_OFFSET))(this, x);
		}
	};
}
