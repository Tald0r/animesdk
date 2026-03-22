#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8FB027E4F0CF7ACD_Enum_3_33B16E3E02BB0BB4_10.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_1_7ED8DECFCACDA19E;
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleBuilder_1; }
namespace PipelineCamera::Blender { class DefaultBlender; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_8FB027E4F0CF7ACD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6C165D0)
#define CLASS_1_8FB027E4F0CF7ACD_METHOD_1_0D39E15CDD1F2ED0_OFFSET UNITYSDK_OFFSET(0x6C16840)
#define CLASS_1_8FB027E4F0CF7ACD_METHOD_1_3B62EE24ADD3D2F0_OFFSET UNITYSDK_OFFSET(0x6C16AF0)
#define CLASS_1_8FB027E4F0CF7ACD_METHOD_1_44C9690AE8B43193_OFFSET UNITYSDK_OFFSET(0x6C17120)
#define CLASS_1_8FB027E4F0CF7ACD_METHOD_1_A27599A873F0331C_OFFSET UNITYSDK_OFFSET(0x6C16520)
#define CLASS_1_8FB027E4F0CF7ACD_METHOD_1_CDE31AEF109AED80_OFFSET UNITYSDK_OFFSET(0x6C166D0)
#define CLASS_1_8FB027E4F0CF7ACD_METHOD_1_CF19D36308A05827_OFFSET UNITYSDK_OFFSET(0x6C17530)
#define CLASS_1_8FB027E4F0CF7ACD_METHOD_1_E4C5DF5CBDD06761_OFFSET UNITYSDK_OFFSET(0x6C171F0)
#define CLASS_1_8FB027E4F0CF7ACD__CCTOR_OFFSET UNITYSDK_OFFSET(0x6C16690)
#define CLASS_1_8FB027E4F0CF7ACD__CTOR_OFFSET UNITYSDK_OFFSET(0x6C163E0)

inline static constexpr unsigned int Class_1_8FB027E4F0CF7ACD_TypeDefinitionIndex = 69769;

class Class_1_8FB027E4F0CF7ACD : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8FB027E4F0CF7ACD_TypeDefinitionIndex)->GetStaticField(0xFD20);
	}
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_8FB027E4F0CF7ACD_Enum_3_33B16E3E02BB0BB4_10>* Field_1_0; // 0x10
	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_7ED8DECFCACDA19E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7ED8DECFCACDA19E*))((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CDE31AEF109AED80(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1, ::Class_1_7ED8DECFCACDA19E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*, ::Class_1_7ED8DECFCACDA19E*))((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD_METHOD_1_CDE31AEF109AED80_OFFSET))(this, a1, a2);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_0D39E15CDD1F2ED0(::Class_1_7ED8DECFCACDA19E* a1)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::Class_1_7ED8DECFCACDA19E*))((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD_METHOD_1_0D39E15CDD1F2ED0_OFFSET))(this, a1);
	}

	static ::PipelineCamera::Blender::DefaultBlender* Method_1_44C9690AE8B43193(::System::Single a1, ::UnityEngine::AnimationCurve* a2)
	{
		return ((::PipelineCamera::Blender::DefaultBlender*(*)(::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD_METHOD_1_44C9690AE8B43193_OFFSET))(a1, a2);
	}

	::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* Method_1_E4C5DF5CBDD06761()
	{
		return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD_METHOD_1_E4C5DF5CBDD06761_OFFSET))(this);
	}

	::System::Void Method_1_3B62EE24ADD3D2F0(::Class_1_7ED8DECFCACDA19E* a1, ::PipelineCamera::CameraCommandSpawnSubModules*& a2, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7ED8DECFCACDA19E*, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD_METHOD_1_3B62EE24ADD3D2F0_OFFSET))(this, a1, a2, a3);
	}

	static ::PipelineCamera::Blender::DefaultBlender* Method_1_CF19D36308A05827()
	{
		return ((::PipelineCamera::Blender::DefaultBlender*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD_METHOD_1_CF19D36308A05827_OFFSET))();
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_A27599A873F0331C(::Class_1_7ED8DECFCACDA19E* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::Class_1_7ED8DECFCACDA19E*))((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD_METHOD_1_A27599A873F0331C_OFFSET))(this, a1);
	}
};
