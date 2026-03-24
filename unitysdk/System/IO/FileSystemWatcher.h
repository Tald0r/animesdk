#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/Component.h"
#include "unitysdk/System/IO/FileAction.h"
#include "unitysdk/System/IO/FileSystemWatcher_EventType.h"
#include "unitysdk/System/IO/NotifyFilters.h"
#include "unitysdk/System/IO/WaitForChangedResult.h"
#include "unitysdk/System/IO/WatcherChangeTypes.h"

namespace System { class Delegate; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System::ComponentModel { class ISite; }
namespace System::ComponentModel { class ISynchronizeInvoke; }
namespace System::IO { class ErrorEventArgs; }
namespace System::IO { class ErrorEventHandler; }
namespace System::IO { class FileSystemEventArgs; }
namespace System::IO { class FileSystemEventHandler; }
namespace System::IO { class IFileWatcher; }
namespace System::IO { class RenamedEventArgs; }
namespace System::IO { class RenamedEventHandler; }
namespace System::IO { class SearchPattern2; }

#define SYSTEM_IO_FILESYSTEMWATCHER_ADD_CHANGED_OFFSET UNITYSDK_OFFSET(0x193204D0)
#define SYSTEM_IO_FILESYSTEMWATCHER_ADD_CREATED_OFFSET UNITYSDK_OFFSET(0x193205D0)
#define SYSTEM_IO_FILESYSTEMWATCHER_ADD_DELETED_OFFSET UNITYSDK_OFFSET(0x193206D0)
#define SYSTEM_IO_FILESYSTEMWATCHER_ADD_ERROR_OFFSET UNITYSDK_OFFSET(0x193207D0)
#define SYSTEM_IO_FILESYSTEMWATCHER_ADD_RENAMED_OFFSET UNITYSDK_OFFSET(0x193208D0)
#define SYSTEM_IO_FILESYSTEMWATCHER_BEGININIT_OFFSET UNITYSDK_OFFSET(0x1931F940)
#define SYSTEM_IO_FILESYSTEMWATCHER_DISPATCHERROREVENTS_OFFSET UNITYSDK_OFFSET(0x193201E0)
#define SYSTEM_IO_FILESYSTEMWATCHER_DISPATCHEVENTS_OFFSET UNITYSDK_OFFSET(0x19320200)
#define SYSTEM_IO_FILESYSTEMWATCHER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1931F950)
#define SYSTEM_IO_FILESYSTEMWATCHER_ENDINIT_OFFSET UNITYSDK_OFFSET(0x1931FA60)
#define SYSTEM_IO_FILESYSTEMWATCHER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1931F990)
#define SYSTEM_IO_FILESYSTEMWATCHER_GET_ENABLERAISINGEVENTS_OFFSET UNITYSDK_OFFSET(0x1931F2D0)
#define SYSTEM_IO_FILESYSTEMWATCHER_GET_FILTER_OFFSET UNITYSDK_OFFSET(0x1931F560)
#define SYSTEM_IO_FILESYSTEMWATCHER_GET_FULLPATH_OFFSET UNITYSDK_OFFSET(0x1931F240)
#define SYSTEM_IO_FILESYSTEMWATCHER_GET_INCLUDESUBDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x1931F620)
#define SYSTEM_IO_FILESYSTEMWATCHER_GET_INTERNALBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1931F680)
#define SYSTEM_IO_FILESYSTEMWATCHER_GET_MANGLEDFILTER_OFFSET UNITYSDK_OFFSET(0x1931F0B0)
#define SYSTEM_IO_FILESYSTEMWATCHER_GET_NOTIFYFILTER_OFFSET UNITYSDK_OFFSET(0x1931F6E0)
#define SYSTEM_IO_FILESYSTEMWATCHER_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1931F730)
#define SYSTEM_IO_FILESYSTEMWATCHER_GET_PATTERN_OFFSET UNITYSDK_OFFSET(0x1931F140)
#define SYSTEM_IO_FILESYSTEMWATCHER_GET_SITE_OFFSET UNITYSDK_OFFSET(0x1931F900)
#define SYSTEM_IO_FILESYSTEMWATCHER_GET_SYNCHRONIZINGOBJECT_OFFSET UNITYSDK_OFFSET(0x1931F920)
#define SYSTEM_IO_FILESYSTEMWATCHER_GET_WAITING_OFFSET UNITYSDK_OFFSET(0x1931F090)
#define SYSTEM_IO_FILESYSTEMWATCHER_INITWATCHER_OFFSET UNITYSDK_OFFSET(0x1931E990)
#define SYSTEM_IO_FILESYSTEMWATCHER_INTERNALSUPPORTSFSW_OFFSET UNITYSDK_OFFSET(0x1931EEE0)
#define SYSTEM_IO_FILESYSTEMWATCHER_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x1931FF80)
#define SYSTEM_IO_FILESYSTEMWATCHER_ONCREATED_OFFSET UNITYSDK_OFFSET(0x1931FF90)
#define SYSTEM_IO_FILESYSTEMWATCHER_ONDELETED_OFFSET UNITYSDK_OFFSET(0x1931FFA0)
#define SYSTEM_IO_FILESYSTEMWATCHER_ONERROR_OFFSET UNITYSDK_OFFSET(0x1931FFB0)
#define SYSTEM_IO_FILESYSTEMWATCHER_ONRENAMED_OFFSET UNITYSDK_OFFSET(0x1931FFD0)
#define SYSTEM_IO_FILESYSTEMWATCHER_RAISEEVENT_OFFSET UNITYSDK_OFFSET(0x1931FA70)
#define SYSTEM_IO_FILESYSTEMWATCHER_REMOVE_CHANGED_OFFSET UNITYSDK_OFFSET(0x19320550)
#define SYSTEM_IO_FILESYSTEMWATCHER_REMOVE_CREATED_OFFSET UNITYSDK_OFFSET(0x19320650)
#define SYSTEM_IO_FILESYSTEMWATCHER_REMOVE_DELETED_OFFSET UNITYSDK_OFFSET(0x19320750)
#define SYSTEM_IO_FILESYSTEMWATCHER_REMOVE_ERROR_OFFSET UNITYSDK_OFFSET(0x19320850)
#define SYSTEM_IO_FILESYSTEMWATCHER_REMOVE_RENAMED_OFFSET UNITYSDK_OFFSET(0x19320950)
#define SYSTEM_IO_FILESYSTEMWATCHER_SET_ENABLERAISINGEVENTS_OFFSET UNITYSDK_OFFSET(0x1931F2E0)
#define SYSTEM_IO_FILESYSTEMWATCHER_SET_FILTER_OFFSET UNITYSDK_OFFSET(0x1931F570)
#define SYSTEM_IO_FILESYSTEMWATCHER_SET_INCLUDESUBDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x1931F630)
#define SYSTEM_IO_FILESYSTEMWATCHER_SET_INTERNALBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1931F690)
#define SYSTEM_IO_FILESYSTEMWATCHER_SET_NOTIFYFILTER_OFFSET UNITYSDK_OFFSET(0x1931F6F0)
#define SYSTEM_IO_FILESYSTEMWATCHER_SET_PATH_OFFSET UNITYSDK_OFFSET(0x1931F740)
#define SYSTEM_IO_FILESYSTEMWATCHER_SET_SITE_OFFSET UNITYSDK_OFFSET(0x1931F910)
#define SYSTEM_IO_FILESYSTEMWATCHER_SET_SYNCHRONIZINGOBJECT_OFFSET UNITYSDK_OFFSET(0x1931F930)
#define SYSTEM_IO_FILESYSTEMWATCHER_SET_WAITING_OFFSET UNITYSDK_OFFSET(0x1931F0A0)
#define SYSTEM_IO_FILESYSTEMWATCHER_SHOWWATCHERINFO_OFFSET UNITYSDK_OFFSET(0x1931EEF0)
#define SYSTEM_IO_FILESYSTEMWATCHER_START_OFFSET UNITYSDK_OFFSET(0x1931F310)
#define SYSTEM_IO_FILESYSTEMWATCHER_STOP_OFFSET UNITYSDK_OFFSET(0x1931F430)
#define SYSTEM_IO_FILESYSTEMWATCHER_WAITFORCHANGED_1_OFFSET UNITYSDK_OFFSET(0x19320030)
#define SYSTEM_IO_FILESYSTEMWATCHER_WAITFORCHANGED_OFFSET UNITYSDK_OFFSET(0x1931FFF0)
#define SYSTEM_IO_FILESYSTEMWATCHER__CCTOR_OFFSET UNITYSDK_OFFSET(0x193209D0)
#define SYSTEM_IO_FILESYSTEMWATCHER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1931EC80)
#define SYSTEM_IO_FILESYSTEMWATCHER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1931ECC0)
#define SYSTEM_IO_FILESYSTEMWATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1931E900)

namespace System::IO
{
	inline static constexpr unsigned int FileSystemWatcher_TypeDefinitionIndex = 3225;

