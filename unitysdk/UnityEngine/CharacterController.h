#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Collider.h"
#include "unitysdk/UnityEngine/CollisionFlags.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_CHARACTERCONTROLLER_GET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A755080)
#define UNITYENGINE_CHARACTERCONTROLLER_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x1A755030)
#define UNITYENGINE_CHARACTERCONTROLLER_GET_COLLISIONFLAGS_OFFSET UNITYSDK_OFFSET(0x1A754FE0)
#define UNITYENGINE_CHARACTERCONTROLLER_GET_DETECTCOLLISIONS_OFFSET UNITYSDK_OFFSET(0x1A755130)
#define UNITYENGINE_CHARACTERCONTROLLER_GET_ENABLEOVERLAPRECOVERY_OFFSET UNITYSDK_OFFSET(0x1A755150)
#define UNITYENGINE_CHARACTERCONTROLLER_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1A755010)
#define UNITYENGINE_CHARACTERCONTROLLER_GET_ISGROUNDED_OFFSET UNITYSDK_OFFSET(0x1A754FD0)
#define UNITYENGINE_CHARACTERCONTROLLER_GET_MINMOVEDISTANCE_OFFSET UNITYSDK_OFFSET(0x1A755110)
#define UNITYENGINE_CHARACTERCONTROLLER_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1A754FF0)
#define UNITYENGINE_CHARACTERCONTROLLER_GET_SKINWIDTH_OFFSET UNITYSDK_OFFSET(0x1A7550F0)
#define UNITYENGINE_CHARACTERCONTROLLER_GET_SLOPELIMIT_OFFSET UNITYSDK_OFFSET(0x1A7550B0)
#define UNITYENGINE_CHARACTERCONTROLLER_GET_STEPOFFSET_OFFSET UNITYSDK_OFFSET(0x1A7550D0)
#define UNITYENGINE_CHARACTERCONTROLLER_GET_VELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A754FC0)
#define UNITYENGINE_CHARACTERCONTROLLER_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1A754F70)
#define UNITYENGINE_CHARACTERCONTROLLER_MOVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A754F60)
#define UNITYENGINE_CHARACTERCONTROLLER_MOVE_OFFSET UNITYSDK_OFFSET(0x1A754F50)
#define UNITYENGINE_CHARACTERCONTROLLER_SET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A7550A0)
#define UNITYENGINE_CHARACTERCONTROLLER_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x1A755090)
#define UNITYENGINE_CHARACTERCONTROLLER_SET_DETECTCOLLISIONS_OFFSET UNITYSDK_OFFSET(0x1A755140)
#define UNITYENGINE_CHARACTERCONTROLLER_SET_ENABLEOVERLAPRECOVERY_OFFSET UNITYSDK_OFFSET(0x1A755160)
#define UNITYENGINE_CHARACTERCONTROLLER_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1A755020)
#define UNITYENGINE_CHARACTERCONTROLLER_SET_MINMOVEDISTANCE_OFFSET UNITYSDK_OFFSET(0x1A755120)
#define UNITYENGINE_CHARACTERCONTROLLER_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1A755000)
#define UNITYENGINE_CHARACTERCONTROLLER_SET_SKINWIDTH_OFFSET UNITYSDK_OFFSET(0x1A755100)
#define UNITYENGINE_CHARACTERCONTROLLER_SET_SLOPELIMIT_OFFSET UNITYSDK_OFFSET(0x1A7550C0)
#define UNITYENGINE_CHARACTERCONTROLLER_SET_STEPOFFSET_OFFSET UNITYSDK_OFFSET(0x1A7550E0)
#define UNITYENGINE_CHARACTERCONTROLLER_SIMPLEMOVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A754F40)
#define UNITYENGINE_CHARACTERCONTROLLER_SIMPLEMOVE_OFFSET UNITYSDK_OFFSET(0x1A754F30)
#define UNITYENGINE_CHARACTERCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A755170)

namespace UnityEngine
{
	inline static constexpr unsigned int CharacterController_TypeDefinitionIndex = 7662;

	class CharacterController : public ::UnityEngine::Collider
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean SimpleMove(::UnityEngine::Vector3 speed)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_SIMPLEMOVE_OFFSET))(this, speed);
		}

		::UnityEngine::CollisionFlags Move(::UnityEngine::Vector3 motion)
		{
			return ((::UnityEngine::CollisionFlags(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_MOVE_OFFSET))(this, motion);
		}

		::UnityEngine::Vector3 get_velocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_GET_VELOCITY_OFFSET))(this);
		}

		::System::Boolean get_isGrounded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_GET_ISGROUNDED_OFFSET))(this);
		}

		::UnityEngine::CollisionFlags get_collisionFlags()
		{
			return ((::UnityEngine::CollisionFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_GET_COLLISIONFLAGS_OFFSET))(this);
		}

		::System::Single get_radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_radius(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_SET_RADIUS_OFFSET))(this, value);
		}

		::System::Single get_height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_height(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_SET_HEIGHT_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_center()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_GET_CENTER_OFFSET))(this);
		}

		::System::Void set_center(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_SET_CENTER_OFFSET))(this, value);
		}

		::System::Single get_slopeLimit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_GET_SLOPELIMIT_OFFSET))(this);
		}

		::System::Void set_slopeLimit(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_SET_SLOPELIMIT_OFFSET))(this, value);
		}

		::System::Single get_stepOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_GET_STEPOFFSET_OFFSET))(this);
		}

		::System::Void set_stepOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_SET_STEPOFFSET_OFFSET))(this, value);
		}

		::System::Single get_skinWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_GET_SKINWIDTH_OFFSET))(this);
		}

		::System::Void set_skinWidth(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_SET_SKINWIDTH_OFFSET))(this, value);
		}

		::System::Single get_minMoveDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_GET_MINMOVEDISTANCE_OFFSET))(this);
		}

		::System::Void set_minMoveDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_SET_MINMOVEDISTANCE_OFFSET))(this, value);
		}

		::System::Boolean get_detectCollisions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_GET_DETECTCOLLISIONS_OFFSET))(this);
		}

		::System::Void set_detectCollisions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_SET_DETECTCOLLISIONS_OFFSET))(this, value);
		}

		::System::Boolean get_enableOverlapRecovery()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_GET_ENABLEOVERLAPRECOVERY_OFFSET))(this);
		}

		::System::Void set_enableOverlapRecovery(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_SET_ENABLEOVERLAPRECOVERY_OFFSET))(this, value);
		}

		::System::Boolean SimpleMove_Injected(::UnityEngine::Vector3& speed)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_SIMPLEMOVE_INJECTED_OFFSET))(this, speed);
		}

		::UnityEngine::CollisionFlags Move_Injected(::UnityEngine::Vector3& motion)
		{
			return ((::UnityEngine::CollisionFlags(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_MOVE_INJECTED_OFFSET))(this, motion);
		}

		::System::Void get_velocity_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_GET_VELOCITY_INJECTED_OFFSET))(this, ret);
		}

		::System::Void get_center_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_GET_CENTER_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_center_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_SET_CENTER_INJECTED_OFFSET))(this, value);
		}
	};
}
