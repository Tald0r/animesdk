#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }

#define BNATIVE_DEFAULTDEBUG_ASSETFORMAT_OFFSET UNITYSDK_OFFSET(0xB7AF970)
#define BNATIVE_DEFAULTDEBUG_GET_DEBUGENABLED_OFFSET UNITYSDK_OFFSET(0xB7AF310)
#define BNATIVE_DEFAULTDEBUG_LOGERROR_OFFSET UNITYSDK_OFFSET(0xB7AF4C0)
#define BNATIVE_DEFAULTDEBUG_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0xB7AF650)
#define BNATIVE_DEFAULTDEBUG_LOGWARNING_OFFSET UNITYSDK_OFFSET(0xB7AF7E0)
#define BNATIVE_DEFAULTDEBUG_LOG_OFFSET UNITYSDK_OFFSET(0xB7AF330)
#define BNATIVE_DEFAULTDEBUG_SET_DEBUGENABLED_OFFSET UNITYSDK_OFFSET(0xB7AF320)
#define BNATIVE_DEFAULTDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0xB7AFA30)

namespace BNative
{
	inline static constexpr unsigned int DefaultDebug_TypeDefinitionIndex = 69604;

	class DefaultDebug : public ::System::Object
	{
	public:
		::System::Boolean _DebugEnabled_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNATIVE_DEFAULTDEBUG__CTOR_OFFSET))(this);
		}

		::System::Boolean get_DebugEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNATIVE_DEFAULTDEBUG_GET_DEBUGENABLED_OFFSET))(this);
		}

		::System::Void set_DebugEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BNATIVE_DEFAULTDEBUG_SET_DEBUGENABLED_OFFSET))(this, value);
		}

		::System::Void Log(::System::Object* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BNATIVE_DEFAULTDEBUG_LOG_OFFSET))(this, message);
		}

		::System::Void LogError(::System::Object* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BNATIVE_DEFAULTDEBUG_LOGERROR_OFFSET))(this, message);
		}

		::System::Void LogException(::System::Exception* exception)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + BNATIVE_DEFAULTDEBUG_LOGEXCEPTION_OFFSET))(this, exception);
		}

		::System::Void LogWarning(::System::Object* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BNATIVE_DEFAULTDEBUG_LOGWARNING_OFFSET))(this, message);
		}

		::System::Void AssetFormat(::System::Boolean condition, ::System::String* fmt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + BNATIVE_DEFAULTDEBUG_ASSETFORMAT_OFFSET))(this, condition, fmt);
		}
	};
}
