#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_1_3C7A2C6347C7498B;
namespace MoleMole::Cameras { class FirstPersonCameraConfig; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define CLASS_1_3C7A2C6347C7498B_CLASS_1_EA52B93FBB890A64_METHOD_1_1C536E9223C4CF4A_OFFSET UNITYSDK_OFFSET(0x7BA0D40)
#define CLASS_1_3C7A2C6347C7498B_CLASS_1_EA52B93FBB890A64_METHOD_1_AA18621D12E9FC02_OFFSET UNITYSDK_OFFSET(0x7BA0E50)
#define CLASS_1_3C7A2C6347C7498B_CLASS_1_EA52B93FBB890A64__CTOR_OFFSET UNITYSDK_OFFSET(0x7BA0D30)

inline static constexpr unsigned int Class_1_3C7A2C6347C7498B_Class_1_EA52B93FBB890A64_TypeDefinitionIndex = 57484;

class Class_1_3C7A2C6347C7498B_Class_1_EA52B93FBB890A64 : public ::System::Object
{
public:
	::MoleMole::Cameras::FirstPersonCameraConfig* Field_1_2; // 0x10
	::Class_1_3C7A2C6347C7498B* Field_1_0; // 0x18
	::System::UInt32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C7A2C6347C7498B_CLASS_1_EA52B93FBB890A64__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1C536E9223C4CF4A(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_3C7A2C6347C7498B_CLASS_1_EA52B93FBB890A64_METHOD_1_1C536E9223C4CF4A_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_AA18621D12E9FC02()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C7A2C6347C7498B_CLASS_1_EA52B93FBB890A64_METHOD_1_AA18621D12E9FC02_OFFSET))(this);
	}
};
