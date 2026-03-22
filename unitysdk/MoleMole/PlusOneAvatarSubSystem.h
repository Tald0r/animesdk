#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B8F06E5A3B4F82A1.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }

#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM_GETLASTLOCALAVATAR_OFFSET UNITYSDK_OFFSET(0x9AC8A40)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM_GETPLUSONEAVATAR_OFFSET UNITYSDK_OFFSET(0x9AC7FF0)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM_HANDLECONTROLSTATE_OFFSET UNITYSDK_OFFSET(0x9AC8400)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x9AC7860)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9AC78D0)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x9AC7930)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM_STARTCONTROLPLUSONEAVATAR_OFFSET UNITYSDK_OFFSET(0x9AC8D80)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM_SWITCHINPLUSONEAVATAR_OFFSET UNITYSDK_OFFSET(0x9AC7990)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM_SWITCHOUTPLUSONEAVATAR_OFFSET UNITYSDK_OFFSET(0x9AC8470)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9AC92A0)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x9AC92B0)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9AC9310)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x9AC9370)

namespace MoleMole
{
	inline static constexpr unsigned int PlusOneAvatarSubSystem_TypeDefinitionIndex = 48341;

	class PlusOneAvatarSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::PlusOneAvatarSubSystem*>
	{
	public:
		::Enum_3_B8F06E5A3B4F82A1 _plusOnAvatarState; // 0x10
		::System::Int32 _lastLocalAvatarEntityID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PLUSONEAVATARSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PLUSONEAVATARSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PLUSONEAVATARSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PLUSONEAVATARSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void SwitchInPlusOneAvatar(::MoleMole::Config::ConfigPosRot* configPosRot, ::System::String* lockTargetID, ::System::Int32 switchInIndex, ::System::Int32 switchOutIndex, ::System::Boolean isControlStart)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPosRot*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_PLUSONEAVATARSUBSYSTEM_SWITCHINPLUSONEAVATAR_OFFSET))(this, configPosRot, lockTargetID, switchInIndex, switchOutIndex, isControlStart);
		}

		::System::Void SwitchOutPlusOneAvatar(::MoleMole::Config::ConfigPosRot* configPosRot, ::System::String* lockTargetID, ::System::Int32 switchInIndex, ::System::Int32 switchOutIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPosRot*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_PLUSONEAVATARSUBSYSTEM_SWITCHOUTPLUSONEAVATAR_OFFSET))(this, configPosRot, lockTargetID, switchInIndex, switchOutIndex);
		}

		::System::Void StartControlPlusOneAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PLUSONEAVATARSUBSYSTEM_STARTCONTROLPLUSONEAVATAR_OFFSET))(this);
		}

		::System::Void HandleControlState(::System::Boolean isControlIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_PLUSONEAVATARSUBSYSTEM_HANDLECONTROLSTATE_OFFSET))(this, isControlIn);
		}

		::MoleMole::Battle::Entity* GetPlusOneAvatar(::System::Int32& avatarID)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_PLUSONEAVATARSUBSYSTEM_GETPLUSONEAVATAR_OFFSET))(this, avatarID);
		}

		::MoleMole::Battle::Entity* GetLastLocalAvatar()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PLUSONEAVATARSUBSYSTEM_GETLASTLOCALAVATAR_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PLUSONEAVATARSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PLUSONEAVATARSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PLUSONEAVATARSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
