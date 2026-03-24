#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_823EFF00B62714E6_Enum_3_33B16E3E02BB0BB4_11.h"
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

#define CLASS_1_823EFF00B62714E6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9032270)
#define CLASS_1_823EFF00B62714E6_METHOD_1_2655FF8F75224E12_OFFSET UNITYSDK_OFFSET(0x90326D0)
#define CLASS_1_823EFF00B62714E6_METHOD_1_2970CFB0C4CB6EBC_OFFSET UNITYSDK_OFFSET(0x9033220)
#define CLASS_1_823EFF00B62714E6_METHOD_1_3229D6B5C48FD206_1_OFFSET UNITYSDK_OFFSET(0x9033180)
#define CLASS_1_823EFF00B62714E6_METHOD_1_3229D6B5C48FD206_2_OFFSET UNITYSDK_OFFSET(0x90333E0)
#define CLASS_1_823EFF00B62714E6_METHOD_1_3229D6B5C48FD206_3_OFFSET UNITYSDK_OFFSET(0x9033730)
#define CLASS_1_823EFF00B62714E6_METHOD_1_3229D6B5C48FD206_4_OFFSET UNITYSDK_OFFSET(0x9033860)
#define CLASS_1_823EFF00B62714E6_METHOD_1_3229D6B5C48FD206_OFFSET UNITYSDK_OFFSET(0x9033040)
#define CLASS_1_823EFF00B62714E6_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x9033370)
#define CLASS_1_823EFF00B62714E6_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x90337D0)
#define CLASS_1_823EFF00B62714E6_METHOD_1_700D287A85A1E345_OFFSET UNITYSDK_OFFSET(0x90330E0)
#define CLASS_1_823EFF00B62714E6_METHOD_1_97C1833A0D1E1653_OFFSET UNITYSDK_OFFSET(0x9032DD0)
#define CLASS_1_823EFF00B62714E6_METHOD_1_9845385B054DAF3D_OFFSET UNITYSDK_OFFSET(0x9033560)
#define CLASS_1_823EFF00B62714E6_METHOD_1_A881D5983062B0CB_OFFSET UNITYSDK_OFFSET(0x90334A0)
#define CLASS_1_823EFF00B62714E6_METHOD_1_A91086AED8314DB5_OFFSET UNITYSDK_OFFSET(0x90336A0)
#define CLASS_1_823EFF00B62714E6_METHOD_1_CBD371AEAB277954_OFFSET UNITYSDK_OFFSET(0x9032B40)
#define CLASS_1_823EFF00B62714E6_METHOD_1_D714A34FDBA35948_OFFSET UNITYSDK_OFFSET(0x9032EB0)
#define CLASS_1_823EFF00B62714E6_METHOD_1_F544F9A97BE316CA_OFFSET UNITYSDK_OFFSET(0x90325A0)
#define CLASS_1_823EFF00B62714E6_METHOD_1_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0x90337E0)
#define CLASS_1_823EFF00B62714E6_METHOD_1_FF7B2911BBACA4A9_2_OFFSET UNITYSDK_OFFSET(0x9033920)
#define CLASS_1_823EFF00B62714E6_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x9032650)
#define CLASS_1_823EFF00B62714E6__CTOR_OFFSET UNITYSDK_OFFSET(0x9032340)

inline static constexpr unsigned int Class_1_823EFF00B62714E6_TypeDefinitionIndex = 69872;

class Class_1_823EFF00B62714E6 : public ::System::Object
{
public:
	::Struct_2_62E9700EAC81114C Field_1_0; // 0x10
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_823EFF00B62714E6_Enum_3_33B16E3E02BB0BB4_11>* Field_1_2; // 0xC0
	::System::Single Field_1_5; // 0xC8
	::System::Single Field_1_3; // 0xCC
	::System::Single Field_1_4; // 0xD0
	::System::Boolean Field_1_1; // 0xD4

	::System::Void _ctor(::Foundation::Variable_1<::Foundation::Unreal::FTransform> a1, ::MoleMole::Photo::ScopedFrontCameraControlCameraConfig& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Variable_1<::Foundation::Unreal::FTransform>, ::MoleMole::Photo::ScopedFrontCameraControlCameraConfig&))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_DISPOSE_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_F544F9A97BE316CA(::System::Single a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_F544F9A97BE316CA_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_2655FF8F75224E12(::System::Single a1)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_2655FF8F75224E12_OFFSET))(this, a1);
	}

	::System::Void Method_1_97C1833A0D1E1653(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_97C1833A0D1E1653_OFFSET))(this, a1);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_D714A34FDBA35948()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_D714A34FDBA35948_OFFSET))(this);
	}

	::System::Single Method_1_3229D6B5C48FD206(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_3229D6B5C48FD206_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_1_700D287A85A1E345()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_700D287A85A1E345_OFFSET))(this);
	}

	::System::Single Method_1_3229D6B5C48FD206_1(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_3229D6B5C48FD206_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_2970CFB0C4CB6EBC()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_2970CFB0C4CB6EBC_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Single Method_1_3229D6B5C48FD206_2(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_3229D6B5C48FD206_2_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_A881D5983062B0CB()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_A881D5983062B0CB_OFFSET))(this);
	}

	::System::Void Method_1_9845385B054DAF3D(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_9845385B054DAF3D_OFFSET))(this, a1);
	}

	::System::Void Method_1_A91086AED8314DB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_A91086AED8314DB5_OFFSET))(this);
	}

	::System::Single Method_1_3229D6B5C48FD206_3(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_3229D6B5C48FD206_3_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_CBD371AEAB277954(::PipelineCamera::CameraCommandSpawnSubModules*& a1, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_CBD371AEAB277954_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::System::Single Method_1_3229D6B5C48FD206_4(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_3229D6B5C48FD206_4_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_823EFF00B62714E6_METHOD_1_FF7B2911BBACA4A9_2_OFFSET))(this);
	}
};
