#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"
#include "unitysdk/NodeCanvas/Tasks/Actions/CurveTransformTween_PlayMode.h"
#include "unitysdk/NodeCanvas/Tasks/Actions/CurveTransformTween_TransformMode.h"
#include "unitysdk/NodeCanvas/Tasks/Actions/CurveTransformTween_TweenMode.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_ACTIONS_CURVETRANSFORMTWEEN_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1A56A040)
#define NODECANVAS_TASKS_ACTIONS_CURVETRANSFORMTWEEN_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A56A3F0)
#define NODECANVAS_TASKS_ACTIONS_CURVETRANSFORMTWEEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A56A800)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int CurveTransformTween_TypeDefinitionIndex = 27691;

	class CurveTransformTween : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::AnimationCurve*>* curve; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* time; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* targetPosition; // 0x70
		::NodeCanvas::Tasks::Actions::CurveTransformTween_PlayMode playMode; // 0x78
		::UnityEngine::Vector3 original; // 0x7C
		::NodeCanvas::Tasks::Actions::CurveTransformTween_TweenMode mode; // 0x88
		::NodeCanvas::Tasks::Actions::CurveTransformTween_TransformMode transformMode; // 0x8C
		::System::Boolean ponging; // 0x90
		::UnityEngine::Vector3 final; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CURVETRANSFORMTWEEN__CTOR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CURVETRANSFORMTWEEN_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CURVETRANSFORMTWEEN_ONUPDATE_OFFSET))(this);
		}
	};
}
