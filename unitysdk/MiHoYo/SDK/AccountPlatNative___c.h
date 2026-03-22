#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_ACCOUNTPLATNATIVE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F34590)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18F345D0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE___C__HOYOSDKINTERNALPLUGINUICALLBACK_B__35_0_OFFSET UNITYSDK_OFFSET(0x18F345F0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE___C__INSTANCE_B__12_0_OFFSET UNITYSDK_OFFSET(0x18F345E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountPlatNative___c_TypeDefinitionIndex = 33424;

	class AccountPlatNative___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__35_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AccountPlatNative___c_TypeDefinitionIndex)->GetStaticField(0x23CB0);
		}
		static ::MiHoYo::SDK::AccountPlatNative___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::AccountPlatNative___c**)Il2CppClass::FromTypeDefinitionIndex(AccountPlatNative___c_TypeDefinitionIndex)->GetStaticField(0x23CB8);
		}
		static ::System::Action** StaticGet___9__12_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AccountPlatNative___c_TypeDefinitionIndex)->GetStaticField(0x23CC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE___C__CTOR_OFFSET))(this);
		}

		::System::Void _Instance_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE___C__INSTANCE_B__12_0_OFFSET))(this);
		}

		::System::Void _HoYoSDKInternalPluginUICallback_b__35_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE___C__HOYOSDKINTERNALPLUGINUICALLBACK_B__35_0_OFFSET))(this);
		}
	};
}
