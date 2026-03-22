#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_APMWRAPPER_GAMELOGREPORT_OFFSET UNITYSDK_OFFSET(0x1B156E60)
#define UNITYENGINE_APMWRAPPER_INIT_OFFSET UNITYSDK_OFFSET(0x1B156E20)
#define UNITYENGINE_APMWRAPPER_SETAPPINFO_OFFSET UNITYSDK_OFFSET(0x1B156E70)
#define UNITYENGINE_APMWRAPPER_SETCONFIG_OFFSET UNITYSDK_OFFSET(0x1B156E30)
#define UNITYENGINE_APMWRAPPER_SETCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x1B156E50)
#define UNITYENGINE_APMWRAPPER_SETUSERID_OFFSET UNITYSDK_OFFSET(0x1B156E80)
#define UNITYENGINE_APMWRAPPER_SETWORKPATH_OFFSET UNITYSDK_OFFSET(0x1B156E40)
#define UNITYENGINE_APMWRAPPER_START_OFFSET UNITYSDK_OFFSET(0x1B156E90)

namespace UnityEngine
{
	inline static constexpr unsigned int APMWrapper_TypeDefinitionIndex = 36105;

	class APMWrapper : public ::System::Object
	{
	public:
		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APMWRAPPER_INIT_OFFSET))();
		}

		static ::System::Void SetConfig(::System::String* jsonString)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APMWRAPPER_SETCONFIG_OFFSET))(jsonString);
		}

		static ::System::Void SetWorkPath(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APMWRAPPER_SETWORKPATH_OFFSET))(path);
		}

		static ::System::Void SetCustomData(::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APMWRAPPER_SETCUSTOMDATA_OFFSET))(key, value);
		}

		static ::System::Void GameLogReport(::System::String* custom_data, ::System::String* log_type, ::System::String* stack_trace, ::System::String* title, ::System::Int32 priority)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_APMWRAPPER_GAMELOGREPORT_OFFSET))(custom_data, log_type, stack_trace, title, priority);
		}

		static ::System::Void SetAppInfo(::System::String* appID, ::System::String* version, ::System::String* pkgName, ::System::String* channel, ::System::String* area, ::System::String* symbol_id, ::System::String* compileType)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APMWRAPPER_SETAPPINFO_OFFSET))(appID, version, pkgName, channel, area, symbol_id, compileType);
		}

		static ::System::Void SetUserID(::System::String* userID)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APMWRAPPER_SETUSERID_OFFSET))(userID);
		}

		static ::System::Void Start()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_APMWRAPPER_START_OFFSET))();
		}
	};
}
