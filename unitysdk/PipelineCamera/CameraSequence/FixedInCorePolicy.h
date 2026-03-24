#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceRuntimeDataProvider_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x197B4B90)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int FixedInCorePolicy_TypeDefinitionIndex = 35754;

	class FixedInCorePolicy : public ::PipelineCamera::CameraSequence::CameraSequenceRuntimeDataProvider_1<::PipelineCamera::WorldBasicCameraData>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY__CTOR_OFFSET))(this);
		}
	};
}
