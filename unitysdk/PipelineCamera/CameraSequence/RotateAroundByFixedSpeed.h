#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/CoreDataSequence.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define PIPELINECAMERA_CAMERASEQUENCE_ROTATEAROUNDBYFIXEDSPEED_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET UNITYSDK_OFFSET(0x1A5C8CB0)
#define PIPELINECAMERA_CAMERASEQUENCE_ROTATEAROUNDBYFIXEDSPEED_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1A5C8D40)
#define PIPELINECAMERA_CAMERASEQUENCE_ROTATEAROUNDBYFIXEDSPEED_FETCH_ANGLESPEED_OFFSET UNITYSDK_OFFSET(0x1A5C8EC0)
#define PIPELINECAMERA_CAMERASEQUENCE_ROTATEAROUNDBYFIXEDSPEED_FETCH_AXIS_OFFSET UNITYSDK_OFFSET(0x1A5C8FA0)
#define PIPELINECAMERA_CAMERASEQUENCE_ROTATEAROUNDBYFIXEDSPEED_GETRATESCALE_OFFSET UNITYSDK_OFFSET(0x1A5C9140)
#define PIPELINECAMERA_CAMERASEQUENCE_ROTATEAROUNDBYFIXEDSPEED_GETSEQUENCEDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A5C9210)
#define PIPELINECAMERA_CAMERASEQUENCE_ROTATEAROUNDBYFIXEDSPEED_GETSEQUENCELENGTH_OFFSET UNITYSDK_OFFSET(0x1A5C90D0)
#define PIPELINECAMERA_CAMERASEQUENCE_ROTATEAROUNDBYFIXEDSPEED_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1A5C98C0)
#define PIPELINECAMERA_CAMERASEQUENCE_ROTATEAROUNDBYFIXEDSPEED_ISLOOP_OFFSET UNITYSDK_OFFSET(0x1A5C91B0)
#define PIPELINECAMERA_CAMERASEQUENCE_ROTATEAROUNDBYFIXEDSPEED__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5C9920)
#define PIPELINECAMERA_CAMERASEQUENCE_ROTATEAROUNDBYFIXEDSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5C98D0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int RotateAroundByFixedSpeed_TypeDefinitionIndex = 34811;

	class RotateAroundByFixedSpeed : public ::PipelineCamera::CameraSequence::CoreDataSequence
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_angleSpeed()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(RotateAroundByFixedSpeed_TypeDefinitionIndex)->GetStaticField(0x83F0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_axis()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(RotateAroundByFixedSpeed_TypeDefinitionIndex)->GetStaticField(0x83F8);
		}
		::System::Single angleSpeed; // 0x18
		::UnityEngine::Vector3 axis; // 0x1C
		::System::Boolean makeContextDependent; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATEAROUNDBYFIXEDSPEED__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATEAROUNDBYFIXEDSPEED__CCTOR_OFFSET))();
		}

		::System::Void BuildRuntimeDataProviderDataPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATEAROUNDBYFIXEDSPEED_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET))(this);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATEAROUNDBYFIXEDSPEED_COLLECTVARIABLE_OFFSET))(this, collector);
		}

		::System::Single fetch_angleSpeed(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATEAROUNDBYFIXEDSPEED_FETCH_ANGLESPEED_OFFSET))(this, context);
		}

		::UnityEngine::Vector3 fetch_axis(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATEAROUNDBYFIXEDSPEED_FETCH_AXIS_OFFSET))(this, context);
		}

		::System::Single GetSequenceLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATEAROUNDBYFIXEDSPEED_GETSEQUENCELENGTH_OFFSET))(this);
		}

		::System::Single GetRateScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATEAROUNDBYFIXEDSPEED_GETRATESCALE_OFFSET))(this);
		}

		::System::Boolean IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATEAROUNDBYFIXEDSPEED_ISLOOP_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData GetSequenceDataInternal(::System::Single sampleTime, ::PipelineCamera::WorldBasicCameraData& data, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATEAROUNDBYFIXEDSPEED_GETSEQUENCEDATAINTERNAL_OFFSET))(this, sampleTime, data, context);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATEAROUNDBYFIXEDSPEED_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}
	};
}
