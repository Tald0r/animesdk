#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/LatentActionNode.h"

namespace System::Collections { class IEnumerator; }

#define FLOWCANVAS_NODES_WAITFORENDOFFRAME_GET_ALLOWROUTINEQUEUEING_OFFSET UNITYSDK_OFFSET(0x1A603250)
#define FLOWCANVAS_NODES_WAITFORENDOFFRAME_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A603260)
#define FLOWCANVAS_NODES_WAITFORENDOFFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6032A0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int WaitForEndOfFrame_TypeDefinitionIndex = 27157;

	class WaitForEndOfFrame : public ::FlowCanvas::Nodes::LatentActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITFORENDOFFRAME__CTOR_OFFSET))(this);
		}

		::System::Boolean get_allowRoutineQueueing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITFORENDOFFRAME_GET_ALLOWROUTINEQUEUEING_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Invoke()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITFORENDOFFRAME_INVOKE_OFFSET))(this);
		}
	};
}
