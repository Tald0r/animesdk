#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CEBEFC8BE3C58B6D;
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace PipelineCamera { class ICameraDataBlender; }

#define CLASS_1_CEBEFC8BE3C58B6D_CLASS_1_54184FB03F3C170E_METHOD_1_4AD84925E46165E0_OFFSET UNITYSDK_OFFSET(0x952A190)
#define CLASS_1_CEBEFC8BE3C58B6D_CLASS_1_54184FB03F3C170E__CTOR_OFFSET UNITYSDK_OFFSET(0x952A180)

inline static constexpr unsigned int Class_1_CEBEFC8BE3C58B6D_Class_1_54184FB03F3C170E_TypeDefinitionIndex = 38628;

class Class_1_CEBEFC8BE3C58B6D_Class_1_54184FB03F3C170E : public ::System::Object
{
public:
	::Class_1_CEBEFC8BE3C58B6D* Field_1_1; // 0x10
	::MoleMole::Cameras::CameraTrackBlending* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEBEFC8BE3C58B6D_CLASS_1_54184FB03F3C170E__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraDataBlender* Method_1_4AD84925E46165E0(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_CEBEFC8BE3C58B6D_CLASS_1_54184FB03F3C170E_METHOD_1_4AD84925E46165E0_OFFSET))(this, a1);
	}
};
