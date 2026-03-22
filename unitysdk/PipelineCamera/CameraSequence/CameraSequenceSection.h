#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceLinkable.h"
#include "unitysdk/PipelineCamera/SerializableHashString.h"

namespace PipelineCamera::CameraSequence { class ICameraSequenceCollection; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTION_GETSECTIONNAME_OFFSET UNITYSDK_OFFSET(0x19D08CD0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTION_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x19D08A40)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTION_GET_LINKEDCOLLECTION_OFFSET UNITYSDK_OFFSET(0x19D08A00)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTION_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x19D08CC0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTION_ONLINKTIMECHANGED_OFFSET UNITYSDK_OFFSET(0x19D08D80)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19D08EE0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceSection_TypeDefinitionIndex = 34706;

	class CameraSequenceSection : public ::PipelineCamera::CameraSequence::CameraSequenceLinkable
	{
	public:
		::PipelineCamera::SerializableHashString sectionName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTION__CTOR_OFFSET))(this);
		}

		::PipelineCamera::CameraSequence::ICameraSequenceCollection* get_LinkedCollection()
		{
			return ((::PipelineCamera::CameraSequence::ICameraSequenceCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTION_GET_LINKEDCOLLECTION_OFFSET))(this);
		}

		::System::Single get_EndTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTION_GET_ENDTIME_OFFSET))(this);
		}

		::System::Single get_StartTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTION_GET_STARTTIME_OFFSET))(this);
		}

		::Foundation::Unreal::FName GetSectionName()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTION_GETSECTIONNAME_OFFSET))(this);
		}

		::System::Void OnLinkTimeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTION_ONLINKTIMECHANGED_OFFSET))(this);
		}
	};
}
