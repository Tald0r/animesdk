#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"

namespace NodeCanvas::Framework { class Blackboard; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_LOADBLACKBOARD_GET_INFO_OFFSET UNITYSDK_OFFSET(0x19FFB550)
#define NODECANVAS_TASKS_ACTIONS_LOADBLACKBOARD_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x19FFB5D0)
#define NODECANVAS_TASKS_ACTIONS_LOADBLACKBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x19FFB670)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int LoadBlackboard_TypeDefinitionIndex = 26582;

	class LoadBlackboard : public ::NodeCanvas::Framework::ActionTask_1<::NodeCanvas::Framework::Blackboard*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* saveKey; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_LOADBLACKBOARD__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_LOADBLACKBOARD_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_LOADBLACKBOARD_ONEXECUTE_OFFSET))(this);
		}
	};
}