	class FileSystemWatcher : public ::System::ComponentModel::Component
	{
	public:
		static ::System::Object** StaticGet_lockobj()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FileSystemWatcher_TypeDefinitionIndex)->GetStaticField(0x3580);
		}
		static ::System::IO::IFileWatcher** StaticGet_watcher()
		{
			return (::System::IO::IFileWatcher**)Il2CppClass::FromTypeDefinitionIndex(FileSystemWatcher_TypeDefinitionIndex)->GetStaticField(0x3588);
		}
		::System::IO::FileSystemEventHandler* Deleted; // 0x28
		::System::String* fullpath; // 0x30
		::System::IO::WaitForChangedResult lastData; // 0x38
		::System::IO::ErrorEventHandler* Error; // 0x58
		::System::IO::SearchPattern2* pattern; // 0x60
		::System::IO::FileSystemEventHandler* Changed; // 0x68
		::System::String* filter; // 0x70
		::System::IO::FileSystemEventHandler* Created; // 0x78
		::System::IO::RenamedEventHandler* Renamed; // 0x80
		::System::String* mangledFilter; // 0x88
		::System::String* path; // 0x90
		::System::ComponentModel::ISynchronizeInvoke* synchronizingObject; // 0x98
		::System::Boolean waiting; // 0xA0
		::System::Boolean includeSubdirectories; // 0xA1
		::System::Boolean enableRaisingEvents; // 0xA2
		::System::Boolean disposed; // 0xA3
		::System::Int32 internalBufferSize; // 0xA4
		::System::IO::NotifyFilters notifyFilter; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER__CTOR_1_OFFSET))(this, path);
		}

		::System::Void _ctor_2(::System::String* path, ::System::String* filter)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER__CTOR_2_OFFSET))(this, path, filter);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER__CCTOR_OFFSET))();
		}

		::System::Void InitWatcher()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_INITWATCHER_OFFSET))(this);
		}

		::System::Void ShowWatcherInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_SHOWWATCHERINFO_OFFSET))(this);
		}

		::System::Boolean get_Waiting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_GET_WAITING_OFFSET))(this);
		}

		::System::Void set_Waiting(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_SET_WAITING_OFFSET))(this, value);
		}

		::System::String* get_MangledFilter()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_GET_MANGLEDFILTER_OFFSET))(this);
		}

		::System::IO::SearchPattern2* get_Pattern()
		{
			return ((::System::IO::SearchPattern2*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_GET_PATTERN_OFFSET))(this);
		}

		::System::String* get_FullPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_GET_FULLPATH_OFFSET))(this);
		}

		::System::Boolean get_EnableRaisingEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_GET_ENABLERAISINGEVENTS_OFFSET))(this);
		}

		::System::Void set_EnableRaisingEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_SET_ENABLERAISINGEVENTS_OFFSET))(this, value);
		}

		::System::String* get_Filter()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_GET_FILTER_OFFSET))(this);
		}

		::System::Void set_Filter(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_SET_FILTER_OFFSET))(this, value);
		}

		::System::Boolean get_IncludeSubdirectories()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_GET_INCLUDESUBDIRECTORIES_OFFSET))(this);
		}

		::System::Void set_IncludeSubdirectories(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_SET_INCLUDESUBDIRECTORIES_OFFSET))(this, value);
		}

		::System::Int32 get_InternalBufferSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_GET_INTERNALBUFFERSIZE_OFFSET))(this);
		}

		::System::Void set_InternalBufferSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_SET_INTERNALBUFFERSIZE_OFFSET))(this, value);
		}

		::System::IO::NotifyFilters get_NotifyFilter()
		{
			return ((::System::IO::NotifyFilters(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_GET_NOTIFYFILTER_OFFSET))(this);
		}

		::System::Void set_NotifyFilter(::System::IO::NotifyFilters value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::NotifyFilters))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_SET_NOTIFYFILTER_OFFSET))(this, value);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_GET_PATH_OFFSET))(this);
		}

		::System::Void set_Path(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_SET_PATH_OFFSET))(this, value);
		}

		::System::ComponentModel::ISite* get_Site()
		{
			return ((::System::ComponentModel::ISite*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_GET_SITE_OFFSET))(this);
		}

		::System::Void set_Site(::System::ComponentModel::ISite* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ISite*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_SET_SITE_OFFSET))(this, value);
		}

		::System::ComponentModel::ISynchronizeInvoke* get_SynchronizingObject()
		{
			return ((::System::ComponentModel::ISynchronizeInvoke*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_GET_SYNCHRONIZINGOBJECT_OFFSET))(this);
		}

		::System::Void set_SynchronizingObject(::System::ComponentModel::ISynchronizeInvoke* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ISynchronizeInvoke*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_SET_SYNCHRONIZINGOBJECT_OFFSET))(this, value);
		}

		::System::Void BeginInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_BEGININIT_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_FINALIZE_OFFSET))(this);
		}

		::System::Void EndInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_ENDINIT_OFFSET))(this);
		}

		::System::Void RaiseEvent(::System::Delegate* ev, ::System::EventArgs* arg, ::System::IO::FileSystemWatcher_EventType evtype)
		{
			return ((::System::Void(*)(::PVOID, ::System::Delegate*, ::System::EventArgs*, ::System::IO::FileSystemWatcher_EventType))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_RAISEEVENT_OFFSET))(this, ev, arg, evtype);
		}

		::System::Void OnChanged(::System::IO::FileSystemEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::FileSystemEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_ONCHANGED_OFFSET))(this, e);
		}

		::System::Void OnCreated(::System::IO::FileSystemEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::FileSystemEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_ONCREATED_OFFSET))(this, e);
		}

		::System::Void OnDeleted(::System::IO::FileSystemEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::FileSystemEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_ONDELETED_OFFSET))(this, e);
		}

		::System::Void OnError(::System::IO::ErrorEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::ErrorEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_ONERROR_OFFSET))(this, e);
		}

		::System::Void OnRenamed(::System::IO::RenamedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::RenamedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_ONRENAMED_OFFSET))(this, e);
		}

		::System::IO::WaitForChangedResult WaitForChanged(::System::IO::WatcherChangeTypes changeType)
		{
			return ((::System::IO::WaitForChangedResult(*)(::PVOID, ::System::IO::WatcherChangeTypes))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_WAITFORCHANGED_OFFSET))(this, changeType);
		}

		::System::IO::WaitForChangedResult WaitForChanged_1(::System::IO::WatcherChangeTypes changeType, ::System::Int32 timeout)
		{
			return ((::System::IO::WaitForChangedResult(*)(::PVOID, ::System::IO::WatcherChangeTypes, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_WAITFORCHANGED_1_OFFSET))(this, changeType, timeout);
		}

		::System::Void DispatchErrorEvents(::System::IO::ErrorEventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::ErrorEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_DISPATCHERROREVENTS_OFFSET))(this, args);
		}

		::System::Void DispatchEvents(::System::IO::FileAction act, ::System::String* filename, ::System::IO::RenamedEventArgs*& renamed)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::FileAction, ::System::String*, ::System::IO::RenamedEventArgs*&))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_DISPATCHEVENTS_OFFSET))(this, act, filename, renamed);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_STOP_OFFSET))(this);
		}

		::System::Void add_Changed(::System::IO::FileSystemEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::FileSystemEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_ADD_CHANGED_OFFSET))(this, value);
		}

		::System::Void remove_Changed(::System::IO::FileSystemEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::FileSystemEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_REMOVE_CHANGED_OFFSET))(this, value);
		}

		::System::Void add_Created(::System::IO::FileSystemEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::FileSystemEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_ADD_CREATED_OFFSET))(this, value);
		}

		::System::Void remove_Created(::System::IO::FileSystemEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::FileSystemEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_REMOVE_CREATED_OFFSET))(this, value);
		}

		::System::Void add_Deleted(::System::IO::FileSystemEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::FileSystemEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_ADD_DELETED_OFFSET))(this, value);
		}

		::System::Void remove_Deleted(::System::IO::FileSystemEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::FileSystemEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_REMOVE_DELETED_OFFSET))(this, value);
		}

		::System::Void add_Error(::System::IO::ErrorEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::ErrorEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_ADD_ERROR_OFFSET))(this, value);
		}

		::System::Void remove_Error(::System::IO::ErrorEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::ErrorEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_REMOVE_ERROR_OFFSET))(this, value);
		}

		::System::Void add_Renamed(::System::IO::RenamedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::RenamedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_ADD_RENAMED_OFFSET))(this, value);
		}

		::System::Void remove_Renamed(::System::IO::RenamedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::RenamedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_REMOVE_RENAMED_OFFSET))(this, value);
		}

		static ::System::Int32 InternalSupportsFSW()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMWATCHER_INTERNALSUPPORTSFSW_OFFSET))();
		}
	};
}
