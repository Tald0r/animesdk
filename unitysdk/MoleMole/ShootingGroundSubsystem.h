#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/MoleMole/Config/AnimatorEventShootingBulletEntry_ShootBulletType.h"
#include "unitysdk/MoleMole/Config/LevelShootGameConfig_WaveType.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/MoleMole/ShootingGroundSubsystem_BulletMode.h"
#include "unitysdk/MoleMole/ShootingGroundSubsystem_FireMode.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7436296E53356036;
class Class_1_B7E341C5F1A6F199;
class Class_1_CD54B66100AEF2DB;
class Class_1_D77CC2A6B11CB8D0;
class Class_1_D77CC2A6B11CB8D0_Class_1_30C6AF3533F2E06E;
class Class_2_0206DD479BB5C906;
class Class_3_C4DB8D898CBC2756_2;
namespace MoleMole { class ShootingGroundSubsystem_BulletStats; }
namespace MoleMole { class ShootingGroundSubsystem_RaycastHitCompare; }
namespace MoleMole { class UITriggerShootMainPageController; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigShootingGround; }
namespace MoleMole::Config { class ConfigShootingGroundAimAssist; }
namespace MoleMole::Config { class ConfigShootingGroundControl; }
namespace Nap::NapECS { class EcsFilter; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal::Internal { class OutlineObjectRenderer; }

#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_APPLYALLOUTLINEEFFECTS_OFFSET UNITYSDK_OFFSET(0xD19AB50)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_APPLYOUTLINERENDERER_OFFSET UNITYSDK_OFFSET(0xD1A0270)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_CHANGEFIREMODE_OFFSET UNITYSDK_OFFSET(0xD19D6B0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_CONVERTBULLETMODE_OFFSET UNITYSDK_OFFSET(0xD1A0190)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_CREATEGAMERESULT_OFFSET UNITYSDK_OFFSET(0xD1A0200)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_DOEXPLODEACTION_OFFSET UNITYSDK_OFFSET(0xD1A09B0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ENTERTPSMODE_OFFSET UNITYSDK_OFFSET(0xD199D00)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_EXITTPSMODE_OFFSET UNITYSDK_OFFSET(0xD196920)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETAIMASSISTCOLLIDERSCALE_OFFSET UNITYSDK_OFFSET(0xD196460)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETAIMASSISTRATIO_OFFSET UNITYSDK_OFFSET(0xD1963B0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETCAMERAPOSANDROT_OFFSET UNITYSDK_OFFSET(0xD19E950)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETHITTARGETDAMAGE_OFFSET UNITYSDK_OFFSET(0xD19CDC0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETLEVELLOGICMODULE_OFFSET UNITYSDK_OFFSET(0xD1A1240)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETRANKMATERIAL_OFFSET UNITYSDK_OFFSET(0xD1966A0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETSHOOTBASESCORE_OFFSET UNITYSDK_OFFSET(0xD19F8C0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETSHOOTRANK_OFFSET UNITYSDK_OFFSET(0xD19F9A0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETSHOOTREWARDSCORE_OFFSET UNITYSDK_OFFSET(0xD19F930)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETTIMESCORE_OFFSET UNITYSDK_OFFSET(0xD19F490)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETZOOMMUTESTATE_OFFSET UNITYSDK_OFFSET(0xD1980C0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GET_AIMASSISTCONFIG_OFFSET UNITYSDK_OFFSET(0x6E57BF0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GET_AMMO_OFFSET UNITYSDK_OFFSET(0xD1960E0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GET_MAGAZINECAPACITY_OFFSET UNITYSDK_OFFSET(0xD197CD0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GET_RECOILOFFSET_OFFSET UNITYSDK_OFFSET(0xD196240)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GET_SPREADSCALE_OFFSET UNITYSDK_OFFSET(0xD196300)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_INITDATA_OFFSET UNITYSDK_OFFSET(0xD197960)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_INITIALIZEBULLET_OFFSET UNITYSDK_OFFSET(0xD199900)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_INITZOOMDATA_OFFSET UNITYSDK_OFFSET(0xD197DD0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ISINTPSMODE_OFFSET UNITYSDK_OFFSET(0xD199890)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ISWEAKPOINT_OFFSET UNITYSDK_OFFSET(0xD19CC70)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_MARKENTITYREMOVED_OFFSET UNITYSDK_OFFSET(0xD1A0920)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_MODE2TEMPLATEID_OFFSET UNITYSDK_OFFSET(0xD199C20)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xD196750)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD1967B0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONENTITYREADY_OFFSET UNITYSDK_OFFSET(0xD1A04C0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONHITTARGET_OFFSET UNITYSDK_OFFSET(0xD19C690)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONPREUPDATE_OFFSET UNITYSDK_OFFSET(0xD198D40)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONRELOADANIMEVENT_OFFSET UNITYSDK_OFFSET(0xD19FC60)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONSHOOTANIMEVENT_OFFSET UNITYSDK_OFFSET(0xD19B3D0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xD198DB0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONWAVETYPECHANGE_OFFSET UNITYSDK_OFFSET(0xD19D620)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONWILLKILLMONSTER_OFFSET UNITYSDK_OFFSET(0xD19EC30)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONZOOMBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xD19FDB0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONZOOMBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0xD19FEB0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONZOOMBUTTONUP_OFFSET UNITYSDK_OFFSET(0xD19FFC0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_POPACTIONZOOMCONTROL_OFFSET UNITYSDK_OFFSET(0xD198AF0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_POPZONEZOOMCONTROL_OFFSET UNITYSDK_OFFSET(0xD198950)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_PROCESSENTITYBEHIT_OFFSET UNITYSDK_OFFSET(0xD19D350)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_PUSHALIVEMONSTEREFFECT_OFFSET UNITYSDK_OFFSET(0xD197580)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_RANDOMSIGN_OFFSET UNITYSDK_OFFSET(0xD19B360)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_REGISTERLEVELLOGICMODULE_OFFSET UNITYSDK_OFFSET(0xD1A11D0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_REMOVEALLOUTLINEEFFECTS_OFFSET UNITYSDK_OFFSET(0xD19B160)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_SETACTIONZOOMCONTROL_OFFSET UNITYSDK_OFFSET(0xD198C90)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_SETINPUTZOOM_OFFSET UNITYSDK_OFFSET(0xD19B0F0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_SETTARGETENTITYDEADSTATE_OFFSET UNITYSDK_OFFSET(0xD19CE70)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_SETZONEZOOMCONTROL_OFFSET UNITYSDK_OFFSET(0xD198380)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_SET_AMMO_OFFSET UNITYSDK_OFFSET(0xD1960F0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_TOGGLEINPUTZOOM_OFFSET UNITYSDK_OFFSET(0xD19FD40)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_TRIGGERSCORECHANGE_OFFSET UNITYSDK_OFFSET(0xD19F6D0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_UPDATECAMERASENSITIVITY_OFFSET UNITYSDK_OFFSET(0xD19A8F0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_UPDATEWAVEREMAINTIME_OFFSET UNITYSDK_OFFSET(0xD19F830)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_UPDATEWEAKPOINTEFFECT_OFFSET UNITYSDK_OFFSET(0xD1A00D0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_UPDATEZOOMSTATE_OFFSET UNITYSDK_OFFSET(0xD198420)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xD1A12A0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM__UPDATEWEAKPOINTEFFECT_G__TRYUPDATEEFFECT_95_0_OFFSET UNITYSDK_OFFSET(0xD1A14A0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xD1A1810)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD1A1870)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xD1A18D0)

namespace MoleMole
{
	inline static constexpr unsigned int ShootingGroundSubsystem_TypeDefinitionIndex = 75418;

