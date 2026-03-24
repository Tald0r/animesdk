#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"

namespace System { class String; }
namespace System::Configuration { class ConfigurationPropertyCollection; }

#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_CLIENTDOMAIN_OFFSET UNITYSDK_OFFSET(0x195CA120)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_DEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x195CA1A0)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_ENABLESSL_OFFSET UNITYSDK_OFFSET(0x195CA220)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_HOST_OFFSET UNITYSDK_OFFSET(0x195CA2A0)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x195CA320)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_PORT_OFFSET UNITYSDK_OFFSET(0x195CA3A0)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x195CA420)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_TARGETNAME_OFFSET UNITYSDK_OFFSET(0x195CA460)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0x195CA4E0)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_POSTDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x195CA560)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_CLIENTDOMAIN_OFFSET UNITYSDK_OFFSET(0x195CA160)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_DEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x195CA1E0)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_ENABLESSL_OFFSET UNITYSDK_OFFSET(0x195CA260)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_HOST_OFFSET UNITYSDK_OFFSET(0x195CA2E0)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x195CA360)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_PORT_OFFSET UNITYSDK_OFFSET(0x195CA3E0)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_TARGETNAME_OFFSET UNITYSDK_OFFSET(0x195CA4A0)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_USERNAME_OFFSET UNITYSDK_OFFSET(0x195CA520)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x195CA0E0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int SmtpNetworkElement_TypeDefinitionIndex = 4137;

	class SmtpNetworkElement : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT__CTOR_OFFSET))(this);
		}

		::System::String* get_ClientDomain()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_CLIENTDOMAIN_OFFSET))(this);
		}

		::System::Void set_ClientDomain(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_CLIENTDOMAIN_OFFSET))(this, value);
		}

		::System::Boolean get_DefaultCredentials()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_DEFAULTCREDENTIALS_OFFSET))(this);
		}

		::System::Void set_DefaultCredentials(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_DEFAULTCREDENTIALS_OFFSET))(this, value);
		}

		::System::Boolean get_EnableSsl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_ENABLESSL_OFFSET))(this);
		}

		::System::Void set_EnableSsl(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_ENABLESSL_OFFSET))(this, value);
		}

		::System::String* get_Host()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_HOST_OFFSET))(this);
		}

		::System::Void set_Host(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_HOST_OFFSET))(this, value);
		}

		::System::String* get_Password()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_PASSWORD_OFFSET))(this);
		}

		::System::Void set_Password(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_PASSWORD_OFFSET))(this, value);
		}

		::System::Int32 get_Port()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_PORT_OFFSET))(this);
		}

		::System::Void set_Port(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_PORT_OFFSET))(this, value);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_PROPERTIES_OFFSET))(this);
		}

		::System::String* get_TargetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_TARGETNAME_OFFSET))(this);
		}

		::System::Void set_TargetName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_TARGETNAME_OFFSET))(this, value);
		}

		::System::String* get_UserName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_USERNAME_OFFSET))(this);
		}

		::System::Void set_UserName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_USERNAME_OFFSET))(this, value);
		}

		::System::Void PostDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_POSTDESERIALIZE_OFFSET))(this);
		}
	};
}
