#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_6DD5E6E001B7608E_6;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_COOPREGIONSUBSYSTEM_CHECKBATTLEREGIONTELEPORTLEGAL_OFFSET UNITYSDK_OFFSET(0xE0D7F20)
#define MOLEMOLE_COOPREGIONSUBSYSTEM_GETCACHEDTARGETBATTLEREGION_OFFSET UNITYSDK_OFFSET(0xE0D7CC0)
#define MOLEMOLE_COOPREGIONSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xE0D7AA0)
#define MOLEMOLE_COOPREGIONSUBSYSTEM_ONBATTLEREGIONENTITYREMOVED_OFFSET UNITYSDK_OFFSET(0xE0D79E0)
#define MOLEMOLE_COOPREGIONSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE0D7BE0)
#define MOLEMOLE_COOPREGIONSUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0xE0D76C0)
#define MOLEMOLE_COOPREGIONSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xE0D7B40)
#define MOLEMOLE_COOPREGIONSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xE0D73C0)
#define MOLEMOLE_COOPREGIONSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xE0D80B0)
#define MOLEMOLE_COOPREGIONSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xE0D80F0)
#define MOLEMOLE_COOPREGIONSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE0D8150)
#define MOLEMOLE_COOPREGIONSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0xE0D81B0)
#define MOLEMOLE_COOPREGIONSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xE0D8220)
#define MOLEMOLE_COOPREGIONSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xE0D8280)

namespace MoleMole
{
	inline static constexpr unsigned int CoopRegionSubsystem_TypeDefinitionIndex = 64671;

	class CoopRegionSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::CoopRegionSubsystem*>
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* TargetBattleRegions; // 0x10
		::MoleMole::EntityHandle CachedTargetBattleRegion; // 0x18
		::System::Int32 CachedFrameIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPREGIONSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPREGIONSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPREGIONSUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void OnBattleRegionEntityRemoved(::MoleMole::EntityHandle entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPREGIONSUBSYSTEM_ONBATTLEREGIONENTITYREMOVED_OFFSET))(this, entity);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPREGIONSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPREGIONSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPREGIONSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::MoleMole::EntityHandle GetCachedTargetBattleRegion()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPREGIONSUBSYSTEM_GETCACHEDTARGETBATTLEREGION_OFFSET))(this);
		}

		::System::Boolean CheckBattleRegionTeleportLegal(::Class_3_6DD5E6E001B7608E_6* component)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_6DD5E6E001B7608E_6*))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPREGIONSUBSYSTEM_CHECKBATTLEREGIONTELEPORTLEGAL_OFFSET))(this, component);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPREGIONSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPREGIONSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPREGIONSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPREGIONSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPREGIONSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
