#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/EasingFunc.h"
#include "unitysdk/PipelineCamera/InterpCurveMode.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDeltaData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace PipelineCamera { class ICameraCollectContext; }
namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { class ICameraEvaluateContext; }
namespace PipelineCamera { class ICameraFlushContext; }
namespace PipelineCamera { class ICameraTimestamp; }
namespace PipelineCamera { class ICameraTouchContext; }
namespace PipelineCamera { class TimeBasedAlphaGenerator; }
namespace PipelineCamera::Module { class InPlaceBlender; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class AnimationCurve; }

#define PIPELINECAMERA_BLENDER_DEFAULTBLENDER_ANIMATIONCURVE_OFFSET UNITYSDK_OFFSET(0x1A079160)
#define PIPELINECAMERA_BLENDER_DEFAULTBLENDER_EASING_OFFSET UNITYSDK_OFFSET(0x1A078E20)
#define PIPELINECAMERA_BLENDER_DEFAULTBLENDER_GETDEBUGNAME_OFFSET UNITYSDK_OFFSET(0x1A078DC0)
#define PIPELINECAMERA_BLENDER_DEFAULTBLENDER_GETREVERSEKEY_OFFSET UNITYSDK_OFFSET(0x1A076A80)
#define PIPELINECAMERA_BLENDER_DEFAULTBLENDER_INTERPCURVE_OFFSET UNITYSDK_OFFSET(0x1A078FB0)
#define PIPELINECAMERA_BLENDER_DEFAULTBLENDER_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1A076A20)
#define PIPELINECAMERA_BLENDER_DEFAULTBLENDER_PIPELINECAMERA_ICAMERADATABLENDERINTERNAL_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1A076810)
#define PIPELINECAMERA_BLENDER_DEFAULTBLENDER_PIPELINECAMERA_ICAMERADATABLENDERINTERNAL_COLLECT_OFFSET UNITYSDK_OFFSET(0x1A076C20)
#define PIPELINECAMERA_BLENDER_DEFAULTBLENDER_PIPELINECAMERA_ICAMERADATABLENDERINTERNAL_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1A0769B0)
#define PIPELINECAMERA_BLENDER_DEFAULTBLENDER_PIPELINECAMERA_ICAMERADATABLENDERINTERNAL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A076C90)
#define PIPELINECAMERA_BLENDER_DEFAULTBLENDER_PIPELINECAMERA_ICAMERADATABLENDERINTERNAL_FLUSH_OFFSET UNITYSDK_OFFSET(0x1A078C00)
#define PIPELINECAMERA_BLENDER_DEFAULTBLENDER_PIPELINECAMERA_ICAMERADATABLENDERINTERNAL_TOUCH_OFFSET UNITYSDK_OFFSET(0x1A078CE0)
#define PIPELINECAMERA_BLENDER_DEFAULTBLENDER_REVERSED_OFFSET UNITYSDK_OFFSET(0x1A076AE0)
#define PIPELINECAMERA_BLENDER_DEFAULTBLENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A076C10)

namespace PipelineCamera::Blender
{
	inline static constexpr unsigned int DefaultBlender_TypeDefinitionIndex = 34838;

