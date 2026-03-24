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
class Class_3_C4DB8D898CBC2756;
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

#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_APPLYALLOUTLINEEFFECTS_OFFSET UNITYSDK_OFFSET(0x6ECEE40)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_APPLYOUTLINERENDERER_OFFSET UNITYSDK_OFFSET(0x6ED4490)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_CHANGEFIREMODE_OFFSET UNITYSDK_OFFSET(0x6ED18C0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_CONVERTBULLETMODE_OFFSET UNITYSDK_OFFSET(0x6ED43B0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_CREATEGAMERESULT_OFFSET UNITYSDK_OFFSET(0x6ED4420)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_DOEXPLODEACTION_OFFSET UNITYSDK_OFFSET(0x6ED4BD0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ENTERTPSMODE_OFFSET UNITYSDK_OFFSET(0x6ECDFF0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_EXITTPSMODE_OFFSET UNITYSDK_OFFSET(0x6ECAC00)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETAIMASSISTCOLLIDERSCALE_OFFSET UNITYSDK_OFFSET(0x6ECA750)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETAIMASSISTRATIO_OFFSET UNITYSDK_OFFSET(0x6ECA6A0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETCAMERAPOSANDROT_OFFSET UNITYSDK_OFFSET(0x6ED2B70)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETHITTARGETDAMAGE_OFFSET UNITYSDK_OFFSET(0x6ED0FD0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETLEVELLOGICMODULE_OFFSET UNITYSDK_OFFSET(0x6ED5460)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETRANKMATERIAL_OFFSET UNITYSDK_OFFSET(0x6ECA990)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETSHOOTBASESCORE_OFFSET UNITYSDK_OFFSET(0x6ED3AE0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETSHOOTRANK_OFFSET UNITYSDK_OFFSET(0x6ED3BC0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETSHOOTREWARDSCORE_OFFSET UNITYSDK_OFFSET(0x6ED3B50)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETTIMESCORE_OFFSET UNITYSDK_OFFSET(0x6ED36B0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETZOOMMUTESTATE_OFFSET UNITYSDK_OFFSET(0x6ECC380)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GET_AIMASSISTCONFIG_OFFSET UNITYSDK_OFFSET(0x6ECA360)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GET_AMMO_OFFSET UNITYSDK_OFFSET(0x6ECA3D0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GET_MAGAZINECAPACITY_OFFSET UNITYSDK_OFFSET(0x6ECBFA0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GET_RECOILOFFSET_OFFSET UNITYSDK_OFFSET(0x6ECA530)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GET_SPREADSCALE_OFFSET UNITYSDK_OFFSET(0x6ECA5F0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_INITDATA_OFFSET UNITYSDK_OFFSET(0x6ECBC30)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_INITIALIZEBULLET_OFFSET UNITYSDK_OFFSET(0x6ECDBE0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_INITZOOMDATA_OFFSET UNITYSDK_OFFSET(0x6ECC090)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ISINTPSMODE_OFFSET UNITYSDK_OFFSET(0x6ECDB70)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ISWEAKPOINT_OFFSET UNITYSDK_OFFSET(0x6ED0E80)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_MARKENTITYREMOVED_OFFSET UNITYSDK_OFFSET(0x6ED4B40)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_MODE2TEMPLATEID_OFFSET UNITYSDK_OFFSET(0x6ECDF10)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x6ECAA40)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x6ECAAA0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONENTITYREADY_OFFSET UNITYSDK_OFFSET(0x6ED46E0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONHITTARGET_OFFSET UNITYSDK_OFFSET(0x6ED0990)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONPREUPDATE_OFFSET UNITYSDK_OFFSET(0x6ECD010)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONRELOADANIMEVENT_OFFSET UNITYSDK_OFFSET(0x6ED3E80)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONSHOOTANIMEVENT_OFFSET UNITYSDK_OFFSET(0x6ECF6C0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x6ECD080)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONWAVETYPECHANGE_OFFSET UNITYSDK_OFFSET(0x6ED1830)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONWILLKILLMONSTER_OFFSET UNITYSDK_OFFSET(0x6ED2E50)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONZOOMBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x6ED3FD0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONZOOMBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x6ED40D0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONZOOMBUTTONUP_OFFSET UNITYSDK_OFFSET(0x6ED41E0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_POPACTIONZOOMCONTROL_OFFSET UNITYSDK_OFFSET(0x6ECCDD0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_POPZONEZOOMCONTROL_OFFSET UNITYSDK_OFFSET(0x6ECCC30)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_PROCESSENTITYBEHIT_OFFSET UNITYSDK_OFFSET(0x6ED1560)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_PUSHALIVEMONSTEREFFECT_OFFSET UNITYSDK_OFFSET(0x6ECB850)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_RANDOMSIGN_OFFSET UNITYSDK_OFFSET(0x6ECF650)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_REGISTERLEVELLOGICMODULE_OFFSET UNITYSDK_OFFSET(0x6ED53F0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_REMOVEALLOUTLINEEFFECTS_OFFSET UNITYSDK_OFFSET(0x6ECF450)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_SETACTIONZOOMCONTROL_OFFSET UNITYSDK_OFFSET(0x6ECCF70)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_SETINPUTZOOM_OFFSET UNITYSDK_OFFSET(0x6ECF3E0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_SETTARGETENTITYDEADSTATE_OFFSET UNITYSDK_OFFSET(0x6ED1080)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_SETZONEZOOMCONTROL_OFFSET UNITYSDK_OFFSET(0x6ECC650)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_SET_AMMO_OFFSET UNITYSDK_OFFSET(0x6ECA3E0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_TOGGLEINPUTZOOM_OFFSET UNITYSDK_OFFSET(0x6ED3F60)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_TRIGGERSCORECHANGE_OFFSET UNITYSDK_OFFSET(0x6ED38F0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_UPDATECAMERASENSITIVITY_OFFSET UNITYSDK_OFFSET(0x6ECEBE0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_UPDATEWAVEREMAINTIME_OFFSET UNITYSDK_OFFSET(0x6ED3A50)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_UPDATEWEAKPOINTEFFECT_OFFSET UNITYSDK_OFFSET(0x6ED42F0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_UPDATEZOOMSTATE_OFFSET UNITYSDK_OFFSET(0x6ECC700)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x6ED54C0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM__UPDATEWEAKPOINTEFFECT_G__TRYUPDATEEFFECT_95_0_OFFSET UNITYSDK_OFFSET(0x6ED56D0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x6ED5A40)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x6ED5AA0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x6ED5B00)

