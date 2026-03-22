#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_207206F45DEB584F_Enum_3_33B16E3E02BB0BB4.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Cameras { class VariableCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_207206F45DEB584F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCC5AA0)
#define CLASS_1_207206F45DEB584F_METHOD_1_1790C9BB34C526E9_OFFSET UNITYSDK_OFFSET(0xA1F4BD0)
#define CLASS_1_207206F45DEB584F_METHOD_1_1C7264547F1F5FC8_OFFSET UNITYSDK_OFFSET(0xA1F5070)
#define CLASS_1_207206F45DEB584F_METHOD_1_241413AEC1C82345_OFFSET UNITYSDK_OFFSET(0xA1F4B10)
#define CLASS_1_207206F45DEB584F_METHOD_1_8E459C7754D8D898_OFFSET UNITYSDK_OFFSET(0xA1F4A30)
#define CLASS_1_207206F45DEB584F_METHOD_1_99F43F05DA5E527D_OFFSET UNITYSDK_OFFSET(0xA1F4950)
#define CLASS_1_207206F45DEB584F_METHOD_1_AAA61CC46006B288_OFFSET UNITYSDK_OFFSET(0xA1F54C0)
#define CLASS_1_207206F45DEB584F_METHOD_1_DDE5D57611799A63_OFFSET UNITYSDK_OFFSET(0xBCC5B60)
#define CLASS_1_207206F45DEB584F_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xA1F4FB0)
#define CLASS_1_207206F45DEB584F_METHOD_1_F2A039985130F220_OFFSET UNITYSDK_OFFSET(0xA1F4BE0)
#define CLASS_1_207206F45DEB584F_METHOD_1_F85925D6D9707B95_OFFSET UNITYSDK_OFFSET(0xA1F4FC0)
#define CLASS_1_207206F45DEB584F__CTOR_OFFSET UNITYSDK_OFFSET(0xBCC5930)

inline static constexpr unsigned int Class_1_207206F45DEB584F_TypeDefinitionIndex = 38284;

class Class_1_207206F45DEB584F : public ::System::Object
{
public:
	// static const ::PipelineCamera::WorldBasicCameraDataDeltaFlag Field_1_4; // 0x0
	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* Field_1_3; // 0x10
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_207206F45DEB584F_Enum_3_33B16E3E02BB0BB4>* Field_1_0; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::System::Int32 Field_1_1; // 0x24

	::System::Void _ctor(::MoleMole::Cameras::VariableCameraConfig* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::VariableCameraConfig*, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_207206F45DEB584F__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_207206F45DEB584F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_DDE5D57611799A63(::PipelineCamera::WorldBasicCameraData& a1, ::MoleMole::Cameras::CameraTrackBlending* a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_1_207206F45DEB584F_METHOD_1_DDE5D57611799A63_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_99F43F05DA5E527D(::System::Func_1<::PipelineCamera::WorldBasicCameraData>* a1, ::MoleMole::Cameras::CameraTrackBlending* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_1_207206F45DEB584F_METHOD_1_99F43F05DA5E527D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8E459C7754D8D898(::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>* a1, ::MoleMole::Cameras::CameraTrackBlending* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_1_207206F45DEB584F_METHOD_1_8E459C7754D8D898_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_241413AEC1C82345(::MoleMole::Cameras::CameraTrackBlending* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_1_207206F45DEB584F_METHOD_1_241413AEC1C82345_OFFSET))(this, a1);
	}

	::Class_1_207206F45DEB584F* Method_1_1790C9BB34C526E9(::System::Boolean a1)
	{
		return ((::Class_1_207206F45DEB584F*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_207206F45DEB584F_METHOD_1_1790C9BB34C526E9_OFFSET))(this, a1);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_F2A039985130F220(::MoleMole::Cameras::VariableCameraConfig* a1, ::System::Boolean a2)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::MoleMole::Cameras::VariableCameraConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_207206F45DEB584F_METHOD_1_F2A039985130F220_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_207206F45DEB584F_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_F85925D6D9707B95(::MoleMole::Cameras::VariableCameraConfig* a1, ::System::Boolean a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Cameras::VariableCameraConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_207206F45DEB584F_METHOD_1_F85925D6D9707B95_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1C7264547F1F5FC8(::MoleMole::Cameras::VariableCameraConfig* a1, ::System::Boolean a2, ::PipelineCamera::CameraCommandSpawnSubModules*& a3, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::VariableCameraConfig*, ::System::Boolean, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_207206F45DEB584F_METHOD_1_1C7264547F1F5FC8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_AAA61CC46006B288(::PipelineCamera::WorldBasicCameraData& a1, ::MoleMole::Cameras::CameraTrackBlending* a2)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_1_207206F45DEB584F_METHOD_1_AAA61CC46006B288_OFFSET))(this, a1, a2);
	}
};
