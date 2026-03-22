#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigLevelResultPerforms_LevelFailedCameraSequenceConfig.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_3_D038308AD580B020;
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace PipelineCamera::CameraSequence { class CoreDataBindingResolver; }
namespace PipelineCamera::CameraSequence { class CoreDataCollection; }
namespace System { class Action; }

#define CLASS_3_D038308AD580B020_CLASS_1_C6C0BE40907E668F_METHOD_1_7154B05C355FB4D0_OFFSET UNITYSDK_OFFSET(0x626DD80)
#define CLASS_3_D038308AD580B020_CLASS_1_C6C0BE40907E668F_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x626DF90)
#define CLASS_3_D038308AD580B020_CLASS_1_C6C0BE40907E668F__CTOR_OFFSET UNITYSDK_OFFSET(0x626DD70)

inline static constexpr unsigned int Class_3_D038308AD580B020_Class_1_C6C0BE40907E668F_TypeDefinitionIndex = 47384;

class Class_3_D038308AD580B020_Class_1_C6C0BE40907E668F : public ::System::Object
{
public:
	::Class_3_D038308AD580B020* Field_1_0; // 0x10
	::System::Action* Field_1_4; // 0x18
	::PipelineCamera::CameraSequence::CoreDataBindingResolver* Field_1_2; // 0x20
	::PipelineCamera::CameraSequence::CoreDataCollection* Field_1_1; // 0x28
	::MoleMole::Config::ConfigLevelResultPerforms_LevelFailedCameraSequenceConfig Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_CLASS_1_C6C0BE40907E668F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7154B05C355FB4D0(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_CLASS_1_C6C0BE40907E668F_METHOD_1_7154B05C355FB4D0_OFFSET))(this, a1);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_CLASS_1_C6C0BE40907E668F_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}
};
