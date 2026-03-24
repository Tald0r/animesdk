#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/PositionDampingPolicy.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGPOLICY_INTERPTO_GETDATA_OFFSET UNITYSDK_OFFSET(0x18358960)
#define PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGPOLICY_INTERPTO_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x18358F70)
#define PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGPOLICY_INTERPTO__CCTOR_OFFSET UNITYSDK_OFFSET(0x18358FA0)
#define PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGPOLICY_INTERPTO__CTOR_OFFSET UNITYSDK_OFFSET(0x18358F80)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int PositionDampingPolicy_InterpTo_TypeDefinitionIndex = 35749;

	class PositionDampingPolicy_InterpTo : public ::PipelineCamera::CameraSequence::PositionDampingPolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet_DampingTime()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(PositionDampingPolicy_InterpTo_TypeDefinitionIndex)->GetStaticField(0x8570);
		}
		::UnityEngine::Vector3 interpToSpeed; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGPOLICY_INTERPTO__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGPOLICY_INTERPTO__CCTOR_OFFSET))();
		}

		::UnityEngine::Vector3 GetData(::System::Single time, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::UnityEngine::Vector3 current, ::UnityEngine::Vector3 target)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGPOLICY_INTERPTO_GETDATA_OFFSET))(this, time, context, current, target);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGPOLICY_INTERPTO_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}
	};
}
