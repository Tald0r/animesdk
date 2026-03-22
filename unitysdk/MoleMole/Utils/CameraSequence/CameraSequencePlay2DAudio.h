#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceNotifyStateEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEPLAY2DAUDIO_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0xA094A20)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEPLAY2DAUDIO_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA094860)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEPLAY2DAUDIO_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0xA0949E0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEPLAY2DAUDIO_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0xA094850)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEPLAY2DAUDIO_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0xA094A80)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEPLAY2DAUDIO_RECEIVENOTIFYEND_OFFSET UNITYSDK_OFFSET(0xA094D60)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEPLAY2DAUDIO_RECEIVENOTIFYTICK_OFFSET UNITYSDK_OFFSET(0xA094CE0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEPLAY2DAUDIO__CTOR_OFFSET UNITYSDK_OFFSET(0xA094DD0)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequencePlay2DAudio_TypeDefinitionIndex = 49099;

	class CameraSequencePlay2DAudio : public ::PipelineCamera::CameraSequence::CameraSequenceNotifyStateEvent
	{
	public:
		::System::String* AudioEventName; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEPLAY2DAUDIO__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEPLAY2DAUDIO_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEPLAY2DAUDIO_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEPLAY2DAUDIO_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEPLAY2DAUDIO_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEPLAY2DAUDIO_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void ReceiveNotifyTick(::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEPLAY2DAUDIO_RECEIVENOTIFYTICK_OFFSET))(this, context, deltaTime);
		}

		::System::Void ReceiveNotifyEnd(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEPLAY2DAUDIO_RECEIVENOTIFYEND_OFFSET))(this, context);
		}
	};
}
