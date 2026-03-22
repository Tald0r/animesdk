#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/Logger_StateTreeLogInstanceMode.h"
#include "unitysdk/StateTreeCore/Logger_VerboseLevel.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define STATETREECORE_LOGGER_CHECKINSTANCEID_OFFSET UNITYSDK_OFFSET(0x19BD4CC0)
#define STATETREECORE_LOGGER_ERROR_1_OFFSET UNITYSDK_OFFSET(0x19BD5090)
#define STATETREECORE_LOGGER_ERROR_OFFSET UNITYSDK_OFFSET(0x19BD5040)
#define STATETREECORE_LOGGER_INFO_1_OFFSET UNITYSDK_OFFSET(0x19BD4E50)
#define STATETREECORE_LOGGER_INFO_OFFSET UNITYSDK_OFFSET(0x19BD4E00)
#define STATETREECORE_LOGGER_SETSTATETREEINSTANCELOGMODE_OFFSET UNITYSDK_OFFSET(0x19BD4C50)
#define STATETREECORE_LOGGER_VERBOSE_1_OFFSET UNITYSDK_OFFSET(0x19BD4F30)
#define STATETREECORE_LOGGER_VERBOSE_OFFSET UNITYSDK_OFFSET(0x19BD4EB0)
#define STATETREECORE_LOGGER_WARNING_1_OFFSET UNITYSDK_OFFSET(0x19BD4FE0)
#define STATETREECORE_LOGGER_WARNING_OFFSET UNITYSDK_OFFSET(0x19BD4F90)
#define STATETREECORE_LOGGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BD50F0)

namespace StateTreeCore
{
	inline static constexpr unsigned int Logger_TypeDefinitionIndex = 26954;

	class Logger : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__stateTreeLogInstanceID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Logger_TypeDefinitionIndex)->GetStaticField(0x4AA0);
		}
		static ::System::Boolean* StaticGet_EnableStateTreeLog()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Logger_TypeDefinitionIndex)->GetStaticField(0x4AA4);
		}
		static ::StateTreeCore::Logger_VerboseLevel* StaticGet_CurrentVerbosity()
		{
			return (::StateTreeCore::Logger_VerboseLevel*)Il2CppClass::FromTypeDefinitionIndex(Logger_TypeDefinitionIndex)->GetStaticField(0x4AA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_LOGGER__CCTOR_OFFSET))();
		}

		static ::System::Void SetStateTreeInstanceLogMode(::StateTreeCore::Logger_StateTreeLogInstanceMode logMode, ::System::Int32 instanceID)
		{
			return ((::System::Void(*)(::StateTreeCore::Logger_StateTreeLogInstanceMode, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_LOGGER_SETSTATETREEINSTANCELOGMODE_OFFSET))(logMode, instanceID);
		}

		static ::System::Boolean CheckInstanceID(::System::Int32 instanceID)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_LOGGER_CHECKINSTANCEID_OFFSET))(instanceID);
		}

		static ::System::Void Info(::System::String* msg)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + STATETREECORE_LOGGER_INFO_OFFSET))(msg);
		}

		static ::System::Void Info_1(::System::Int32 instanceID, ::System::String* msg)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + STATETREECORE_LOGGER_INFO_1_OFFSET))(instanceID, msg);
		}

		static ::System::Void Verbose(::System::String* msg, ::System::Boolean veryVerbose)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREECORE_LOGGER_VERBOSE_OFFSET))(msg, veryVerbose);
		}

		static ::System::Void Verbose_1(::System::Int32 instanceID, ::System::String* msg, ::System::Boolean veryVerbose)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREECORE_LOGGER_VERBOSE_1_OFFSET))(instanceID, msg, veryVerbose);
		}

		static ::System::Void Warning(::System::String* msg)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + STATETREECORE_LOGGER_WARNING_OFFSET))(msg);
		}

		static ::System::Void Warning_1(::System::Int32 instanceID, ::System::String* msg)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + STATETREECORE_LOGGER_WARNING_1_OFFSET))(instanceID, msg);
		}

		static ::System::Void Error(::System::String* msg)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + STATETREECORE_LOGGER_ERROR_OFFSET))(msg);
		}

		static ::System::Void Error_1(::System::Int32 instanceID, ::System::String* msg)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + STATETREECORE_LOGGER_ERROR_1_OFFSET))(instanceID, msg);
		}
	};
}
