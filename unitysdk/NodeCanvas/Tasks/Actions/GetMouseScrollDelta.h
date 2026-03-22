#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_GETMOUSESCROLLDELTA_DO_OFFSET UNITYSDK_OFFSET(0x19FF24B0)
#define NODECANVAS_TASKS_ACTIONS_GETMOUSESCROLLDELTA_GET_INFO_OFFSET UNITYSDK_OFFSET(0x19FF2360)
#define NODECANVAS_TASKS_ACTIONS_GETMOUSESCROLLDELTA_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x19FF2440)
#define NODECANVAS_TASKS_ACTIONS_GETMOUSESCROLLDELTA_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x19FF2520)
#define NODECANVAS_TASKS_ACTIONS_GETMOUSESCROLLDELTA__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF2590)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int GetMouseScrollDelta_TypeDefinitionIndex = 25965;

	class GetMouseScrollDelta : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* saveAs; // 0x60
		::System::Boolean repeat; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETMOUSESCROLLDELTA__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETMOUSESCROLLDELTA_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETMOUSESCROLLDELTA_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETMOUSESCROLLDELTA_ONUPDATE_OFFSET))(this);
		}

		::System::Void Do()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETMOUSESCROLLDELTA_DO_OFFSET))(this);
		}
	};
}
