#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceNotifyEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_TRIGGERCAMERACUT_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x7925480)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_TRIGGERCAMERACUT_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x79255D0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_TRIGGERCAMERACUT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x7925440)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_TRIGGERCAMERACUT_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x79255C0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_TRIGGERCAMERACUT_RECEIVENOTIFY_OFFSET UNITYSDK_OFFSET(0x7925660)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_TRIGGERCAMERACUT__CCTOR_OFFSET UNITYSDK_OFFSET(0x79254E0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_TRIGGERCAMERACUT__CTOR_OFFSET UNITYSDK_OFFSET(0x79256D0)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int TriggerCameraCut_TypeDefinitionIndex = 50976;

	class TriggerCameraCut : public ::PipelineCamera::CameraSequence::CameraSequenceNotifyEvent
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_TRIGGERCAMERACUT__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_TRIGGERCAMERACUT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_TRIGGERCAMERACUT_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_TRIGGERCAMERACUT_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_TRIGGERCAMERACUT_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_TRIGGERCAMERACUT_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}

		::System::Void ReceiveNotify(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_TRIGGERCAMERACUT_RECEIVENOTIFY_OFFSET))(this, context);
		}
	};
}
