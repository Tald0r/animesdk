#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_1_5FAE93110E8848E3;
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Cameras { class FixedCameraConfig; }
namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define CLASS_1_5FAE93110E8848E3_CLASS_1_2EAFCD641D2D9AFD_METHOD_1_1C536E9223C4CF4A_OFFSET UNITYSDK_OFFSET(0xA6A0C60)
#define CLASS_1_5FAE93110E8848E3_CLASS_1_2EAFCD641D2D9AFD_METHOD_1_4AD84925E46165E0_OFFSET UNITYSDK_OFFSET(0xA6A0E20)
#define CLASS_1_5FAE93110E8848E3_CLASS_1_2EAFCD641D2D9AFD_METHOD_1_64472CDD86BC7657_OFFSET UNITYSDK_OFFSET(0xA6A0D50)
#define CLASS_1_5FAE93110E8848E3_CLASS_1_2EAFCD641D2D9AFD_METHOD_1_79BEF18820064FCE_OFFSET UNITYSDK_OFFSET(0xA6A0BC0)
#define CLASS_1_5FAE93110E8848E3_CLASS_1_2EAFCD641D2D9AFD__CTOR_OFFSET UNITYSDK_OFFSET(0xA6A0BB0)

inline static constexpr unsigned int Class_1_5FAE93110E8848E3_Class_1_2EAFCD641D2D9AFD_TypeDefinitionIndex = 48255;

class Class_1_5FAE93110E8848E3_Class_1_2EAFCD641D2D9AFD : public ::System::Object
{
public:
	::MoleMole::Cameras::CameraTrackBlending* Field_1_3; // 0x10
	::MoleMole::Cameras::CameraTrackBlending* Field_1_4; // 0x18
	::Class_1_5FAE93110E8848E3* Field_1_0; // 0x20
	::MoleMole::Cameras::FixedCameraConfig* Field_1_1; // 0x28
	::System::Boolean Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FAE93110E8848E3_CLASS_1_2EAFCD641D2D9AFD__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraDataBlender* Method_1_79BEF18820064FCE(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_5FAE93110E8848E3_CLASS_1_2EAFCD641D2D9AFD_METHOD_1_79BEF18820064FCE_OFFSET))(this, a1);
	}

	::System::Void Method_1_1C536E9223C4CF4A(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_5FAE93110E8848E3_CLASS_1_2EAFCD641D2D9AFD_METHOD_1_1C536E9223C4CF4A_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_64472CDD86BC7657()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FAE93110E8848E3_CLASS_1_2EAFCD641D2D9AFD_METHOD_1_64472CDD86BC7657_OFFSET))(this);
	}

	::PipelineCamera::ICameraDataBlender* Method_1_4AD84925E46165E0(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_5FAE93110E8848E3_CLASS_1_2EAFCD641D2D9AFD_METHOD_1_4AD84925E46165E0_OFFSET))(this, a1);
	}
};
