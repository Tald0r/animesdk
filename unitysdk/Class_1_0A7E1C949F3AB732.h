#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A7E1C949F3AB732_Enum_3_C780BFBFED223F30_4.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_2193452B3479DA84.h"
#include "unitysdk/Struct_2_7D08D6F1491E6873.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { class TimeBasedAlphaGenerator; }
namespace PipelineCamera::Blender { class DefaultBlender; }
namespace PipelineCamera::SubModule { class LerpToTargetInCore; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_0A7E1C949F3AB732_DISPOSE_OFFSET UNITYSDK_OFFSET(0x5E897B0)
#define CLASS_1_0A7E1C949F3AB732_METHOD_1_0BA69C814197CD6B_OFFSET UNITYSDK_OFFSET(0x5E8AE60)
#define CLASS_1_0A7E1C949F3AB732_METHOD_1_19F1BB11890A12EF_OFFSET UNITYSDK_OFFSET(0x5E89660)
#define CLASS_1_0A7E1C949F3AB732_METHOD_1_440D611F7D93B135_OFFSET UNITYSDK_OFFSET(0x5E8A4D0)
#define CLASS_1_0A7E1C949F3AB732_METHOD_1_7CBAE0C0459DC29C_OFFSET UNITYSDK_OFFSET(0x5E8B080)
#define CLASS_1_0A7E1C949F3AB732_METHOD_1_95CDD79345389B03_OFFSET UNITYSDK_OFFSET(0x5E89880)
#define CLASS_1_0A7E1C949F3AB732_METHOD_1_9AB25BD9C7143B41_OFFSET UNITYSDK_OFFSET(0x5E89960)
#define CLASS_1_0A7E1C949F3AB732_METHOD_1_C33E19902632945C_OFFSET UNITYSDK_OFFSET(0x5E8A480)
#define CLASS_1_0A7E1C949F3AB732_METHOD_1_D9F4A79E59AD083F_OFFSET UNITYSDK_OFFSET(0x5E89C20)
#define CLASS_1_0A7E1C949F3AB732__CTOR_OFFSET UNITYSDK_OFFSET(0x5E89410)

inline static constexpr unsigned int Class_1_0A7E1C949F3AB732_TypeDefinitionIndex = 73248;

class Class_1_0A7E1C949F3AB732 : public ::System::Object
{
public:
	::PipelineCamera::TimeBasedAlphaGenerator* Field_1_2; // 0x10
	::Struct_2_2193452B3479DA84 Field_1_3; // 0x18
	::PipelineCamera::SubModule::LerpToTargetInCore* Field_1_1; // 0x110
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_0A7E1C949F3AB732_Enum_3_C780BFBFED223F30_4>* Field_1_0; // 0x118
	::System::Single Field_1_5; // 0x120
	::PipelineCamera::WorldBasicCameraData Field_1_4; // 0x124

	::System::Void _ctor(::Struct_2_7D08D6F1491E6873& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_7D08D6F1491E6873&))((::PBYTE)hIl2Cpp + CLASS_1_0A7E1C949F3AB732__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7E1C949F3AB732_DISPOSE_OFFSET))(this);
	}

	static ::PipelineCamera::Blender::DefaultBlender* Method_1_95CDD79345389B03(::System::Boolean a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3)
	{
		return ((::PipelineCamera::Blender::DefaultBlender*(*)(::System::Boolean, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_0A7E1C949F3AB732_METHOD_1_95CDD79345389B03_OFFSET))(a1, a2, a3);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_19F1BB11890A12EF(::Struct_2_7D08D6F1491E6873 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::Struct_2_7D08D6F1491E6873))((::PBYTE)hIl2Cpp + CLASS_1_0A7E1C949F3AB732_METHOD_1_19F1BB11890A12EF_OFFSET))(this, a1);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_9AB25BD9C7143B41(::Struct_2_7D08D6F1491E6873& a1)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::Struct_2_7D08D6F1491E6873&))((::PBYTE)hIl2Cpp + CLASS_1_0A7E1C949F3AB732_METHOD_1_9AB25BD9C7143B41_OFFSET))(this, a1);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_C33E19902632945C()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7E1C949F3AB732_METHOD_1_C33E19902632945C_OFFSET))(this);
	}

	static ::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>* Method_1_0BA69C814197CD6B(::Struct_2_7D08D6F1491E6873& a1, ::Nap::NapECS::EcsWorld* a2)
	{
		return ((::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>*(*)(::Struct_2_7D08D6F1491E6873&, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_1_0A7E1C949F3AB732_METHOD_1_0BA69C814197CD6B_OFFSET))(a1, a2);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_440D611F7D93B135(::System::Single a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0A7E1C949F3AB732_METHOD_1_440D611F7D93B135_OFFSET))(this, a1);
	}

	::System::Void Method_1_7CBAE0C0459DC29C(::Struct_2_7D08D6F1491E6873& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_7D08D6F1491E6873&))((::PBYTE)hIl2Cpp + CLASS_1_0A7E1C949F3AB732_METHOD_1_7CBAE0C0459DC29C_OFFSET))(this, a1);
	}

	::System::Void Method_1_D9F4A79E59AD083F(::Struct_2_7D08D6F1491E6873& a1, ::PipelineCamera::CameraCommandSpawnSubModules*& a2, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_7D08D6F1491E6873&, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_0A7E1C949F3AB732_METHOD_1_D9F4A79E59AD083F_OFFSET))(this, a1, a2, a3);
	}
};
