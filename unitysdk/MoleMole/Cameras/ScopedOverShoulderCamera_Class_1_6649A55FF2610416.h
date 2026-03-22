#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4A097505A5A1A069_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class ScopedOverShoulderCamera; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_6649A55FF2610416_METHOD_1_1904421C06532BF0_OFFSET UNITYSDK_OFFSET(0x96EB6B0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_6649A55FF2610416_METHOD_1_1C536E9223C4CF4A_OFFSET UNITYSDK_OFFSET(0x96EB760)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_6649A55FF2610416__CTOR_OFFSET UNITYSDK_OFFSET(0x96EB6A0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverShoulderCamera_Class_1_6649A55FF2610416_TypeDefinitionIndex = 61542;

	class ScopedOverShoulderCamera_Class_1_6649A55FF2610416 : public ::System::Object
	{
	public:
		::MoleMole::Cameras::ScopedOverShoulderCamera* Field_1_1; // 0x10
		::Enum_3_4A097505A5A1A069_1 Field_1_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_6649A55FF2610416__CTOR_OFFSET))(this);
		}

		::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_1904421C06532BF0()
		{
			return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_6649A55FF2610416_METHOD_1_1904421C06532BF0_OFFSET))(this);
		}

		::System::Void Method_1_1C536E9223C4CF4A(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_CLASS_1_6649A55FF2610416_METHOD_1_1C536E9223C4CF4A_OFFSET))(this, a1);
		}
	};
}
