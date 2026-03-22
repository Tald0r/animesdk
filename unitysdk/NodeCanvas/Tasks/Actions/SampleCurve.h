#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace UnityEngine { class AnimationCurve; }

#define NODECANVAS_TASKS_ACTIONS_SAMPLECURVE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1A26A1F0)
#define NODECANVAS_TASKS_ACTIONS_SAMPLECURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A26A2D0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SampleCurve_TypeDefinitionIndex = 26635;

	class SampleCurve : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* sampleAt; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* saveAs; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::AnimationCurve*>* curve; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SAMPLECURVE__CTOR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SAMPLECURVE_ONEXECUTE_OFFSET))(this);
		}
	};
}
