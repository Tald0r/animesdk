#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_GETINPUTAXIS_DO_OFFSET UNITYSDK_OFFSET(0x196EEF90)
#define NODECANVAS_TASKS_ACTIONS_GETINPUTAXIS_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x196EEF80)
#define NODECANVAS_TASKS_ACTIONS_GETINPUTAXIS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x196EF230)
#define NODECANVAS_TASKS_ACTIONS_GETINPUTAXIS__CTOR_OFFSET UNITYSDK_OFFSET(0x196EF240)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int GetInputAxis_TypeDefinitionIndex = 25993;

	class GetInputAxis : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* saveZAs; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* multiplier; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* yAxisName; // 0x70
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* saveAs; // 0x78
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* zAxisName; // 0x80
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* saveXAs; // 0x88
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* saveYAs; // 0x90
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* xAxisName; // 0x98
		::System::Boolean repeat; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETINPUTAXIS__CTOR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETINPUTAXIS_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETINPUTAXIS_ONUPDATE_OFFSET))(this);
		}

		::System::Void Do()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETINPUTAXIS_DO_OFFSET))(this);
		}
	};
}
