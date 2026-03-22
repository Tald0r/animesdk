#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"
#include "unitysdk/NodeCanvas/Tasks/Actions/WaitMousePick2D_ButtonKeys.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit2D.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_ACTIONS_WAITMOUSEPICK2D_GET_INFO_OFFSET UNITYSDK_OFFSET(0x19C12EA0)
#define NODECANVAS_TASKS_ACTIONS_WAITMOUSEPICK2D_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x19C12F20)
#define NODECANVAS_TASKS_ACTIONS_WAITMOUSEPICK2D__CTOR_OFFSET UNITYSDK_OFFSET(0x19C132D0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int WaitMousePick2D_TypeDefinitionIndex = 25876;

	class WaitMousePick2D : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* savePositionAs; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* saveDistanceAs; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* saveObjectAs; // 0x70
		::UnityEngine::LayerMask mask; // 0x78
		::NodeCanvas::Tasks::Actions::WaitMousePick2D_ButtonKeys buttonKey; // 0x7C
		::System::Int32 buttonID; // 0x80
		::UnityEngine::RaycastHit2D hit; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_WAITMOUSEPICK2D__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_WAITMOUSEPICK2D_GET_INFO_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_WAITMOUSEPICK2D_ONUPDATE_OFFSET))(this);
		}
	};
}
