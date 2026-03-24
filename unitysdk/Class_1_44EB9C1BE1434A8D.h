#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_44EB9C1BE1434A8D_Enum_3_33B16E3E02BB0BB4_6.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_A9137615B2822874.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class PlaneCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace PipelineCamera::Blender { class DefaultBlender; }

#define CLASS_1_44EB9C1BE1434A8D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA60CAF0)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_2FA8AE0519AC7829_OFFSET UNITYSDK_OFFSET(0xA60CA60)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_31FB2E5020963D24_OFFSET UNITYSDK_OFFSET(0xA60E0C0)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_351060D64F7F438E_1_OFFSET UNITYSDK_OFFSET(0xA60D890)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_351060D64F7F438E_OFFSET UNITYSDK_OFFSET(0xA60D7C0)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0xA60D360)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_893814ED967AF5E7_1_OFFSET UNITYSDK_OFFSET(0xA60D1A0)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_893814ED967AF5E7_2_OFFSET UNITYSDK_OFFSET(0xA60D2C0)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_893814ED967AF5E7_OFFSET UNITYSDK_OFFSET(0xA60CDC0)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_97C1833A0D1E1653_OFFSET UNITYSDK_OFFSET(0xA60DFE0)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_9845385B054DAF3D_OFFSET UNITYSDK_OFFSET(0xA60CC80)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_A881D5983062B0CB_OFFSET UNITYSDK_OFFSET(0xA60CBC0)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_B5E5BA94BBE2108D_OFFSET UNITYSDK_OFFSET(0xA60D3E0)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_B8313FE9944D5E32_OFFSET UNITYSDK_OFFSET(0xA60D960)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_BF972395CC722BF9_OFFSET UNITYSDK_OFFSET(0xA60DF30)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_CF19D36308A05827_OFFSET UNITYSDK_OFFSET(0xA60D070)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_D3D4ED899E46E2D1_OFFSET UNITYSDK_OFFSET(0xA60D5A0)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_DCCF63B007FEBD16_1_OFFSET UNITYSDK_OFFSET(0xA60D630)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_DCCF63B007FEBD16_OFFSET UNITYSDK_OFFSET(0xA60CEE0)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_DDF4E6AEE2216B17_OFFSET UNITYSDK_OFFSET(0xA60D240)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_F536CCCC14C0C3BE_OFFSET UNITYSDK_OFFSET(0xA60D0F0)
#define CLASS_1_44EB9C1BE1434A8D_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xA60CE60)
#define CLASS_1_44EB9C1BE1434A8D__CTOR_OFFSET UNITYSDK_OFFSET(0xA60C8A0)

inline static constexpr unsigned int Class_1_44EB9C1BE1434A8D_TypeDefinitionIndex = 53137;

class Class_1_44EB9C1BE1434A8D : public ::System::Object
{
public:
	::Struct_2_A9137615B2822874 Field_1_2; // 0x10
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_44EB9C1BE1434A8D_Enum_3_33B16E3E02BB0BB4_6>* Field_1_0; // 0x98
	::System::Boolean Field_1_1; // 0xA0

	::System::Void _ctor(::MoleMole::Cameras::PlaneCameraConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::PlaneCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_DISPOSE_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_A881D5983062B0CB()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_A881D5983062B0CB_OFFSET))(this);
	}

	::System::Void Method_1_893814ED967AF5E7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_893814ED967AF5E7_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_1_DCCF63B007FEBD16(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_DCCF63B007FEBD16_OFFSET))(this, a1);
	}

	static ::PipelineCamera::Blender::DefaultBlender* Method_1_CF19D36308A05827()
	{
		return ((::PipelineCamera::Blender::DefaultBlender*(*)())((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_CF19D36308A05827_OFFSET))();
	}

	::System::Void Method_1_F536CCCC14C0C3BE(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_F536CCCC14C0C3BE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_893814ED967AF5E7_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_893814ED967AF5E7_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_DDF4E6AEE2216B17()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_DDF4E6AEE2216B17_OFFSET))(this);
	}

	::System::Void Method_1_893814ED967AF5E7_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_893814ED967AF5E7_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_43A478BA01FE29B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_43A478BA01FE29B7_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_2FA8AE0519AC7829()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_2FA8AE0519AC7829_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_B5E5BA94BBE2108D(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_B5E5BA94BBE2108D_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3D4ED899E46E2D1(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_D3D4ED899E46E2D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_DCCF63B007FEBD16_1(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_DCCF63B007FEBD16_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_351060D64F7F438E()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_351060D64F7F438E_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_351060D64F7F438E_1()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_351060D64F7F438E_1_OFFSET))(this);
	}

	::System::Void Method_1_B8313FE9944D5E32(::PipelineCamera::CameraCommandSpawnSubModules*& a1, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_B8313FE9944D5E32_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_BF972395CC722BF9()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_BF972395CC722BF9_OFFSET))(this);
	}

	::System::Void Method_1_9845385B054DAF3D(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_9845385B054DAF3D_OFFSET))(this, a1);
	}

	::System::Void Method_1_97C1833A0D1E1653(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_97C1833A0D1E1653_OFFSET))(this, a1);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_31FB2E5020963D24()
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44EB9C1BE1434A8D_METHOD_1_31FB2E5020963D24_OFFSET))(this);
	}
};
