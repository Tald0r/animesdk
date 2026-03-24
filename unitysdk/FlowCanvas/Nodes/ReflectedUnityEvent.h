#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { class ReflectedUnityEvent_UnityEventCallback; }
namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class ParameterInfo; }
namespace UnityEngine::Events { class UnityEventBase; }

#define FLOWCANVAS_NODES_REFLECTEDUNITYEVENT_ADD__CALLBACK_OFFSET UNITYSDK_OFFSET(0x1A21B610)
#define FLOWCANVAS_NODES_REFLECTEDUNITYEVENT_CALLBACKMETHOD0_OFFSET UNITYSDK_OFFSET(0x1A21C110)
#define FLOWCANVAS_NODES_REFLECTEDUNITYEVENT_GET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A21B720)
#define FLOWCANVAS_NODES_REFLECTEDUNITYEVENT_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x1A21B710)
#define FLOWCANVAS_NODES_REFLECTEDUNITYEVENT_INITFOREVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A21B750)
#define FLOWCANVAS_NODES_REFLECTEDUNITYEVENT_REMOVE__CALLBACK_OFFSET UNITYSDK_OFFSET(0x1A21B690)
#define FLOWCANVAS_NODES_REFLECTEDUNITYEVENT_STARTLISTENING_OFFSET UNITYSDK_OFFSET(0x1A21BD90)
#define FLOWCANVAS_NODES_REFLECTEDUNITYEVENT_STOPLISTENING_OFFSET UNITYSDK_OFFSET(0x1A21BF50)
#define FLOWCANVAS_NODES_REFLECTEDUNITYEVENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A21B740)
#define FLOWCANVAS_NODES_REFLECTEDUNITYEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A21B730)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ReflectedUnityEvent_TypeDefinitionIndex = 26800;

	class ReflectedUnityEvent : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* _callMethod; // 0x10
		::System::Reflection::MethodInfo* _removeListenerMethod; // 0x18
		::System::Type* _eventType; // 0x20
		::Il2CppArray<::System::Reflection::ParameterInfo*>* _parameters; // 0x28
		::FlowCanvas::Nodes::ReflectedUnityEvent_UnityEventCallback* _callback; // 0x30
		::System::Reflection::MethodInfo* _addListenerMethod; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDUNITYEVENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Type* eventType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDUNITYEVENT__CTOR_1_OFFSET))(this, eventType);
		}

		::System::Void add__callback(::FlowCanvas::Nodes::ReflectedUnityEvent_UnityEventCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Nodes::ReflectedUnityEvent_UnityEventCallback*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDUNITYEVENT_ADD__CALLBACK_OFFSET))(this, value);
		}

		::System::Void remove__callback(::FlowCanvas::Nodes::ReflectedUnityEvent_UnityEventCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Nodes::ReflectedUnityEvent_UnityEventCallback*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDUNITYEVENT_REMOVE__CALLBACK_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* get_parameters()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDUNITYEVENT_GET_PARAMETERS_OFFSET))(this);
		}

		::System::Type* get_eventType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDUNITYEVENT_GET_EVENTTYPE_OFFSET))(this);
		}

		::System::Void InitForEventType(::System::Type* eventType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDUNITYEVENT_INITFOREVENTTYPE_OFFSET))(this, eventType);
		}

		::System::Void StartListening(::UnityEngine::Events::UnityEventBase* targetEvent, ::FlowCanvas::Nodes::ReflectedUnityEvent_UnityEventCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityEventBase*, ::FlowCanvas::Nodes::ReflectedUnityEvent_UnityEventCallback*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDUNITYEVENT_STARTLISTENING_OFFSET))(this, targetEvent, callback);
		}

		::System::Void StopListening(::UnityEngine::Events::UnityEventBase* targetEvent, ::FlowCanvas::Nodes::ReflectedUnityEvent_UnityEventCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityEventBase*, ::FlowCanvas::Nodes::ReflectedUnityEvent_UnityEventCallback*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDUNITYEVENT_STOPLISTENING_OFFSET))(this, targetEvent, callback);
		}

		::System::Void CallbackMethod0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDUNITYEVENT_CALLBACKMETHOD0_OFFSET))(this);
		}
	};
}
