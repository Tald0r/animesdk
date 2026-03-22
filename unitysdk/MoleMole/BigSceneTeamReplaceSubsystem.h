#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

class Class_1_2BEAA93324417DF4;
class Class_1_B7E341C5F1A6F199;
class Class_2_888829D5F4E4EBE0_Class_1_73C31DDA126AE455;
class Class_2_888829D5F4E4EBE0_Class_1_C25F39C28A6D9D6C;
class Class_2_A3CFC20DC3954F5C_1;
class Class_2_D89CCC627A66D0AD;
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_CHANGETEAMDATAS_OFFSET UNITYSDK_OFFSET(0x9B3BB10)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_CHECKNEEDREALODAVATAR_OFFSET UNITYSDK_OFFSET(0x9B3A780)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_GETAVATARPROPERTYMAP_OFFSET UNITYSDK_OFFSET(0x9B3C210)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_GET_FORCEOPENTEAM_OFFSET UNITYSDK_OFFSET(0x9B39230)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_GET_ISCUSTOMTEAM_OFFSET UNITYSDK_OFFSET(0x9B39250)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_GET_SKIPLOADINGREPLACE_OFFSET UNITYSDK_OFFSET(0x9B39270)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_HIDEBATTLEBUDDY_OFFSET UNITYSDK_OFFSET(0x9B3CB90)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_INITPREDATA_OFFSET UNITYSDK_OFFSET(0x9B39F90)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISAVATARAWAKENDIFFERENT_OFFSET UNITYSDK_OFFSET(0x9B3A8C0)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISAVATARITEMDIFFERENT_OFFSET UNITYSDK_OFFSET(0x9B3AAD0)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISAVATARSKINDIFFERENT_OFFSET UNITYSDK_OFFSET(0x9B3AC00)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISBUDDYITEMDIFFERENT_OFFSET UNITYSDK_OFFSET(0x9B3A930)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISEQUIPMENDATASDIFFERENT_OFFSET UNITYSDK_OFFSET(0x9B3B4D0)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISEQUIPMENSUITDIFFERENT_OFFSET UNITYSDK_OFFSET(0x9B3AD30)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISPROPERTYDIFFERENT_OFFSET UNITYSDK_OFFSET(0x9B3BA20)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISWEAPONDATADIFFERENT_OFFSET UNITYSDK_OFFSET(0x9B3B150)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9B3CF30)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x9B3C4F0)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ONEVTLEVELREPLACETEAMAVATARCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9B3CB20)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ONUIROLESELECTCHANGESTATE_OFFSET UNITYSDK_OFFSET(0x9B39C60)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x9B397E0)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_PLAYMATEFFECTREPLACEFINISH_OFFSET UNITYSDK_OFFSET(0x9B3CD00)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x9B39290)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_REGISTERSKIPLOADINGREPLACE_OFFSET UNITYSDK_OFFSET(0x9B39BA0)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_REGISTERUIEVENTNOTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x9B39560)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_SET_FORCEOPENTEAM_OFFSET UNITYSDK_OFFSET(0x9B39240)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_SET_ISCUSTOMTEAM_OFFSET UNITYSDK_OFFSET(0x9B39260)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_SET_SKIPLOADINGREPLACE_OFFSET UNITYSDK_OFFSET(0x9B39280)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_UNREGISTERSKIPLOADINGREPLACE_OFFSET UNITYSDK_OFFSET(0x9B39C00)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9B3D220)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM__REGISTERUIEVENTNOTIFYTYPE_B__29_0_OFFSET UNITYSDK_OFFSET(0x9B3D280)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM__REGISTERUIEVENTNOTIFYTYPE_B__29_1_OFFSET UNITYSDK_OFFSET(0x9B3D2A0)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9B3D470)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x9B3D4D0)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x9B3D540)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x9B3D5A0)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneTeamReplaceSubsystem_TypeDefinitionIndex = 50611;

	class BigSceneTeamReplaceSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::BigSceneTeamReplaceSubsystem*>
	{
	public:
		// static const ::System::String* MuteLogicTimerTag; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_888829D5F4E4EBE0_Class_1_C25F39C28A6D9D6C*>* _preEquipmentDatas; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_A3CFC20DC3954F5C_1*>* _preWeaponDatas; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>* _prePropertyMap; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _preAvatarSkinDatas; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_2_888829D5F4E4EBE0_Class_1_73C31DDA126AE455*>*>* _preSuitDatas; // 0x30
		::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* _preAvatarItemList; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _avatarsAwakenChangeRecord; // 0x40
		::Class_1_2BEAA93324417DF4* _generalEventCollection; // 0x48
		::System::Single _reportTime; // 0x50
		::System::Boolean _SkipLoadingReplace_k__BackingField; // 0x54
		::System::Boolean _IsCustomTeam_k__BackingField; // 0x55
		::System::Boolean _forceCheckReload; // 0x56
		::System::Int32 _preBuddyId; // 0x58
		::System::Boolean _ForceOpenTeam_k__BackingField; // 0x5C
		::System::Boolean _curIsMainUIHide; // 0x5D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ForceOpenTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_GET_FORCEOPENTEAM_OFFSET))(this);
		}

		::System::Void set_ForceOpenTeam(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_SET_FORCEOPENTEAM_OFFSET))(this, value);
		}

		::System::Boolean get_IsCustomTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_GET_ISCUSTOMTEAM_OFFSET))(this);
		}

		::System::Void set_IsCustomTeam(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_SET_ISCUSTOMTEAM_OFFSET))(this, value);
		}

		::System::Boolean get_SkipLoadingReplace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_GET_SKIPLOADINGREPLACE_OFFSET))(this);
		}

		::System::Void set_SkipLoadingReplace(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_SET_SKIPLOADINGREPLACE_OFFSET))(this, value);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void RegisterSkipLoadingReplace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_REGISTERSKIPLOADINGREPLACE_OFFSET))(this);
		}

		::System::Void UnregisterSkipLoadingReplace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_UNREGISTERSKIPLOADINGREPLACE_OFFSET))(this);
		}

		::System::Void RegisterUIEventNotifyType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_REGISTERUIEVENTNOTIFYTYPE_OFFSET))(this);
		}

		::System::Void OnUIRoleSelectChangeState(::System::Boolean mainUIHide)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ONUIROLESELECTCHANGESTATE_OFFSET))(this, mainUIHide);
		}

		::System::Void CheckNeedRealodAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_CHECKNEEDREALODAVATAR_OFFSET))(this);
		}

		::System::Boolean IsAvatarItemDifferent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISAVATARITEMDIFFERENT_OFFSET))(this);
		}

		::System::Boolean IsAvatarSkinDifferent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISAVATARSKINDIFFERENT_OFFSET))(this);
		}

		::System::Boolean IsAvatarAwakenDifferent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISAVATARAWAKENDIFFERENT_OFFSET))(this);
		}

		::System::Boolean IsBuddyItemDifferent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISBUDDYITEMDIFFERENT_OFFSET))(this);
		}

		::System::Boolean IsPropertyDifferent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISPROPERTYDIFFERENT_OFFSET))(this);
		}

		::System::Boolean IsEquipmenSuitDifferent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISEQUIPMENSUITDIFFERENT_OFFSET))(this);
		}

		::System::Boolean IsWeaponDataDifferent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISWEAPONDATADIFFERENT_OFFSET))(this);
		}

		::System::Boolean IsEquipmenDatasDifferent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ISEQUIPMENDATASDIFFERENT_OFFSET))(this);
		}

		::System::Void ChangeTeamDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_CHANGETEAMDATAS_OFFSET))(this);
		}

		::System::Void InitPreData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_INITPREDATA_OFFSET))(this);
		}

		::System::Void GetAvatarPropertyMap(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>*& avatarPropertyMap)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_GETAVATARPROPERTYMAP_OFFSET))(this, avatarPropertyMap);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void OnEvtLevelReplaceTeamAvatarComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ONEVTLEVELREPLACETEAMAVATARCOMPLETE_OFFSET))(this);
		}

		::System::Void HideBattleBuddy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_HIDEBATTLEBUDDY_OFFSET))(this);
		}

		::System::Void PlayMatEffectReplaceFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_PLAYMATEFFECTREPLACEFINISH_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void _RegisterUIEventNotifyType_b__29_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM__REGISTERUIEVENTNOTIFYTYPE_B__29_0_OFFSET))(this, args);
		}

		::System::Void _RegisterUIEventNotifyType_b__29_1(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM__REGISTERUIEVENTNOTIFYTYPE_B__29_1_OFFSET))(this, args);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
