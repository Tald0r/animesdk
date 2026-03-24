#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/Struct_2_6188FB36C2269853.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_9454BFF647B56E9E;
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Cameras { class TacticalCombatCameraConfig; }
namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_9454BFF647B56E9E_CLASS_1_23E7C39D980F3F5B_METHOD_1_73E4F7FDB7D52139_OFFSET UNITYSDK_OFFSET(0x6D862E0)
#define CLASS_1_9454BFF647B56E9E_CLASS_1_23E7C39D980F3F5B_METHOD_1_81DF4EE7429F06A6_OFFSET UNITYSDK_OFFSET(0x6D861A0)
#define CLASS_1_9454BFF647B56E9E_CLASS_1_23E7C39D980F3F5B_METHOD_1_EC8C647296F10E76_OFFSET UNITYSDK_OFFSET(0x6D85F20)
#define CLASS_1_9454BFF647B56E9E_CLASS_1_23E7C39D980F3F5B_METHOD_1_F52666A128F644D3_1_OFFSET UNITYSDK_OFFSET(0x6D862B0)
#define CLASS_1_9454BFF647B56E9E_CLASS_1_23E7C39D980F3F5B_METHOD_1_F52666A128F644D3_OFFSET UNITYSDK_OFFSET(0x6D86170)
#define CLASS_1_9454BFF647B56E9E_CLASS_1_23E7C39D980F3F5B__CTOR_OFFSET UNITYSDK_OFFSET(0x6D85F10)

inline static constexpr unsigned int Class_1_9454BFF647B56E9E_Class_1_23E7C39D980F3F5B_TypeDefinitionIndex = 59942;

class Class_1_9454BFF647B56E9E_Class_1_23E7C39D980F3F5B : public ::System::Object
{
public:
	::Class_1_9454BFF647B56E9E* Field_1_0; // 0x10
	::System::Func_2<::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>, ::PipelineCamera::WorldBasicCameraData>* Field_1_6; // 0x18
	::MoleMole::Cameras::TacticalCombatCameraConfig* Field_1_2; // 0x20
	::MoleMole::Cameras::CameraTrackBlending* Field_1_3; // 0x28
	::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::Struct_2_6188FB36C2269853>* Field_1_1; // 0x30
	::MoleMole::Cameras::CameraTrackBlending* Field_1_5; // 0x38
	::PipelineCamera::WorldBasicCameraDataDeltaFlag Field_1_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_CLASS_1_23E7C39D980F3F5B__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_EC8C647296F10E76(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_CLASS_1_23E7C39D980F3F5B_METHOD_1_EC8C647296F10E76_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraDataBlender* Method_1_F52666A128F644D3(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_CLASS_1_23E7C39D980F3F5B_METHOD_1_F52666A128F644D3_OFFSET))(this, a1);
	}

	::System::Void Method_1_81DF4EE7429F06A6(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_CLASS_1_23E7C39D980F3F5B_METHOD_1_81DF4EE7429F06A6_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraDataBlender* Method_1_F52666A128F644D3_1(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_CLASS_1_23E7C39D980F3F5B_METHOD_1_F52666A128F644D3_1_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_73E4F7FDB7D52139()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9454BFF647B56E9E_CLASS_1_23E7C39D980F3F5B_METHOD_1_73E4F7FDB7D52139_OFFSET))(this);
	}
};
