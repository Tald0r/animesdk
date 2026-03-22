#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_SETBOOLEANRANDOM_GET_INFO_OFFSET UNITYSDK_OFFSET(0x19E9F400)
#define NODECANVAS_TASKS_ACTIONS_SETBOOLEANRANDOM_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x19E9F440)
#define NODECANVAS_TASKS_ACTIONS_SETBOOLEANRANDOM__CTOR_OFFSET UNITYSDK_OFFSET(0x19E9F4B0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SetBooleanRandom_TypeDefinitionIndex = 26651;

	class SetBooleanRandom : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Boolean>* boolVariable; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETBOOLEANRANDOM__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETBOOLEANRANDOM_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETBOOLEANRANDOM_ONEXECUTE_OFFSET))(this);
		}
	};
}
