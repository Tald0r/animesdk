#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEnvironmentPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEventCategory.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEventTriggerContext.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceTriggerOffsetType.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceCollectionInstance; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYEVENT_GETENDTIME_OFFSET UNITYSDK_OFFSET(0x19D07EF0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYEVENT_GETSTARTTIME_OFFSET UNITYSDK_OFFSET(0x19D07E80)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYEVENT_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x19D07F60)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYEVENT_GET_TRIGGEROFFSETTYPE_OFFSET UNITYSDK_OFFSET(0x19D07D80)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYEVENT_GET_TRIGGERTIME_OFFSET UNITYSDK_OFFSET(0x19D07D60)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYEVENT_NOTIFY_OFFSET UNITYSDK_OFFSET(0x19D08440)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYEVENT_SET_TRIGGEROFFSETTYPE_OFFSET UNITYSDK_OFFSET(0x19D07E10)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYEVENT_TRIGGER_OFFSET UNITYSDK_OFFSET(0x19D07F70)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19D08850)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceInternalNotifyEvent_TypeDefinitionIndex = 34676;

	class CameraSequenceInternalNotifyEvent : public ::PipelineCamera::CameraSequence::CameraSequenceEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYEVENT__CTOR_OFFSET))(this);
		}

		::System::Single get_TriggerTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYEVENT_GET_TRIGGERTIME_OFFSET))(this);
		}

		::PipelineCamera::CameraSequence::CameraSequenceTriggerOffsetType get_TriggerOffsetType()
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceTriggerOffsetType(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYEVENT_GET_TRIGGEROFFSETTYPE_OFFSET))(this);
		}

		::System::Void set_TriggerOffsetType(::PipelineCamera::CameraSequence::CameraSequenceTriggerOffsetType value)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceTriggerOffsetType))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYEVENT_SET_TRIGGEROFFSETTYPE_OFFSET))(this, value);
		}

		::System::Single GetStartTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYEVENT_GETSTARTTIME_OFFSET))(this);
		}

		::System::Single GetEndTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYEVENT_GETENDTIME_OFFSET))(this);
		}

		::PipelineCamera::CameraSequence::CameraSequenceEventCategory get_Category()
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceEventCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYEVENT_GET_CATEGORY_OFFSET))(this);
		}

		::System::Void Trigger(::PipelineCamera::CameraSequence::CameraSequenceEventTriggerContext eventContext, ::PipelineCamera::CameraSequence::CameraSequenceContext* sequenceContext, ::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceEventTriggerContext, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYEVENT_TRIGGER_OFFSET))(this, eventContext, sequenceContext, instance);
		}

		::System::Void Notify(::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath& workspace, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYEVENT_NOTIFY_OFFSET))(this, workspace, context, instance);
		}
	};
}
