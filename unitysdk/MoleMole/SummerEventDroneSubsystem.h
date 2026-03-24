#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/MoleMole/SummerEventDroneSubsystem_BulletWeaponLogInfo.h"
#include "unitysdk/MoleMole/SummerEventDroneSubsystem_ShootingInfo.h"
#include "unitysdk/MoleMole/SummerEventDroneSubsystem_State.h"
#include "unitysdk/MoleMole/SummerWeaponConfig_CrossHairRayShape.h"
#include "unitysdk/Struct_2_7734F33592BF49F6_6.h"
#include "unitysdk/Struct_2_AC46DC1AA99F1EF4.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_236;
class Class_1_43BD383C98B4C0C5_24;
class Class_1_A3AC0B6B344CF5CC;
class Class_1_B7E341C5F1A6F199;
class Class_2_2FA6B1A583C7D44A;
class Class_2_2FA6B1A583C7D44A_1;
class Class_2_423F3A73D988B24A;
class Class_2_4DB226BA3393390B;
class Class_2_5F5BDCC1D6A74AD7;
class Class_2_CA1F4A5B1A684DEF;
class Class_2_EF1D28F8618171F3;
class Class_3_F97B015544BE936B;
namespace MoleMole { class SummerEventDroneSubsystem_RaycastHitCompare; }
namespace MoleMole { class SummerEventDroneSubsystem_WeaponSkillBase; }
namespace MoleMole { class SummerEventWeaponSkillParamBase; }
namespace MoleMole { class SummerPlayerWeaponInfo; }
namespace MoleMole { class SummerWeaponConfig; }
namespace MoleMole { class UISummerEventShootMainPageController; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Cameras { class ScopedOverShoulderCamera; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ADDLIMITTASKTARGET_OFFSET UNITYSDK_OFFSET(0xB1C4050)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ADDONFINISHINNER_OFFSET UNITYSDK_OFFSET(0xB1C5010)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ADDONFINISH_OFFSET UNITYSDK_OFFSET(0xB1C4ED0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ADDONSTARTINNER_OFFSET UNITYSDK_OFFSET(0xB1C4E30)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ADDONSTART_OFFSET UNITYSDK_OFFSET(0xB1C4CF0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ADDSCORE_OFFSET UNITYSDK_OFFSET(0xB1C4950)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_CANUSESKILL_OFFSET UNITYSDK_OFFSET(0xB1CE590)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_CHANGEUSEDWEAPONBYCONFIGKEY_OFFSET UNITYSDK_OFFSET(0xB1C37F0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_CHECKRELOADEVENT_OFFSET UNITYSDK_OFFSET(0xB1CC680)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_CLEARSUMMERTPSDATA_OFFSET UNITYSDK_OFFSET(0xB1C1D80)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_CORERELOAD_OFFSET UNITYSDK_OFFSET(0xB1C56A0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_CORESKILL_OFFSET UNITYSDK_OFFSET(0xB1C2180)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_DISPATCHEVENT_OFFSET UNITYSDK_OFFSET(0xB1C8610)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ENTERSHOOTINGGAME_OFFSET UNITYSDK_OFFSET(0xB1CC9D0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ENTERTPSCAMERA_OFFSET UNITYSDK_OFFSET(0xB1C1E20)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_EXITGAMEUI_OFFSET UNITYSDK_OFFSET(0xB1C9800)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_EXITSHOOTINGGAME_OFFSET UNITYSDK_OFFSET(0xB1CD9E0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_FINDWEAPONCONFIGBYKEY_OFFSET UNITYSDK_OFFSET(0xB1CEE90)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_FINISHBULLETHITRECORD_OFFSET UNITYSDK_OFFSET(0xB1CC0C0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GENERATESKILLBYPARAM_OFFSET UNITYSDK_OFFSET(0xB1C2890)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETAIMASSISTMOVESPEEDRATIO_OFFSET UNITYSDK_OFFSET(0xB1CE840)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETALLSELECTWEAPONLIST_OFFSET UNITYSDK_OFFSET(0xB1CF000)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETCAMERAMOVEFOLLOWPOSITION_OFFSET UNITYSDK_OFFSET(0xB1C1F20)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETCURRENTBULLETINFO_OFFSET UNITYSDK_OFFSET(0xB1C92D0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETCURRENTWEAPONCHARGERATIO_OFFSET UNITYSDK_OFFSET(0xB1C3000)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETCURRENTWEAPONKEY_OFFSET UNITYSDK_OFFSET(0xB1C9430)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETCURRENTWEAPONSKILLPARAM_OFFSET UNITYSDK_OFFSET(0xB1CE060)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETCURRENTWEAPONSKILL_OFFSET UNITYSDK_OFFSET(0xB1CF0F0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETLASADDSCORE_OFFSET UNITYSDK_OFFSET(0xB1CF280)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETPLATFORMBASEMOVESPEEDRATIO_OFFSET UNITYSDK_OFFSET(0xB1CE9F0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETSCORE_OFFSET UNITYSDK_OFFSET(0xB1CF210)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETWEAPONBULLETCROSSHAIRRADIUSORRECT_OFFSET UNITYSDK_OFFSET(0xB1C7150)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETWEAPONINFOBYWEAPONKEY_OFFSET UNITYSDK_OFFSET(0xB1C94A0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETWEAPONSKILLPARAMBYWEAPONKEY_OFFSET UNITYSDK_OFFSET(0xB1CE300)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GET_FREESHOOTSTATE_OFFSET UNITYSDK_OFFSET(0xB1C4170)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GET_KILLEDMEMBERS_OFFSET UNITYSDK_OFFSET(0xB1C48F0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GET_REALCURRENTTIME_OFFSET UNITYSDK_OFFSET(0xB1C4890)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GET_SCORE_OFFSET UNITYSDK_OFFSET(0xB1C4830)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_HASCURRENTWEAPONSKILLRUNNING_OFFSET UNITYSDK_OFFSET(0xB1C3320)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_INITIALGAMEUI_OFFSET UNITYSDK_OFFSET(0xB1C9600)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_INITIALIZEBEATMAP_OFFSET UNITYSDK_OFFSET(0xB1C4270)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_INITIALIZE_1_OFFSET UNITYSDK_OFFSET(0xB1C8F50)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB1C41A0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_INITPLAYERSHOOTWEAPON_OFFSET UNITYSDK_OFFSET(0xB1CCB80)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ISCONTROLENTITYCOLLIDER_OFFSET UNITYSDK_OFFSET(0xB1C7390)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ISNOBULLETWEAPON_OFFSET UNITYSDK_OFFSET(0xB1CBF90)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ISWEAPONSKILLRUNNING_OFFSET UNITYSDK_OFFSET(0xB1C3440)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xB1C50B0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONBULLETCREATE_OFFSET UNITYSDK_OFFSET(0xB1CA170)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONBULLETREMOVE_OFFSET UNITYSDK_OFFSET(0xB1CA380)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB1C99D0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0xB1C85A0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONGAMEPLAYEVENT_OFFSET UNITYSDK_OFFSET(0xB1CBE90)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONHITOTHER_OFFSET UNITYSDK_OFFSET(0xB1CAB20)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONPATTERNFINISH_OFFSET UNITYSDK_OFFSET(0xB1CB0D0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONPATTERNSTART_OFFSET UNITYSDK_OFFSET(0xB1CAEA0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONRELOADANIMEVENT_OFFSET UNITYSDK_OFFSET(0xB1CB150)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONSHOOTBULLETANIMEVENT_OFFSET UNITYSDK_OFFSET(0xB1CB690)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xB1C5140)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONWEAPONEVENT_OFFSET UNITYSDK_OFFSET(0xB1CC4D0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_POPCONTROLENTITYANIMATORZONETAGS_OFFSET UNITYSDK_OFFSET(0xB1C2500)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_POPFREESHOOT_OFFSET UNITYSDK_OFFSET(0xB1CDDA0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_POPSUMMERTPSCAMERAOVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0xB1C17A0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_PROCESSAIM_OFFSET UNITYSDK_OFFSET(0xB1C5C20)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_PUSHCONTROLENTITYANIMATORZONETAGS_OFFSET UNITYSDK_OFFSET(0xB1C23F0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_PUSHFREESHOOT_OFFSET UNITYSDK_OFFSET(0xB1CDA90)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_PUSHSUMMERTPSCAMERAOVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0xB1C1670)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_RECORDONBULLETHIT_OFFSET UNITYSDK_OFFSET(0xB1CA6F0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_REFRESHSUMMERTPSDATA_OFFSET UNITYSDK_OFFSET(0xB1C1990)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_REGISTERDRONEINNER_OFFSET UNITYSDK_OFFSET(0xB1C4560)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_REGISTERDRONE_OFFSET UNITYSDK_OFFSET(0xB1C44B0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xB1C7FD0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_RUN_OFFSET UNITYSDK_OFFSET(0xB1C54D0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_SELECTWEAPON_OFFSET UNITYSDK_OFFSET(0xB1CEBF0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_SETIKFORWARDANGLEPARAM_OFFSET UNITYSDK_OFFSET(0xB1C7530)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_STARTTIMELIMITTASK_OFFSET UNITYSDK_OFFSET(0xB1C3C90)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_STOPINNER_OFFSET UNITYSDK_OFFSET(0xB1C4C80)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_STOP_OFFSET UNITYSDK_OFFSET(0xB1C4B80)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_SWITCHTASK_OFFSET UNITYSDK_OFFSET(0xB1C3E10)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_TICKCAMERA_OFFSET UNITYSDK_OFFSET(0xB1C1610)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_TIMELIMITTASKFAIL_OFFSET UNITYSDK_OFFSET(0xB1C3F80)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_TIMELIMITTASKSUCCESS_OFFSET UNITYSDK_OFFSET(0xB1C3EB0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_TRIGGERCONTROLENTITYABILITY_OFFSET UNITYSDK_OFFSET(0xB1C2610)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_TRYGETINNER_OFFSET UNITYSDK_OFFSET(0xB1C4700)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_TRYGET_OFFSET UNITYSDK_OFFSET(0xB1C4650)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_TRYSWITCHWEAPON_OFFSET UNITYSDK_OFFSET(0xB1C35A0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xB1C8370)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_UPDATECROSSHAIR_OFFSET UNITYSDK_OFFSET(0xB1CE7B0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_USEPLAYERWEAPONSKILL_OFFSET UNITYSDK_OFFSET(0xB1C2AE0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB1CF2F0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM__INITIALIZEBEATMAP_B__109_0_OFFSET UNITYSDK_OFFSET(0xB1CF830)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM__REFRESHSUMMERTPSDATA_B__10_0_OFFSET UNITYSDK_OFFSET(0xB1CF7E0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM__REFRESHSUMMERTPSDATA_B__10_1_OFFSET UNITYSDK_OFFSET(0xB1CF810)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xB1CF860)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB1CF8C0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0xB1CF920)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xB1CF990)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xB1CF9F0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xB1CFA50)

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventDroneSubsystem_TypeDefinitionIndex = 71330;

	class SummerEventDroneSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::SummerEventDroneSubsystem*>
	{
	public:
		static ::MoleMole::SummerEventDroneSubsystem** StaticGet__self()
		{
			return (::MoleMole::SummerEventDroneSubsystem**)Il2CppClass::FromTypeDefinitionIndex(SummerEventDroneSubsystem_TypeDefinitionIndex)->GetStaticField(0x3D490);
		}
		// static const ::System::String* PatternStart; // 0x0
		// static const ::System::String* PatternEnd; // 0x0
		// static const ::System::String* PatternDestroy; // 0x0
		::Class_3_F97B015544BE936B* _controlEntityDataComponent; // 0x10
		::MoleMole::Cameras::ScopedOverShoulderCamera* _scopedOverShoulderCamera; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SummerEventDroneSubsystem_BulletWeaponLogInfo>* bulletWeaponKeyDic; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* freeShootDic; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* bulletHitSet; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* _playerWeaponConfigList; // 0x38
		::System::Collections::Generic::List_1<::System::Single>* _weaponReloadTimeList; // 0x40
		::MoleMole::EntityHandle _controlEntity; // 0x48
		::System::Collections::Generic::List_1<::MoleMole::SummerEventDroneSubsystem_WeaponSkillBase*>* _appliedWeaponSkillList; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* aimIKTargetPosLerpStack; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::SummerEventDroneSubsystem_WeaponSkillBase*>* tempRemoveSkill; // 0x68
		::Il2CppArray<::UnityEngine::RaycastHit>* _hits; // 0x70
		::MoleMole::SummerEventDroneSubsystem_RaycastHitCompare* _raycastCompare; // 0x78
		::Class_1_43BD383C98B4C0C5_24* _task; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::SummerEventDroneSubsystem_ShootingInfo>* _playerWeaponInfo; // 0x88
		::System::Action* _onFinish; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_236*>* _drones; // 0x98
		::Struct_2_AC46DC1AA99F1EF4 _baseCameraData; // 0xA0
		::System::Collections::Generic::List_1<::Struct_2_7734F33592BF49F6_6>* _overrideCameraDataList; // 0xC0
		::Class_1_A3AC0B6B344CF5CC* _beatMap; // 0xC8
		::MoleMole::UISummerEventShootMainPageController* _mainPage; // 0xD0
		::System::Collections::Generic::List_1<::System::String*>* _weaponBulletAnimatorZoneTags; // 0xD8
		::System::String* currentBulletKey; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* weaponToConfigIDDic; // 0xE8
		::System::String* _overrideConfigKeyFromOverrideData; // 0xF0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* hitRecord; // 0xF8
		::System::Action* _onStart; // 0x100
		::System::Int32 _killMember; // 0x108
		::System::Single _emptyTimescale; // 0x10C
		::UnityEngine::Vector3 crosshairPosition; // 0x110
		::UnityEngine::Vector3 _initAimTargetPos; // 0x11C
		::MoleMole::SummerEventDroneSubsystem_State _state; // 0x128
		::System::Int32 IKForwardAngleParamNameHash; // 0x12C
		::System::Int32 _scoreLastAdd; // 0x130
		::System::Double bulletHitRecordFixedTime; // 0x138
		::System::Single _currentTime; // 0x140
		::System::Boolean _isBaseDataValid; // 0x144
		::System::Boolean _stop; // 0x145
		::System::Boolean _applyAimAssist; // 0x146
		::System::Boolean alreadyUpdateCosshair; // 0x147
		::System::UInt32 currentBulletHitID; // 0x148
		::System::Int32 _score; // 0x14C
		::UnityEngine::Vector3 lastRoteToTargetPos; // 0x150
		::System::Single _realCurrentTime; // 0x15C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void TickCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_TICKCAMERA_OFFSET))(this);
		}

		::System::Void PushSummerTpsCameraOverrideConfig(::System::String* tag, ::System::String* overrideConfigKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_PUSHSUMMERTPSCAMERAOVERRIDECONFIG_OFFSET))(this, tag, overrideConfigKey);
		}

		::System::Void PopSummerTpsCameraOverrideConfig(::System::String* tag, ::System::Boolean needRefreshData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_POPSUMMERTPSCAMERAOVERRIDECONFIG_OFFSET))(this, tag, needRefreshData);
		}

		::System::Void ClearSummerTpsData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_CLEARSUMMERTPSDATA_OFFSET))(this);
		}

		::System::Void RefreshSummerTpsData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_REFRESHSUMMERTPSDATA_OFFSET))(this);
		}

		::System::Void EnterTpsCamera(::System::String* configKey, ::System::String* overrideConfigKey, ::UnityEngine::Vector3 initAimTargetPos, ::MoleMole::Cameras::CameraTrackBlending* overrideBlendIn, ::MoleMole::Cameras::CameraTrackBlending* overrideBlendOut)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::Vector3, ::MoleMole::Cameras::CameraTrackBlending*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ENTERTPSCAMERA_OFFSET))(this, configKey, overrideConfigKey, initAimTargetPos, overrideBlendIn, overrideBlendOut);
		}

		::UnityEngine::Vector3 GetCameraMoveFollowPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETCAMERAMOVEFOLLOWPOSITION_OFFSET))(this);
		}

		::System::Void CoreSkill(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_CORESKILL_OFFSET))(this, deltaTime);
		}

		::System::Void PushControlEntityAnimatorZoneTags(::System::Collections::Generic::List_1<::System::String*>* animatorZoneTags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_PUSHCONTROLENTITYANIMATORZONETAGS_OFFSET))(this, animatorZoneTags);
		}

