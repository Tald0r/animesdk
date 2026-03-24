#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_CLASS_1_7FEDA1FC41607908_7_METHOD_1_E69F3DFB7CDFE412_OFFSET UNITYSDK_OFFSET(0xCAC7150)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_CLASS_1_7FEDA1FC41607908_7__CTOR_OFFSET UNITYSDK_OFFSET(0xCAC7140)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverlookCameraMode_Class_1_7FEDA1FC41607908_7_TypeDefinitionIndex = 56952;

	class ScopedOverlookCameraMode_Class_1_7FEDA1FC41607908_7 : public ::System::Object
	{
	public:
		::MoleMole::Cameras::NapVirtualPipelineCamera* Field_1_0; // 0x10
		::PipelineCamera::CameraCommandUnSpawnSubModules* Field_1_1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_CLASS_1_7FEDA1FC41607908_7__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_E69F3DFB7CDFE412()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_CLASS_1_7FEDA1FC41607908_7_METHOD_1_E69F3DFB7CDFE412_OFFSET))(this);
		}
	};
}
