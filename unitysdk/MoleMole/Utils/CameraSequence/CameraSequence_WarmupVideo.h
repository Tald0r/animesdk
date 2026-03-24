#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceNotifyStateEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace MoleMole::Utils::CameraSequence { class CameraSequence_VideoItem_ComposeObject; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x7920990)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x7920A00)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x7920950)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x79209F0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x7920B80)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO_RECEIVENOTIFYEND_OFFSET UNITYSDK_OFFSET(0x79216E0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO_RECEIVENOTIFYTICK_OFFSET UNITYSDK_OFFSET(0x7921660)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO__AUTOCHECK_OFFSET UNITYSDK_OFFSET(0x79215F0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO__CTOR_OFFSET UNITYSDK_OFFSET(0x7921750)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO__WARMUPVIDEO_OFFSET UNITYSDK_OFFSET(0x7920C20)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequence_WarmupVideo_TypeDefinitionIndex = 56145;

	class CameraSequence_WarmupVideo : public ::PipelineCamera::CameraSequence::CameraSequenceNotifyStateEvent
	{
	public:
		::System::String* composeConfigKey; // 0x50
		::MoleMole::Utils::CameraSequence::CameraSequence_VideoItem_ComposeObject* composeConfig; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void _WarmupVideo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO__WARMUPVIDEO_OFFSET))(this);
		}

		::System::Void _Autocheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO__AUTOCHECK_OFFSET))(this);
		}

		::System::Void ReceiveNotifyTick(::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO_RECEIVENOTIFYTICK_OFFSET))(this, context, deltaTime);
		}

		::System::Void ReceiveNotifyEnd(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO_RECEIVENOTIFYEND_OFFSET))(this, context);
		}
	};
}
