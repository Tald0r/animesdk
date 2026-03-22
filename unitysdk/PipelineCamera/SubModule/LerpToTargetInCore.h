#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/PipelineCamera/CameraSubModuleEvaluateContext_1.h"
#include "unitysdk/PipelineCamera/EasingFunc.h"
#include "unitysdk/PipelineCamera/Module/WorldBasicCameraDataChannel.h"
#include "unitysdk/PipelineCamera/SubModule/LerpToTargetInCoreConfig.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraCollectContext; }
namespace PipelineCamera { class ICameraFlushContext; }
namespace PipelineCamera { class ICameraPrepareContext; }
namespace PipelineCamera { class ICameraTimestamp; }
namespace PipelineCamera { class ICameraTouchContext; }
namespace PipelineCamera { class TimeBasedAlphaGenerator; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class AnimationCurve; }

#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_GET_CURRENTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1A89FA50)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_LERP_1_OFFSET UNITYSDK_OFFSET(0x1A89F530)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_LERP_2_OFFSET UNITYSDK_OFFSET(0x1A89F650)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_LERP_3_OFFSET UNITYSDK_OFFSET(0x1A89F770)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_LERP_4_OFFSET UNITYSDK_OFFSET(0x1A89F880)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_LERP_5_OFFSET UNITYSDK_OFFSET(0x1A89F970)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_LERP_OFFSET UNITYSDK_OFFSET(0x1A89F400)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULEINTERNAL_PIPELINECAMERA_WORLDBASICCAMERADATA__ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1A89FC10)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULEINTERNAL_PIPELINECAMERA_WORLDBASICCAMERADATA__COLLECT_OFFSET UNITYSDK_OFFSET(0x1A89FD60)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULEINTERNAL_PIPELINECAMERA_WORLDBASICCAMERADATA__DEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1A89FC80)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULEINTERNAL_PIPELINECAMERA_WORLDBASICCAMERADATA__EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A89FDF0)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULEINTERNAL_PIPELINECAMERA_WORLDBASICCAMERADATA__FLUSH_OFFSET UNITYSDK_OFFSET(0x1A8A05D0)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULEINTERNAL_PIPELINECAMERA_WORLDBASICCAMERADATA__PREPARE_OFFSET UNITYSDK_OFFSET(0x1A89FCF0)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULEINTERNAL_PIPELINECAMERA_WORLDBASICCAMERADATA__TOUCH_OFFSET UNITYSDK_OFFSET(0x1A8A0650)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULE_PIPELINECAMERA_WORLDBASICCAMERADATA__GETACTIVECHANNEL_OFFSET UNITYSDK_OFFSET(0x1A89FAD0)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULE_PIPELINECAMERA_WORLDBASICCAMERADATA__GETDEBUGNAME_OFFSET UNITYSDK_OFFSET(0x1A89FBA0)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULE_PIPELINECAMERA_WORLDBASICCAMERADATA__GETPRIORITY_OFFSET UNITYSDK_OFFSET(0x1A89FA60)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULE_PIPELINECAMERA_WORLDBASICCAMERADATA__PROCESSACTIVECHANNEL_OFFSET UNITYSDK_OFFSET(0x1A89FB30)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A89F3A0)

namespace PipelineCamera::SubModule
{
	inline static constexpr unsigned int LerpToTargetInCore_TypeDefinitionIndex = 34870;

	class LerpToTargetInCore : public ::System::Object
	{
	public:
		::PipelineCamera::TimeBasedAlphaGenerator* _alphaGenerator; // 0x10
		::PipelineCamera::ICameraTimestamp* _timestamp; // 0x18
		::Foundation::Variable_1<::PipelineCamera::WorldBasicCameraData> _targetData; // 0x20
		::PipelineCamera::Module::WorldBasicCameraDataChannel _activeChannel; // 0x60
		::System::Nullable_1<::PipelineCamera::WorldBasicCameraData> _sourceData; // 0x64
		::System::Single _currentTimestamp; // 0x94
		::Foundation::Unreal::FName _debugName; // 0x98
		::System::Int32 _priority; // 0xA0
		::System::Single _deltaTime; // 0xA4

