#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define PIPELINECAMERA_CAMERAEXTERNALVALUETYPEATTRIBUTE_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x197B32F0)
#define PIPELINECAMERA_CAMERAEXTERNALVALUETYPEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x197B3300)

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraExternalValueTypeAttribute_TypeDefinitionIndex = 35357;

	class CameraExternalValueTypeAttribute : public ::System::Attribute
	{
	public:
		::System::Type* _ValueType_k__BackingField; // 0x10

		::System::Void _ctor(::System::Type* valueType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERAEXTERNALVALUETYPEATTRIBUTE__CTOR_OFFSET))(this, valueType);
		}

		::System::Type* get_ValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERAEXTERNALVALUETYPEATTRIBUTE_GET_VALUETYPE_OFFSET))(this);
		}
	};
}
