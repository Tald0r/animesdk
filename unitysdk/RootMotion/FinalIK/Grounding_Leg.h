#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class Grounding; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_GROUNDING_LEG_GETCAPSULEHIT_OFFSET UNITYSDK_OFFSET(0x1A77B9B0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GETHEIGHTFROMGROUND_OFFSET UNITYSDK_OFFSET(0x1A77C310)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GETRAYCASTHIT_OFFSET UNITYSDK_OFFSET(0x1A77B020)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GETROTATIONOFFSETTARGET_OFFSET UNITYSDK_OFFSET(0x1A77C460)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_CAPSULEHIT_OFFSET UNITYSDK_OFFSET(0x1A778EA0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_CURPLANENORMAL_OFFSET UNITYSDK_OFFSET(0x1A77C240)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_GETHITPOINT_OFFSET UNITYSDK_OFFSET(0x1A778F80)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_GROUNDPANELNORMAL_OFFSET UNITYSDK_OFFSET(0x1A778F00)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_GROUNDPANELPOSITION_OFFSET UNITYSDK_OFFSET(0x1A778F40)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_HEELHIT_OFFSET UNITYSDK_OFFSET(0x1A778E40)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_HEIGHTFROMGROUND_OFFSET UNITYSDK_OFFSET(0x1A778DA0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_IKOFFSET_OFFSET UNITYSDK_OFFSET(0x1A778E20)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_IKPOSITION_OFFSET UNITYSDK_OFFSET(0x1A778D50)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_INITIATED_OFFSET UNITYSDK_OFFSET(0x1A778D80)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ISGROUNDED_OFFSET UNITYSDK_OFFSET(0x1A778D30)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ROOTYOFFSET_OFFSET UNITYSDK_OFFSET(0x1A77C380)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_STEPHEIGHTFROMGROUND_OFFSET UNITYSDK_OFFSET(0x1A77C110)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_TOECAPSULECOLLIDER_OFFSET UNITYSDK_OFFSET(0x1A77C1E0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A778E00)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1A778DC0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_INITIATE_OFFSET UNITYSDK_OFFSET(0x1A779010)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A7790F0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_PROCESS_OFFSET UNITYSDK_OFFSET(0x1A779220)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_RESET_OFFSET UNITYSDK_OFFSET(0x1A779160)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_ROTATEFOOT_OFFSET UNITYSDK_OFFSET(0x1A77C160)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_ROTATENORMAL_OFFSET UNITYSDK_OFFSET(0x1A77C270)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SETFOOTPOSITION_OFFSET UNITYSDK_OFFSET(0x1A778FF0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SETFOOTTOPLANE_OFFSET UNITYSDK_OFFSET(0x1A77B570)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SETFOOTTOPOINT_OFFSET UNITYSDK_OFFSET(0x1A77B400)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_CAPSULEHIT_OFFSET UNITYSDK_OFFSET(0x1A778ED0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_CURPLANENORMAL_OFFSET UNITYSDK_OFFSET(0x1A77C260)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_GROUNDPANELNORMAL_OFFSET UNITYSDK_OFFSET(0x1A778F20)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_GROUNDPANELPOSITION_OFFSET UNITYSDK_OFFSET(0x1A778F60)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_HEELHIT_OFFSET UNITYSDK_OFFSET(0x1A778E70)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_HEIGHTFROMGROUND_OFFSET UNITYSDK_OFFSET(0x1A778DB0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_IKOFFSET_OFFSET UNITYSDK_OFFSET(0x1A778E30)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_IKPOSITION_OFFSET UNITYSDK_OFFSET(0x1A778D70)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_INITIATED_OFFSET UNITYSDK_OFFSET(0x1A778D90)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_ISGROUNDED_OFFSET UNITYSDK_OFFSET(0x1A778D40)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_TOECAPSULECOLLIDER_OFFSET UNITYSDK_OFFSET(0x1A77C210)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A778E10)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1A778DE0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A77C580)
#define ROOTMOTION_FINALIK_GROUNDING_LEG__PROCESS_G__DRAWINTERPOLATEFIXDEBUGINNER_63_0_OFFSET UNITYSDK_OFFSET(0x1A77C5B0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Grounding_Leg_TypeDefinitionIndex = 35029;

	class Grounding_Leg : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _transform_k__BackingField; // 0x10
		::RootMotion::FinalIK::Grounding* grounding; // 0x18
		::System::Single _heightFromGround_k__BackingField; // 0x20
		::UnityEngine::Quaternion rotationOffset; // 0x24
		::UnityEngine::Vector3 _IKPosition_k__BackingField; // 0x34
		::UnityEngine::Vector3 _CurPlaneNormal_k__BackingField; // 0x40
		::UnityEngine::Quaternion r; // 0x4C
		::System::Boolean doOverrideFootPosition; // 0x5C
		::System::Boolean invertFootCenter; // 0x5D
		::System::Boolean _initiated_k__BackingField; // 0x5E
		::System::Boolean _isGrounded_k__BackingField; // 0x5F
		::UnityEngine::Vector3 overrideFootPosition; // 0x60
		::System::Single lastTime; // 0x6C
		::UnityEngine::RaycastHit _heelHit_k__BackingField; // 0x70
		::UnityEngine::Vector3 transformPosition; // 0xA4
		::UnityEngine::Vector3 up; // 0xB0
		::UnityEngine::RaycastHit _ToeCapsuleCollider_k__BackingField; // 0xBC
		::System::Double lastTimeDouble; // 0xF0
		::UnityEngine::Quaternion toHitNormal; // 0xF8
		::System::Single deltaTime; // 0x108
		::UnityEngine::RaycastHit _capsuleHit_k__BackingField; // 0x10C
		::System::Single _IKOffset_k__BackingField; // 0x140
		::UnityEngine::Vector3 _groundPanelNormal_k__BackingField; // 0x144
		::UnityEngine::Vector3 _velocity_k__BackingField; // 0x150
		::UnityEngine::Vector3 lastPosition; // 0x15C
		::UnityEngine::Vector3 _groundPanelPosition_k__BackingField; // 0x168

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isGrounded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ISGROUNDED_OFFSET))(this);
		}

		::System::Void set_isGrounded(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_ISGROUNDED_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_IKPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_IKPOSITION_OFFSET))(this);
		}

		::System::Void set_IKPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_IKPOSITION_OFFSET))(this, value);
		}

		::System::Boolean get_initiated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_INITIATED_OFFSET))(this);
		}

		::System::Void set_initiated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_INITIATED_OFFSET))(this, value);
		}

		::System::Single get_heightFromGround()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_HEIGHTFROMGROUND_OFFSET))(this);
		}

		::System::Void set_heightFromGround(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_HEIGHTFROMGROUND_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_velocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_VELOCITY_OFFSET))(this);
		}

		::System::Void set_velocity(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_VELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_TRANSFORM_OFFSET))(this);
		}

		::System::Void set_transform(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_TRANSFORM_OFFSET))(this, value);
		}

		::System::Single get_IKOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_IKOFFSET_OFFSET))(this);
		}

		::System::Void set_IKOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_IKOFFSET_OFFSET))(this, value);
		}

		::UnityEngine::RaycastHit get_heelHit()
		{
			return ((::UnityEngine::RaycastHit(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_HEELHIT_OFFSET))(this);
		}

		::System::Void set_heelHit(::UnityEngine::RaycastHit value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_HEELHIT_OFFSET))(this, value);
		}

		::UnityEngine::RaycastHit get_capsuleHit()
		{
			return ((::UnityEngine::RaycastHit(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_CAPSULEHIT_OFFSET))(this);
		}

		::System::Void set_capsuleHit(::UnityEngine::RaycastHit value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_CAPSULEHIT_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_groundPanelNormal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_GROUNDPANELNORMAL_OFFSET))(this);
		}

		::System::Void set_groundPanelNormal(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_GROUNDPANELNORMAL_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_groundPanelPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_GROUNDPANELPOSITION_OFFSET))(this);
		}

		::System::Void set_groundPanelPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_GROUNDPANELPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::RaycastHit get_GetHitPoint()
		{
			return ((::UnityEngine::RaycastHit(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_GETHITPOINT_OFFSET))(this);
		}

		::System::Void SetFootPosition(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SETFOOTPOSITION_OFFSET))(this, position);
		}

		::System::Void Initiate(::RootMotion::FinalIK::Grounding* grounding, ::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::Grounding*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_INITIATE_OFFSET))(this, grounding, transform);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_ONENABLE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_RESET_OFFSET))(this);
		}

		::System::Void Process()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_PROCESS_OFFSET))(this);
		}

		::UnityEngine::RaycastHit get_ToeCapsuleCollider()
		{
			return ((::UnityEngine::RaycastHit(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_TOECAPSULECOLLIDER_OFFSET))(this);
		}

		::System::Void set_ToeCapsuleCollider(::UnityEngine::RaycastHit value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_TOECAPSULECOLLIDER_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_CurPlaneNormal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_CURPLANENORMAL_OFFSET))(this);
		}

		::System::Void set_CurPlaneNormal(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_CURPLANENORMAL_OFFSET))(this, value);
		}

		::System::Single get_stepHeightFromGround()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_STEPHEIGHTFROMGROUND_OFFSET))(this);
		}

		::UnityEngine::RaycastHit GetCapsuleHit(::UnityEngine::Vector3 offsetFromHeel)
		{
			return ((::UnityEngine::RaycastHit(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GETCAPSULEHIT_OFFSET))(this, offsetFromHeel);
		}

		::UnityEngine::RaycastHit GetRaycastHit(::UnityEngine::Vector3 offsetFromHeel)
		{
			return ((::UnityEngine::RaycastHit(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GETRAYCASTHIT_OFFSET))(this, offsetFromHeel);
		}

		::UnityEngine::Vector3 RotateNormal(::UnityEngine::Vector3 normal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_ROTATENORMAL_OFFSET))(this, normal);
		}

		::System::Void SetFootToPoint(::UnityEngine::Vector3 normal, ::UnityEngine::Vector3 point)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SETFOOTTOPOINT_OFFSET))(this, normal, point);
		}

		::System::Void SetFootToPlane(::UnityEngine::Vector3 planeNormal, ::UnityEngine::Vector3 planePoint, ::UnityEngine::Vector3 heelHitPoint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SETFOOTTOPLANE_OFFSET))(this, planeNormal, planePoint, heelHitPoint);
		}

		::System::Single GetHeightFromGround(::UnityEngine::Vector3 hitPoint)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GETHEIGHTFROMGROUND_OFFSET))(this, hitPoint);
		}

		::System::Void RotateFoot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_ROTATEFOOT_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetRotationOffsetTarget()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GETROTATIONOFFSETTARGET_OFFSET))(this);
		}

		::System::Single get_rootYOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ROOTYOFFSET_OFFSET))(this);
		}

		static ::System::Void _Process_g__DrawInterpolateFixDebugInner_63_0(::UnityEngine::RaycastHit hit, ::UnityEngine::Vector3 InterpolateFixOffset)
		{
			return ((::System::Void(*)(::UnityEngine::RaycastHit, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG__PROCESS_G__DRAWINTERPOLATEFIXDEBUGINNER_63_0_OFFSET))(hit, InterpolateFixOffset);
		}
	};
}
