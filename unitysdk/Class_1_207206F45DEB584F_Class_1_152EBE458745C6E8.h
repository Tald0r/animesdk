#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_1_207206F45DEB584F;
namespace MoleMole::Cameras { class VariableCameraConfig; }
namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define CLASS_1_207206F45DEB584F_CLASS_1_152EBE458745C6E8_METHOD_1_74039895776C45A9_OFFSET UNITYSDK_OFFSET(0x716EAD0)
#define CLASS_1_207206F45DEB584F_CLASS_1_152EBE458745C6E8_METHOD_1_7AD64CFACE4286C0_OFFSET UNITYSDK_OFFSET(0x716EC50)
#define CLASS_1_207206F45DEB584F_CLASS_1_152EBE458745C6E8_METHOD_1_81DF4EE7429F06A6_OFFSET UNITYSDK_OFFSET(0x716EB30)
#define CLASS_1_207206F45DEB584F_CLASS_1_152EBE458745C6E8__CTOR_OFFSET UNITYSDK_OFFSET(0x716EAC0)

inline static constexpr unsigned int Class_1_207206F45DEB584F_Class_1_152EBE458745C6E8_TypeDefinitionIndex = 38286;

class Class_1_207206F45DEB584F_Class_1_152EBE458745C6E8 : public ::System::Object
{
public:
	::MoleMole::Cameras::VariableCameraConfig* Field_1_1; // 0x10
	::Class_1_207206F45DEB584F* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_207206F45DEB584F_CLASS_1_152EBE458745C6E8__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraDataBlender* Method_1_74039895776C45A9(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_207206F45DEB584F_CLASS_1_152EBE458745C6E8_METHOD_1_74039895776C45A9_OFFSET))(this, a1);
	}

	::System::Void Method_1_81DF4EE7429F06A6(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_207206F45DEB584F_CLASS_1_152EBE458745C6E8_METHOD_1_81DF4EE7429F06A6_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_7AD64CFACE4286C0()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_207206F45DEB584F_CLASS_1_152EBE458745C6E8_METHOD_1_7AD64CFACE4286C0_OFFSET))(this);
	}
};
