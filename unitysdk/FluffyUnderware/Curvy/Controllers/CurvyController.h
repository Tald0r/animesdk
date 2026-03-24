#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Controllers/CurvyController_CurvyControllerState.h"
#include "unitysdk/FluffyUnderware/Curvy/Controllers/CurvyController_MoveModeEnum.h"
#include "unitysdk/FluffyUnderware/Curvy/Controllers/MotionConstraints.h"
#include "unitysdk/FluffyUnderware/Curvy/Controllers/MovementDirection.h"
#include "unitysdk/FluffyUnderware/Curvy/Controllers/TargetComponent.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyClamping.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyPositionMode.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyUpdateMethod.h"
#include "unitysdk/FluffyUnderware/Curvy/OrientationAxisEnum.h"
#include "unitysdk/FluffyUnderware/Curvy/OrientationModeEnum.h"
#include "unitysdk/FluffyUnderware/DevTools/DTVersionedMonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy::Controllers { class ControllerEvent; }
namespace FluffyUnderware::Curvy::Controllers { class CurvyController_OrientationDamper; }
namespace System { class String; }
namespace UnityEngine { class Rigidbody2D; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_APPLYDELTATIME_OFFSET UNITYSDK_OFFSET(0x1A920180)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_APPLYOFFSET_OFFSET UNITYSDK_OFFSET(0x1A9219C0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_BINDEVENTS_OFFSET UNITYSDK_OFFSET(0x1A921D30)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_COMPUTEOFFSETCOMPENSATEDSPEED_OFFSET UNITYSDK_OFFSET(0x1A9208E0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_COMPUTETARGETPOSITIONANDROTATION_OFFSET UNITYSDK_OFFSET(0x1A920E80)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_DEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A921D10)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1A9202C0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GETCLAMPEDPOSITION_OFFSET UNITYSDK_OFFSET(0x1A91FA30)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GETMAXPOSITION_OFFSET UNITYSDK_OFFSET(0x1A923390)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GETORIENTATIONNONEUPANDFORWARD_OFFSET UNITYSDK_OFFSET(0x1A921520)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GETPOSITIONANDROTATION_OFFSET UNITYSDK_OFFSET(0x1A921DA0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_ABSOLUTEPOSITION_OFFSET UNITYSDK_OFFSET(0x1A91FBE0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_ARECONSTRAINTSCONFLICTING_OFFSET UNITYSDK_OFFSET(0x1A923670)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_CLAMPING_OFFSET UNITYSDK_OFFSET(0x1A91F6E0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_DAMPER_OFFSET UNITYSDK_OFFSET(0x1A91FFC0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_DIRECTIONDAMPINGTIME_OFFSET UNITYSDK_OFFSET(0x1A91F7C0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_DIRECTIONDAMPINGVELOCITY_OFFSET UNITYSDK_OFFSET(0x1A91F590)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_IGNOREDIRECTION_OFFSET UNITYSDK_OFFSET(0x1A91F800)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1A9232D0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_ISNEEDED2DRIGIDBODYMISSING_OFFSET UNITYSDK_OFFSET(0x1A9234B0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_ISNEEDED2DRIGIDBODYNOTKINEMATIC_OFFSET UNITYSDK_OFFSET(0x1A9235D0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_ISNEEDEDRIGIDBODYMISSING_OFFSET UNITYSDK_OFFSET(0x1A923430)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_ISNEEDEDRIGIDBODYNOTKINEMATIC_OFFSET UNITYSDK_OFFSET(0x1A923530)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_LOCKROTATION_OFFSET UNITYSDK_OFFSET(0x1A91F740)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_MAXPOSITION_OFFSET UNITYSDK_OFFSET(0x1A9232F0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_MOTIONCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1A91F700)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_MOVEMENTDIRECTION_OFFSET UNITYSDK_OFFSET(0x1A91FF60)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_MOVEMODE_OFFSET UNITYSDK_OFFSET(0x1A91F6A0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_OFFSETANGLE_OFFSET UNITYSDK_OFFSET(0x1A91F820)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_OFFSETCOMPENSATION_OFFSET UNITYSDK_OFFSET(0x1A91F860)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_OFFSETRADIUS_OFFSET UNITYSDK_OFFSET(0x1A91F840)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_ONINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1A91F650)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_ORIENTATIONAXIS_OFFSET UNITYSDK_OFFSET(0x1A91F7A0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_ORIENTATIONMODE_OFFSET UNITYSDK_OFFSET(0x1A91F720)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_PLAYAUTOMATICALLY_OFFSET UNITYSDK_OFFSET(0x1A91F6C0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_PLAYSTATE_OFFSET UNITYSDK_OFFSET(0x1A91FF80)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_POSITIONMODE_OFFSET UNITYSDK_OFFSET(0x1A91F680)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1A91FE50)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_RELATIVEPOSITION_OFFSET UNITYSDK_OFFSET(0x1A91F8B0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_RIGIDBODY2D_OFFSET UNITYSDK_OFFSET(0x1A920460)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_RIGIDBODY_OFFSET UNITYSDK_OFFSET(0x1A9203E0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_SHOULDDISABLEPOSITIONSLIDER_OFFSET UNITYSDK_OFFSET(0x1A91FF90)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_SHOWOFFSETSECTION_OFFSET UNITYSDK_OFFSET(0x1A9228B0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_SHOWORIENTATIONSECTION_OFFSET UNITYSDK_OFFSET(0x1A9228A0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x1A91F880)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_TARGETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A91F660)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_TIMESINCELASTUPDATE_OFFSET UNITYSDK_OFFSET(0x1A920170)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A9203D0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_UPDAMPINGTIME_OFFSET UNITYSDK_OFFSET(0x1A91F7E0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_UPDAMPINGVELOCITY_OFFSET UNITYSDK_OFFSET(0x1A91F5F0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_USEOFFSET_OFFSET UNITYSDK_OFFSET(0x1A9208D0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_INITIALIZEDAPPLYDELTATIME_OFFSET UNITYSDK_OFFSET(0x1A920510)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A921BA0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A920210)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A9237B0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A9237A0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A9200A0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A91FFD0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1A920360)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_PAUSE_OFFSET UNITYSDK_OFFSET(0x1A922A20)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_PLAY_OFFSET UNITYSDK_OFFSET(0x1A921CE0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0x1A922A40)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_RESETPREPLAYSTATE_OFFSET UNITYSDK_OFFSET(0x1A921D90)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_RESTOREPREPLAYSTATE_OFFSET UNITYSDK_OFFSET(0x1A921D70)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SAVEPREPLAYSTATE_OFFSET UNITYSDK_OFFSET(0x1A921D50)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SETFROMSTRING_OFFSET UNITYSDK_OFFSET(0x1A922D70)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SETPOSITIONANDROTATION_OFFSET UNITYSDK_OFFSET(0x1A922280)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_ABSOLUTEPOSITION_OFFSET UNITYSDK_OFFSET(0x1A91FD60)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_CLAMPING_OFFSET UNITYSDK_OFFSET(0x1A91F6F0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_DIRECTIONDAMPINGTIME_OFFSET UNITYSDK_OFFSET(0x1A91F7D0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_DIRECTIONDAMPINGVELOCITY_OFFSET UNITYSDK_OFFSET(0x1A91F5C0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_IGNOREDIRECTION_OFFSET UNITYSDK_OFFSET(0x1A91F810)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1A9232E0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_LOCKROTATION_OFFSET UNITYSDK_OFFSET(0x1A91F750)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_MOTIONCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1A91F710)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_MOVEMENTDIRECTION_OFFSET UNITYSDK_OFFSET(0x1A91FF70)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_MOVEMODE_OFFSET UNITYSDK_OFFSET(0x1A91F6B0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_OFFSETANGLE_OFFSET UNITYSDK_OFFSET(0x1A91F830)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_OFFSETCOMPENSATION_OFFSET UNITYSDK_OFFSET(0x1A91F870)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_OFFSETRADIUS_OFFSET UNITYSDK_OFFSET(0x1A91F850)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_ORIENTATIONAXIS_OFFSET UNITYSDK_OFFSET(0x1A91F7B0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_ORIENTATIONMODE_OFFSET UNITYSDK_OFFSET(0x1A91F730)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_PLAYAUTOMATICALLY_OFFSET UNITYSDK_OFFSET(0x1A91F6D0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_POSITIONMODE_OFFSET UNITYSDK_OFFSET(0x1A91F690)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1A91FED0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_RELATIVEPOSITION_OFFSET UNITYSDK_OFFSET(0x1A91FB00)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x1A91F890)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_TARGETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A91F670)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_UPDAMPINGTIME_OFFSET UNITYSDK_OFFSET(0x1A91F7F0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_UPDAMPINGVELOCITY_OFFSET UNITYSDK_OFFSET(0x1A91F620)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x1A920050)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_STOP_OFFSET UNITYSDK_OFFSET(0x1A9229F0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_TELEPORTBY_OFFSET UNITYSDK_OFFSET(0x1A922BE0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_TELEPORTTO_OFFSET UNITYSDK_OFFSET(0x1A922AC0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_UNBINDEVENTS_OFFSET UNITYSDK_OFFSET(0x1A921D40)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A9200C0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_USERAFTERINIT_OFFSET UNITYSDK_OFFSET(0x1A922880)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_USERAFTERUPDATE_OFFSET UNITYSDK_OFFSET(0x1A922890)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9228C0)

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int CurvyController_TypeDefinitionIndex = 36725;

	class CurvyController : public ::FluffyUnderware::DevTools::DTVersionedMonoBehaviour
	{
	public:
		// static const ::System::String* ControllerNotReadyMessage; // 0x0
		::FluffyUnderware::Curvy::CurvyUpdateMethod UpdateIn; // 0x28
		::FluffyUnderware::Curvy::Controllers::TargetComponent targetComponent; // 0x2C
		::FluffyUnderware::Curvy::CurvyPositionMode m_PositionMode; // 0x30
		::System::Single m_Position; // 0x34
		::FluffyUnderware::Curvy::Controllers::CurvyController_MoveModeEnum m_MoveMode; // 0x38
		::System::Single m_Speed; // 0x3C
		::FluffyUnderware::Curvy::Controllers::MovementDirection m_Direction; // 0x40
		::FluffyUnderware::Curvy::CurvyClamping m_Clamping; // 0x44
		::FluffyUnderware::Curvy::Controllers::MotionConstraints motionConstraints; // 0x48
		::System::Boolean m_PlayAutomatically; // 0x4C
		::FluffyUnderware::Curvy::OrientationModeEnum m_OrientationMode; // 0x50
		::System::Boolean m_LockRotation; // 0x54
		::FluffyUnderware::Curvy::OrientationAxisEnum m_OrientationAxis; // 0x58
		::System::Boolean m_IgnoreDirection; // 0x5C
		::System::Single m_DampingDirection; // 0x60
		::System::Single m_DampingUp; // 0x64
		::System::Single m_OffsetAngle; // 0x68
		::System::Single m_OffsetRadius; // 0x6C
		::System::Boolean m_OffsetCompensation; // 0x70
		::FluffyUnderware::Curvy::Controllers::ControllerEvent* onInitialized; // 0x78
		::FluffyUnderware::Curvy::Controllers::CurvyController_OrientationDamper* _Damper_k__BackingField; // 0x80
		::FluffyUnderware::Curvy::Controllers::CurvyController_CurvyControllerState State; // 0x88
		::System::Single PrePlayPosition; // 0x8C
		::FluffyUnderware::Curvy::Controllers::MovementDirection PrePlayDirection; // 0x90
		::UnityEngine::Quaternion LockedRotation; // 0x94
		::System::Boolean _isInitialized_k__BackingField; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_DirectionDampingVelocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_DIRECTIONDAMPINGVELOCITY_OFFSET))(this);
		}

		::System::Void set_DirectionDampingVelocity(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_DIRECTIONDAMPINGVELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_UpDampingVelocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_UPDAMPINGVELOCITY_OFFSET))(this);
		}

		::System::Void set_UpDampingVelocity(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_UPDAMPINGVELOCITY_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::Controllers::ControllerEvent* get_OnInitialized()
		{
			return ((::FluffyUnderware::Curvy::Controllers::ControllerEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_ONINITIALIZED_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::Controllers::TargetComponent get_TargetComponent()
		{
			return ((::FluffyUnderware::Curvy::Controllers::TargetComponent(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_TARGETCOMPONENT_OFFSET))(this);
		}

		::System::Void set_TargetComponent(::FluffyUnderware::Curvy::Controllers::TargetComponent value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Controllers::TargetComponent))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_TARGETCOMPONENT_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::CurvyPositionMode get_PositionMode()
		{
			return ((::FluffyUnderware::Curvy::CurvyPositionMode(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_POSITIONMODE_OFFSET))(this);
		}

		::System::Void set_PositionMode(::FluffyUnderware::Curvy::CurvyPositionMode value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyPositionMode))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_POSITIONMODE_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::Controllers::CurvyController_MoveModeEnum get_MoveMode()
		{
			return ((::FluffyUnderware::Curvy::Controllers::CurvyController_MoveModeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_MOVEMODE_OFFSET))(this);
		}

		::System::Void set_MoveMode(::FluffyUnderware::Curvy::Controllers::CurvyController_MoveModeEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Controllers::CurvyController_MoveModeEnum))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_MOVEMODE_OFFSET))(this, value);
		}

		::System::Boolean get_PlayAutomatically()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_PLAYAUTOMATICALLY_OFFSET))(this);
		}

		::System::Void set_PlayAutomatically(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_PLAYAUTOMATICALLY_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::CurvyClamping get_Clamping()
		{
			return ((::FluffyUnderware::Curvy::CurvyClamping(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_CLAMPING_OFFSET))(this);
		}

		::System::Void set_Clamping(::FluffyUnderware::Curvy::CurvyClamping value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyClamping))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_CLAMPING_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::Controllers::MotionConstraints get_MotionConstraints()
		{
			return ((::FluffyUnderware::Curvy::Controllers::MotionConstraints(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_MOTIONCONSTRAINTS_OFFSET))(this);
		}

		::System::Void set_MotionConstraints(::FluffyUnderware::Curvy::Controllers::MotionConstraints value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Controllers::MotionConstraints))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_MOTIONCONSTRAINTS_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::OrientationModeEnum get_OrientationMode()
		{
			return ((::FluffyUnderware::Curvy::OrientationModeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_ORIENTATIONMODE_OFFSET))(this);
		}

		::System::Void set_OrientationMode(::FluffyUnderware::Curvy::OrientationModeEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::OrientationModeEnum))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_ORIENTATIONMODE_OFFSET))(this, value);
		}

		::System::Boolean get_LockRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_LOCKROTATION_OFFSET))(this);
		}

		::System::Void set_LockRotation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_LOCKROTATION_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::OrientationAxisEnum get_OrientationAxis()
		{
			return ((::FluffyUnderware::Curvy::OrientationAxisEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_ORIENTATIONAXIS_OFFSET))(this);
		}

		::System::Void set_OrientationAxis(::FluffyUnderware::Curvy::OrientationAxisEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::OrientationAxisEnum))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_ORIENTATIONAXIS_OFFSET))(this, value);
		}

