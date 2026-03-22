#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1FF2A057387788FC_Enum_3_33B16E3E02BB0BB4_12.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_AA3FB4F8297B1779;
class Class_3_B19369CC4AB45FA4;
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Cameras { class OverrideConfigSideScrollingCamera; }
namespace MoleMole::Cameras { class SideScrollingCameraRuntimeParam; }
namespace MoleMole::Config { class ConfigSideScrollingCamera; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { class String; }

#define CLASS_1_1FF2A057387788FC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x686A880)
#define CLASS_1_1FF2A057387788FC_METHOD_1_0122AF7BDD3F7B81_OFFSET UNITYSDK_OFFSET(0x686CC50)
#define CLASS_1_1FF2A057387788FC_METHOD_1_0392750BCA51515E_OFFSET UNITYSDK_OFFSET(0x686A950)
#define CLASS_1_1FF2A057387788FC_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x686B670)
#define CLASS_1_1FF2A057387788FC_METHOD_1_189EC257A8D53234_OFFSET UNITYSDK_OFFSET(0x686B790)
#define CLASS_1_1FF2A057387788FC_METHOD_1_1993758E0A987989_1_OFFSET UNITYSDK_OFFSET(0x686DEF0)
#define CLASS_1_1FF2A057387788FC_METHOD_1_1993758E0A987989_OFFSET UNITYSDK_OFFSET(0x686DF80)
#define CLASS_1_1FF2A057387788FC_METHOD_1_19EEA5F0263FDCD2_OFFSET UNITYSDK_OFFSET(0x686BFF0)
#define CLASS_1_1FF2A057387788FC_METHOD_1_21D954BC9FA238DA_OFFSET UNITYSDK_OFFSET(0x686C640)
#define CLASS_1_1FF2A057387788FC_METHOD_1_2FA8AE0519AC7829_OFFSET UNITYSDK_OFFSET(0x686A7F0)
#define CLASS_1_1FF2A057387788FC_METHOD_1_31FB2E5020963D24_OFFSET UNITYSDK_OFFSET(0x686E290)
#define CLASS_1_1FF2A057387788FC_METHOD_1_399FF234A2DCFD27_OFFSET UNITYSDK_OFFSET(0x686AEA0)
#define CLASS_1_1FF2A057387788FC_METHOD_1_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x686C5D0)
#define CLASS_1_1FF2A057387788FC_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x686D9E0)
#define CLASS_1_1FF2A057387788FC_METHOD_1_63047C82BCB140CE_OFFSET UNITYSDK_OFFSET(0x686B6E0)
#define CLASS_1_1FF2A057387788FC_METHOD_1_79E872D90798D236_OFFSET UNITYSDK_OFFSET(0x686C650)
#define CLASS_1_1FF2A057387788FC_METHOD_1_9063ADBA10BED487_1_OFFSET UNITYSDK_OFFSET(0x686E010)
#define CLASS_1_1FF2A057387788FC_METHOD_1_9063ADBA10BED487_OFFSET UNITYSDK_OFFSET(0x686B680)
#define CLASS_1_1FF2A057387788FC_METHOD_1_97C1833A0D1E1653_OFFSET UNITYSDK_OFFSET(0x686E640)
#define CLASS_1_1FF2A057387788FC_METHOD_1_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x686E070)
#define CLASS_1_1FF2A057387788FC_METHOD_1_CED7A2E9A352C6FD_OFFSET UNITYSDK_OFFSET(0x686B930)
#define CLASS_1_1FF2A057387788FC_METHOD_1_D64FD9A228A1C4E0_1_OFFSET UNITYSDK_OFFSET(0x686CFB0)
#define CLASS_1_1FF2A057387788FC_METHOD_1_D64FD9A228A1C4E0_2_OFFSET UNITYSDK_OFFSET(0x686D040)
#define CLASS_1_1FF2A057387788FC_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x686B9E0)
#define CLASS_1_1FF2A057387788FC_METHOD_1_E6F971AFF07A371C_OFFSET UNITYSDK_OFFSET(0x686ABF0)
#define CLASS_1_1FF2A057387788FC_METHOD_1_EEB1B69326238524_OFFSET UNITYSDK_OFFSET(0x686D0D0)
#define CLASS_1_1FF2A057387788FC_METHOD_1_FA1C847FB1DF4FE5_OFFSET UNITYSDK_OFFSET(0x686BA70)
#define CLASS_1_1FF2A057387788FC_METHOD_1_FD7CD9BA92701C49_OFFSET UNITYSDK_OFFSET(0x686DA50)
#define CLASS_1_1FF2A057387788FC__CTOR_OFFSET UNITYSDK_OFFSET(0x686A350)

inline static constexpr unsigned int Class_1_1FF2A057387788FC_TypeDefinitionIndex = 74687;

class Class_1_1FF2A057387788FC : public ::System::Object
{
public:
	::MoleMole::Cameras::OverrideConfigSideScrollingCamera* Field_1_6; // 0x10
	::MoleMole::Config::ConfigSideScrollingCamera* Field_1_3; // 0x18
	::System::String* Field_1_5; // 0x20
	::MoleMole::Cameras::CameraTrackBlending* Field_1_22; // 0x28
	::MoleMole::EntityHandle Field_1_17; // 0x30
	::Class_3_AA3FB4F8297B1779* Field_1_19; // 0x40
	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* Field_1_2; // 0x48
	::MoleMole::Cameras::SideScrollingCameraRuntimeParam* Field_1_4; // 0x50
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_1FF2A057387788FC_Enum_3_33B16E3E02BB0BB4_12>* Field_1_0; // 0x58
	::MoleMole::Cameras::CameraTrackBlending* Field_1_21; // 0x60
	::Class_3_B19369CC4AB45FA4* Field_1_18; // 0x68
	::System::Boolean Field_1_1; // 0x70
	::System::Single Field_1_14; // 0x74
	::UnityEngine::Vector3 Field_1_9; // 0x78
	::UnityEngine::Vector3 Field_1_11; // 0x84
	::UnityEngine::Vector3 Field_1_10; // 0x90
	::System::Single Field_1_12; // 0x9C
	::System::Single Field_1_20; // 0xA0
	::UnityEngine::Vector3 Field_1_7; // 0xA4
	::System::Single Field_1_13; // 0xB0
	::UnityEngine::Vector3 Field_1_16; // 0xB4
	::UnityEngine::Vector3 Field_1_8; // 0xC0
	::System::Single Field_1_15; // 0xCC

