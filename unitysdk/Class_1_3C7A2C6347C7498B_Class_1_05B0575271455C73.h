#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3C7A2C6347C7498B;
namespace MoleMole::Cameras { class NapVirtual3DActionCamera_1; }
namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define CLASS_1_3C7A2C6347C7498B_CLASS_1_05B0575271455C73_METHOD_1_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x1567E160)
#define CLASS_1_3C7A2C6347C7498B_CLASS_1_05B0575271455C73__CTOR_OFFSET UNITYSDK_OFFSET(0x1567E150)

inline static constexpr unsigned int Class_1_3C7A2C6347C7498B_Class_1_05B0575271455C73_TypeDefinitionIndex = 42197;

class Class_1_3C7A2C6347C7498B_Class_1_05B0575271455C73 : public ::System::Object
{
public:
	::MoleMole::Cameras::NapVirtualPipelineCamera* Field_1_1; // 0x10
	::Class_1_3C7A2C6347C7498B* Field_1_3; // 0x18
	::PipelineCamera::CameraCommandUnSpawnSubModules* Field_1_2; // 0x20
	::MoleMole::Cameras::NapVirtual3DActionCamera_1* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C7A2C6347C7498B_CLASS_1_05B0575271455C73__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C7A2C6347C7498B_CLASS_1_05B0575271455C73_METHOD_1_3CCA0B8A31B650A8_OFFSET))(this);
	}
};
