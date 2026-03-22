#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define TAPTAP_SDK_TAPTAPSDK_GET_CLIENTID_OFFSET UNITYSDK_OFFSET(0x1A7CA8A0)
#define TAPTAP_SDK_TAPTAPSDK_GET_CLIENTSECRET_OFFSET UNITYSDK_OFFSET(0x1A7CA910)
#define TAPTAP_SDK_TAPTAPSDK_SDKINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A7CA980)
#define TAPTAP_SDK_TAPTAPSDK_SET_CLIENTID_OFFSET UNITYSDK_OFFSET(0x1A7CA8D0)
#define TAPTAP_SDK_TAPTAPSDK_SET_CLIENTSECRET_OFFSET UNITYSDK_OFFSET(0x1A7CA940)
#define TAPTAP_SDK_TAPTAPSDK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7CA9E0)
#define TAPTAP_SDK_TAPTAPSDK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7CA9D0)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int TapTapSdk_TypeDefinitionIndex = 9465;

	class TapTapSdk : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__ClientSecret_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TapTapSdk_TypeDefinitionIndex)->GetStaticField(0x8910);
		}
		static ::System::String** StaticGet__ClientId_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TapTapSdk_TypeDefinitionIndex)->GetStaticField(0x8918);
		}
		static ::System::String** StaticGet_VERSION()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TapTapSdk_TypeDefinitionIndex)->GetStaticField(0x8920);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_TAPTAPSDK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TAPTAP_SDK_TAPTAPSDK__CCTOR_OFFSET))();
		}

		static ::System::String* get_ClientId()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + TAPTAP_SDK_TAPTAPSDK_GET_CLIENTID_OFFSET))();
		}

		static ::System::Void set_ClientId(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_TAPTAPSDK_SET_CLIENTID_OFFSET))(value);
		}

		static ::System::String* get_ClientSecret()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + TAPTAP_SDK_TAPTAPSDK_GET_CLIENTSECRET_OFFSET))();
		}

		static ::System::Void set_ClientSecret(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_TAPTAPSDK_SET_CLIENTSECRET_OFFSET))(value);
		}

		static ::System::Void SdkInitialize(::System::String* clientId)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_TAPTAPSDK_SDKINITIALIZE_OFFSET))(clientId);
		}
	};
}
