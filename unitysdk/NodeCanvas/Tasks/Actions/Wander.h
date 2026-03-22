#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace UnityEngine::AI { class NavMeshAgent; }

#define NODECANVAS_TASKS_ACTIONS_WANDER_DOWANDER_OFFSET UNITYSDK_OFFSET(0x19F5B560)
#define NODECANVAS_TASKS_ACTIONS_WANDER_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x19F5B4E0)
#define NODECANVAS_TASKS_ACTIONS_WANDER_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x19F5B9E0)
#define NODECANVAS_TASKS_ACTIONS_WANDER_ONSTOP_OFFSET UNITYSDK_OFFSET(0x19F5B9F0)
#define NODECANVAS_TASKS_ACTIONS_WANDER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x19F5B8A0)
#define NODECANVAS_TASKS_ACTIONS_WANDER__CTOR_OFFSET UNITYSDK_OFFSET(0x19F5BB10)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int Wander_TypeDefinitionIndex = 25834;

	class Wander : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::AI::NavMeshAgent*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* maxWanderDistance; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* minWanderDistance; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* speed; // 0x70
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* keepDistance; // 0x78
		::System::Boolean repeat; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_WANDER__CTOR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_WANDER_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_WANDER_ONUPDATE_OFFSET))(this);
		}

		::System::Void DoWander()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_WANDER_DOWANDER_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_WANDER_ONPAUSE_OFFSET))(this);
		}

		::System::Void OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_WANDER_ONSTOP_OFFSET))(this);
		}
	};
}
