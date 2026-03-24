#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class RemoteSettings_UpdatedEventHandler; }

#define UNITYENGINE_REMOTESETTINGS_REMOTESETTINGSBEFOREFETCHFROMSERVER_OFFSET UNITYSDK_OFFSET(0x1B75C030)
#define UNITYENGINE_REMOTESETTINGS_REMOTESETTINGSUPDATECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1B75C090)
#define UNITYENGINE_REMOTESETTINGS_REMOTESETTINGSUPDATED_OFFSET UNITYSDK_OFFSET(0x1B75BD30)

namespace UnityEngine
{
	inline static constexpr unsigned int RemoteSettings_TypeDefinitionIndex = 82491;

	class RemoteSettings : public ::System::Object
	{
	public:
		static ::UnityEngine::RemoteSettings_UpdatedEventHandler** StaticGet_Updated()
		{
			return (::UnityEngine::RemoteSettings_UpdatedEventHandler**)Il2CppClass::FromTypeDefinitionIndex(RemoteSettings_TypeDefinitionIndex)->GetStaticField(0x47FA0);
		}
		static ::System::Action** StaticGet_BeforeFetchFromServer()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(RemoteSettings_TypeDefinitionIndex)->GetStaticField(0x47FA8);
		}
		static ::System::Action_3<::System::Boolean, ::System::Boolean, ::System::Int32>** StaticGet_Completed()
		{
			return (::System::Action_3<::System::Boolean, ::System::Boolean, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RemoteSettings_TypeDefinitionIndex)->GetStaticField(0x47FB0);
		}

		static ::System::Void RemoteSettingsUpdated(::System::Boolean wasLastUpdatedFromServer)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_REMOTESETTINGS_REMOTESETTINGSUPDATED_OFFSET))(wasLastUpdatedFromServer);
		}

		static ::System::Void RemoteSettingsBeforeFetchFromServer()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_REMOTESETTINGS_REMOTESETTINGSBEFOREFETCHFROMSERVER_OFFSET))();
		}

		static ::System::Void RemoteSettingsUpdateCompleted(::System::Boolean wasLastUpdatedFromServer, ::System::Boolean settingsChanged, ::System::Int32 response)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_REMOTESETTINGS_REMOTESETTINGSUPDATECOMPLETED_OFFSET))(wasLastUpdatedFromServer, settingsChanged, response);
		}
	};
}
