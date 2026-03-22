#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_823EFF00B62714E6_Enum_3_33B16E3E02BB0BB4_8.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/MoleMole/Photo/ScopedFrontCameraControlCameraConfig.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_62E9700EAC81114C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define CLASS_1_823EFF00B62714E6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x65219E0)
#define CLASS_1_823EFF00B62714E6_METHOD_1_2655FF8F75224E12_OFFSET UNITYSDK_OFFSET(0x6522960)
#define CLASS_1_823EFF00B62714E6_METHOD_1_2970CFB0C4CB6EBC_OFFSET UNITYSDK_OFFSET(0x6522580)
#define CLASS_1_823EFF00B62714E6_METHOD_1_3229D6B5C48FD206_1_OFFSET UNITYSDK_OFFSET(0x6522300)
#define CLASS_1_823EFF00B62714E6_METHOD_1_3229D6B5C48FD206_2_OFFSET UNITYSDK_OFFSET(0x6522840)
#define CLASS_1_823EFF00B62714E6_METHOD_1_3229D6B5C48FD206_3_OFFSET UNITYSDK_OFFSET(0x6522E40)
#define CLASS_1_823EFF00B62714E6_METHOD_1_3229D6B5C48FD206_4_OFFSET UNITYSDK_OFFSET(0x6522F70)
#define CLASS_1_823EFF00B62714E6_METHOD_1_3229D6B5C48FD206_OFFSET UNITYSDK_OFFSET(0x6521DA0)
#define CLASS_1_823EFF00B62714E6_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x6522DD0)
#define CLASS_1_823EFF00B62714E6_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x65226D0)
#define CLASS_1_823EFF00B62714E6_METHOD_1_63047C82BCB140CE_OFFSET UNITYSDK_OFFSET(0x6523030)
#define CLASS_1_823EFF00B62714E6_METHOD_1_700D287A85A1E345_OFFSET UNITYSDK_OFFSET(0x65224E0)
#define CLASS_1_823EFF00B62714E6_METHOD_1_97C1833A0D1E1653_OFFSET UNITYSDK_OFFSET(0x6522760)
#define CLASS_1_823EFF00B62714E6_METHOD_1_9845385B054DAF3D_OFFSET UNITYSDK_OFFSET(0x65223A0)
#define CLASS_1_823EFF00B62714E6_METHOD_1_A91086AED8314DB5_OFFSET UNITYSDK_OFFSET(0x6522EE0)
#define CLASS_1_823EFF00B62714E6_METHOD_1_CBD371AEAB277954_OFFSET UNITYSDK_OFFSET(0x6521E60)
#define CLASS_1_823EFF00B62714E6_METHOD_1_D714A34FDBA35948_OFFSET UNITYSDK_OFFSET(0x6522170)
#define CLASS_1_823EFF00B62714E6_METHOD_1_F544F9A97BE316CA_OFFSET UNITYSDK_OFFSET(0x6521D00)
#define CLASS_1_823EFF00B62714E6_METHOD_1_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0x65226E0)
#define CLASS_1_823EFF00B62714E6_METHOD_1_FF7B2911BBACA4A9_2_OFFSET UNITYSDK_OFFSET(0x65228E0)
#define CLASS_1_823EFF00B62714E6_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x65220F0)
#define CLASS_1_823EFF00B62714E6__CTOR_OFFSET UNITYSDK_OFFSET(0x6521AB0)

inline static constexpr unsigned int Class_1_823EFF00B62714E6_TypeDefinitionIndex = 62704;

class Class_1_823EFF00B62714E6 : public ::System::Object
{
public:
	::Struct_2_62E9700EAC81114C Field_1_0; // 0x10
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_823EFF00B62714E6_Enum_3_33B16E3E02BB0BB4_8>* Field_1_2; // 0xC0
	::System::Single Field_1_3; // 0xC8
	::System::Boolean Field_1_1; // 0xCC
	::System::Single Field_1_5; // 0xD0
	::System::Single Field_1_4; // 0xD4

	::System::Void _ctor(::Foundation::Variable_1<::Foundation::Unreal::FTransform> a1, ::MoleMole::Photo::ScopedFrontCameraControlCameraConfig& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Variable_1<::Foundation::Unreal::FTransform>, ::MoleMole::Photo::ScopedFrontCameraControlCameraConfig&))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_DISPOSE_OFFSET))(this);
	}

	::System::Single Method_1_3229D6B5C48FD206(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_3229D6B5C48FD206_OFFSET))(this, a1);
	}

	::System::Void Method_1_CBD371AEAB277954(::PipelineCamera::CameraCommandSpawnSubModules*& a1, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_CBD371AEAB277954_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_D714A34FDBA35948()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_D714A34FDBA35948_OFFSET))(this);
	}

	::System::Single Method_1_3229D6B5C48FD206_1(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_3229D6B5C48FD206_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_9845385B054DAF3D(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_9845385B054DAF3D_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_1_700D287A85A1E345()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_700D287A85A1E345_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_2970CFB0C4CB6EBC()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_2970CFB0C4CB6EBC_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::System::Void Method_1_97C1833A0D1E1653(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_97C1833A0D1E1653_OFFSET))(this, a1);
	}

	::System::Single Method_1_3229D6B5C48FD206_2(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_3229D6B5C48FD206_2_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_FF7B2911BBACA4A9_2_OFFSET))(this);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_2655FF8F75224E12(::System::Single a1)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_2655FF8F75224E12_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_F544F9A97BE316CA(::System::Single a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_F544F9A97BE316CA_OFFSET))(this, a1);
	}

	::System::Single Method_1_3229D6B5C48FD206_3(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_3229D6B5C48FD206_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_A91086AED8314DB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_A91086AED8314DB5_OFFSET))(this);
	}

	::System::Single Method_1_3229D6B5C48FD206_4(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_3229D6B5C48FD206_4_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_63047C82BCB140CE()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_63047C82BCB140CE_OFFSET))(this);
	}
};