		::System::Single get_DirectionDampingTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_DIRECTIONDAMPINGTIME_OFFSET))(this);
		}

		::System::Void set_DirectionDampingTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_DIRECTIONDAMPINGTIME_OFFSET))(this, value);
		}

		::System::Single get_UpDampingTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_UPDAMPINGTIME_OFFSET))(this);
		}

		::System::Void set_UpDampingTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_UPDAMPINGTIME_OFFSET))(this, value);
		}

		::System::Boolean get_IgnoreDirection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_IGNOREDIRECTION_OFFSET))(this);
		}

		::System::Void set_IgnoreDirection(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_IGNOREDIRECTION_OFFSET))(this, value);
		}

		::System::Single get_OffsetAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_OFFSETANGLE_OFFSET))(this);
		}

		::System::Void set_OffsetAngle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_OFFSETANGLE_OFFSET))(this, value);
		}

		::System::Single get_OffsetRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_OFFSETRADIUS_OFFSET))(this);
		}

		::System::Void set_OffsetRadius(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_OFFSETRADIUS_OFFSET))(this, value);
		}

		::System::Boolean get_OffsetCompensation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_OFFSETCOMPENSATION_OFFSET))(this);
		}

		::System::Void set_OffsetCompensation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_OFFSETCOMPENSATION_OFFSET))(this, value);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_SPEED_OFFSET))(this);
		}

		::System::Void set_Speed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_SPEED_OFFSET))(this, value);
		}

		::System::Single get_RelativePosition()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_RELATIVEPOSITION_OFFSET))(this);
		}

		::System::Void set_RelativePosition(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_RELATIVEPOSITION_OFFSET))(this, value);
		}

		::System::Single get_AbsolutePosition()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_ABSOLUTEPOSITION_OFFSET))(this);
		}

		::System::Void set_AbsolutePosition(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_ABSOLUTEPOSITION_OFFSET))(this, value);
		}

		::System::Single get_Position()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_POSITION_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::Controllers::MovementDirection get_MovementDirection()
		{
			return ((::FluffyUnderware::Curvy::Controllers::MovementDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_MOVEMENTDIRECTION_OFFSET))(this);
		}

		::System::Void set_MovementDirection(::FluffyUnderware::Curvy::Controllers::MovementDirection value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Controllers::MovementDirection))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_MOVEMENTDIRECTION_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::Controllers::CurvyController_CurvyControllerState get_PlayState()
		{
			return ((::FluffyUnderware::Curvy::Controllers::CurvyController_CurvyControllerState(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_PLAYSTATE_OFFSET))(this);
		}

		::System::Boolean get_ShouldDisablePositionSlider()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_SHOULDDISABLEPOSITIONSLIDER_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::Controllers::CurvyController_OrientationDamper* get_Damper()
		{
			return ((::FluffyUnderware::Curvy::Controllers::CurvyController_OrientationDamper*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_DAMPER_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_START_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_ONVALIDATE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_TRANSFORM_OFFSET))(this);
		}

		::UnityEngine::Rigidbody* get_Rigidbody()
		{
			return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_RIGIDBODY_OFFSET))(this);
		}

		::UnityEngine::Rigidbody2D* get_Rigidbody2D()
		{
			return ((::UnityEngine::Rigidbody2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_RIGIDBODY2D_OFFSET))(this);
		}

		::System::Void InitializedApplyDeltaTime(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_INITIALIZEDAPPLYDELTATIME_OFFSET))(this, deltaTime);
		}

		::System::Void ComputeTargetPositionAndRotation(::UnityEngine::Vector3& targetPosition, ::UnityEngine::Vector3& targetUp, ::UnityEngine::Vector3& targetForward)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_COMPUTETARGETPOSITIONANDROTATION_OFFSET))(this, targetPosition, targetUp, targetForward);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_INITIALIZE_OFFSET))(this);
		}

		::System::Void Deinitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_DEINITIALIZE_OFFSET))(this);
		}

		::System::Void BindEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_BINDEVENTS_OFFSET))(this);
		}

		::System::Void UnbindEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_UNBINDEVENTS_OFFSET))(this);
		}

		::System::Void SavePrePlayState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SAVEPREPLAYSTATE_OFFSET))(this);
		}

		::System::Void RestorePrePlayState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_RESTOREPREPLAYSTATE_OFFSET))(this);
		}

		::System::Void ResetPrePlayState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_RESETPREPLAYSTATE_OFFSET))(this);
		}

		::System::Void GetPositionAndRotation(::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GETPOSITIONANDROTATION_OFFSET))(this, position, rotation);
		}

		::System::Void SetPositionAndRotation(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SETPOSITIONANDROTATION_OFFSET))(this, position, rotation);
		}

		::System::Void UserAfterInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_USERAFTERINIT_OFFSET))(this);
		}

		::System::Void UserAfterUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_USERAFTERUPDATE_OFFSET))(this);
		}

		::System::Boolean get_ShowOrientationSection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_SHOWORIENTATIONSECTION_OFFSET))(this);
		}

		::System::Boolean get_ShowOffsetSection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_SHOWOFFSETSECTION_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_PLAY_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_STOP_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_PAUSE_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_REFRESH_OFFSET))(this);
		}

		::System::Void ApplyDeltaTime(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_APPLYDELTATIME_OFFSET))(this, deltaTime);
		}

		::System::Void TeleportTo(::System::Single newPosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_TELEPORTTO_OFFSET))(this, newPosition);
		}

		::System::Void TeleportBy(::System::Single distance, ::FluffyUnderware::Curvy::Controllers::MovementDirection direction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::FluffyUnderware::Curvy::Controllers::MovementDirection))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_TELEPORTBY_OFFSET))(this, distance, direction);
		}

		::System::Void SetFromString(::System::String* fieldAndValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SETFROMSTRING_OFFSET))(this, fieldAndValue);
		}

		::System::Boolean get_isInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_ISINITIALIZED_OFFSET))(this);
		}

		::System::Void set_isInitialized(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_SET_ISINITIALIZED_OFFSET))(this, value);
		}

		::System::Single get_TimeSinceLastUpdate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_TIMESINCELASTUPDATE_OFFSET))(this);
		}

		::System::Boolean get_UseOffset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_USEOFFSET_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 ApplyOffset(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 tangent, ::UnityEngine::Vector3 up, ::System::Single offsetAngle, ::System::Single offsetRadius)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_APPLYOFFSET_OFFSET))(position, tangent, up, offsetAngle, offsetRadius);
		}

		static ::System::Single GetClampedPosition(::System::Single position, ::FluffyUnderware::Curvy::CurvyPositionMode positionMode, ::FluffyUnderware::Curvy::CurvyClamping clampingMode, ::System::Single length)
		{
			return ((::System::Single(*)(::System::Single, ::FluffyUnderware::Curvy::CurvyPositionMode, ::FluffyUnderware::Curvy::CurvyClamping, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GETCLAMPEDPOSITION_OFFSET))(position, positionMode, clampingMode, length);
		}

		::System::Single get_maxPosition()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_MAXPOSITION_OFFSET))(this);
		}

		::System::Single GetMaxPosition(::FluffyUnderware::Curvy::CurvyPositionMode positionMode)
		{
			return ((::System::Single(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyPositionMode))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GETMAXPOSITION_OFFSET))(this, positionMode);
		}

		::System::Single ComputeOffsetCompensatedSpeed(::System::Single deltaTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_COMPUTEOFFSETCOMPENSATEDSPEED_OFFSET))(this, deltaTime);
		}

		::System::Void GetOrientationNoneUpAndForward(::UnityEngine::Vector3& targetUp, ::UnityEngine::Vector3& targetForward)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GETORIENTATIONNONEUPANDFORWARD_OFFSET))(this, targetUp, targetForward);
		}

		::System::Boolean get_IsNeededRigidbodyMissing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_ISNEEDEDRIGIDBODYMISSING_OFFSET))(this);
		}

		::System::Boolean get_IsNeeded2DRigidbodyMissing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_ISNEEDED2DRIGIDBODYMISSING_OFFSET))(this);
		}

		::System::Boolean get_IsNeededRigidbodyNotKinematic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_ISNEEDEDRIGIDBODYNOTKINEMATIC_OFFSET))(this);
		}

		::System::Boolean get_IsNeeded2DRigidbodyNotKinematic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_ISNEEDED2DRIGIDBODYNOTKINEMATIC_OFFSET))(this);
		}

		::System::Boolean get_AreConstraintsConflicting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_GET_ARECONSTRAINTSCONFLICTING_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_ONAFTERDESERIALIZE_OFFSET))(this);
		}
	};
}
