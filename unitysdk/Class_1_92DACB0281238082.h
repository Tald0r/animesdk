#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_92DACB0281238082_Enum_3_C780BFBFED223F30_4.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Foundation/FAddBehaviorParam.h"
#include "unitysdk/Foundation/FBehaviorHandle.h"
#include "unitysdk/MoleMole/Cameras/BangbooAdjustmentCameraOverriddenConfig.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_2FEF77D21A380E48.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ITimestamp; }
namespace Foundation { template <typename T> class KeyBasedBehaviorManager_1; }
namespace MoleMole::Cameras { class BangbooAdjustmentCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { class String; }

#define CLASS_1_92DACB0281238082_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7AEBF10)
#define CLASS_1_92DACB0281238082_METHOD_1_0054A9045A54D0A7_OFFSET UNITYSDK_OFFSET(0x7AEBFE0)
#define CLASS_1_92DACB0281238082_METHOD_1_00B77A664396B1D7_OFFSET UNITYSDK_OFFSET(0x7AEDCD0)
#define CLASS_1_92DACB0281238082_METHOD_1_0B2F81BEDAEF4B2B_OFFSET UNITYSDK_OFFSET(0x7AED740)
#define CLASS_1_92DACB0281238082_METHOD_1_1A38609E3C792112_OFFSET UNITYSDK_OFFSET(0x7AED3B0)
#define CLASS_1_92DACB0281238082_METHOD_1_3035B966706CB5B2_OFFSET UNITYSDK_OFFSET(0x7AED870)
#define CLASS_1_92DACB0281238082_METHOD_1_31468188A6DDF970_OFFSET UNITYSDK_OFFSET(0x7AEDF90)
#define CLASS_1_92DACB0281238082_METHOD_1_3FD602EDC970550E_OFFSET UNITYSDK_OFFSET(0x7AEC5B0)
#define CLASS_1_92DACB0281238082_METHOD_1_5A5863A8DCA1A489_OFFSET UNITYSDK_OFFSET(0x7AED200)
#define CLASS_1_92DACB0281238082_METHOD_1_5CC26CBA27117D48_OFFSET UNITYSDK_OFFSET(0x7AEDFF0)
#define CLASS_1_92DACB0281238082_METHOD_1_7FF3D778CC7165BD_OFFSET UNITYSDK_OFFSET(0x7AEC230)
#define CLASS_1_92DACB0281238082_METHOD_1_97C1833A0D1E1653_OFFSET UNITYSDK_OFFSET(0x7AED120)
#define CLASS_1_92DACB0281238082_METHOD_1_99E5369888C30E34_OFFSET UNITYSDK_OFFSET(0x7AED910)
#define CLASS_1_92DACB0281238082_METHOD_1_AA18621D12E9FC02_OFFSET UNITYSDK_OFFSET(0x7AECFD0)
#define CLASS_1_92DACB0281238082_METHOD_1_C363F3461345AB10_OFFSET UNITYSDK_OFFSET(0x7AEBE50)
#define CLASS_1_92DACB0281238082_METHOD_1_C87D57F9A59D7DD3_OFFSET UNITYSDK_OFFSET(0x7AEDA30)
#define CLASS_1_92DACB0281238082_METHOD_1_E10F3359B5E0D724_OFFSET UNITYSDK_OFFSET(0x7AED530)
#define CLASS_1_92DACB0281238082__CTOR_OFFSET UNITYSDK_OFFSET(0x7AEBB80)

inline static constexpr unsigned int Class_1_92DACB0281238082_TypeDefinitionIndex = 69138;

class Class_1_92DACB0281238082 : public ::System::Object
{
public:
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_92DACB0281238082_Enum_3_C780BFBFED223F30_4>* Field_1_0; // 0x10
	::Struct_2_2FEF77D21A380E48 Field_1_1; // 0x18
	::Foundation::ITimestamp* Field_1_3; // 0x198
	::Foundation::KeyBasedBehaviorManager_1<::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig>* Field_1_2; // 0x1A0
	::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig Field_1_4; // 0x1A8

	::System::Void _ctor(::System::UInt32 a1, ::Nap::NapECS::EcsWorld* a2, ::MoleMole::Cameras::BangbooAdjustmentCameraConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Nap::NapECS::EcsWorld*, ::MoleMole::Cameras::BangbooAdjustmentCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_DISPOSE_OFFSET))(this);
	}

	::Foundation::FBehaviorHandle Method_1_0054A9045A54D0A7(::System::String* a1, ::System::String* a2, ::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig a3, ::Foundation::FAddBehaviorParam a4, ::System::String*& a5)
	{
		return ((::Foundation::FBehaviorHandle(*)(::PVOID, ::System::String*, ::System::String*, ::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig, ::Foundation::FAddBehaviorParam, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_0054A9045A54D0A7_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_7FF3D778CC7165BD(::PipelineCamera::WorldBasicCameraData a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_7FF3D778CC7165BD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3FD602EDC970550E(::System::UInt32 a1, ::Nap::NapECS::EcsWorld* a2, ::MoleMole::Cameras::BangbooAdjustmentCameraConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Nap::NapECS::EcsWorld*, ::MoleMole::Cameras::BangbooAdjustmentCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_3FD602EDC970550E_OFFSET))(this, a1, a2, a3);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_AA18621D12E9FC02()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_AA18621D12E9FC02_OFFSET))(this);
	}

	::System::Void Method_1_97C1833A0D1E1653(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_97C1833A0D1E1653_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5A5863A8DCA1A489(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_5A5863A8DCA1A489_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_C363F3461345AB10(::System::UInt32 a1, ::Nap::NapECS::EcsWorld* a2, ::MoleMole::Cameras::BangbooAdjustmentCameraConfig* a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::UInt32, ::Nap::NapECS::EcsWorld*, ::MoleMole::Cameras::BangbooAdjustmentCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_C363F3461345AB10_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1A38609E3C792112(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_1A38609E3C792112_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E10F3359B5E0D724(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_E10F3359B5E0D724_OFFSET))(this, a1);
	}

	::System::Void Method_1_0B2F81BEDAEF4B2B(::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_0B2F81BEDAEF4B2B_OFFSET))(this, a1);
	}

	::System::Void Method_1_3035B966706CB5B2(::Foundation::FBehaviorHandle a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::FBehaviorHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_3035B966706CB5B2_OFFSET))(this, a1, a2);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_99E5369888C30E34(::System::UInt32 a1, ::Nap::NapECS::EcsWorld* a2, ::MoleMole::Cameras::BangbooAdjustmentCameraConfig* a3)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::System::UInt32, ::Nap::NapECS::EcsWorld*, ::MoleMole::Cameras::BangbooAdjustmentCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_99E5369888C30E34_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_00B77A664396B1D7(::PipelineCamera::CameraCommandSpawnSubModules*& a1, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_00B77A664396B1D7_OFFSET))(this, a1, a2);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_C87D57F9A59D7DD3()
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_C87D57F9A59D7DD3_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_31468188A6DDF970(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_31468188A6DDF970_OFFSET))(this, a1);
	}

	::System::Void Method_1_5CC26CBA27117D48(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_METHOD_1_5CC26CBA27117D48_OFFSET))(this, a1, a2);
	}
};
