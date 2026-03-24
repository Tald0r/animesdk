#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_95A845D4DB09FB20.h"
#include "unitysdk/Enum_3_BDD4C8CD0F92A196.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole::Battle { class AnimatorParamControl; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class ScopedOverShoulderCamera; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_VENTCRAWLSUBSYSTEM_APPLYANIMATORPARAM_OFFSET UNITYSDK_OFFSET(0x95CA990)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_CLEARPATHPOINTDATA_OFFSET UNITYSDK_OFFSET(0x95CBD30)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_CLEARREFRESHMOVEDIRECTIONTIMER_OFFSET UNITYSDK_OFFSET(0x95C8080)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_DISABLEFORCEAUTOLOOKAT_OFFSET UNITYSDK_OFFSET(0x95C6160)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_DISABLEOVERRIDEAVATARMOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0x95C9070)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_ENABLEFORCEAUTOLOOKAT_OFFSET UNITYSDK_OFFSET(0x95C5FF0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_ENABLEREFRESHMOVEDIRECTIONTIMER_OFFSET UNITYSDK_OFFSET(0x95C80F0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_ENDVENTCRAWL_OFFSET UNITYSDK_OFFSET(0x95CB1C0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_ENTERVENTCRAWLCAMERA_OFFSET UNITYSDK_OFFSET(0x95C6390)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_EXITVENTCRAWLCAMERA_OFFSET UNITYSDK_OFFSET(0x95C6E30)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_FORCEENDVENTCRAWL_OFFSET UNITYSDK_OFFSET(0x95C9560)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_GETCAMERAMOVEFOLLOWPOSITION_OFFSET UNITYSDK_OFFSET(0x95C6AF0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_GETENDPATHPOINTDATA_OFFSET UNITYSDK_OFFSET(0x95CC380)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_GETSTARTPATHPOINTDATA_OFFSET UNITYSDK_OFFSET(0x95CBDC0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_GET_CURFROMPATHPOINTPOSITION_OFFSET UNITYSDK_OFFSET(0x95C85E0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_GET_CURTARGETPATHPOINTPOSITION_OFFSET UNITYSDK_OFFSET(0x95C8160)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_GET_ISPATHPOINTDATAVALID_OFFSET UNITYSDK_OFFSET(0x95C6DA0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_INITPATHPOINTDATA_OFFSET UNITYSDK_OFFSET(0x95C9390)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_MOVETONEXTPATHPOINT_OFFSET UNITYSDK_OFFSET(0x95C82D0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x95C9320)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x95C94B0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x95C95D0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_REALENABLEVENTCRAWL_OFFSET UNITYSDK_OFFSET(0x95CAE90)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_RECREATEPATHPOINTDATA_OFFSET UNITYSDK_OFFSET(0x95CA410)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_REFRESHAUTOLOOKAT_OFFSET UNITYSDK_OFFSET(0x95C5A70)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_REFRESHNEXTPATHPOINT_OFFSET UNITYSDK_OFFSET(0x95C74C0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_REFRESHOVERRIDEAVATARMOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0x95C7910)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_SETACTENTITYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x95CC090)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_SETTARGETLOOKATDIRECTION_OFFSET UNITYSDK_OFFSET(0x95C6230)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_STARTVENTCRAWL_1_OFFSET UNITYSDK_OFFSET(0x95C9BD0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_STARTVENTCRAWL_OFFSET UNITYSDK_OFFSET(0x95C9B60)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_TICKCAMERA_OFFSET UNITYSDK_OFFSET(0x95C56A0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_TICKFORCEAUTOLOOKAT_OFFSET UNITYSDK_OFFSET(0x95C5910)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_TICKMOVE_OFFSET UNITYSDK_OFFSET(0x95C7220)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_TICKSTATE_OFFSET UNITYSDK_OFFSET(0x95C9650)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_TRIGGERACTINGENTITYDITHER_OFFSET UNITYSDK_OFFSET(0x95CAAE0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_TRIGGERMOVEDIRECTIONSOUNDACTION_OFFSET UNITYSDK_OFFSET(0x95C8750)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM_TRYREFRESHMOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0x95C73D0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x95CC680)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM__ENTERVENTCRAWLCAMERA_B__12_0_OFFSET UNITYSDK_OFFSET(0x95CC6F0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM__ENTERVENTCRAWLCAMERA_B__12_1_OFFSET UNITYSDK_OFFSET(0x95CC720)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM__ENTERVENTCRAWLCAMERA_B__12_2_OFFSET UNITYSDK_OFFSET(0x95CC6B0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x95CC740)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x95CC7A0)
#define MOLEMOLE_VENTCRAWLSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x95CC800)

namespace MoleMole
{
	inline static constexpr unsigned int VentCrawlSubSystem_TypeDefinitionIndex = 44011;

