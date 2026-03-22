#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/GraphOwner_1.h"
#include "unitysdk/NodeCanvas/StateMachines/FSM_TransitionCallMode.h"

namespace NodeCanvas::StateMachines { class FSM; }
namespace NodeCanvas::StateMachines { class IState; }
namespace System { class String; }

#define NODECANVAS_STATEMACHINES_FSMOWNER_GETCURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x19E0B780)
#define NODECANVAS_STATEMACHINES_FSMOWNER_GETPREVIOUSSTATE_OFFSET UNITYSDK_OFFSET(0x19E0B960)
#define NODECANVAS_STATEMACHINES_FSMOWNER_GETSTATENAMES_OFFSET UNITYSDK_OFFSET(0x19E0BD20)
#define NODECANVAS_STATEMACHINES_FSMOWNER_GET_CURRENTDEEPSTATENAME_OFFSET UNITYSDK_OFFSET(0x19E0B750)
#define NODECANVAS_STATEMACHINES_FSMOWNER_GET_CURRENTROOTSTATENAME_OFFSET UNITYSDK_OFFSET(0x19E0B530)
#define NODECANVAS_STATEMACHINES_FSMOWNER_GET_PREVIOUSDEEPSTATENAME_OFFSET UNITYSDK_OFFSET(0x19E0B930)
#define NODECANVAS_STATEMACHINES_FSMOWNER_GET_PREVIOUSROOTSTATENAME_OFFSET UNITYSDK_OFFSET(0x19E0B640)
#define NODECANVAS_STATEMACHINES_FSMOWNER_TRIGGERSTATE_1_OFFSET UNITYSDK_OFFSET(0x19E0BC30)
#define NODECANVAS_STATEMACHINES_FSMOWNER_TRIGGERSTATE_OFFSET UNITYSDK_OFFSET(0x19E0BC20)
#define NODECANVAS_STATEMACHINES_FSMOWNER__CTOR_OFFSET UNITYSDK_OFFSET(0x19E0BDE0)

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int FSMOwner_TypeDefinitionIndex = 26885;

	class FSMOwner : public ::NodeCanvas::Framework::GraphOwner_1<::NodeCanvas::StateMachines::FSM*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMOWNER__CTOR_OFFSET))(this);
		}

		::System::String* get_currentRootStateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMOWNER_GET_CURRENTROOTSTATENAME_OFFSET))(this);
		}

		::System::String* get_previousRootStateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMOWNER_GET_PREVIOUSROOTSTATENAME_OFFSET))(this);
		}

		::System::String* get_currentDeepStateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMOWNER_GET_CURRENTDEEPSTATENAME_OFFSET))(this);
		}

		::System::String* get_previousDeepStateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMOWNER_GET_PREVIOUSDEEPSTATENAME_OFFSET))(this);
		}

		::NodeCanvas::StateMachines::IState* GetCurrentState(::System::Boolean includeSubFSMs)
		{
			return ((::NodeCanvas::StateMachines::IState*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMOWNER_GETCURRENTSTATE_OFFSET))(this, includeSubFSMs);
		}

		::NodeCanvas::StateMachines::IState* GetPreviousState(::System::Boolean includeSubFSMs)
		{
			return ((::NodeCanvas::StateMachines::IState*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMOWNER_GETPREVIOUSSTATE_OFFSET))(this, includeSubFSMs);
		}

		::NodeCanvas::StateMachines::IState* TriggerState(::System::String* stateName)
		{
			return ((::NodeCanvas::StateMachines::IState*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMOWNER_TRIGGERSTATE_OFFSET))(this, stateName);
		}

		::NodeCanvas::StateMachines::IState* TriggerState_1(::System::String* stateName, ::NodeCanvas::StateMachines::FSM_TransitionCallMode callMode)
		{
			return ((::NodeCanvas::StateMachines::IState*(*)(::PVOID, ::System::String*, ::NodeCanvas::StateMachines::FSM_TransitionCallMode))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMOWNER_TRIGGERSTATE_1_OFFSET))(this, stateName, callMode);
		}

		::Il2CppArray<::System::String*>* GetStateNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMOWNER_GETSTATENAMES_OFFSET))(this);
		}
	};
}