	class DefaultBlender : public ::System::Object
	{
	public:
		::PipelineCamera::TimeBasedAlphaGenerator* _alphaModifier; // 0x10
		::PipelineCamera::ICameraTimestamp* _cameraTimestamp; // 0x18
		::System::Nullable_1<::System::Int32> _reverseKey; // 0x20
		::System::Nullable_1<::PipelineCamera::WorldBasicCameraDeltaData> _deltaCameraData; // 0x28
		::System::Boolean _isFinished; // 0x64
		::PipelineCamera::WorldBasicCameraDataDeltaFlag _deltaFlag; // 0x68
		::Foundation::Unreal::FName _debugName; // 0x6C
		::System::Single _timestamp; // 0x74
		::PipelineCamera::WorldBasicCameraData _lastCameraData; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_DEFAULTBLENDER__CTOR_OFFSET))(this);
		}

		::System::Void PipelineCamera_ICameraDataBlenderInternal_Activate(::PipelineCamera::ICameraCollectContext* context, ::PipelineCamera::Module::InPlaceBlender* ownerBlender)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraCollectContext*, ::PipelineCamera::Module::InPlaceBlender*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_DEFAULTBLENDER_PIPELINECAMERA_ICAMERADATABLENDERINTERNAL_ACTIVATE_OFFSET))(this, context, ownerBlender);
		}

		::System::Void PipelineCamera_ICameraDataBlenderInternal_Deactivate(::PipelineCamera::ICameraCollectContext* context, ::PipelineCamera::Module::InPlaceBlender* ownerBlender)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraCollectContext*, ::PipelineCamera::Module::InPlaceBlender*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_DEFAULTBLENDER_PIPELINECAMERA_ICAMERADATABLENDERINTERNAL_DEACTIVATE_OFFSET))(this, context, ownerBlender);
		}

		::System::Boolean IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_DEFAULTBLENDER_ISFINISHED_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> GetReverseKey()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_DEFAULTBLENDER_GETREVERSEKEY_OFFSET))(this);
		}

		::PipelineCamera::ICameraDataBlender* Reversed(::Foundation::Unreal::FName newDebugName)
		{
			return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_DEFAULTBLENDER_REVERSED_OFFSET))(this, newDebugName);
		}

		::System::Void PipelineCamera_ICameraDataBlenderInternal_Collect(::PipelineCamera::ICameraCollectContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraCollectContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_DEFAULTBLENDER_PIPELINECAMERA_ICAMERADATABLENDERINTERNAL_COLLECT_OFFSET))(this, context);
		}

		::PipelineCamera::WorldBasicCameraData PipelineCamera_ICameraDataBlenderInternal_Evaluate(::PipelineCamera::WorldBasicCameraData& cameraData, ::PipelineCamera::ICameraEvaluateContext* context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::ICameraEvaluateContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_DEFAULTBLENDER_PIPELINECAMERA_ICAMERADATABLENDERINTERNAL_EVALUATE_OFFSET))(this, cameraData, context);
		}

		::System::Void PipelineCamera_ICameraDataBlenderInternal_Flush(::PipelineCamera::ICameraFlushContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraFlushContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_DEFAULTBLENDER_PIPELINECAMERA_ICAMERADATABLENDERINTERNAL_FLUSH_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_ICameraDataBlenderInternal_Touch(::PipelineCamera::ICameraTouchContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraTouchContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_DEFAULTBLENDER_PIPELINECAMERA_ICAMERADATABLENDERINTERNAL_TOUCH_OFFSET))(this, context);
		}

		::Foundation::Unreal::FName GetDebugName()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_DEFAULTBLENDER_GETDEBUGNAME_OFFSET))(this);
		}

		static ::PipelineCamera::Blender::DefaultBlender* Easing(::System::String* debugName, ::PipelineCamera::WorldBasicCameraDataDeltaFlag deltaFlag, ::System::Single duration, ::PipelineCamera::EasingFunc easingFunc, ::System::Nullable_1<::System::Single> metaParam, ::PipelineCamera::ICameraTimestamp* cameraTimestamp, ::System::Nullable_1<::System::Int32> reverseKey)
		{
			return ((::PipelineCamera::Blender::DefaultBlender*(*)(::System::String*, ::PipelineCamera::WorldBasicCameraDataDeltaFlag, ::System::Single, ::PipelineCamera::EasingFunc, ::System::Nullable_1<::System::Single>, ::PipelineCamera::ICameraTimestamp*, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_DEFAULTBLENDER_EASING_OFFSET))(debugName, deltaFlag, duration, easingFunc, metaParam, cameraTimestamp, reverseKey);
		}

		static ::PipelineCamera::Blender::DefaultBlender* InterpCurve(::System::String* debugName, ::PipelineCamera::WorldBasicCameraDataDeltaFlag deltaFlag, ::System::Single duration, ::PipelineCamera::InterpCurveMode curveMode, ::System::Collections::Generic::IList_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* keys, ::System::Nullable_1<::System::Single> tension, ::PipelineCamera::ICameraTimestamp* cameraTimestamp, ::System::Nullable_1<::System::Int32> reverseKey)
		{
			return ((::PipelineCamera::Blender::DefaultBlender*(*)(::System::String*, ::PipelineCamera::WorldBasicCameraDataDeltaFlag, ::System::Single, ::PipelineCamera::InterpCurveMode, ::System::Collections::Generic::IList_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*, ::System::Nullable_1<::System::Single>, ::PipelineCamera::ICameraTimestamp*, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_DEFAULTBLENDER_INTERPCURVE_OFFSET))(debugName, deltaFlag, duration, curveMode, keys, tension, cameraTimestamp, reverseKey);
		}

		static ::PipelineCamera::Blender::DefaultBlender* AnimationCurve(::System::String* debugName, ::PipelineCamera::WorldBasicCameraDataDeltaFlag deltaFlag, ::System::Single duration, ::UnityEngine::AnimationCurve* curve, ::PipelineCamera::ICameraTimestamp* cameraTimestamp, ::System::Nullable_1<::System::Int32> reverseKey)
		{
			return ((::PipelineCamera::Blender::DefaultBlender*(*)(::System::String*, ::PipelineCamera::WorldBasicCameraDataDeltaFlag, ::System::Single, ::UnityEngine::AnimationCurve*, ::PipelineCamera::ICameraTimestamp*, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_DEFAULTBLENDER_ANIMATIONCURVE_OFFSET))(debugName, deltaFlag, duration, curve, cameraTimestamp, reverseKey);
		}
	};
}
