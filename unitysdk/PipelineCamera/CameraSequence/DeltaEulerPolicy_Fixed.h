#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/DeltaEulerPolicy.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY_FIXED_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1A78E660)
#define PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY_FIXED_FETCH_OFFSET_OFFSET UNITYSDK_OFFSET(0x1A78E820)
#define PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY_FIXED_GETDATA_OFFSET UNITYSDK_OFFSET(0x1A78E3E0)
#define PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY_FIXED_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1A78E590)
#define PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY_FIXED_GET_PITCHOFFSET_OFFSET UNITYSDK_OFFSET(0x1A78E1D0)
#define PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY_FIXED_GET_ROLLOFFSET_OFFSET UNITYSDK_OFFSET(0x1A78E330)
#define PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY_FIXED_GET_YAWOFFSET_OFFSET UNITYSDK_OFFSET(0x1A78E280)
#define PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY_FIXED_SETPATH_OFFSET UNITYSDK_OFFSET(0x1A78E5A0)
#define PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY_FIXED_SET_PITCHOFFSET_OFFSET UNITYSDK_OFFSET(0x1A78E1E0)
#define PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY_FIXED_SET_ROLLOFFSET_OFFSET UNITYSDK_OFFSET(0x1A78E340)
#define PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY_FIXED_SET_YAWOFFSET_OFFSET UNITYSDK_OFFSET(0x1A78E290)
#define PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY_FIXED__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A78E970)
#define PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY_FIXED__CTOR_OFFSET UNITYSDK_OFFSET(0x1A78E950)
#define PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY_FIXED___BASE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1A78E9B0)
#define PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY_FIXED___BASE_SETPATH_OFFSET UNITYSDK_OFFSET(0x1A78EA70)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int DeltaEulerPolicy_Fixed_TypeDefinitionIndex = 34738;

	class DeltaEulerPolicy_Fixed : public ::PipelineCamera::CameraSequence::DeltaEulerPolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_offset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(DeltaEulerPolicy_Fixed_TypeDefinitionIndex)->GetStaticField(0x8380);
		}
		::UnityEngine::Vector3 offset; // 0x40
		::System::Boolean makeContextDependent; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY_FIXED__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY_FIXED__CCTOR_OFFSET))();
		}

		::System::Single get_PitchOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY_FIXED_GET_PITCHOFFSET_OFFSET))(this);
		}

		::System::Void set_PitchOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY_FIXED_SET_PITCHOFFSET_OFFSET))(this, value);
		}

		::System::Single get_YawOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY_FIXED_GET_YAWOFFSET_OFFSET))(this);
		}

		::System::Void set_YawOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY_FIXED_SET_YAWOFFSET_OFFSET))(this, value);
		}

		::System::Single get_RollOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY_FIXED_GET_ROLLOFFSET_OFFSET))(this);
		}

		::System::Void set_RollOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY_FIXED_SET_ROLLOFFSET_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 GetData(::System::Single time, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY_FIXED_GETDATA_OFFSET))(this, time, context);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY_FIXED_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& path)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY_FIXED_SETPATH_OFFSET))(this, path);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY_FIXED_COLLECTVARIABLE_OFFSET))(this, collector);
		}

		::UnityEngine::Vector3 fetch_offset(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY_FIXED_FETCH_OFFSET_OFFSET))(this, context);
		}

		::System::Void __base_CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY_FIXED___BASE_COLLECTVARIABLE_OFFSET))(this, P0);
		}

		::System::Void __base_SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY_FIXED___BASE_SETPATH_OFFSET))(this, P0);
		}
	};
}
