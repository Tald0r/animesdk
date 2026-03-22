#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9454BFF647B56E9E_Enum_3_33B16E3E02BB0BB4_11.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_6188FB36C2269853.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Cameras { class TacticalCombatCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleBuilder_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }

#define CLASS_1_9454BFF647B56E9E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7E37510)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_0DA658C7CDDC6A76_1_OFFSET UNITYSDK_OFFSET(0x7E38630)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_0DA658C7CDDC6A76_2_OFFSET UNITYSDK_OFFSET(0x7E387E0)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_0DA658C7CDDC6A76_OFFSET UNITYSDK_OFFSET(0x7E37DD0)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_32EE333CAE962CF7_OFFSET UNITYSDK_OFFSET(0x7E37460)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_5D9921C59C46B45F_OFFSET UNITYSDK_OFFSET(0x7E38480)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_910C2B3CA297B693_OFFSET UNITYSDK_OFFSET(0x7E37890)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_9325041C92BECCA5_OFFSET UNITYSDK_OFFSET(0x7E375D0)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_E05ADF64DE351167_1_OFFSET UNITYSDK_OFFSET(0x7E38990)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_E05ADF64DE351167_2_OFFSET UNITYSDK_OFFSET(0x7E38B50)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_E05ADF64DE351167_OFFSET UNITYSDK_OFFSET(0x7E382C0)
#define CLASS_1_9454BFF647B56E9E_METHOD_1_E4C5DF5CBDD06761_OFFSET UNITYSDK_OFFSET(0x7E37F80)
#define CLASS_1_9454BFF647B56E9E__CTOR_OFFSET UNITYSDK_OFFSET(0x7E37310)

inline static constexpr unsigned int Class_1_9454BFF647B56E9E_TypeDefinitionIndex = 74640;

class Class_1_9454BFF647B56E9E : public ::System::Object
{
public:
	::Struct_2_6188FB36C2269853 Field_1_1; // 0x10
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_9454BFF647B56E9E_Enum_3_33B16E3E02BB0BB4_11>* Field_1_0; // 0x78
	::System::Boolean Field_1_2; // 0x80

	::System::Void _ctor(::MoleMole::Cameras::TacticalCombatCameraConfig* a1, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::Struct_2_6188FB36C2269853>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::Struct_2_6188FB36C2269853>*))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_DISPOSE_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_32EE333CAE962CF7(::MoleMole::Cameras::TacticalCombatCameraConfig* a1, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::Struct_2_6188FB36C2269853>* a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::Struct_2_6188FB36C2269853>*))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_32EE333CAE962CF7_OFFSET))(this, a1, a2);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_9325041C92BECCA5(::MoleMole::Cameras::TacticalCombatCameraConfig* a1, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::Struct_2_6188FB36C2269853>* a2)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::Struct_2_6188FB36C2269853>*))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_9325041C92BECCA5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0DA658C7CDDC6A76(::System::Single& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_0DA658C7CDDC6A76_OFFSET))(this, a1);
	}

	::System::Void Method_1_910C2B3CA297B693(::MoleMole::Cameras::TacticalCombatCameraConfig* a1, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::Struct_2_6188FB36C2269853>* a2, ::PipelineCamera::CameraCommandSpawnSubModules*& a3, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::Struct_2_6188FB36C2269853>*, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_910C2B3CA297B693_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_E05ADF64DE351167(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_E05ADF64DE351167_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* Method_1_E4C5DF5CBDD06761()
	{
		return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_E4C5DF5CBDD06761_OFFSET))(this);
	}

	::System::Boolean Method_1_5D9921C59C46B45F(::System::Single& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_5D9921C59C46B45F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0DA658C7CDDC6A76_1(::System::Single& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_0DA658C7CDDC6A76_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0DA658C7CDDC6A76_2(::System::Single& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_0DA658C7CDDC6A76_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_E05ADF64DE351167_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_E05ADF64DE351167_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E05ADF64DE351167_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_METHOD_1_E05ADF64DE351167_2_OFFSET))(this, a1);
	}
};
