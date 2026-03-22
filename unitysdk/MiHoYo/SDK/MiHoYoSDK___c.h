#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_MIHOYOSDK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19AF3210)
#define MIHOYO_SDK_MIHOYOSDK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF3250)
#define MIHOYO_SDK_MIHOYOSDK___C__INIT_B__18_0_OFFSET UNITYSDK_OFFSET(0x19AF3260)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDK___c_TypeDefinitionIndex = 33575;

	class MiHoYoSDK___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::MiHoYoSDK___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::MiHoYoSDK___c**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDK___c_TypeDefinitionIndex)->GetStaticField(0x241E0);
		}
		static ::System::Action** StaticGet___9__18_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDK___c_TypeDefinitionIndex)->GetStaticField(0x241E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK___C__CTOR_OFFSET))(this);
		}

		::System::Void _Init_b__18_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK___C__INIT_B__18_0_OFFSET))(this);
		}
	};
}
