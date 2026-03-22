#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3C7A2C6347C7498B;
namespace MoleMole::Cameras { class NapVirtual3DActionCamera_1; }
namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define CLASS_1_3C7A2C6347C7498B_CLASS_1_05B0575271455C73_METHOD_1_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x7BA0A70)
#define CLASS_1_3C7A2C6347C7498B_CLASS_1_05B0575271455C73__CTOR_OFFSET UNITYSDK_OFFSET(0x7BA0A60)

inline static constexpr unsigned int Class_1_3C7A2C6347C7498B_Class_1_05B0575271455C73_TypeDefinitionIndex = 57486;

class Class_1_3C7A2C6347C7498B_Class_1_05B0575271455C73 : public ::System::Object
{
public:
	::PipelineCamera::CameraCommandUnSpawnSubModules* Field_1_2; // 0x10
	::MoleMole::Cameras::NapVirtualPipelineCamera* Field_1_1; // 0x18
	::MoleMole::Cameras::NapVirtual3DActionCamera_1* Field_1_0; // 0x20
	::Class_1_3C7A2C6347C7498B* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C7A2C6347C7498B_CLASS_1_05B0575271455C73__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C7A2C6347C7498B_CLASS_1_05B0575271455C73_METHOD_1_3CCA0B8A31B650A8_OFFSET))(this);
	}
};
