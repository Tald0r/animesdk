#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_GAMEROLEMANAGER_RESETGAMEROLE_OFFSET UNITYSDK_OFFSET(0x18B9F900)
#define MIHOYO_SDK_GAMEROLEMANAGER_SETGAMEROLE_OFFSET UNITYSDK_OFFSET(0x18B942A0)
#define MIHOYO_SDK_GAMEROLEMANAGER_SETLEVEL_OFFSET UNITYSDK_OFFSET(0x18B94800)
#define MIHOYO_SDK_GAMEROLEMANAGER_SETSERVERID_OFFSET UNITYSDK_OFFSET(0x18B93BE0)
#define MIHOYO_SDK_GAMEROLEMANAGER_SYNCGAMEROLETONATIVE_OFFSET UNITYSDK_OFFSET(0x18B9F970)
#define MIHOYO_SDK_GAMEROLEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B9FB20)
#define MIHOYO_SDK_GAMEROLEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18B9FB10)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int GameRoleManager_TypeDefinitionIndex = 17970;

	class GameRoleManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::GameRoleManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::GameRoleManager**)Il2CppClass::FromTypeDefinitionIndex(GameRoleManager_TypeDefinitionIndex)->GetStaticField(0x9670);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GAMEROLEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_GAMEROLEMANAGER__CCTOR_OFFSET))();
		}

		::System::Void SetServerID(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GAMEROLEMANAGER_SETSERVERID_OFFSET))(this, value);
		}

		::System::Void SetGameRole(::System::String* json)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GAMEROLEMANAGER_SETGAMEROLE_OFFSET))(this, json);
		}

		::System::Void SetLevel(::System::String* json)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GAMEROLEMANAGER_SETLEVEL_OFFSET))(this, json);
		}

		::System::Void ResetGameRole()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GAMEROLEMANAGER_RESETGAMEROLE_OFFSET))(this);
		}

		::System::Void SyncGameRoleToNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GAMEROLEMANAGER_SYNCGAMEROLETONATIVE_OFFSET))(this);
		}
	};
}