		::System::Void PopControlEntityAnimatorZoneTags(::System::Collections::Generic::List_1<::System::String*>* animatorZoneTags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_POPCONTROLENTITYANIMATORZONETAGS_OFFSET))(this, animatorZoneTags);
		}

		::System::Void TriggerControlEntityAbility(::System::String* abilityName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_TRIGGERCONTROLENTITYABILITY_OFFSET))(this, abilityName);
		}

		::MoleMole::SummerEventDroneSubsystem_WeaponSkillBase* GenerateSkillByParam(::System::String* weaponKey, ::MoleMole::SummerEventWeaponSkillParamBase* skillParam)
		{
			return ((::MoleMole::SummerEventDroneSubsystem_WeaponSkillBase*(*)(::PVOID, ::System::String*, ::MoleMole::SummerEventWeaponSkillParamBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GENERATESKILLBYPARAM_OFFSET))(this, weaponKey, skillParam);
		}

		::System::Void UsePlayerWeaponSkill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_USEPLAYERWEAPONSKILL_OFFSET))(this);
		}

		::System::Single GetCurrentWeaponChargeRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETCURRENTWEAPONCHARGERATIO_OFFSET))(this);
		}

		::System::Boolean HasCurrentWeaponSkillRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_HASCURRENTWEAPONSKILLRUNNING_OFFSET))(this);
		}

		::System::Boolean IsWeaponSkillRunning(::System::String* weaponKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ISWEAPONSKILLRUNNING_OFFSET))(this, weaponKey);
		}

		::System::Void TrySwitchWeapon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_TRYSWITCHWEAPON_OFFSET))(this);
		}

		::Class_2_423F3A73D988B24A* StartTimeLimitTask(::System::Int32 targetNumber, ::System::Single second, ::System::Int32 score)
		{
			return ((::Class_2_423F3A73D988B24A*(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_STARTTIMELIMITTASK_OFFSET))(this, targetNumber, second, score);
		}

		::Class_2_CA1F4A5B1A684DEF* TimeLimitTaskSuccess(::System::Int32 score)
		{
			return ((::Class_2_CA1F4A5B1A684DEF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_TIMELIMITTASKSUCCESS_OFFSET))(this, score);
		}

		::Class_2_5F5BDCC1D6A74AD7* TimeLimitTaskFail()
		{
			return ((::Class_2_5F5BDCC1D6A74AD7*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_TIMELIMITTASKFAIL_OFFSET))(this);
		}

		::System::Void SwitchTask(::Class_1_43BD383C98B4C0C5_24* newTask)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_24*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_SWITCHTASK_OFFSET))(this, newTask);
		}

		::System::Void AddLimitTaskTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ADDLIMITTASKTARGET_OFFSET))(this);
		}

		::System::Boolean get_FreeShootState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GET_FREESHOOTSTATE_OFFSET))(this);
		}

		static ::System::Void Initialize(::System::String* beatMapKey, ::System::Single emptyTimescale)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_INITIALIZE_OFFSET))(beatMapKey, emptyTimescale);
		}

		static ::System::Void RegisterDrone(::System::UInt32 entityId, ::Class_0_16E4307DCC419505_236* drone)
		{
			return ((::System::Void(*)(::System::UInt32, ::Class_0_16E4307DCC419505_236*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_REGISTERDRONE_OFFSET))(entityId, drone);
		}

		static ::System::Boolean TryGet(::System::UInt32 entityId, ::Class_0_16E4307DCC419505_236*& drone)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::Class_0_16E4307DCC419505_236*&))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_TRYGET_OFFSET))(entityId, drone);
		}

		static ::System::Int32 get_Score()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GET_SCORE_OFFSET))();
		}

		static ::System::Single get_RealCurrentTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GET_REALCURRENTTIME_OFFSET))();
		}

		static ::System::Int32 get_KilledMembers()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GET_KILLEDMEMBERS_OFFSET))();
		}

		static ::System::Void AddScore(::System::Int32 value, ::MoleMole::Battle::Entity* target)
		{
			return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ADDSCORE_OFFSET))(value, target);
		}

		static ::System::Void Stop()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_STOP_OFFSET))();
		}

		static ::System::Void AddOnStart(::System::Action* onStart)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ADDONSTART_OFFSET))(onStart);
		}

		static ::System::Void AddOnFinish(::System::Action* onFinish)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ADDONFINISH_OFFSET))(onFinish);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void CoreReload(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_CORERELOAD_OFFSET))(this, deltaTime);
		}

		::System::Void Run()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_RUN_OFFSET))(this);
		}

		::System::Void ProcessAim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_PROCESSAIM_OFFSET))(this);
		}

		::System::Void SetIKForwardAngleParam(::UnityEngine::Vector3 aimIKTargetPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_SETIKFORWARDANGLEPARAM_OFFSET))(this, aimIKTargetPos);
		}

		::System::Boolean IsControlEntityCollider(::UnityEngine::Collider* collider)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ISCONTROLENTITYCOLLIDER_OFFSET))(this, collider);
		}

		::System::Void StopInner()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_STOPINNER_OFFSET))(this);
		}

		::System::Void RegisterDroneInner(::System::UInt32 entityId, ::Class_0_16E4307DCC419505_236* drone)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_0_16E4307DCC419505_236*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_REGISTERDRONEINNER_OFFSET))(this, entityId, drone);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Boolean TryGetInner(::System::UInt32 entityId, ::Class_0_16E4307DCC419505_236*& drone)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_0_16E4307DCC419505_236*&))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_TRYGETINNER_OFFSET))(this, entityId, drone);
		}

		::System::Void AddOnStartInner(::System::Action* onStart)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ADDONSTARTINNER_OFFSET))(this, onStart);
		}

		::System::Void AddOnFinishInner(::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ADDONFINISHINNER_OFFSET))(this, onFinish);
		}

		::System::Void Initialize_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_INITIALIZE_1_OFFSET))(this);
		}

		::System::Void InitializeBeatmap(::System::String* beatMapKey, ::System::Single emptyTimescale)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_INITIALIZEBEATMAP_OFFSET))(this, beatMapKey, emptyTimescale);
		}

		::MoleMole::SummerEventDroneSubsystem_ShootingInfo GetCurrentBulletInfo()
		{
			return ((::MoleMole::SummerEventDroneSubsystem_ShootingInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETCURRENTBULLETINFO_OFFSET))(this);
		}

		::System::String* GetCurrentWeaponKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETCURRENTWEAPONKEY_OFFSET))(this);
		}

		::MoleMole::SummerEventDroneSubsystem_ShootingInfo GetWeaponInfoByWeaponKey(::System::String* weaponKey)
		{
			return ((::MoleMole::SummerEventDroneSubsystem_ShootingInfo(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETWEAPONINFOBYWEAPONKEY_OFFSET))(this, weaponKey);
		}

		::System::Void InitialGameUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_INITIALGAMEUI_OFFSET))(this);
		}

		::System::Void ExitGameUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_EXITGAMEUI_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void DispatchEvent(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_DISPATCHEVENT_OFFSET))(this, evt);
		}

		::System::Void OnPatternStart(::Class_2_2FA6B1A583C7D44A* hitPattern)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_2FA6B1A583C7D44A*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONPATTERNSTART_OFFSET))(this, hitPattern);
		}

		::System::Boolean IsNoBulletWeapon(::System::String* weaponKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ISNOBULLETWEAPON_OFFSET))(this, weaponKey);
		}

		::System::Void OnPatternFinish(::Class_2_2FA6B1A583C7D44A_1* hitPatternFinish)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_2FA6B1A583C7D44A_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONPATTERNFINISH_OFFSET))(this, hitPatternFinish);
		}

		::System::Void OnBulletCreate(::MoleMole::Battle::Entity* bulletEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONBULLETCREATE_OFFSET))(this, bulletEntity);
		}

		::System::Void OnBulletRemove(::MoleMole::Battle::Entity* bulletEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONBULLETREMOVE_OFFSET))(this, bulletEntity);
		}

		::System::Void RecordOnBulletHit(::Class_2_4DB226BA3393390B* bulletHit)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_4DB226BA3393390B*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_RECORDONBULLETHIT_OFFSET))(this, bulletHit);
		}

		::System::Void OnHitOther(::Class_2_EF1D28F8618171F3* hittingOther)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_EF1D28F8618171F3*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONHITOTHER_OFFSET))(this, hittingOther);
		}

		::System::Void FinishBulletHitRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_FINISHBULLETHITRECORD_OFFSET))(this);
		}

		::System::Void OnGamePlayEvent(::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONGAMEPLAYEVENT_OFFSET))(this, eventName);
		}

		::System::Void OnWeaponEvent(::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONWEAPONEVENT_OFFSET))(this, eventName);
		}

		::System::Void CheckReloadEvent(::System::String* abilityEventName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_CHECKRELOADEVENT_OFFSET))(this, abilityEventName);
		}

		::System::Void OnReloadAnimEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONRELOADANIMEVENT_OFFSET))(this);
		}

		::System::Void OnShootBulletAnimEvent(::System::String* bulletConfig, ::System::String* weaponConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONSHOOTBULLETANIMEVENT_OFFSET))(this, bulletConfig, weaponConfig);
		}

		::System::Void EnterShootingGame(::MoleMole::Battle::Entity* controlEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ENTERSHOOTINGGAME_OFFSET))(this, controlEntity);
		}

		::System::Void ExitShootingGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_EXITSHOOTINGGAME_OFFSET))(this);
		}

		::System::Void PushFreeShoot(::System::String* weaponKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_PUSHFREESHOOT_OFFSET))(this, weaponKey);
		}

		::System::Void PopFreeShoot(::System::String* weaponKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_POPFREESHOOT_OFFSET))(this, weaponKey);
		}

		::System::Boolean GetCurrentWeaponSkillParam(::System::Single& timer, ::System::Single& duration)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETCURRENTWEAPONSKILLPARAM_OFFSET))(this, timer, duration);
		}

		::System::Boolean GetWeaponSkillParamByWeaponKey(::System::String* weaponKey, ::System::Single& timer, ::System::Single& duration)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETWEAPONSKILLPARAMBYWEAPONKEY_OFFSET))(this, weaponKey, timer, duration);
		}

		::System::Boolean CanUseSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_CANUSESKILL_OFFSET))(this);
		}

		::System::Void UpdateCrosshair(::UnityEngine::Vector3 aimPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_UPDATECROSSHAIR_OFFSET))(this, aimPos);
		}

		::System::Single GetAimAssistMoveSpeedRatio(::Enum_3_A019F766F8C74696 device)
		{
			return ((::System::Single(*)(::PVOID, ::Enum_3_A019F766F8C74696))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETAIMASSISTMOVESPEEDRATIO_OFFSET))(this, device);
		}

		::System::Single GetPlatformBaseMoveSpeedRatio(::Enum_3_A019F766F8C74696 device)
		{
			return ((::System::Single(*)(::PVOID, ::Enum_3_A019F766F8C74696))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETPLATFORMBASEMOVESPEEDRATIO_OFFSET))(this, device);
		}

		::System::Void InitPlayerShootWeapon(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_INITPLAYERSHOOTWEAPON_OFFSET))(this, entity);
		}

		::MoleMole::SummerWeaponConfig* FindWeaponConfigByKey(::MoleMole::SummerPlayerWeaponInfo* weaponInfo, ::System::String* key)
		{
			return ((::MoleMole::SummerWeaponConfig*(*)(::PVOID, ::MoleMole::SummerPlayerWeaponInfo*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_FINDWEAPONCONFIGBYKEY_OFFSET))(this, weaponInfo, key);
		}

		::System::Void SelectWeapon(::MoleMole::SummerWeaponConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SummerWeaponConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_SELECTWEAPON_OFFSET))(this, config);
		}

		::System::Void GetAllSelectWeaponList(::System::Collections::Generic::List_1<::System::String*>*& weaponConfigList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETALLSELECTWEAPONLIST_OFFSET))(this, weaponConfigList);
		}

		::MoleMole::SummerEventDroneSubsystem_WeaponSkillBase* GetCurrentWeaponSkill()
		{
			return ((::MoleMole::SummerEventDroneSubsystem_WeaponSkillBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETCURRENTWEAPONSKILL_OFFSET))(this);
		}

		::System::Void ChangeUsedWeaponByConfigKey(::System::String* selectWeaponKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_CHANGEUSEDWEAPONBYCONFIGKEY_OFFSET))(this, selectWeaponKey);
		}

		::System::Int32 GetScore()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETSCORE_OFFSET))(this);
		}

		::System::Int32 GetLasAddScore()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETLASADDSCORE_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetWeaponBulletCrossHairRadiusOrRect(::MoleMole::SummerWeaponConfig_CrossHairRayShape& shape)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::MoleMole::SummerWeaponConfig_CrossHairRayShape&))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETWEAPONBULLETCROSSHAIRRADIUSORRECT_OFFSET))(this, shape);
		}

		::UnityEngine::Vector3 _RefreshSummerTpsData_b__10_0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM__REFRESHSUMMERTPSDATA_B__10_0_OFFSET))(this);
		}

		::UnityEngine::Vector3 _RefreshSummerTpsData_b__10_1()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM__REFRESHSUMMERTPSDATA_B__10_1_OFFSET))(this);
		}

		::System::Void _InitializeBeatmap_b__109_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM__INITIALIZEBEATMAP_B__109_0_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void __base_UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
