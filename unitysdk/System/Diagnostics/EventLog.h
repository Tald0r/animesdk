#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/Component.h"
#include "unitysdk/System/Diagnostics/EventLogEntryType.h"
#include "unitysdk/System/Diagnostics/OverflowAction.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::ComponentModel { class ISynchronizeInvoke; }
namespace System::Diagnostics { class EntryWrittenEventHandler; }
namespace System::Diagnostics { class EventInstance; }
namespace System::Diagnostics { class EventLogEntryCollection; }
namespace System::Diagnostics { class EventSourceCreationData; }

#define SYSTEM_DIAGNOSTICS_EVENTLOG_ADD_ENTRYWRITTEN_OFFSET UNITYSDK_OFFSET(0x1A5F11C0)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_BEGININIT_OFFSET UNITYSDK_OFFSET(0x1A5F1240)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A5F1280)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_CLOSE_OFFSET UNITYSDK_OFFSET(0x1A5F12C0)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_CREATEEVENTSOURCE_1_OFFSET UNITYSDK_OFFSET(0x1A5F1340)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_CREATEEVENTSOURCE_2_OFFSET UNITYSDK_OFFSET(0x1A5F1380)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_CREATEEVENTSOURCE_OFFSET UNITYSDK_OFFSET(0x1A5F1300)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_DELETEEVENTSOURCE_1_OFFSET UNITYSDK_OFFSET(0x1A5F1480)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_DELETEEVENTSOURCE_OFFSET UNITYSDK_OFFSET(0x1A5F1440)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_DELETE_1_OFFSET UNITYSDK_OFFSET(0x1A5F1400)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_DELETE_OFFSET UNITYSDK_OFFSET(0x1A5F13C0)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_ENDINIT_OFFSET UNITYSDK_OFFSET(0x1A5F14C0)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_EXISTS_1_OFFSET UNITYSDK_OFFSET(0x1A5F1540)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_EXISTS_OFFSET UNITYSDK_OFFSET(0x1A5F1500)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_GETEVENTLOGS_1_OFFSET UNITYSDK_OFFSET(0x1A5F15C0)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_GETEVENTLOGS_OFFSET UNITYSDK_OFFSET(0x1A5F1580)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_GET_ENABLERAISINGEVENTS_OFFSET UNITYSDK_OFFSET(0x1A5F0DC0)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_GET_ENTRIES_OFFSET UNITYSDK_OFFSET(0x1A5F0E40)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_GET_LOGDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1A5F0F00)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_GET_LOG_OFFSET UNITYSDK_OFFSET(0x1A5F0E80)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_GET_MACHINENAME_OFFSET UNITYSDK_OFFSET(0x1A5F0F40)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_GET_MAXIMUMKILOBYTES_OFFSET UNITYSDK_OFFSET(0x1A5F0FC0)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_GET_MINIMUMRETENTIONDAYS_OFFSET UNITYSDK_OFFSET(0x1A5F1040)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_GET_OVERFLOWACTION_OFFSET UNITYSDK_OFFSET(0x1A5F1080)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1A5F10C0)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_GET_SYNCHRONIZINGOBJECT_OFFSET UNITYSDK_OFFSET(0x1A5F1140)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_LOGNAMEFROMSOURCENAME_OFFSET UNITYSDK_OFFSET(0x1A5F1600)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_MODIFYOVERFLOWPOLICY_OFFSET UNITYSDK_OFFSET(0x1A5F1640)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_REGISTERDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1A5F1680)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_REMOVE_ENTRYWRITTEN_OFFSET UNITYSDK_OFFSET(0x1A5F1200)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_SET_ENABLERAISINGEVENTS_OFFSET UNITYSDK_OFFSET(0x1A5F0E00)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_SET_LOG_OFFSET UNITYSDK_OFFSET(0x1A5F0EC0)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_SET_MACHINENAME_OFFSET UNITYSDK_OFFSET(0x1A5F0F80)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_SET_MAXIMUMKILOBYTES_OFFSET UNITYSDK_OFFSET(0x1A5F1000)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1A5F1100)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_SET_SYNCHRONIZINGOBJECT_OFFSET UNITYSDK_OFFSET(0x1A5F1180)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_SOURCEEXISTS_1_OFFSET UNITYSDK_OFFSET(0x1A5F1700)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_SOURCEEXISTS_OFFSET UNITYSDK_OFFSET(0x1A5F16C0)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_WRITEENTRY_1_OFFSET UNITYSDK_OFFSET(0x1A5F1780)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_WRITEENTRY_2_OFFSET UNITYSDK_OFFSET(0x1A5F17C0)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_WRITEENTRY_3_OFFSET UNITYSDK_OFFSET(0x1A5F1800)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_WRITEENTRY_4_OFFSET UNITYSDK_OFFSET(0x1A5F1840)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_WRITEENTRY_5_OFFSET UNITYSDK_OFFSET(0x1A5F1880)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_WRITEENTRY_6_OFFSET UNITYSDK_OFFSET(0x1A5F18C0)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_WRITEENTRY_7_OFFSET UNITYSDK_OFFSET(0x1A5F1900)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_WRITEENTRY_8_OFFSET UNITYSDK_OFFSET(0x1A5F1940)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_WRITEENTRY_9_OFFSET UNITYSDK_OFFSET(0x1A5F1980)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_WRITEENTRY_OFFSET UNITYSDK_OFFSET(0x1A5F1740)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_WRITEEVENT_1_OFFSET UNITYSDK_OFFSET(0x1A5F1A00)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_WRITEEVENT_2_OFFSET UNITYSDK_OFFSET(0x1A5F1A40)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_WRITEEVENT_3_OFFSET UNITYSDK_OFFSET(0x1A5F1A80)
#define SYSTEM_DIAGNOSTICS_EVENTLOG_WRITEEVENT_OFFSET UNITYSDK_OFFSET(0x1A5F19C0)
#define SYSTEM_DIAGNOSTICS_EVENTLOG__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A5F0D00)
#define SYSTEM_DIAGNOSTICS_EVENTLOG__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A5F0D40)
#define SYSTEM_DIAGNOSTICS_EVENTLOG__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1A5F0D80)
#define SYSTEM_DIAGNOSTICS_EVENTLOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5F0CC0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int EventLog_TypeDefinitionIndex = 4090;

	class EventLog : public ::System::ComponentModel::Component
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* logName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG__CTOR_1_OFFSET))(this, logName);
		}

		::System::Void _ctor_2(::System::String* logName, ::System::String* machineName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG__CTOR_2_OFFSET))(this, logName, machineName);
		}

		::System::Void _ctor_3(::System::String* logName, ::System::String* machineName, ::System::String* source)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG__CTOR_3_OFFSET))(this, logName, machineName, source);
		}

		::System::Boolean get_EnableRaisingEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_GET_ENABLERAISINGEVENTS_OFFSET))(this);
		}

		::System::Void set_EnableRaisingEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_SET_ENABLERAISINGEVENTS_OFFSET))(this, value);
		}

		::System::Diagnostics::EventLogEntryCollection* get_Entries()
		{
			return ((::System::Diagnostics::EventLogEntryCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_GET_ENTRIES_OFFSET))(this);
		}

		::System::String* get_Log()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_GET_LOG_OFFSET))(this);
		}

		::System::Void set_Log(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_SET_LOG_OFFSET))(this, value);
		}

		::System::String* get_LogDisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_GET_LOGDISPLAYNAME_OFFSET))(this);
		}

		::System::String* get_MachineName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_GET_MACHINENAME_OFFSET))(this);
		}

		::System::Void set_MachineName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_SET_MACHINENAME_OFFSET))(this, value);
		}

		::System::Int64 get_MaximumKilobytes()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_GET_MAXIMUMKILOBYTES_OFFSET))(this);
		}

		::System::Void set_MaximumKilobytes(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_SET_MAXIMUMKILOBYTES_OFFSET))(this, value);
		}

		::System::Int32 get_MinimumRetentionDays()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_GET_MINIMUMRETENTIONDAYS_OFFSET))(this);
		}

		::System::Diagnostics::OverflowAction get_OverflowAction()
		{
			return ((::System::Diagnostics::OverflowAction(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_GET_OVERFLOWACTION_OFFSET))(this);
		}

		::System::String* get_Source()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_GET_SOURCE_OFFSET))(this);
		}

		::System::Void set_Source(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_SET_SOURCE_OFFSET))(this, value);
		}

		::System::ComponentModel::ISynchronizeInvoke* get_SynchronizingObject()
		{
			return ((::System::ComponentModel::ISynchronizeInvoke*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_GET_SYNCHRONIZINGOBJECT_OFFSET))(this);
		}

		::System::Void set_SynchronizingObject(::System::ComponentModel::ISynchronizeInvoke* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ISynchronizeInvoke*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_SET_SYNCHRONIZINGOBJECT_OFFSET))(this, value);
		}

		::System::Void add_EntryWritten(::System::Diagnostics::EntryWrittenEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::EntryWrittenEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_ADD_ENTRYWRITTEN_OFFSET))(this, value);
		}

		::System::Void remove_EntryWritten(::System::Diagnostics::EntryWrittenEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::EntryWrittenEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_REMOVE_ENTRYWRITTEN_OFFSET))(this, value);
		}

		::System::Void BeginInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_BEGININIT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_CLEAR_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_CLOSE_OFFSET))(this);
		}

		static ::System::Void CreateEventSource(::System::Diagnostics::EventSourceCreationData* sourceData)
		{
			return ((::System::Void(*)(::System::Diagnostics::EventSourceCreationData*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_CREATEEVENTSOURCE_OFFSET))(sourceData);
		}

		static ::System::Void CreateEventSource_1(::System::String* source, ::System::String* logName)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_CREATEEVENTSOURCE_1_OFFSET))(source, logName);
		}

		static ::System::Void CreateEventSource_2(::System::String* source, ::System::String* logName, ::System::String* machineName)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_CREATEEVENTSOURCE_2_OFFSET))(source, logName, machineName);
		}

		static ::System::Void Delete(::System::String* logName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_DELETE_OFFSET))(logName);
		}

		static ::System::Void Delete_1(::System::String* logName, ::System::String* machineName)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_DELETE_1_OFFSET))(logName, machineName);
		}

		static ::System::Void DeleteEventSource(::System::String* source)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_DELETEEVENTSOURCE_OFFSET))(source);
		}

		static ::System::Void DeleteEventSource_1(::System::String* source, ::System::String* machineName)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_DELETEEVENTSOURCE_1_OFFSET))(source, machineName);
		}

		::System::Void EndInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_ENDINIT_OFFSET))(this);
		}

		static ::System::Boolean Exists(::System::String* logName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_EXISTS_OFFSET))(logName);
		}

		static ::System::Boolean Exists_1(::System::String* logName, ::System::String* machineName)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_EXISTS_1_OFFSET))(logName, machineName);
		}

		static ::Il2CppArray<::System::Diagnostics::EventLog*>* GetEventLogs()
		{
			return ((::Il2CppArray<::System::Diagnostics::EventLog*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_GETEVENTLOGS_OFFSET))();
		}

		static ::Il2CppArray<::System::Diagnostics::EventLog*>* GetEventLogs_1(::System::String* machineName)
		{
			return ((::Il2CppArray<::System::Diagnostics::EventLog*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_GETEVENTLOGS_1_OFFSET))(machineName);
		}

		static ::System::String* LogNameFromSourceName(::System::String* source, ::System::String* machineName)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_LOGNAMEFROMSOURCENAME_OFFSET))(source, machineName);
		}

		::System::Void ModifyOverflowPolicy(::System::Diagnostics::OverflowAction action, ::System::Int32 retentionDays)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::OverflowAction, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_MODIFYOVERFLOWPOLICY_OFFSET))(this, action, retentionDays);
		}

		::System::Void RegisterDisplayName(::System::String* resourceFile, ::System::Int64 resourceId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_REGISTERDISPLAYNAME_OFFSET))(this, resourceFile, resourceId);
		}

		static ::System::Boolean SourceExists(::System::String* source)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_SOURCEEXISTS_OFFSET))(source);
		}

		static ::System::Boolean SourceExists_1(::System::String* source, ::System::String* machineName)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_SOURCEEXISTS_1_OFFSET))(source, machineName);
		}

		::System::Void WriteEntry(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_WRITEENTRY_OFFSET))(this, message);
		}

		::System::Void WriteEntry_1(::System::String* message, ::System::Diagnostics::EventLogEntryType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::EventLogEntryType))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_WRITEENTRY_1_OFFSET))(this, message, type);
		}

		::System::Void WriteEntry_2(::System::String* message, ::System::Diagnostics::EventLogEntryType type, ::System::Int32 eventID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::EventLogEntryType, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_WRITEENTRY_2_OFFSET))(this, message, type, eventID);
		}

		::System::Void WriteEntry_3(::System::String* message, ::System::Diagnostics::EventLogEntryType type, ::System::Int32 eventID, ::System::Int16 category)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::EventLogEntryType, ::System::Int32, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_WRITEENTRY_3_OFFSET))(this, message, type, eventID, category);
		}

		::System::Void WriteEntry_4(::System::String* message, ::System::Diagnostics::EventLogEntryType type, ::System::Int32 eventID, ::System::Int16 category, ::Il2CppArray<::System::Byte>* rawData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::EventLogEntryType, ::System::Int32, ::System::Int16, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_WRITEENTRY_4_OFFSET))(this, message, type, eventID, category, rawData);
		}

		static ::System::Void WriteEntry_5(::System::String* source, ::System::String* message)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_WRITEENTRY_5_OFFSET))(source, message);
		}

		static ::System::Void WriteEntry_6(::System::String* source, ::System::String* message, ::System::Diagnostics::EventLogEntryType type)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Diagnostics::EventLogEntryType))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_WRITEENTRY_6_OFFSET))(source, message, type);
		}

		static ::System::Void WriteEntry_7(::System::String* source, ::System::String* message, ::System::Diagnostics::EventLogEntryType type, ::System::Int32 eventID)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Diagnostics::EventLogEntryType, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_WRITEENTRY_7_OFFSET))(source, message, type, eventID);
		}

		static ::System::Void WriteEntry_8(::System::String* source, ::System::String* message, ::System::Diagnostics::EventLogEntryType type, ::System::Int32 eventID, ::System::Int16 category)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Diagnostics::EventLogEntryType, ::System::Int32, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_WRITEENTRY_8_OFFSET))(source, message, type, eventID, category);
		}

		static ::System::Void WriteEntry_9(::System::String* source, ::System::String* message, ::System::Diagnostics::EventLogEntryType type, ::System::Int32 eventID, ::System::Int16 category, ::Il2CppArray<::System::Byte>* rawData)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Diagnostics::EventLogEntryType, ::System::Int32, ::System::Int16, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_WRITEENTRY_9_OFFSET))(source, message, type, eventID, category, rawData);
		}

		::System::Void WriteEvent(::System::Diagnostics::EventInstance* instance, ::Il2CppArray<::System::Byte>* data, ::Il2CppArray<::System::Object*>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::EventInstance*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_WRITEEVENT_OFFSET))(this, instance, data, values);
		}

		::System::Void WriteEvent_1(::System::Diagnostics::EventInstance* instance, ::Il2CppArray<::System::Object*>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::EventInstance*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_WRITEEVENT_1_OFFSET))(this, instance, values);
		}

		static ::System::Void WriteEvent_2(::System::String* source, ::System::Diagnostics::EventInstance* instance, ::Il2CppArray<::System::Byte>* data, ::Il2CppArray<::System::Object*>* values)
		{
			return ((::System::Void(*)(::System::String*, ::System::Diagnostics::EventInstance*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_WRITEEVENT_2_OFFSET))(source, instance, data, values);
		}

		static ::System::Void WriteEvent_3(::System::String* source, ::System::Diagnostics::EventInstance* instance, ::Il2CppArray<::System::Object*>* values)
		{
			return ((::System::Void(*)(::System::String*, ::System::Diagnostics::EventInstance*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOG_WRITEEVENT_3_OFFSET))(source, instance, values);
		}
	};
}
