#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_3.h"

class Class_1_71E07B54E7993380;
namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole { class TeamDataItem; }
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CACHEENTITY_OFFSET UNITYSDK_OFFSET(0xB1D0AD0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CANSWITCHTEAM_OFFSET UNITYSDK_OFFSET(0xB1D4780)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CHANGETEAMAVATARSINFIGHT_OFFSET UNITYSDK_OFFSET(0xB1D2AE0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CLEAROLDTEAMAVATARS_OFFSET UNITYSDK_OFFSET(0xB1D4DD0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_COLLECTNEXTTEAMASSETS_OFFSET UNITYSDK_OFFSET(0xB1D1DB0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_DISPOSESWITCHTEAMINFIGHTDATA_OFFSET UNITYSDK_OFFSET(0xB1D1C10)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_FORCESETAVATARSTATEDEAD_OFFSET UNITYSDK_OFFSET(0xB1D6980)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_GETALLENTITYFORFIGHTRESULT_OFFSET UNITYSDK_OFFSET(0xB1CFE80)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_GET_RUNTIMECONFIG_OFFSET UNITYSDK_OFFSET(0xB1CFB50)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_INITSWITCHTEAMINFIGHTDATA_OFFSET UNITYSDK_OFFSET(0xB1D1AA0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_INITSWITCHTEAMRUNTIMECONFIG_OFFSET UNITYSDK_OFFSET(0xB1D1000)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_ISOLATETEAMS_OFFSET UNITYSDK_OFFSET(0xB1D0E10)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xB1CFBB0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_PRELOADTEAMAVATARDATA_OFFSET UNITYSDK_OFFSET(0xB1D4960)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_PROCESSASSETSASYNC_OFFSET UNITYSDK_OFFSET(0xB1D48A0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_PROCESSASSETSSYNC_OFFSET UNITYSDK_OFFSET(0xB1D29F0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_REFRESHTEAM_OFFSET UNITYSDK_OFFSET(0xB1D61B0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_RESUMETEAMS_OFFSET UNITYSDK_OFFSET(0xB1D5A50)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_SETBUFFLEVEL_OFFSET UNITYSDK_OFFSET(0xB1CFC60)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_SWITCHTEAM_OFFSET UNITYSDK_OFFSET(0xB1D2090)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xB1D6CA0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB1D6B20)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xB1D6D30)

namespace MoleMole
{
	inline static constexpr unsigned int SwitchTeamInBattleSubSystem_TypeDefinitionIndex = 67909;

	class SwitchTeamInBattleSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::SwitchTeamInBattleSubSystem*>
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*>** StaticGet__runtimeConfig()
		{
			return (::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(SwitchTeamInBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0x3D4D0);
		}
		// static const ::System::String* QTE_CONFIG; // 0x0
		// static const ::System::String* FINAL_ACTIVITY_SCORE; // 0x0
		::System::String* StrBuffProName; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* _needLoadPrefabs; // 0x18
		::System::Threading::CancellationTokenSource* _cancellation; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* _cache; // 0x28
		::System::Collections::Generic::List_1<::Foundation::AssetPath>* _needUnloadPaths; // 0x30
		::System::String* StrBuffLevelName; // 0x38
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* tipController; // 0x40
		::Class_1_71E07B54E7993380* reportData; // 0x48
		::System::Boolean SwitchStart; // 0x50
		::System::Int32 CurIndex; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*>* get_RuntimeConfig()
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_GET_RUNTIMECONFIG_OFFSET))();
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* GetAllEntityForFightResult()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_GETALLENTITYFORFIGHTRESULT_OFFSET))(this);
		}

		::System::Void SetBuffLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_SETBUFFLEVEL_OFFSET))(this);
		}

		::System::Void CacheEntity(::MoleMole::Battle::Entity* e, ::System::Int32 teamIndex, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CACHEENTITY_OFFSET))(this, e, teamIndex, index);
		}

		static ::System::Void InitSwitchTeamRuntimeConfig(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* data)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_INITSWITCHTEAMRUNTIMECONFIG_OFFSET))(data);
		}

		::System::Void InitSwitchTeamInFightData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_INITSWITCHTEAMINFIGHTDATA_OFFSET))(this);
		}

		::System::Void DisposeSwitchTeamInFightData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_DISPOSESWITCHTEAMINFIGHTDATA_OFFSET))(this);
		}

		::System::Void CollectNextTeamAssets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_COLLECTNEXTTEAMASSETS_OFFSET))(this);
		}

		::System::Void SwitchTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_SWITCHTEAM_OFFSET))(this);
		}

		::System::Boolean CanSwitchTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CANSWITCHTEAM_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid ProcessAssetsAsync(::System::Single waitSec)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_PROCESSASSETSASYNC_OFFSET))(this, waitSec);
		}

		::System::Void ProcessAssetsSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_PROCESSASSETSSYNC_OFFSET))(this);
		}

		::System::Void PreloadTeamAvatarData(::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>* avatarMemberList, ::System::Int32 ti)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_PRELOADTEAMAVATARDATA_OFFSET))(this, avatarMemberList, ti);
		}

		::System::Void ChangeTeamAvatarsInFight(::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>* newAvatarDatas, ::Struct_2_B6A3FA7992F9F37E_3 reloadParam, ::System::Action* changeEndCallBack, ::System::Action* teamReadyCallback, ::System::Int32 teamCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::Struct_2_B6A3FA7992F9F37E_3, ::System::Action*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CHANGETEAMAVATARSINFIGHT_OFFSET))(this, newAvatarDatas, reloadParam, changeEndCallBack, teamReadyCallback, teamCount);
		}

		static ::System::Void ClearOldTeamAvatars()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_CLEAROLDTEAMAVATARS_OFFSET))();
		}

		static ::System::Void IsolateTeams(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* teams)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_ISOLATETEAMS_OFFSET))(teams);
		}

		static ::System::Void ForceSetAvatarStateDead(::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* teams)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_FORCESETAVATARSTATEDEAD_OFFSET))(teams);
		}

		static ::System::Void ResumeTeams(::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* teams)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_RESUMETEAMS_OFFSET))(teams);
		}

		static ::System::Void RefreshTeam(::MoleMole::TeamDataItem* teamData)
		{
			return ((::System::Void(*)(::MoleMole::TeamDataItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM_REFRESHTEAM_OFFSET))(teamData);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
