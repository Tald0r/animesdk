#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimDamperParam.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimFixedParam.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimType.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneRotateBone_LocalAxisType.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_BDDDDB46A99CFF4C;
class Class_2_E071819179BF845B;
class Class_3_4C6078A35E3A3F33;
class Class_3_4C6078A35E3A3F33_Class_1_B39C476F3023E577;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CALCLAMPEDANGLESINGED_OFFSET UNITYSDK_OFFSET(0x917BEC0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CALLIMITMIDDLE_OFFSET UNITYSDK_OFFSET(0x91792D0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CALSIGNEDANGLE_OFFSET UNITYSDK_OFFSET(0x917B7A0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CHECKJOINKEY_OFFSET UNITYSDK_OFFSET(0x917A0D0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x9179230)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_DRAWAXIS_OFFSET UNITYSDK_OFFSET(0x917B740)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_GETTARGETPOS_OFFSET UNITYSDK_OFFSET(0x917A680)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_GET_CURZONEINFO_OFFSET UNITYSDK_OFFSET(0x9179220)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_GET_INFO_OFFSET UNITYSDK_OFFSET(0x917C310)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_IGNOREOTHERWHENSAMEKEY_OFFSET UNITYSDK_OFFSET(0x9179EF0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_JOINOTHERZONE_OFFSET UNITYSDK_OFFSET(0x9179D80)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_LOCALAXISTYPE2VEC3_OFFSET UNITYSDK_OFFSET(0x9179970)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x91793A0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x917BA40)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_PROCESSFIXEDANIMATORPARAM_OFFSET UNITYSDK_OFFSET(0x917B350)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_RELEASESAMEKEYIGNORE_OFFSET UNITYSDK_OFFSET(0x917BC90)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_REVISEBYLIMIT_OFFSET UNITYSDK_OFFSET(0x917B1D0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_ROTATETOTARGET_OFFSET UNITYSDK_OFFSET(0x917A750)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_UPDATELOCALROTATECOORDINATE_OFFSET UNITYSDK_OFFSET(0x917B020)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_UPDATEROTATE_OFFSET UNITYSDK_OFFSET(0x917A220)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE__CTOR_OFFSET UNITYSDK_OFFSET(0x917C320)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x917C360)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x917C3E0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x917C470)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneRotateBone_TypeDefinitionIndex = 80837;

	class AnimatorZoneRotateBone : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::Class_2_E071819179BF845B* _zoneInfo; // 0x50
		::Class_3_4C6078A35E3A3F33_Class_1_B39C476F3023E577* _info; // 0x58
		::MoleMole::Config::ConfigPosRot* ConfigPosRot; // 0x60
		::System::String* ZoneKey; // 0x68
		::System::Collections::Generic::List_1<::System::String*>* JoinZoneKeyList; // 0x70
		::MoleMole::Battle::ProceduralAnimFixedParam TickFixedParam; // 0x78
		::System::String* RotateBoneName; // 0xB8
		::MoleMole::Battle::ProceduralAnimFixedParam ExitFixedParam; // 0xC0
		::Class_3_4C6078A35E3A3F33* _proceduralAnimComponent; // 0x100
		::UnityEngine::Transform* _entityTrans; // 0x108
		::UnityEngine::Transform* _boneTrans; // 0x110
		::Class_3_F33F9DC5F4112336* _animatorComponent; // 0x118
		::MoleMole::Config::AnimatorZoneRotateBone_LocalAxisType ForwardAxisType; // 0x120
		::MoleMole::Config::AnimatorZoneRotateBone_LocalAxisType UpAxisType; // 0x124
		::MoleMole::Battle::ProceduralAnimDamperParam TickDamperParam; // 0x128
		::MoleMole::Battle::ProceduralAnimType ExitAnimType; // 0x138
		::System::Boolean _isValidFixedAxisRot; // 0x13C
		::System::Boolean _shouldResetSkipCounter; // 0x13D
		::System::Boolean InverseUpAxis; // 0x13E
		::System::Boolean InverseForwardAxis; // 0x13F
		::System::Single RotAngleLimitRight; // 0x140
		::UnityEngine::Vector3 _initDir; // 0x144
		::System::Single RotAngleLimitLeft; // 0x150
		::MoleMole::Battle::ProceduralAnimDamperParam ExitDamperParam; // 0x154
		::System::Single SelfRotAngleOffset; // 0x164
		::MoleMole::Battle::ProceduralAnimType TickAnimType; // 0x168
		::System::Boolean ExitNeedReset; // 0x16C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE__CTOR_OFFSET))(this);
		}

		::Class_2_E071819179BF845B* get_CurZoneInfo()
		{
			return ((::Class_2_E071819179BF845B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_GET_CURZONEINFO_OFFSET))(this);
		}

		::Class_1_BDDDDB46A99CFF4C* CreateZoneInfoInstance()
		{
			return ((::Class_1_BDDDDB46A99CFF4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void CalLimitMiddle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CALLIMITMIDDLE_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Boolean CheckJoinKey(::System::Int32 key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CHECKJOINKEY_OFFSET))(this, key);
		}

		::System::Single JoinOtherZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_JOINOTHERZONE_OFFSET))(this);
		}

		::System::Void UpdateRotate(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_UPDATEROTATE_OFFSET))(this, entity);
		}

		::System::Void RotateToTarget(::MoleMole::Battle::Entity* entity, ::UnityEngine::Vector3 targetDir, ::UnityEngine::Quaternion sourceRotation, ::System::Boolean useLimit)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_ROTATETOTARGET_OFFSET))(this, entity, targetDir, sourceRotation, useLimit);
		}

		::System::Void DrawAxis()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_DRAWAXIS_OFFSET))(this);
		}

		::System::Void CalSignedAngle(::System::Single limitAngle, ::System::Boolean outsideOfLimit, ::System::Single& f, ::UnityEngine::Vector3& projectTargetDirInZox, ::UnityEngine::Quaternion& quaternion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Single&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CALSIGNEDANGLE_OFFSET))(this, limitAngle, outsideOfLimit, f, projectTargetDirInZox, quaternion);
		}

		::System::Void ReviseByLimit(::System::Single& signedAngle, ::UnityEngine::Vector3& projectTargetDirInZOX, ::UnityEngine::Quaternion& customSpaceDeltaRot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_REVISEBYLIMIT_OFFSET))(this, signedAngle, projectTargetDirInZOX, customSpaceDeltaRot);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void ProcessFixedAnimatorParam(::MoleMole::Battle::ProceduralAnimFixedParam param)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ProceduralAnimFixedParam))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_PROCESSFIXEDANIMATORPARAM_OFFSET))(this, param);
		}

		::System::Void IgnoreOtherWhenSameKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_IGNOREOTHERWHENSAMEKEY_OFFSET))(this);
		}

		::System::Void ReleaseSameKeyIgnore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_RELEASESAMEKEYIGNORE_OFFSET))(this);
		}

		::System::Single CalClampedAngleSinged(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, ::UnityEngine::Vector3 axisUp)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CALCLAMPEDANGLESINGED_OFFSET))(this, from, to, axisUp);
		}

		::System::Void UpdateLocalRotateCoordinate(::UnityEngine::Vector3& axisUpFinal, ::UnityEngine::Vector3& axisForwardFinal, ::UnityEngine::Vector3& axisRightFinal)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_UPDATELOCALROTATECOORDINATE_OFFSET))(this, axisUpFinal, axisForwardFinal, axisRightFinal);
		}

		::UnityEngine::Vector3 GetTargetPos(::MoleMole::Battle::Entity* entity)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_GETTARGETPOS_OFFSET))(this, entity);
		}

		::UnityEngine::Vector3 LocalAxisType2Vec3(::UnityEngine::Transform* t, ::MoleMole::Config::AnimatorZoneRotateBone_LocalAxisType type, ::System::Boolean inverse)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*, ::MoleMole::Config::AnimatorZoneRotateBone_LocalAxisType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_LOCALAXISTYPE2VEC3_OFFSET))(this, t, type, inverse);
		}

		::Class_3_4C6078A35E3A3F33_Class_1_B39C476F3023E577* get_Info()
		{
			return ((::Class_3_4C6078A35E3A3F33_Class_1_B39C476F3023E577*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_GET_INFO_OFFSET))(this);
		}

		::Class_1_BDDDDB46A99CFF4C* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_BDDDDB46A99CFF4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_BDDDDB46A99CFF4C* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