		::System::Void _ctor(::PipelineCamera::SubModule::LerpToTargetInCoreConfig& config)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::SubModule::LerpToTargetInCoreConfig&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE__CTOR_OFFSET))(this, config);
		}

		::System::Void Lerp(::PipelineCamera::WorldBasicCameraData& source, ::PipelineCamera::WorldBasicCameraData& target, ::System::Single duration, ::PipelineCamera::EasingFunc easingFunc, ::System::Nullable_1<::System::Single> metaParam)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldBasicCameraData&, ::System::Single, ::PipelineCamera::EasingFunc, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_LERP_OFFSET))(this, source, target, duration, easingFunc, metaParam);
		}

		::System::Void Lerp_1(::PipelineCamera::WorldBasicCameraData& source, ::System::Func_1<::PipelineCamera::WorldBasicCameraData>* target, ::System::Single duration, ::PipelineCamera::EasingFunc easingFunc, ::System::Nullable_1<::System::Single> metaParam)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::System::Func_1<::PipelineCamera::WorldBasicCameraData>*, ::System::Single, ::PipelineCamera::EasingFunc, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_LERP_1_OFFSET))(this, source, target, duration, easingFunc, metaParam);
		}

		::System::Void Lerp_2(::PipelineCamera::WorldBasicCameraData& source, ::PipelineCamera::WorldBasicCameraData& target, ::System::Single duration, ::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldBasicCameraData&, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_LERP_2_OFFSET))(this, source, target, duration, curve);
		}

		::System::Void Lerp_3(::PipelineCamera::WorldBasicCameraData& source, ::System::Func_1<::PipelineCamera::WorldBasicCameraData>* target, ::System::Single duration, ::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::System::Func_1<::PipelineCamera::WorldBasicCameraData>*, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_LERP_3_OFFSET))(this, source, target, duration, curve);
		}

		::System::Void Lerp_4(::PipelineCamera::WorldBasicCameraData& source, ::PipelineCamera::WorldBasicCameraData& target, ::PipelineCamera::TimeBasedAlphaGenerator* alphaGenerator)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::TimeBasedAlphaGenerator*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_LERP_4_OFFSET))(this, source, target, alphaGenerator);
		}

		::System::Void Lerp_5(::PipelineCamera::WorldBasicCameraData& source, ::System::Func_1<::PipelineCamera::WorldBasicCameraData>* target, ::PipelineCamera::TimeBasedAlphaGenerator* alphaGenerator)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::System::Func_1<::PipelineCamera::WorldBasicCameraData>*, ::PipelineCamera::TimeBasedAlphaGenerator*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_LERP_5_OFFSET))(this, source, target, alphaGenerator);
		}

		::System::Single get_CurrentTimestamp()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_GET_CURRENTTIMESTAMP_OFFSET))(this);
		}

		::System::Int32 PipelineCamera_ICameraSubModule_PipelineCamera_WorldBasicCameraData__GetPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULE_PIPELINECAMERA_WORLDBASICCAMERADATA__GETPRIORITY_OFFSET))(this);
		}

		::System::Int32 PipelineCamera_ICameraSubModule_PipelineCamera_WorldBasicCameraData__GetActiveChannel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULE_PIPELINECAMERA_WORLDBASICCAMERADATA__GETACTIVECHANNEL_OFFSET))(this);
		}

		::System::Int32 PipelineCamera_ICameraSubModule_PipelineCamera_WorldBasicCameraData__ProcessActiveChannel(::System::Int32 channel)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULE_PIPELINECAMERA_WORLDBASICCAMERADATA__PROCESSACTIVECHANNEL_OFFSET))(this, channel);
		}

		::Foundation::Unreal::FName PipelineCamera_ICameraSubModule_PipelineCamera_WorldBasicCameraData__GetDebugName()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULE_PIPELINECAMERA_WORLDBASICCAMERADATA__GETDEBUGNAME_OFFSET))(this);
		}

		::System::Void PipelineCamera_ICameraSubModuleInternal_PipelineCamera_WorldBasicCameraData__Activate(::PipelineCamera::ICameraPrepareContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraPrepareContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULEINTERNAL_PIPELINECAMERA_WORLDBASICCAMERADATA__ACTIVATE_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_ICameraSubModuleInternal_PipelineCamera_WorldBasicCameraData__Deactivate(::PipelineCamera::ICameraPrepareContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraPrepareContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULEINTERNAL_PIPELINECAMERA_WORLDBASICCAMERADATA__DEACTIVATE_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_ICameraSubModuleInternal_PipelineCamera_WorldBasicCameraData__Prepare(::PipelineCamera::ICameraPrepareContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraPrepareContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULEINTERNAL_PIPELINECAMERA_WORLDBASICCAMERADATA__PREPARE_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_ICameraSubModuleInternal_PipelineCamera_WorldBasicCameraData__Collect(::PipelineCamera::ICameraCollectContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraCollectContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULEINTERNAL_PIPELINECAMERA_WORLDBASICCAMERADATA__COLLECT_OFFSET))(this, context);
		}

		::PipelineCamera::WorldBasicCameraData PipelineCamera_ICameraSubModuleInternal_PipelineCamera_WorldBasicCameraData__Evaluate(::PipelineCamera::WorldBasicCameraData& inputData, ::PipelineCamera::CameraSubModuleEvaluateContext_1<::PipelineCamera::WorldBasicCameraData>& context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::CameraSubModuleEvaluateContext_1<::PipelineCamera::WorldBasicCameraData>&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULEINTERNAL_PIPELINECAMERA_WORLDBASICCAMERADATA__EVALUATE_OFFSET))(this, inputData, context);
		}

		::System::Void PipelineCamera_ICameraSubModuleInternal_PipelineCamera_WorldBasicCameraData__Flush(::PipelineCamera::ICameraFlushContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraFlushContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULEINTERNAL_PIPELINECAMERA_WORLDBASICCAMERADATA__FLUSH_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_ICameraSubModuleInternal_PipelineCamera_WorldBasicCameraData__Touch(::PipelineCamera::ICameraTouchContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraTouchContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULEINTERNAL_PIPELINECAMERA_WORLDBASICCAMERADATA__TOUCH_OFFSET))(this, context);
		}
	};
}
