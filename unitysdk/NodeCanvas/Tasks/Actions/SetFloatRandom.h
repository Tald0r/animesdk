#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_SETFLOATRANDOM_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1A228420)
#define NODECANVAS_TASKS_ACTIONS_SETFLOATRANDOM_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1A2287E0)
#define NODECANVAS_TASKS_ACTIONS_SETFLOATRANDOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A228890)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SetFloatRandom_TypeDefinitionIndex = 26786;

	class SetFloatRandom : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* floatVariable; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* maxValue; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* minValue; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETFLOATRANDOM__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETFLOATRANDOM_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETFLOATRANDOM_ONEXECUTE_OFFSET))(this);
		}
	};
}
