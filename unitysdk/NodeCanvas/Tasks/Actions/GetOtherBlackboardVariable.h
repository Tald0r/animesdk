#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"

namespace NodeCanvas::Framework { class Blackboard; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace NodeCanvas::Framework::Internal { class BBObjectParameter; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_GETOTHERBLACKBOARDVARIABLE_GET_INFO_OFFSET UNITYSDK_OFFSET(0x19E0C890)
#define NODECANVAS_TASKS_ACTIONS_GETOTHERBLACKBOARDVARIABLE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x19E0C8E0)
#define NODECANVAS_TASKS_ACTIONS_GETOTHERBLACKBOARDVARIABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E0C9E0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int GetOtherBlackboardVariable_TypeDefinitionIndex = 26699;

	class GetOtherBlackboardVariable : public ::NodeCanvas::Framework::ActionTask_1<::NodeCanvas::Framework::Blackboard*>
	{
	public:
		::NodeCanvas::Framework::Internal::BBObjectParameter* saveAs; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* targetVariableName; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETOTHERBLACKBOARDVARIABLE__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETOTHERBLACKBOARDVARIABLE_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETOTHERBLACKBOARDVARIABLE_ONEXECUTE_OFFSET))(this);
		}
	};
}
