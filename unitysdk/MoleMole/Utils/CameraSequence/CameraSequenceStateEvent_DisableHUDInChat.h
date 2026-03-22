#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceNotifyStateEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEHUDINCHAT_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0xF0BEC00)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEHUDINCHAT_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0xF0BECA0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEHUDINCHAT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0xF0BEBC0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEHUDINCHAT_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0xF0BEC90)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEHUDINCHAT_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0xF0BEE20)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEHUDINCHAT_RECEIVENOTIFYEND_OFFSET UNITYSDK_OFFSET(0xF0BF040)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEHUDINCHAT_RECEIVENOTIFYTICK_OFFSET UNITYSDK_OFFSET(0xF0BEFC0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEHUDINCHAT__CTOR_OFFSET UNITYSDK_OFFSET(0xF0BF1E0)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceStateEvent_DisableHUDInChat_TypeDefinitionIndex = 51991;

	class CameraSequenceStateEvent_DisableHUDInChat : public ::PipelineCamera::CameraSequence::CameraSequenceNotifyStateEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEHUDINCHAT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEHUDINCHAT_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEHUDINCHAT_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEHUDINCHAT_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEHUDINCHAT_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEHUDINCHAT_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void ReceiveNotifyTick(::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEHUDINCHAT_RECEIVENOTIFYTICK_OFFSET))(this, context, deltaTime);
		}

		::System::Void ReceiveNotifyEnd(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_DISABLEHUDINCHAT_RECEIVENOTIFYEND_OFFSET))(this, context);
		}
	};
}