	class VentCrawlSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::VentCrawlSubSystem*>
	{
	public:
		// static const ::System::Single REFRESH_MOVE_DIRECTION_TIME; // 0x0
		::MoleMole::Cameras::ScopedOverShoulderCamera* _scopedOverShoulderCamera; // 0x10
		::MoleMole::EntityHandle _actingEntity; // 0x18
		::System::String* _activeTag; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _pathPointList; // 0x30
		::Enum_3_95A845D4DB09FB20 _ventCrawlState; // 0x38
		::UnityEngine::Quaternion _targetLookAtRotation; // 0x3C
		::System::Single _refreshMoveDirectionTimer; // 0x4C
		::System::Single _startActingDelayTimer; // 0x50
		::UnityEngine::Quaternion _curLookAtRotation; // 0x54
		::System::Int32 _curPathPointIndex; // 0x64
		::System::Single _forceAutoLookAtTimer; // 0x68
		::System::Boolean _forceAutoLookAt; // 0x6C
		::UnityEngine::Vector3 _lastCameraFollowPosition; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void TickCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_TICKCAMERA_OFFSET))(this);
		}

		::System::Void EnableForceAutoLookAt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_ENABLEFORCEAUTOLOOKAT_OFFSET))(this);
		}

		::System::Void DisableForceAutoLookAt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_DISABLEFORCEAUTOLOOKAT_OFFSET))(this);
		}

		::System::Void TickForceAutoLookAt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_TICKFORCEAUTOLOOKAT_OFFSET))(this);
		}

		::System::Void RefreshAutoLookAt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_REFRESHAUTOLOOKAT_OFFSET))(this);
		}

		::System::Void SetTargetLookAtDirection(::UnityEngine::Vector3 direction, ::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_SETTARGETLOOKATDIRECTION_OFFSET))(this, direction, isInit);
		}

		::System::Void EnterVentCrawlCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_ENTERVENTCRAWLCAMERA_OFFSET))(this);
		}

		::System::Void ExitVentCrawlCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_EXITVENTCRAWLCAMERA_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetCameraMoveFollowPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_GETCAMERAMOVEFOLLOWPOSITION_OFFSET))(this);
		}

		::System::Void TickMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_TICKMOVE_OFFSET))(this);
		}

		::System::Void TryRefreshMoveDirection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_TRYREFRESHMOVEDIRECTION_OFFSET))(this);
		}

		::System::Void EnableRefreshMoveDirectionTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_ENABLEREFRESHMOVEDIRECTIONTIMER_OFFSET))(this);
		}

		::System::Void ClearRefreshMoveDirectionTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_CLEARREFRESHMOVEDIRECTIONTIMER_OFFSET))(this);
		}

		::System::Void RefreshNextPathPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_REFRESHNEXTPATHPOINT_OFFSET))(this);
		}

		::System::Void MoveToNextPathPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_MOVETONEXTPATHPOINT_OFFSET))(this);
		}

		::System::Void RefreshOverrideAvatarMoveDirection(::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_REFRESHOVERRIDEAVATARMOVEDIRECTION_OFFSET))(this, isInit);
		}

		::System::Void TriggerMoveDirectionSoundAction(::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_TRIGGERMOVEDIRECTIONSOUNDACTION_OFFSET))(this, isInit);
		}

		::System::Void DisableOverrideAvatarMoveDirection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_DISABLEOVERRIDEAVATARMOVEDIRECTION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_CurTargetPathPointPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_GET_CURTARGETPATHPOINTPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_CurFromPathPointPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_GET_CURFROMPATHPOINTPOSITION_OFFSET))(this);
		}

		::System::Boolean get_IsPathPointDataValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_GET_ISPATHPOINTDATAVALID_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void StartVentCrawl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_STARTVENTCRAWL_OFFSET))(this);
		}

		::System::Void StartVentCrawl_1(::FluffyUnderware::Curvy::CurvySpline* curvySpline, ::System::Boolean isInverted, ::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_STARTVENTCRAWL_1_OFFSET))(this, curvySpline, isInverted, tag);
		}

		::System::Void ForceEndVentCrawl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_FORCEENDVENTCRAWL_OFFSET))(this);
		}

		::System::Void EndVentCrawl(::Enum_3_BDD4C8CD0F92A196 exitType, ::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_BDD4C8CD0F92A196, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_ENDVENTCRAWL_OFFSET))(this, exitType, tag);
		}

		::System::Void TickState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_TICKSTATE_OFFSET))(this);
		}

		::System::Void RealEnableVentCrawl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_REALENABLEVENTCRAWL_OFFSET))(this);
		}

		::System::Void SetActEntityTransform(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 forward)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_SETACTENTITYTRANSFORM_OFFSET))(this, position, forward);
		}

		::System::Void InitPathPointData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_INITPATHPOINTDATA_OFFSET))(this);
		}

		::System::Void ClearPathPointData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_CLEARPATHPOINTDATA_OFFSET))(this);
		}

		::System::Void RecreatePathPointData(::FluffyUnderware::Curvy::CurvySpline* curvySpline, ::System::Boolean isInverted)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_RECREATEPATHPOINTDATA_OFFSET))(this, curvySpline, isInverted);
		}

		::System::Void ApplyAnimatorParam(::MoleMole::Battle::Entity* entity, ::MoleMole::Battle::AnimatorParamControl* animatorParamControl, ::System::Boolean forceInstantUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::AnimatorParamControl*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_APPLYANIMATORPARAM_OFFSET))(this, entity, animatorParamControl, forceInstantUpdate);
		}

		::System::Boolean GetStartPathPointData(::UnityEngine::Vector3& position, ::UnityEngine::Vector3& forward)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_GETSTARTPATHPOINTDATA_OFFSET))(this, position, forward);
		}

		::System::Boolean GetEndPathPointData(::UnityEngine::Vector3& position, ::UnityEngine::Vector3& forward)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_GETENDPATHPOINTDATA_OFFSET))(this, position, forward);
		}

		::System::Void TriggerActingEntityDither(::System::Boolean isEnableDither)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM_TRIGGERACTINGENTITYDITHER_OFFSET))(this, isEnableDither);
		}

		::UnityEngine::Vector3 _EnterVentCrawlCamera_b__12_2()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM__ENTERVENTCRAWLCAMERA_B__12_2_OFFSET))(this);
		}

		::UnityEngine::Vector3 _EnterVentCrawlCamera_b__12_0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM__ENTERVENTCRAWLCAMERA_B__12_0_OFFSET))(this);
		}

		::System::Single _EnterVentCrawlCamera_b__12_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM__ENTERVENTCRAWLCAMERA_B__12_1_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VENTCRAWLSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
