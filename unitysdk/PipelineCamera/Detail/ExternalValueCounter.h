#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraExternalValueType.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections { class BitArray; }

#define PIPELINECAMERA_DETAIL_EXTERNALVALUECOUNTER_DECREMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x8B44D0)
#define PIPELINECAMERA_DETAIL_EXTERNALVALUECOUNTER_GET_COUNTER_OFFSET UNITYSDK_OFFSET(0x8B44E0)
#define PIPELINECAMERA_DETAIL_EXTERNALVALUECOUNTER_GET_MASK_OFFSET UNITYSDK_OFFSET(0x8B4570)
#define PIPELINECAMERA_DETAIL_EXTERNALVALUECOUNTER_INCREMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x8B44C0)

namespace PipelineCamera::Detail
{
	inline static constexpr unsigned int ExternalValueCounter_TypeDefinitionIndex = 35882;

	struct alignas(8) ExternalValueCounter
	{
		::Il2CppArray<::System::Int32>* _counter; // 0x10
		::System::Collections::BitArray* _mask; // 0x18

		::System::Void IncrementCount(::PipelineCamera::CameraExternalValueType valueType)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraExternalValueType))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DETAIL_EXTERNALVALUECOUNTER_INCREMENTCOUNT_OFFSET))(this, valueType);
		}

		::System::Void DecrementCount(::PipelineCamera::CameraExternalValueType valueType)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraExternalValueType))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DETAIL_EXTERNALVALUECOUNTER_DECREMENTCOUNT_OFFSET))(this, valueType);
		}

		::Il2CppArray<::System::Int32>* get_Counter()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DETAIL_EXTERNALVALUECOUNTER_GET_COUNTER_OFFSET))(this);
		}

		::System::Collections::BitArray* get_Mask()
		{
			return ((::System::Collections::BitArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DETAIL_EXTERNALVALUECOUNTER_GET_MASK_OFFSET))(this);
		}
	};
}
