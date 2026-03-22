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

#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CALCLAMPEDANGLESINGED_OFFSET UNITYSDK_OFFSET(0x13989AA0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CALLIMITMIDDLE_OFFSET UNITYSDK_OFFSET(0x13986E90)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CALSIGNEDANGLE_OFFSET UNITYSDK_OFFSET(0x13989380)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CHECKJOINKEY_OFFSET UNITYSDK_OFFSET(0x13987C90)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x13986DF0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_DRAWAXIS_OFFSET UNITYSDK_OFFSET(0x13989320)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_GETTARGETPOS_OFFSET UNITYSDK_OFFSET(0x13988250)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_GET_CURZONEINFO_OFFSET UNITYSDK_OFFSET(0x13986DE0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_GET_INFO_OFFSET UNITYSDK_OFFSET(0x13989EF0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_IGNOREOTHERWHENSAMEKEY_OFFSET UNITYSDK_OFFSET(0x13987AB0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_JOINOTHERZONE_OFFSET UNITYSDK_OFFSET(0x13987940)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_LOCALAXISTYPE2VEC3_OFFSET UNITYSDK_OFFSET(0x13987530)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x13986F60)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x13989620)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_PROCESSFIXEDANIMATORPARAM_OFFSET UNITYSDK_OFFSET(0x13988F30)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_RELEASESAMEKEYIGNORE_OFFSET UNITYSDK_OFFSET(0x13989870)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_REVISEBYLIMIT_OFFSET UNITYSDK_OFFSET(0x13988DB0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_ROTATETOTARGET_OFFSET UNITYSDK_OFFSET(0x13988320)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_UPDATELOCALROTATECOORDINATE_OFFSET UNITYSDK_OFFSET(0x13988C00)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_UPDATEROTATE_OFFSET UNITYSDK_OFFSET(0x13987DE0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE__CTOR_OFFSET UNITYSDK_OFFSET(0x13989F00)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x13989F40)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x13989FC0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1398A050)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneRotateBone_TypeDefinitionIndex = 39406;

	class AnimatorZoneRotateBone : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::String* ZoneKey; // 0x50
		::Class_2_E071819179BF845B* _zoneInfo; // 0x58
		::MoleMole::Battle::ProceduralAnimFixedParam ExitFixedParam; // 0x60
		::System::Collections::Generic::List_1<::System::String*>* JoinZoneKeyList; // 0xA0
		::System::String* RotateBoneName; // 0xA8
		::UnityEngine::Transform* _entityTrans; // 0xB0
		::MoleMole::Battle::ProceduralAnimFixedParam TickFixedParam; // 0xB8
		::Class_3_F33F9DC5F4112336* _animatorComponent; // 0xF8
		::UnityEngine::Transform* _boneTrans; // 0x100
		::Class_3_4C6078A35E3A3F33_Class_1_B39C476F3023E577* _info; // 0x108
		::MoleMole::Config::ConfigPosRot* ConfigPosRot; // 0x110
		::Class_3_4C6078A35E3A3F33* _proceduralAnimComponent; // 0x118
		::System::Boolean _shouldResetSkipCounter; // 0x120
		::System::Boolean _isValidFixedAxisRot; // 0x121
		::System::Boolean InverseUpAxis; // 0x122
		::UnityEngine::Vector3 _initDir; // 0x124
		::MoleMole::Battle::ProceduralAnimType ExitAnimType; // 0x130
		::System::Single SelfRotAngleOffset; // 0x134
		::System::Boolean InverseForwardAxis; // 0x138
		::System::Boolean ExitNeedReset; // 0x139
		::MoleMole::Config::AnimatorZoneRotateBone_LocalAxisType UpAxisType; // 0x13C
		::System::Single RotAngleLimitLeft; // 0x140
		::MoleMole::Battle::ProceduralAnimDamperParam TickDamperParam; // 0x144
		::MoleMole::Config::AnimatorZoneRotateBone_LocalAxisType ForwardAxisType; // 0x154
		::MoleMole::Battle::ProceduralAnimType TickAnimType; // 0x158
		::System::Single RotAngleLimitRight; // 0x15C
		::MoleMole::Battle::ProceduralAnimDamperParam ExitDamperParam; // 0x160

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
