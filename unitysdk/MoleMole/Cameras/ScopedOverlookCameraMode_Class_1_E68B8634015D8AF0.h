#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class OverlookCameraConfig; }
namespace MoleMole::Cameras { class ScopedOverlookCameraMode; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_CLASS_1_E68B8634015D8AF0_METHOD_1_1C536E9223C4CF4A_OFFSET UNITYSDK_OFFSET(0x81D70F0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_CLASS_1_E68B8634015D8AF0_METHOD_1_AA18621D12E9FC02_OFFSET UNITYSDK_OFFSET(0x81D7200)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_CLASS_1_E68B8634015D8AF0__CTOR_OFFSET UNITYSDK_OFFSET(0x81D70E0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverlookCameraMode_Class_1_E68B8634015D8AF0_TypeDefinitionIndex = 56954;

	class ScopedOverlookCameraMode_Class_1_E68B8634015D8AF0 : public ::System::Object
	{
	public:
		::MoleMole::Cameras::ScopedOverlookCameraMode* Field_1_0; // 0x10
		::MoleMole::Cameras::OverlookCameraConfig* Field_1_1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_CLASS_1_E68B8634015D8AF0__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_1C536E9223C4CF4A(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_CLASS_1_E68B8634015D8AF0_METHOD_1_1C536E9223C4CF4A_OFFSET))(this, a1);
		}

		::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_AA18621D12E9FC02()
		{
			return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_CLASS_1_E68B8634015D8AF0_METHOD_1_AA18621D12E9FC02_OFFSET))(this);
		}
	};
}
