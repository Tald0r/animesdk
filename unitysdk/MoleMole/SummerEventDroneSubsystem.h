#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/MoleMole/SummerEventDroneSubsystem_BulletWeaponLogInfo.h"
#include "unitysdk/MoleMole/SummerEventDroneSubsystem_ShootingInfo.h"
#include "unitysdk/MoleMole/SummerEventDroneSubsystem_State.h"
#include "unitysdk/MoleMole/SummerWeaponConfig_CrossHairRayShape.h"
#include "unitysdk/Struct_2_7734F33592BF49F6_3.h"
#include "unitysdk/Struct_2_AC46DC1AA99F1EF4.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_157;
class Class_1_43BD383C98B4C0C5_47;
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

#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ADDLIMITTASKTARGET_OFFSET UNITYSDK_OFFSET(0xBD54E00)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ADDONFINISHINNER_OFFSET UNITYSDK_OFFSET(0xBD55DC0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ADDONFINISH_OFFSET UNITYSDK_OFFSET(0xBD55C80)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ADDONSTARTINNER_OFFSET UNITYSDK_OFFSET(0xBD55BE0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ADDONSTART_OFFSET UNITYSDK_OFFSET(0xBD55AA0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ADDSCORE_OFFSET UNITYSDK_OFFSET(0xBD55700)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_CANUSESKILL_OFFSET UNITYSDK_OFFSET(0xBD5F320)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_CHANGEUSEDWEAPONBYCONFIGKEY_OFFSET UNITYSDK_OFFSET(0xBD545A0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_CHECKRELOADEVENT_OFFSET UNITYSDK_OFFSET(0xBD5D400)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_CLEARSUMMERTPSDATA_OFFSET UNITYSDK_OFFSET(0xBD52970)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_CORERELOAD_OFFSET UNITYSDK_OFFSET(0xBD56450)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_CORESKILL_OFFSET UNITYSDK_OFFSET(0xBD52D60)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_DISPATCHEVENT_OFFSET UNITYSDK_OFFSET(0xBD593D0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ENTERSHOOTINGGAME_OFFSET UNITYSDK_OFFSET(0xBD5D750)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ENTERTPSCAMERA_OFFSET UNITYSDK_OFFSET(0xBD52A10)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_EXITGAMEUI_OFFSET UNITYSDK_OFFSET(0xBD5A5A0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_EXITSHOOTINGGAME_OFFSET UNITYSDK_OFFSET(0xBD5E770)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_FINDWEAPONCONFIGBYKEY_OFFSET UNITYSDK_OFFSET(0xBD5FD10)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_FINISHBULLETHITRECORD_OFFSET UNITYSDK_OFFSET(0xBD5CE30)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GENERATESKILLBYPARAM_OFFSET UNITYSDK_OFFSET(0xBD53470)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETAIMASSISTMOVESPEEDRATIO_OFFSET UNITYSDK_OFFSET(0xBD5F6D0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETALLSELECTWEAPONLIST_OFFSET UNITYSDK_OFFSET(0xBD5FE80)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETCAMERAMOVEFOLLOWPOSITION_OFFSET UNITYSDK_OFFSET(0xBD52B00)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETCURRENTBULLETINFO_OFFSET UNITYSDK_OFFSET(0xBD5A080)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETCURRENTWEAPONCHARGERATIO_OFFSET UNITYSDK_OFFSET(0xBD53CD0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETCURRENTWEAPONKEY_OFFSET UNITYSDK_OFFSET(0xBD5A1E0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETCURRENTWEAPONSKILLPARAM_OFFSET UNITYSDK_OFFSET(0xBD5EE00)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETCURRENTWEAPONSKILL_OFFSET UNITYSDK_OFFSET(0xBD5FF70)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETLASADDSCORE_OFFSET UNITYSDK_OFFSET(0xBD60100)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETPLATFORMBASEMOVESPEEDRATIO_OFFSET UNITYSDK_OFFSET(0xBD5F870)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETSCORE_OFFSET UNITYSDK_OFFSET(0xBD60090)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETWEAPONBULLETCROSSHAIRRADIUSORRECT_OFFSET UNITYSDK_OFFSET(0xBD57F10)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETWEAPONINFOBYWEAPONKEY_OFFSET UNITYSDK_OFFSET(0xBD5A240)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GETWEAPONSKILLPARAMBYWEAPONKEY_OFFSET UNITYSDK_OFFSET(0xBD5F090)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GET_FREESHOOTSTATE_OFFSET UNITYSDK_OFFSET(0xBD54F20)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GET_KILLEDMEMBERS_OFFSET UNITYSDK_OFFSET(0xBD556A0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GET_REALCURRENTTIME_OFFSET UNITYSDK_OFFSET(0xBD55640)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_GET_SCORE_OFFSET UNITYSDK_OFFSET(0xBD555E0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_HASCURRENTWEAPONSKILLRUNNING_OFFSET UNITYSDK_OFFSET(0xBD540D0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_INITIALGAMEUI_OFFSET UNITYSDK_OFFSET(0xBD5A3A0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_INITIALIZEBEATMAP_OFFSET UNITYSDK_OFFSET(0xBD55020)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_INITIALIZE_1_OFFSET UNITYSDK_OFFSET(0xBD59D10)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xBD54F50)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_INITPLAYERSHOOTWEAPON_OFFSET UNITYSDK_OFFSET(0xBD5D910)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ISCONTROLENTITYCOLLIDER_OFFSET UNITYSDK_OFFSET(0xBD58140)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ISNOBULLETWEAPON_OFFSET UNITYSDK_OFFSET(0xBD5CD00)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ISWEAPONSKILLRUNNING_OFFSET UNITYSDK_OFFSET(0xBD541F0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xBD55E60)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONBULLETCREATE_OFFSET UNITYSDK_OFFSET(0xBD5AF00)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONBULLETREMOVE_OFFSET UNITYSDK_OFFSET(0xBD5B110)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xBD5A770)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0xBD59360)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONGAMEPLAYEVENT_OFFSET UNITYSDK_OFFSET(0xBD5CC00)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONHITOTHER_OFFSET UNITYSDK_OFFSET(0xBD5B8B0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONPATTERNFINISH_OFFSET UNITYSDK_OFFSET(0xBD5BE40)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONPATTERNSTART_OFFSET UNITYSDK_OFFSET(0xBD5BC20)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONRELOADANIMEVENT_OFFSET UNITYSDK_OFFSET(0xBD5BEC0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONSHOOTBULLETANIMEVENT_OFFSET UNITYSDK_OFFSET(0xBD5C400)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xBD55EF0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_ONWEAPONEVENT_OFFSET UNITYSDK_OFFSET(0xBD5D250)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_POPCONTROLENTITYANIMATORZONETAGS_OFFSET UNITYSDK_OFFSET(0xBD530E0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_POPFREESHOOT_OFFSET UNITYSDK_OFFSET(0xBD5EB30)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_POPSUMMERTPSCAMERAOVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0xBD523B0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_PROCESSAIM_OFFSET UNITYSDK_OFFSET(0xBD569D0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_PUSHCONTROLENTITYANIMATORZONETAGS_OFFSET UNITYSDK_OFFSET(0xBD52FD0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_PUSHFREESHOOT_OFFSET UNITYSDK_OFFSET(0xBD5E820)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_PUSHSUMMERTPSCAMERAOVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0xBD52280)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_RECORDONBULLETHIT_OFFSET UNITYSDK_OFFSET(0xBD5B480)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_REFRESHSUMMERTPSDATA_OFFSET UNITYSDK_OFFSET(0xBD52590)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_REGISTERDRONEINNER_OFFSET UNITYSDK_OFFSET(0xBD55310)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_REGISTERDRONE_OFFSET UNITYSDK_OFFSET(0xBD55260)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xBD58D90)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_RUN_OFFSET UNITYSDK_OFFSET(0xBD56280)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_SELECTWEAPON_OFFSET UNITYSDK_OFFSET(0xBD5FA70)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_SETIKFORWARDANGLEPARAM_OFFSET UNITYSDK_OFFSET(0xBD582E0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_STARTTIMELIMITTASK_OFFSET UNITYSDK_OFFSET(0xBD54A40)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_STOPINNER_OFFSET UNITYSDK_OFFSET(0xBD55A30)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_STOP_OFFSET UNITYSDK_OFFSET(0xBD55930)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_SWITCHTASK_OFFSET UNITYSDK_OFFSET(0xBD54BC0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_TICKCAMERA_OFFSET UNITYSDK_OFFSET(0xBD52220)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_TIMELIMITTASKFAIL_OFFSET UNITYSDK_OFFSET(0xBD54D30)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_TIMELIMITTASKSUCCESS_OFFSET UNITYSDK_OFFSET(0xBD54C60)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_TRIGGERCONTROLENTITYABILITY_OFFSET UNITYSDK_OFFSET(0xBD531F0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_TRYGETINNER_OFFSET UNITYSDK_OFFSET(0xBD554B0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_TRYGET_OFFSET UNITYSDK_OFFSET(0xBD55400)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_TRYSWITCHWEAPON_OFFSET UNITYSDK_OFFSET(0xBD54350)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xBD59130)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_UPDATECROSSHAIR_OFFSET UNITYSDK_OFFSET(0xBD5F640)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_USEPLAYERWEAPONSKILL_OFFSET UNITYSDK_OFFSET(0xBD536C0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xBD60170)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM__INITIALIZEBEATMAP_B__109_0_OFFSET UNITYSDK_OFFSET(0xBD606C0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM__REFRESHSUMMERTPSDATA_B__10_0_OFFSET UNITYSDK_OFFSET(0xBD60670)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM__REFRESHSUMMERTPSDATA_B__10_1_OFFSET UNITYSDK_OFFSET(0xBD606A0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xBD606F0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xBD60750)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0xBD607B0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xBD60820)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xBD60880)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xBD608E0)

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventDroneSubsystem_TypeDefinitionIndex = 63646;

	class SummerEventDroneSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::SummerEventDroneSubsystem*>
	{
	public:
		static ::MoleMole::SummerEventDroneSubsystem** StaticGet__self()
		{
			return (::MoleMole::SummerEventDroneSubsystem**)Il2CppClass::FromTypeDefinitionIndex(SummerEventDroneSubsystem_TypeDefinitionIndex)->GetStaticField(0x3A700);
		}
		// static const ::System::String* PatternStart; // 0x0
		// static const ::System::String* PatternEnd; // 0x0
		// static const ::System::String* PatternDestroy; // 0x0
		::MoleMole::SummerEventDroneSubsystem_RaycastHitCompare* _raycastCompare; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::SummerEventDroneSubsystem_WeaponSkillBase*>* _appliedWeaponSkillList; // 0x18
		::MoleMole::Cameras::ScopedOverShoulderCamera* _scopedOverShoulderCamera; // 0x20
		::System::String* currentBulletKey; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* bulletHitSet; // 0x30
		::Struct_2_AC46DC1AA99F1EF4 _baseCameraData; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_157*>* _drones; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* freeShootDic; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* hitRecord; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::SummerEventDroneSubsystem_ShootingInfo>* _playerWeaponInfo; // 0x70
		::System::Collections::Generic::List_1<::Struct_2_7734F33592BF49F6_3>* _overrideCameraDataList; // 0x78
		::System::Collections::Generic::List_1<::MoleMole::SummerEventDroneSubsystem_WeaponSkillBase*>* tempRemoveSkill; // 0x80
		::MoleMole::EntityHandle _controlEntity; // 0x88
		::System::String* _overrideConfigKeyFromOverrideData; // 0x98
		::System::Collections::Generic::List_1<::System::String*>* _playerWeaponConfigList; // 0xA0
		::Il2CppArray<::UnityEngine::RaycastHit>* _hits; // 0xA8
		::System::Collections::Generic::List_1<::System::String*>* _weaponBulletAnimatorZoneTags; // 0xB0
		::MoleMole::UISummerEventShootMainPageController* _mainPage; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* weaponToConfigIDDic; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SummerEventDroneSubsystem_BulletWeaponLogInfo>* bulletWeaponKeyDic; // 0xC8
		::Class_1_43BD383C98B4C0C5_47* _task; // 0xD0
		::Class_3_F97B015544BE936B* _controlEntityDataComponent; // 0xD8
		::System::Action* _onFinish; // 0xE0
		::System::Collections::Generic::List_1<::System::Single>* _weaponReloadTimeList; // 0xE8
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* aimIKTargetPosLerpStack; // 0xF0
		::Class_1_A3AC0B6B344CF5CC* _beatMap; // 0xF8
		::System::Action* _onStart; // 0x100
		::System::Boolean _isBaseDataValid; // 0x108
		::System::Boolean _stop; // 0x109
		::System::Boolean _applyAimAssist; // 0x10A
		::System::Boolean alreadyUpdateCosshair; // 0x10B
		::UnityEngine::Vector3 crosshairPosition; // 0x10C
		::System::Double bulletHitRecordFixedTime; // 0x118
		::System::Single _currentTime; // 0x120
		::UnityEngine::Vector3 lastRoteToTargetPos; // 0x124
		::MoleMole::SummerEventDroneSubsystem_State _state; // 0x130
		::System::Int32 IKForwardAngleParamNameHash; // 0x134
		::System::Single _realCurrentTime; // 0x138
		::System::Single _emptyTimescale; // 0x13C
		::System::Int32 _score; // 0x140
		::UnityEngine::Vector3 _initAimTargetPos; // 0x144
		::System::Int32 _killMember; // 0x150
		::System::Int32 _scoreLastAdd; // 0x154
		::System::UInt32 currentBulletHitID; // 0x158

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

		::System::Void SwitchTask(::Class_1_43BD383C98B4C0C5_47* newTask)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_47*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_SWITCHTASK_OFFSET))(this, newTask);
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

		static ::System::Void RegisterDrone(::System::UInt32 entityId, ::Class_0_16E4307DCC419505_157* drone)
		{
			return ((::System::Void(*)(::System::UInt32, ::Class_0_16E4307DCC419505_157*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_REGISTERDRONE_OFFSET))(entityId, drone);
		}

		static ::System::Boolean TryGet(::System::UInt32 entityId, ::Class_0_16E4307DCC419505_157*& drone)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::Class_0_16E4307DCC419505_157*&))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_TRYGET_OFFSET))(entityId, drone);
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

		::System::Void RegisterDroneInner(::System::UInt32 entityId, ::Class_0_16E4307DCC419505_157* drone)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_0_16E4307DCC419505_157*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_REGISTERDRONEINNER_OFFSET))(this, entityId, drone);
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

		::System::Boolean TryGetInner(::System::UInt32 entityId, ::Class_0_16E4307DCC419505_157*& drone)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_0_16E4307DCC419505_157*&))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_TRYGETINNER_OFFSET))(this, entityId, drone);
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