namespace MoleMole
{
	inline static constexpr unsigned int ShootingGroundSubsystem_TypeDefinitionIndex = 78943;

	class ShootingGroundSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::ShootingGroundSubsystem*>
	{
	public:
		// static const ::System::String* TRIGGER_HIDE_BATTLEUI_TAG; // 0x0
		::System::Collections::Generic::HashSet_1<::System::UInt32>* markRemovedEntitySet; // 0x10
		::Nap::NapECS::EcsFilter* filter; // 0x18
		::Il2CppArray<::MoleMole::Config::ConfigShootingGroundControl*>* _controlConfigs; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* killMonsterSet; // 0x28
		::MoleMole::Battle::Entity* _shooterEntity; // 0x30
		::MoleMole::UITriggerShootMainPageController* pageController; // 0x38
		::Class_2_0206DD479BB5C906* actionZoomControlStack; // 0x40
		::Class_1_D77CC2A6B11CB8D0* _statistics; // 0x48
		::System::Action* OnMagazineEmpty; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer*>* _outlineList; // 0x58
		::Class_1_7436296E53356036* levelShootGameMoudule; // 0x60
		::System::Action* OnZoomOut; // 0x68
		::MoleMole::Config::ConfigShootingGround* _config; // 0x70
		::System::Collections::Generic::List_1<::System::UInt32>* _aliveMonsterEffect; // 0x78
		::MoleMole::ShootingGroundSubsystem_RaycastHitCompare* _compare; // 0x80
		::System::Collections::Generic::List_1<::System::UInt32>* freeShootEffectEntityIDList; // 0x88
		::System::Action* OnZoomIn; // 0x90
		::Il2CppArray<::UnityEngine::RaycastHit>* _hits; // 0x98
		::Class_1_CD54B66100AEF2DB* _scopedCamera; // 0xA0
		::Il2CppArray<::MoleMole::ShootingGroundSubsystem_BulletStats*>* _bullet; // 0xA8
		::Class_2_0206DD479BB5C906* zoneZoomControlStack; // 0xB0
		::System::Double baseScore; // 0xB8
		::System::Single _spread; // 0xC0
		::MoleMole::ShootingGroundSubsystem_FireMode fireMode; // 0xC4
		::System::Int32 killMonsterCount; // 0xC8
		::System::Single remainTime; // 0xCC
		::System::Single _originOutlineThickness; // 0xD0
		::System::Int32 currentContinuousKillCount; // 0xD4
		::UnityEngine::Vector2 _recoilRad; // 0xD8
		::System::Boolean _isInZoomState; // 0xE0
		::System::Boolean _zoomInput; // 0xE1
		::System::Boolean _applyAimAssist; // 0xE2
		::System::Boolean zoomDataInitialized; // 0xE3
		::System::Int32 _score; // 0xE4
		::System::Double rewardScore; // 0xE8
		::System::Int32 _ammo; // 0xF0
		::System::Single _recoil; // 0xF4

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

		::Class_3_C4DB8D898CBC2756* CreateGameResult()
		{
			return ((::Class_3_C4DB8D898CBC2756*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_CREATEGAMERESULT_OFFSET))(this);
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
