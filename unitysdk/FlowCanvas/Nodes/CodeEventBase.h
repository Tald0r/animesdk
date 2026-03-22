#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode_1.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class EventInfo; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Transform; }

#define FLOWCANVAS_NODES_CODEEVENTBASE_GET_EVENTINFO_OFFSET UNITYSDK_OFFSET(0x19E01200)
#define FLOWCANVAS_NODES_CODEEVENTBASE_ONPOSTGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x19E01330)
#define FLOWCANVAS_NODES_CODEEVENTBASE_SETEVENT_OFFSET UNITYSDK_OFFSET(0x19E01280)
#define FLOWCANVAS_NODES_CODEEVENTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E01600)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CodeEventBase_TypeDefinitionIndex = 25719;

	class CodeEventBase : public ::FlowCanvas::Nodes::EventNode_1<::UnityEngine::Transform*>
	{
	public:
		::UnityEngine::Component* targetComponent; // 0xB0
		::System::Type* targetType; // 0xB8
		::System::String* eventName; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CODEEVENTBASE__CTOR_OFFSET))(this);
		}

		::System::Reflection::EventInfo* get_eventInfo()
		{
			return ((::System::Reflection::EventInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CODEEVENTBASE_GET_EVENTINFO_OFFSET))(this);
		}

		::System::Void SetEvent(::System::Reflection::EventInfo* e, ::System::Object* instace)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::EventInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CODEEVENTBASE_SETEVENT_OFFSET))(this, e, instace);
		}

		::System::Void OnPostGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CODEEVENTBASE_ONPOSTGRAPHSTARTED_OFFSET))(this);
		}
	};
}
