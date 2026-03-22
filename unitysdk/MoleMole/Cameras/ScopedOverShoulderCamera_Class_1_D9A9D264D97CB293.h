#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4A097505A5A1A069_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_D9A9D264D97CB293_METHOD_1_EFC710EBABFCE318_OFFSET UNITYSDK_OFFSET(0x848D160)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_D9A9D264D97CB293__CTOR_OFFSET UNITYSDK_OFFSET(0x848D150)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverShoulderCamera_Class_1_D9A9D264D97CB293_TypeDefinitionIndex = 61545;

	class ScopedOverShoulderCamera_Class_1_D9A9D264D97CB293 : public ::System::Object
	{
	public:
		::System::Single Field_1_2; // 0x10
		::System::Single Field_1_4; // 0x14
		::Enum_3_4A097505A5A1A069_1 Field_1_0; // 0x18
		::UnityEngine::LayerMask Field_1_1; // 0x1C
		::System::Single Field_1_3; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_D9A9D264D97CB293__CTOR_OFFSET))(this);
		}

		::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_EFC710EBABFCE318()
		{
			return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_D9A9D264D97CB293_METHOD_1_EFC710EBABFCE318_OFFSET))(this);
		}
	};
}
