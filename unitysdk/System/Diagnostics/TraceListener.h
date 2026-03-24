#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/TraceEventType.h"
#include "unitysdk/System/Diagnostics/TraceOptions.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/MarshalByRefObject.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Collections::Specialized { class StringDictionary; }
namespace System::Diagnostics { class TraceEventCache; }
namespace System::Diagnostics { class TraceFilter; }

#define SYSTEM_DIAGNOSTICS_TRACELISTENER_CLOSE_OFFSET UNITYSDK_OFFSET(0x193A1020)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x193A1010)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x193A0FC0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_FAIL_1_OFFSET UNITYSDK_OFFSET(0x193A12B0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_FAIL_OFFSET UNITYSDK_OFFSET(0x193A1290)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_FLUSH_OFFSET UNITYSDK_OFFSET(0x193A1030)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_GETSUPPORTEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x193A13C0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x193A0ED0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_FILTER_OFFSET UNITYSDK_OFFSET(0x193A1110)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_INDENTLEVEL_OFFSET UNITYSDK_OFFSET(0x193A1040)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_INDENTSIZE_OFFSET UNITYSDK_OFFSET(0x193A1070)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_ISTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x193A0FB0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x193A0F80)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_NEEDINDENT_OFFSET UNITYSDK_OFFSET(0x193A1130)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_TRACEOUTPUTOPTIONS_OFFSET UNITYSDK_OFFSET(0x193A1150)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_ISENABLED_OFFSET UNITYSDK_OFFSET(0x193A26B0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_SETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x193A11D0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_FILTER_OFFSET UNITYSDK_OFFSET(0x193A1120)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_INDENTLEVEL_OFFSET UNITYSDK_OFFSET(0x193A1050)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_INDENTSIZE_OFFSET UNITYSDK_OFFSET(0x193A1080)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x193A0FA0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_NEEDINDENT_OFFSET UNITYSDK_OFFSET(0x193A1140)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_TRACEOUTPUTOPTIONS_OFFSET UNITYSDK_OFFSET(0x193A1160)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_TRACEDATA_1_OFFSET UNITYSDK_OFFSET(0x193A21F0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_TRACEDATA_OFFSET UNITYSDK_OFFSET(0x193A1850)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_TRACEEVENT_1_OFFSET UNITYSDK_OFFSET(0x193A2430)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_TRACEEVENT_2_OFFSET UNITYSDK_OFFSET(0x193A24E0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_TRACEEVENT_OFFSET UNITYSDK_OFFSET(0x193A23F0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_TRACETRANSFER_OFFSET UNITYSDK_OFFSET(0x193A2600)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITEFOOTER_OFFSET UNITYSDK_OFFSET(0x193A1A30)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITEHEADER_OFFSET UNITYSDK_OFFSET(0x193A1920)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITEINDENT_OFFSET UNITYSDK_OFFSET(0x193A15E0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITELINE_1_OFFSET UNITYSDK_OFFSET(0x193A1700)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITELINE_2_OFFSET UNITYSDK_OFFSET(0x193A17A0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x193A1660)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x193A1470)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITE_2_OFFSET UNITYSDK_OFFSET(0x193A1510)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITE_OFFSET UNITYSDK_OFFSET(0x193A13D0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193A0EC0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x193A0EB0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int TraceListener_TypeDefinitionIndex = 2771;

	class TraceListener : public ::System::MarshalByRefObject
	{
	public:
		::System::Diagnostics::TraceFilter* filter; // 0x18
		::System::Collections::Specialized::StringDictionary* attributes; // 0x20
		::System::String* initializeData; // 0x28
		::System::String* listenerName; // 0x30
		::System::Boolean needIndent; // 0x38
		::System::Diagnostics::TraceOptions traceOptions; // 0x3C
		::System::Int32 indentSize; // 0x40
		::System::Int32 indentLevel; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER__CTOR_1_OFFSET))(this, name);
		}

		::System::Collections::Specialized::StringDictionary* get_Attributes()
		{
			return ((::System::Collections::Specialized::StringDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_NAME_OFFSET))(this, value);
		}

		::System::Boolean get_IsThreadSafe()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_ISTHREADSAFE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_CLOSE_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_FLUSH_OFFSET))(this);
		}

		::System::Int32 get_IndentLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_INDENTLEVEL_OFFSET))(this);
		}

		::System::Void set_IndentLevel(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_INDENTLEVEL_OFFSET))(this, value);
		}

		::System::Int32 get_IndentSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_INDENTSIZE_OFFSET))(this);
		}

		::System::Void set_IndentSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_INDENTSIZE_OFFSET))(this, value);
		}

		::System::Diagnostics::TraceFilter* get_Filter()
		{
			return ((::System::Diagnostics::TraceFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_FILTER_OFFSET))(this);
		}

		::System::Void set_Filter(::System::Diagnostics::TraceFilter* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceFilter*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_FILTER_OFFSET))(this, value);
		}

		::System::Boolean get_NeedIndent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_NEEDINDENT_OFFSET))(this);
		}

		::System::Void set_NeedIndent(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_NEEDINDENT_OFFSET))(this, value);
		}

		::System::Diagnostics::TraceOptions get_TraceOutputOptions()
		{
			return ((::System::Diagnostics::TraceOptions(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_TRACEOUTPUTOPTIONS_OFFSET))(this);
		}

		::System::Void set_TraceOutputOptions(::System::Diagnostics::TraceOptions value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceOptions))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_TRACEOUTPUTOPTIONS_OFFSET))(this, value);
		}

		::System::Void SetAttributes(::System::Collections::Hashtable* attribs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Hashtable*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_SETATTRIBUTES_OFFSET))(this, attribs);
		}

		::System::Void Fail(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_FAIL_OFFSET))(this, message);
		}

		::System::Void Fail_1(::System::String* message, ::System::String* detailMessage)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_FAIL_1_OFFSET))(this, message, detailMessage);
		}

		::Il2CppArray<::System::String*>* GetSupportedAttributes()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_GETSUPPORTEDATTRIBUTES_OFFSET))(this);
		}

		::System::Void Write(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITE_OFFSET))(this, o);
		}

		::System::Void Write_1(::System::String* message, ::System::String* category)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITE_1_OFFSET))(this, message, category);
		}

		::System::Void Write_2(::System::Object* o, ::System::String* category)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITE_2_OFFSET))(this, o, category);
		}

		::System::Void WriteIndent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITEINDENT_OFFSET))(this);
		}

		::System::Void WriteLine(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITELINE_OFFSET))(this, o);
		}

		::System::Void WriteLine_1(::System::String* message, ::System::String* category)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITELINE_1_OFFSET))(this, message, category);
		}

		::System::Void WriteLine_2(::System::Object* o, ::System::String* category)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITELINE_2_OFFSET))(this, o, category);
		}

		::System::Void TraceData(::System::Diagnostics::TraceEventCache* eventCache, ::System::String* source, ::System::Diagnostics::TraceEventType eventType, ::System::Int32 id, ::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceEventCache*, ::System::String*, ::System::Diagnostics::TraceEventType, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_TRACEDATA_OFFSET))(this, eventCache, source, eventType, id, data);
		}

		::System::Void TraceData_1(::System::Diagnostics::TraceEventCache* eventCache, ::System::String* source, ::System::Diagnostics::TraceEventType eventType, ::System::Int32 id, ::Il2CppArray<::System::Object*>* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceEventCache*, ::System::String*, ::System::Diagnostics::TraceEventType, ::System::Int32, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_TRACEDATA_1_OFFSET))(this, eventCache, source, eventType, id, data);
		}

		::System::Void TraceEvent(::System::Diagnostics::TraceEventCache* eventCache, ::System::String* source, ::System::Diagnostics::TraceEventType eventType, ::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceEventCache*, ::System::String*, ::System::Diagnostics::TraceEventType, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_TRACEEVENT_OFFSET))(this, eventCache, source, eventType, id);
		}

		::System::Void TraceEvent_1(::System::Diagnostics::TraceEventCache* eventCache, ::System::String* source, ::System::Diagnostics::TraceEventType eventType, ::System::Int32 id, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceEventCache*, ::System::String*, ::System::Diagnostics::TraceEventType, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_TRACEEVENT_1_OFFSET))(this, eventCache, source, eventType, id, message);
		}

		::System::Void TraceEvent_2(::System::Diagnostics::TraceEventCache* eventCache, ::System::String* source, ::System::Diagnostics::TraceEventType eventType, ::System::Int32 id, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceEventCache*, ::System::String*, ::System::Diagnostics::TraceEventType, ::System::Int32, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_TRACEEVENT_2_OFFSET))(this, eventCache, source, eventType, id, format, args);
		}

		::System::Void TraceTransfer(::System::Diagnostics::TraceEventCache* eventCache, ::System::String* source, ::System::Int32 id, ::System::String* message, ::System::Guid relatedActivityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceEventCache*, ::System::String*, ::System::Int32, ::System::String*, ::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_TRACETRANSFER_OFFSET))(this, eventCache, source, id, message, relatedActivityId);
		}

		::System::Void WriteHeader(::System::String* source, ::System::Diagnostics::TraceEventType eventType, ::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::TraceEventType, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITEHEADER_OFFSET))(this, source, eventType, id);
		}

		::System::Void WriteFooter(::System::Diagnostics::TraceEventCache* eventCache)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceEventCache*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITEFOOTER_OFFSET))(this, eventCache);
		}

		::System::Boolean IsEnabled(::System::Diagnostics::TraceOptions opts)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::TraceOptions))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_ISENABLED_OFFSET))(this, opts);
		}
	};
}