	::System::Void _ctor(::MoleMole::Config::ConfigSideScrollingCamera*& a1, ::MoleMole::Cameras::SideScrollingCameraRuntimeParam*& a2, ::MoleMole::Cameras::OverrideConfigSideScrollingCamera*& a3, ::System::String*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSideScrollingCamera*&, ::MoleMole::Cameras::SideScrollingCameraRuntimeParam*&, ::MoleMole::Cameras::OverrideConfigSideScrollingCamera*&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_1FF2A057387788FC__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FF2A057387788FC_DISPOSE_OFFSET))(this);
	}

	static ::Class_1_1FF2A057387788FC* Method_1_0392750BCA51515E(::MoleMole::Config::ConfigSideScrollingCamera*& a1, ::MoleMole::Cameras::SideScrollingCameraRuntimeParam*& a2, ::MoleMole::Cameras::OverrideConfigSideScrollingCamera*& a3, ::System::String*& a4)
	{
		return ((::Class_1_1FF2A057387788FC*(*)(::MoleMole::Config::ConfigSideScrollingCamera*&, ::MoleMole::Cameras::SideScrollingCameraRuntimeParam*&, ::MoleMole::Cameras::OverrideConfigSideScrollingCamera*&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_1FF2A057387788FC_METHOD_1_0392750BCA51515E_OFFSET))(a1, a2, a3, a4);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_E6F971AFF07A371C(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_1_1FF2A057387788FC_METHOD_1_E6F971AFF07A371C_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FF2A057387788FC_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::MoleMole::Cameras::CameraTrackBlending* Method_1_9063ADBA10BED487()
	{
		return ((::MoleMole::Cameras::CameraTrackBlending*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FF2A057387788FC_METHOD_1_9063ADBA10BED487_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_63047C82BCB140CE()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FF2A057387788FC_METHOD_1_63047C82BCB140CE_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_CED7A2E9A352C6FD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FF2A057387788FC_METHOD_1_CED7A2E9A352C6FD_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FF2A057387788FC_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_FA1C847FB1DF4FE5()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FF2A057387788FC_METHOD_1_FA1C847FB1DF4FE5_OFFSET))(this);
	}

	::MoleMole::Cameras::SideScrollingCameraRuntimeParam* Method_1_21D954BC9FA238DA()
	{
		return ((::MoleMole::Cameras::SideScrollingCameraRuntimeParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FF2A057387788FC_METHOD_1_21D954BC9FA238DA_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_399FF234A2DCFD27(::System::Single a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1FF2A057387788FC_METHOD_1_399FF234A2DCFD27_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FF2A057387788FC_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_79E872D90798D236(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1FF2A057387788FC_METHOD_1_79E872D90798D236_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD7CD9BA92701C49(::PipelineCamera::CameraCommandSpawnSubModules*& a1, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_1FF2A057387788FC_METHOD_1_FD7CD9BA92701C49_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_2FA8AE0519AC7829()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FF2A057387788FC_METHOD_1_2FA8AE0519AC7829_OFFSET))(this);
	}

	::System::Void Method_1_EEB1B69326238524(::PipelineCamera::WorldBasicCameraData& a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + CLASS_1_1FF2A057387788FC_METHOD_1_EEB1B69326238524_OFFSET))(this, a1);
	}

	::MoleMole::Cameras::CameraTrackBlending* Method_1_9063ADBA10BED487_1()
	{
		return ((::MoleMole::Cameras::CameraTrackBlending*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FF2A057387788FC_METHOD_1_9063ADBA10BED487_1_OFFSET))(this);
	}

	::System::Void Method_1_19EEA5F0263FDCD2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FF2A057387788FC_METHOD_1_19EEA5F0263FDCD2_OFFSET))(this);
	}

	::System::Void Method_1_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FF2A057387788FC_METHOD_1_A1781348F0A89177_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FF2A057387788FC_METHOD_1_D64FD9A228A1C4E0_1_OFFSET))(this);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_31FB2E5020963D24()
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FF2A057387788FC_METHOD_1_31FB2E5020963D24_OFFSET))(this);
	}

	::System::Void Method_1_40E490E2772D5D75(::UnityEngine::Vector3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_1FF2A057387788FC_METHOD_1_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::MoleMole::Cameras::CameraTrackBlending* Method_1_1993758E0A987989()
	{
		return ((::MoleMole::Cameras::CameraTrackBlending*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FF2A057387788FC_METHOD_1_1993758E0A987989_OFFSET))(this);
	}

	::System::Void Method_1_97C1833A0D1E1653(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_1FF2A057387788FC_METHOD_1_97C1833A0D1E1653_OFFSET))(this, a1);
	}

	::System::Single Method_1_D64FD9A228A1C4E0_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FF2A057387788FC_METHOD_1_D64FD9A228A1C4E0_2_OFFSET))(this);
	}

	::System::Void Method_1_0122AF7BDD3F7B81(::UnityEngine::Vector3 a1, ::UnityEngine::Vector2& a2, ::System::Boolean& a3, ::System::Boolean& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector2&, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_1FF2A057387788FC_METHOD_1_0122AF7BDD3F7B81_OFFSET))(this, a1, a2, a3, a4);
	}

	::MoleMole::Cameras::CameraTrackBlending* Method_1_1993758E0A987989_1()
	{
		return ((::MoleMole::Cameras::CameraTrackBlending*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FF2A057387788FC_METHOD_1_1993758E0A987989_1_OFFSET))(this);
	}

	::System::Void Method_1_189EC257A8D53234(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_1FF2A057387788FC_METHOD_1_189EC257A8D53234_OFFSET))(this, a1);
	}
};