	class ShootingGroundSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::ShootingGroundSubsystem*>
	{
	public:
		// static const ::System::String* TRIGGER_HIDE_BATTLEUI_TAG; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer*>* _outlineList; // 0x10
		::Il2CppArray<::MoleMole::Config::ConfigShootingGroundControl*>* _controlConfigs; // 0x18
		::MoleMole::Battle::Entity* _shooterEntity; // 0x20
		::System::Action* OnMagazineEmpty; // 0x28
		::Il2CppArray<::UnityEngine::RaycastHit>* _hits; // 0x30
		::Class_1_7436296E53356036* levelShootGameMoudule; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _aliveMonsterEffect; // 0x40
		::System::Action* OnZoomIn; // 0x48
		::Nap::NapECS::EcsFilter* filter; // 0x50
		::System::Collections::Generic::HashSet_1<::System::UInt32>* markRemovedEntitySet; // 0x58
		::Class_2_0206DD479BB5C906* zoneZoomControlStack; // 0x60
		::Class_1_D77CC2A6B11CB8D0* _statistics; // 0x68
		::MoleMole::Config::ConfigShootingGround* _config; // 0x70
		::System::Collections::Generic::List_1<::System::UInt32>* freeShootEffectEntityIDList; // 0x78
		::Class_1_CD54B66100AEF2DB* _scopedCamera; // 0x80
		::MoleMole::ShootingGroundSubsystem_RaycastHitCompare* _compare; // 0x88
		::MoleMole::UITriggerShootMainPageController* pageController; // 0x90
		::System::Collections::Generic::HashSet_1<::System::UInt32>* killMonsterSet; // 0x98
		::System::Action* OnZoomOut; // 0xA0
		::Class_2_0206DD479BB5C906* actionZoomControlStack; // 0xA8
		::Il2CppArray<::MoleMole::ShootingGroundSubsystem_BulletStats*>* _bullet; // 0xB0
		::System::Int32 currentContinuousKillCount; // 0xB8
		::UnityEngine::Vector2 _recoilRad; // 0xBC
		::System::Double baseScore; // 0xC8
		::System::Int32 _ammo; // 0xD0
		::System::Single remainTime; // 0xD4
		::MoleMole::ShootingGroundSubsystem_FireMode fireMode; // 0xD8
		::System::Int32 killMonsterCount; // 0xDC
		::System::Single _originOutlineThickness; // 0xE0
		::System::Single _recoil; // 0xE4
		::System::Double rewardScore; // 0xE8
		::System::Int32 _score; // 0xF0
		::System::Single _spread; // 0xF4
		::System::Boolean _applyAimAssist; // 0xF8
		::System::Boolean _zoomInput; // 0xF9
		::System::Boolean _isInZoomState; // 0xFA
		::System::Boolean zoomDataInitialized; // 0xFB

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::ConfigShootingGroundAimAssist* get_AimAssistConfig()
		{
			return ((::MoleMole::Config::ConfigShootingGroundAimAssist*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GET_AIMASSISTCONFIG_OFFSET))(this);
		}

