#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define DIGITALOPUS_MB_CORE_MB2_LOG_ERROR_OFFSET UNITYSDK_OFFSET(0x1ACDBA30)
#define DIGITALOPUS_MB_CORE_MB2_LOG_INFO_OFFSET UNITYSDK_OFFSET(0x1ACDBD80)
#define DIGITALOPUS_MB_CORE_MB2_LOG_LOGDEBUG_OFFSET UNITYSDK_OFFSET(0x1ACDBF30)
#define DIGITALOPUS_MB_CORE_MB2_LOG_LOG_OFFSET UNITYSDK_OFFSET(0x1ACDB610)
#define DIGITALOPUS_MB_CORE_MB2_LOG_TRACE_OFFSET UNITYSDK_OFFSET(0x1ACDC0E0)
#define DIGITALOPUS_MB_CORE_MB2_LOG_WARN_OFFSET UNITYSDK_OFFSET(0x1ACDBBD0)
#define DIGITALOPUS_MB_CORE_MB2_LOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACDC290)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB2_Log_TypeDefinitionIndex = 81265;

	class MB2_Log : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_LOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Log(::DigitalOpus::MB::Core::MB2_LogLevel l, ::System::String* msg, ::DigitalOpus::MB::Core::MB2_LogLevel currentThreshold)
		{
			return ((::System::Void(*)(::DigitalOpus::MB::Core::MB2_LogLevel, ::System::String*, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_LOG_LOG_OFFSET))(l, msg, currentThreshold);
		}

		static ::System::String* Error(::System::String* msg, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_LOG_ERROR_OFFSET))(msg, args);
		}

		static ::System::String* Warn(::System::String* msg, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_LOG_WARN_OFFSET))(msg, args);
		}

		static ::System::String* Info(::System::String* msg, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_LOG_INFO_OFFSET))(msg, args);
		}

		static ::System::String* LogDebug(::System::String* msg, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_LOG_LOGDEBUG_OFFSET))(msg, args);
		}

		static ::System::String* Trace(::System::String* msg, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_LOG_TRACE_OFFSET))(msg, args);
		}
	};
}
