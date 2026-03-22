#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Utils/CameraSequence/CameraSequenceRatingEffect.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMSCREENEFFECTSTANDALONE_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x73F1510)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMSCREENEFFECTSTANDALONE_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x73F1550)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMSCREENEFFECTSTANDALONE__CTOR_OFFSET UNITYSDK_OFFSET(0x73F16F0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMSCREENEFFECTSTANDALONE___BASE_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x73F1720)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceCreateCustomScreenEffectStandalone_TypeDefinitionIndex = 39516;

	class CameraSequenceCreateCustomScreenEffectStandalone : public ::MoleMole::Utils::CameraSequence::CameraSequenceRatingEffect
	{
	public:
		::System::String* CustomScreenEffectKey; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMSCREENEFFECTSTANDALONE__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMSCREENEFFECTSTANDALONE_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMSCREENEFFECTSTANDALONE_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void __base_ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATECUSTOMSCREENEFFECTSTANDALONE___BASE_RECEIVENOTIFYBEGIN_OFFSET))(this, P0);
		}
	};
}
