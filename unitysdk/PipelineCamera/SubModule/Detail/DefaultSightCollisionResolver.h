#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace PipelineCamera { class ICameraCollectContext; }
namespace PipelineCamera { class ICameraFlushContext; }
namespace PipelineCamera { class ICameraPrepareContext; }
namespace PipelineCamera { class ICameraTouchContext; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTSIGHTCOLLISIONRESOLVER_EVALUATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x923E80)
#define PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTSIGHTCOLLISIONRESOLVER_GETDESIREDDISTANCE_OFFSET UNITYSDK_OFFSET(0x923EA0)
#define PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTSIGHTCOLLISIONRESOLVER_GETSPHERERADIUS_OFFSET UNITYSDK_OFFSET(0x923EB0)
#define PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTSIGHTCOLLISIONRESOLVER_GET_HITCACHE_OFFSET UNITYSDK_OFFSET(0x1A5CAB90)
#define PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTSIGHTCOLLISIONRESOLVER_GROWCACHE_OFFSET UNITYSDK_OFFSET(0x1A5CACB0)
#define PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTSIGHTCOLLISIONRESOLVER_PIPELINECAMERA_SUBMODULE_ICAMERACOLLISIONRESOLVER_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x923EC0)
#define PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTSIGHTCOLLISIONRESOLVER_PIPELINECAMERA_SUBMODULE_ICAMERACOLLISIONRESOLVER_COLLECT_OFFSET UNITYSDK_OFFSET(0x923FB0)
#define PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTSIGHTCOLLISIONRESOLVER_PIPELINECAMERA_SUBMODULE_ICAMERACOLLISIONRESOLVER_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0x923ED0)
#define PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTSIGHTCOLLISIONRESOLVER_PIPELINECAMERA_SUBMODULE_ICAMERACOLLISIONRESOLVER_EVALUATE_OFFSET UNITYSDK_OFFSET(0x924070)
#define PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTSIGHTCOLLISIONRESOLVER_PIPELINECAMERA_SUBMODULE_ICAMERACOLLISIONRESOLVER_FLUSH_OFFSET UNITYSDK_OFFSET(0x924090)
#define PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTSIGHTCOLLISIONRESOLVER_PIPELINECAMERA_SUBMODULE_ICAMERACOLLISIONRESOLVER_PREPARE_OFFSET UNITYSDK_OFFSET(0x923F40)
#define PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTSIGHTCOLLISIONRESOLVER_PIPELINECAMERA_SUBMODULE_ICAMERACOLLISIONRESOLVER_TOUCH_OFFSET UNITYSDK_OFFSET(0x924100)
#define PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTSIGHTCOLLISIONRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x923E40)

namespace PipelineCamera::SubModule::Detail
{
	inline static constexpr unsigned int DefaultSightCollisionResolver_TypeDefinitionIndex = 34878;

	struct alignas(8) DefaultSightCollisionResolver
	{
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet__hitInfoCache()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(DefaultSightCollisionResolver_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::LayerMask _collisionLayerMask; // 0x10
		::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>* _hitFilter; // 0x18
		::System::Single _nearClipPlane; // 0x20
		::System::Single _aspectRatio; // 0x24
		::PipelineCamera::WorldBasicCameraData _cachedOutput; // 0x28
		::System::Single _deltaTime; // 0x54
		::System::Single _interpToSpeed; // 0x58

		::System::Void _ctor(::UnityEngine::LayerMask collisionLayerMask, ::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>* hitFilter, ::System::Single nearClipPlane, ::System::Single aspectRatio, ::System::Single interpToSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask, ::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTSIGHTCOLLISIONRESOLVER__CTOR_OFFSET))(this, collisionLayerMask, hitFilter, nearClipPlane, aspectRatio, interpToSpeed);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit>* get_HitCache()
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTSIGHTCOLLISIONRESOLVER_GET_HITCACHE_OFFSET))();
		}

		static ::System::Void GrowCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTSIGHTCOLLISIONRESOLVER_GROWCACHE_OFFSET))();
		}

		/*
		::PipelineCamera::WorldBasicCameraData EvaluateInternal(::PipelineCamera::WorldBasicCameraData& inputData, ::PipelineCamera::CameraSubModuleEvaluateContext_1<::PipelineCamera::WorldBasicCameraData>& context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::CameraSubModuleEvaluateContext_1<::PipelineCamera::WorldBasicCameraData>&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTSIGHTCOLLISIONRESOLVER_EVALUATEINTERNAL_OFFSET))(this, inputData, context);
		}
		*/

		/*
		::System::Single GetDesiredDistance(::UnityEngine::Ray& probeRay, ::System::Single probeRadius, ::System::Single probeLength)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Ray&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTSIGHTCOLLISIONRESOLVER_GETDESIREDDISTANCE_OFFSET))(this, probeRay, probeRadius, probeLength);
		}
		*/

		::System::Single GetSphereRadius(::System::Single fieldOfView)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTSIGHTCOLLISIONRESOLVER_GETSPHERERADIUS_OFFSET))(this, fieldOfView);
		}

		::System::Void PipelineCamera_SubModule_ICameraCollisionResolver_Activate(::PipelineCamera::ICameraPrepareContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraPrepareContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTSIGHTCOLLISIONRESOLVER_PIPELINECAMERA_SUBMODULE_ICAMERACOLLISIONRESOLVER_ACTIVATE_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_SubModule_ICameraCollisionResolver_Deactivate(::PipelineCamera::ICameraPrepareContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraPrepareContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTSIGHTCOLLISIONRESOLVER_PIPELINECAMERA_SUBMODULE_ICAMERACOLLISIONRESOLVER_DEACTIVATE_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_SubModule_ICameraCollisionResolver_Prepare(::PipelineCamera::ICameraPrepareContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraPrepareContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTSIGHTCOLLISIONRESOLVER_PIPELINECAMERA_SUBMODULE_ICAMERACOLLISIONRESOLVER_PREPARE_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_SubModule_ICameraCollisionResolver_Collect(::PipelineCamera::ICameraCollectContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraCollectContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTSIGHTCOLLISIONRESOLVER_PIPELINECAMERA_SUBMODULE_ICAMERACOLLISIONRESOLVER_COLLECT_OFFSET))(this, context);
		}

		/*
		::PipelineCamera::WorldBasicCameraData PipelineCamera_SubModule_ICameraCollisionResolver_Evaluate(::PipelineCamera::WorldBasicCameraData& inputData, ::PipelineCamera::CameraSubModuleEvaluateContext_1<::PipelineCamera::WorldBasicCameraData>& context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::CameraSubModuleEvaluateContext_1<::PipelineCamera::WorldBasicCameraData>&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTSIGHTCOLLISIONRESOLVER_PIPELINECAMERA_SUBMODULE_ICAMERACOLLISIONRESOLVER_EVALUATE_OFFSET))(this, inputData, context);
		}
		*/

		::System::Void PipelineCamera_SubModule_ICameraCollisionResolver_Flush(::PipelineCamera::ICameraFlushContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraFlushContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTSIGHTCOLLISIONRESOLVER_PIPELINECAMERA_SUBMODULE_ICAMERACOLLISIONRESOLVER_FLUSH_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_SubModule_ICameraCollisionResolver_Touch(::PipelineCamera::ICameraTouchContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraTouchContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_DETAIL_DEFAULTSIGHTCOLLISIONRESOLVER_PIPELINECAMERA_SUBMODULE_ICAMERACOLLISIONRESOLVER_TOUCH_OFFSET))(this, context);
		}
	};
}
