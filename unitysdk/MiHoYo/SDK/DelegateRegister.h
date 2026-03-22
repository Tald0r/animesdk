#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_DELEGATEREGISTER_REGISTERAPM_OFFSET UNITYSDK_OFFSET(0x19604E20)
#define MIHOYO_SDK_DELEGATEREGISTER_REGISTERBILIBILISDK_OFFSET UNITYSDK_OFFSET(0x19607330)
#define MIHOYO_SDK_DELEGATEREGISTER_REGISTEREOSSDK_OFFSET UNITYSDK_OFFSET(0x19607130)
#define MIHOYO_SDK_DELEGATEREGISTER_REGISTERSTEAMSDK_OFFSET UNITYSDK_OFFSET(0x196074E0)
#define MIHOYO_SDK_DELEGATEREGISTER_REGISTERTELEMETRYSDK_OFFSET UNITYSDK_OFFSET(0x19604C50)
#define MIHOYO_SDK_DELEGATEREGISTER_REGISTERWEBFUNC_OFFSET UNITYSDK_OFFSET(0x19604F00)
#define MIHOYO_SDK_DELEGATEREGISTER_REGISTERWEGAMESDK_OFFSET UNITYSDK_OFFSET(0x196074D0)
#define MIHOYO_SDK_DELEGATEREGISTER_REGISTER_OFFSET UNITYSDK_OFFSET(0x19603830)
#define MIHOYO_SDK_DELEGATEREGISTER__CTOR_OFFSET UNITYSDK_OFFSET(0x196074F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DelegateRegister_TypeDefinitionIndex = 33578;

	class DelegateRegister : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Register()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER_REGISTER_OFFSET))();
		}

		static ::System::Void RegisterWebFunc()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER_REGISTERWEBFUNC_OFFSET))();
		}

		static ::System::Void RegisterEOSSDK()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER_REGISTEREOSSDK_OFFSET))();
		}

		static ::System::Void RegisterBiliBiliSDK()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER_REGISTERBILIBILISDK_OFFSET))();
		}

		static ::System::Void RegisterWeGameSDK()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER_REGISTERWEGAMESDK_OFFSET))();
		}

		static ::System::Void RegisterSteamSDK()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER_REGISTERSTEAMSDK_OFFSET))();
		}

		static ::System::Void RegisterTelemetrySDK()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER_REGISTERTELEMETRYSDK_OFFSET))();
		}

		static ::System::Void RegisterAPM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER_REGISTERAPM_OFFSET))();
		}
	};
}
