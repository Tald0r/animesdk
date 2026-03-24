#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtual3DActionCamera_1; }
namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define CLASS_1_823EFF00B62714E6_CLASS_1_B20B619C3D71F6E5_METHOD_1_BADDA70ED68283AE_OFFSET UNITYSDK_OFFSET(0xA791680)
#define CLASS_1_823EFF00B62714E6_CLASS_1_B20B619C3D71F6E5__CTOR_OFFSET UNITYSDK_OFFSET(0xA791670)

inline static constexpr unsigned int Class_1_823EFF00B62714E6_Class_1_B20B619C3D71F6E5_TypeDefinitionIndex = 69875;

class Class_1_823EFF00B62714E6_Class_1_B20B619C3D71F6E5 : public ::System::Object
{
public:
	::PipelineCamera::CameraCommandUnSpawnSubModules* Field_1_2; // 0x10
	::MoleMole::Cameras::NapVirtual3DActionCamera_1* Field_1_0; // 0x18
	::MoleMole::Cameras::NapVirtualPipelineCamera* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_CLASS_1_B20B619C3D71F6E5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BADDA70ED68283AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_CLASS_1_B20B619C3D71F6E5_METHOD_1_BADDA70ED68283AE_OFFSET))(this);
	}
};