		::System::Int32 get_Ammo()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GET_AMMO_OFFSET))(this);
		}

		::System::Void set_Ammo(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_SET_AMMO_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_RecoilOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GET_RECOILOFFSET_OFFSET))(this);
		}

		::System::Single get_SpreadScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GET_SPREADSCALE_OFFSET))(this);
		}

		::System::Single GetAimAssistRatio(::Enum_3_A019F766F8C74696 inputDevice)
		{
			return ((::System::Single(*)(::PVOID, ::Enum_3_A019F766F8C74696))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETAIMASSISTRATIO_OFFSET))(this, inputDevice);
		}

		::System::Single GetAimAssistColliderScale(::UnityEngine::Vector3 position)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETAIMASSISTCOLLIDERSCALE_OFFSET))(this, position);
		}

		::UnityEngine::Material* GetRankMaterial(::System::Int32 rank)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETRANKMATERIAL_OFFSET))(this, rank);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void PushAliveMonsterEffect(::System::UInt32 effectID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_PUSHALIVEMONSTEREFFECT_OFFSET))(this, effectID);
		}

		::System::Void InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_INITDATA_OFFSET))(this);
		}

		::System::Void InitZoomData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_INITZOOMDATA_OFFSET))(this);
		}

		::System::Boolean GetZoomMuteState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETZOOMMUTESTATE_OFFSET))(this);
		}

		::System::Int32 SetZoneZoomControl(::System::Boolean mute)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_SETZONEZOOMCONTROL_OFFSET))(this, mute);
		}

		::System::Void PopZoneZoomControl(::System::Int32 zoneIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_POPZONEZOOMCONTROL_OFFSET))(this, zoneIndex);
		}

		::System::Void PopActionZoomControl(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_POPACTIONZOOMCONTROL_OFFSET))(this, index);
		}

		::System::Int32 SetActionZoomControl(::System::Boolean mute)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_SETACTIONZOOMCONTROL_OFFSET))(this, mute);
		}

		::System::Void OnPreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONPREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean IsInTPSMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ISINTPSMODE_OFFSET))(this);
		}

		::System::Void InitializeBullet(::MoleMole::ShootingGroundSubsystem_BulletMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ShootingGroundSubsystem_BulletMode))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_INITIALIZEBULLET_OFFSET))(this, mode);
		}

		::System::Void EnterTPSMode(::System::String* configKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ENTERTPSMODE_OFFSET))(this, configKey);
		}

		static ::System::Int32 get_MagazineCapacity()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GET_MAGAZINECAPACITY_OFFSET))();
		}

		::System::Void ExitTPSMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_EXITTPSMODE_OFFSET))(this);
		}

		::System::Void UpdateCameraSensitivity(::Enum_3_A019F766F8C74696 inputDevice)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A019F766F8C74696))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_UPDATECAMERASENSITIVITY_OFFSET))(this, inputDevice);
		}

		static ::System::Int32 RandomSign()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_RANDOMSIGN_OFFSET))();
		}

		::System::Void OnShootAnimEvent(::MoleMole::ShootingGroundSubsystem_BulletMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ShootingGroundSubsystem_BulletMode))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONSHOOTANIMEVENT_OFFSET))(this, mode);
		}

		::System::Void OnHitTarget(::Class_1_D77CC2A6B11CB8D0_Class_1_30C6AF3533F2E06E* builder, ::MoleMole::ShootingGroundSubsystem_BulletStats* bullet, ::UnityEngine::GameObject* gameObject, ::MoleMole::Battle::Entity* entity, ::UnityEngine::Vector3 hitPoint)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D77CC2A6B11CB8D0_Class_1_30C6AF3533F2E06E*, ::MoleMole::ShootingGroundSubsystem_BulletStats*, ::UnityEngine::GameObject*, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONHITTARGET_OFFSET))(this, builder, bullet, gameObject, entity, hitPoint);
		}

		::System::Void ProcessEntityBeHit(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_PROCESSENTITYBEHIT_OFFSET))(this, entity);
		}

		::System::Void OnWaveTypeChange(::MoleMole::Config::LevelShootGameConfig_WaveType waveType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::LevelShootGameConfig_WaveType))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONWAVETYPECHANGE_OFFSET))(this, waveType);
		}

		::System::Void ChangeFireMode(::MoleMole::ShootingGroundSubsystem_FireMode fireMode)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ShootingGroundSubsystem_FireMode))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_CHANGEFIREMODE_OFFSET))(this, fireMode);
		}

		::System::Void GetCameraPosAndRot(::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETCAMERAPOSANDROT_OFFSET))(this, position, rotation);
		}

		::System::Boolean IsWeakPoint(::UnityEngine::GameObject* colliderGameObject, ::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ISWEAKPOINT_OFFSET))(this, colliderGameObject, entity);
		}

		::System::Void SetTargetEntityDeadState(::Class_1_D77CC2A6B11CB8D0_Class_1_30C6AF3533F2E06E* builder, ::MoleMole::Battle::Entity* entity, ::System::Boolean isBreakWeakPoint, ::UnityEngine::Vector3 hitPoint)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D77CC2A6B11CB8D0_Class_1_30C6AF3533F2E06E*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_SETTARGETENTITYDEADSTATE_OFFSET))(this, builder, entity, isBreakWeakPoint, hitPoint);
		}

		::System::Void OnWillKillMonster(::Class_1_D77CC2A6B11CB8D0_Class_1_30C6AF3533F2E06E* builder, ::MoleMole::Battle::Entity* entity, ::System::Boolean isBreakWeakPoint, ::UnityEngine::Vector3 hitPoint)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D77CC2A6B11CB8D0_Class_1_30C6AF3533F2E06E*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONWILLKILLMONSTER_OFFSET))(this, builder, entity, isBreakWeakPoint, hitPoint);
		}

		::System::Void TriggerScoreChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_TRIGGERSCORECHANGE_OFFSET))(this);
		}

		::System::Double GetTimeScore()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETTIMESCORE_OFFSET))(this);
		}

		::System::Void UpdateWaveRemainTime(::System::Single time, ::System::Boolean replace)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_UPDATEWAVEREMAINTIME_OFFSET))(this, time, replace);
		}

		::System::Double GetShootBaseScore()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETSHOOTBASESCORE_OFFSET))(this);
		}

		::System::Double GetShootRewardScore()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETSHOOTREWARDSCORE_OFFSET))(this);
		}

		static ::System::Int32 GetShootRank(::System::Int32 totalScore)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETSHOOTRANK_OFFSET))(totalScore);
		}

		::System::Double GetHitTargetDamage(::MoleMole::ShootingGroundSubsystem_BulletStats* bullet, ::UnityEngine::GameObject* gameObject, ::MoleMole::Battle::Entity* entity, ::System::Boolean hitWeakPoint)
		{
			return ((::System::Double(*)(::PVOID, ::MoleMole::ShootingGroundSubsystem_BulletStats*, ::UnityEngine::GameObject*, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETHITTARGETDAMAGE_OFFSET))(this, bullet, gameObject, entity, hitWeakPoint);
		}

		::System::Void OnReloadAnimEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONRELOADANIMEVENT_OFFSET))(this);
		}

		::System::Void SetInputZoom(::System::Boolean isZoom)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_SETINPUTZOOM_OFFSET))(this, isZoom);
		}

		::System::Void ToggleInputZoom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_TOGGLEINPUTZOOM_OFFSET))(this);
		}

		::System::Void OnZoomButtonClick(::Enum_3_A019F766F8C74696 inputDevice)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A019F766F8C74696))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONZOOMBUTTONCLICK_OFFSET))(this, inputDevice);
		}

		::System::Void OnZoomButtonDown(::Enum_3_A019F766F8C74696 inputDevice)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A019F766F8C74696))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONZOOMBUTTONDOWN_OFFSET))(this, inputDevice);
		}

		::System::Void OnZoomButtonUp(::Enum_3_A019F766F8C74696 inputDevice)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A019F766F8C74696))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONZOOMBUTTONUP_OFFSET))(this, inputDevice);
		}

		::System::Void UpdateWeakPointEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_UPDATEWEAKPOINTEFFECT_OFFSET))(this);
		}

		::System::Void UpdateZoomState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_UPDATEZOOMSTATE_OFFSET))(this);
		}

		static ::System::Int32 Mode2TemplateID(::MoleMole::ShootingGroundSubsystem_BulletMode mode)
		{
			return ((::System::Int32(*)(::MoleMole::ShootingGroundSubsystem_BulletMode))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_MODE2TEMPLATEID_OFFSET))(mode);
		}

		static ::MoleMole::ShootingGroundSubsystem_BulletMode ConvertBulletMode(::MoleMole::Config::AnimatorEventShootingBulletEntry_ShootBulletType bulletType)
		{
			return ((::MoleMole::ShootingGroundSubsystem_BulletMode(*)(::MoleMole::Config::AnimatorEventShootingBulletEntry_ShootBulletType))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_CONVERTBULLETMODE_OFFSET))(bulletType);
		}

		::Class_3_C4DB8D898CBC2756_2* CreateGameResult()
		{
			return ((::Class_3_C4DB8D898CBC2756_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_CREATEGAMERESULT_OFFSET))(this);
		}

		::System::Void ApplyAllOutlineEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_APPLYALLOUTLINEEFFECTS_OFFSET))(this);
		}

		::System::Void RemoveAllOutlineEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_REMOVEALLOUTLINEEFFECTS_OFFSET))(this);
		}

		::System::Void OnEntityReady(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONENTITYREADY_OFFSET))(this, evt);
		}

		::System::Void ApplyOutlineRenderer(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_APPLYOUTLINERENDERER_OFFSET))(this, entity);
		}

		::System::Void MarkEntityRemoved(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_MARKENTITYREMOVED_OFFSET))(this, entity);
		}

		::System::Void DoExplodeAction(::MoleMole::Battle::Entity* explodeEntity, ::System::Single explodeRadius, ::System::Collections::Generic::List_1<::System::String*>* zoneTags)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_DOEXPLODEACTION_OFFSET))(this, explodeEntity, explodeRadius, zoneTags);
		}

		::System::Void RegisterLevelLogicModule(::Class_1_7436296E53356036* levelLogic)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7436296E53356036*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_REGISTERLEVELLOGICMODULE_OFFSET))(this, levelLogic);
		}

		::Class_1_7436296E53356036* GetLevelLogicModule()
		{
			return ((::Class_1_7436296E53356036*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETLEVELLOGICMODULE_OFFSET))(this);
		}

		::System::Boolean _UpdateWeakPointEffect_g__TryUpdateEffect_95_0(::System::UInt32 effectID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM__UPDATEWEAKPOINTEFFECT_G__TRYUPDATEEFFECT_95_0_OFFSET))(this, effectID);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
